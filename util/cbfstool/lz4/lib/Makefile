## SPDX-License-Identifier: BSD-2-Clause
# ################################################################
# LZ4 library - Makefile
# Copyright (C) Yann Collet 2011-2015
# All rights reserved.
#
# You can contact the author at :
#  - LZ4 source repository : https://github.com/Cyan4973/lz4
#  - LZ4 forum froup : https://groups.google.com/forum/#!forum/lz4c
# ################################################################

# Version numbers
VERSION?= 132
LIBVER_MAJOR:=`sed -n '/define LZ4_VERSION_MAJOR/s/.*[[:blank:]]\([0-9][0-9]*\).*/\1/p' < lz4.h`
LIBVER_MINOR:=`sed -n '/define LZ4_VERSION_MINOR/s/.*[[:blank:]]\([0-9][0-9]*\).*/\1/p' < lz4.h`
LIBVER_PATCH:=`sed -n '/define LZ4_VERSION_RELEASE/s/.*[[:blank:]]\([0-9][0-9]*\).*/\1/p' < lz4.h`
LIBVER := $(LIBVER_MAJOR).$(LIBVER_MINOR).$(LIBVER_PATCH)

DESTDIR?=
PREFIX ?= /usr/local
CPPFLAGS= -DXXH_NAMESPACE=LZ4_
CFLAGS ?= -O3
CFLAGS += -std=c99 -Wall -Wextra -Wundef -Wshadow -Wcast-align -Wcast-qual -Wstrict-prototypes -pedantic
FLAGS   = $(CPPFLAGS) $(CFLAGS) $(LDFLAGS)

LIBDIR?= $(PREFIX)/lib
INCLUDEDIR=$(PREFIX)/include


# OS X linker doesn't support -soname, and use different extension
# see : https://developer.apple.com/library/mac/documentation/DeveloperTools/Conceptual/DynamicLibraries/100-Articles/DynamicLibraryDesignGuidelines.html
ifeq ($(shell uname), Darwin)
	SHARED_EXT = dylib
	SHARED_EXT_MAJOR = $(LIBVER_MAJOR).$(SHARED_EXT)
	SHARED_EXT_VER = $(LIBVER).$(SHARED_EXT)
	SONAME_FLAGS = -install_name $(PREFIX)/lib/liblz4.$(SHARED_EXT_MAJOR) -compatibility_version $(LIBVER_MAJOR) -current_version $(LIBVER)
else
	SONAME_FLAGS = -Wl,-soname=liblz4.$(SHARED_EXT).$(LIBVER_MAJOR)
	SHARED_EXT = so
	SHARED_EXT_MAJOR = $(SHARED_EXT).$(LIBVER_MAJOR)
	SHARED_EXT_VER = $(SHARED_EXT).$(LIBVER)
endif

default: liblz4

all: liblz4

liblz4: lz4.c lz4hc.c lz4frame.c xxhash.c   # need to compile once with -fPIC, and once without -fPIC
	@echo compiling static library
	@$(AR) rcs $@.a $^
	@echo compiling dynamic library $(LIBVER)
	@$(CC) $(FLAGS) -shared $^ -fPIC $(SONAME_FLAGS) -o $@.$(SHARED_EXT_VER)
	@echo creating versioned links
	@ln -sf $@.$(SHARED_EXT_VER) $@.$(SHARED_EXT_MAJOR)
	@ln -sf $@.$(SHARED_EXT_VER) $@.$(SHARED_EXT)

clean:
	@rm -f core *.o *.a *.$(SHARED_EXT) *.$(SHARED_EXT).* liblz4.pc
	@echo Cleaning library completed


#------------------------------------------------------------------------
#make install is validated only for Linux, OSX, kFreeBSD and Hurd targets
ifneq (,$(filter $(shell uname),Linux Darwin GNU/kFreeBSD GNU))

liblz4.pc: liblz4.pc.in Makefile
	@echo creating pkgconfig
	@sed -e 's|@PREFIX@|$(PREFIX)|' \
            -e 's|@LIBDIR@|$(LIBDIR)|' \
            -e 's|@INCLUDEDIR@|$(INCLUDEDIR)|' \
            -e 's|@VERSION@|$(VERSION)|' \
             $< >$@

install: liblz4 liblz4.pc
	@install -d -m 755 $(DESTDIR)$(LIBDIR)/pkgconfig/ $(DESTDIR)$(INCLUDEDIR)/
	@install -m 755 liblz4.$(SHARED_EXT_VER) $(DESTDIR)$(LIBDIR)
	@ln -sf liblz4.$(SHARED_EXT_VER) $(DESTDIR)$(LIBDIR)/liblz4.$(SHARED_EXT_MAJOR)
	@ln -sf liblz4.$(SHARED_EXT_VER) $(DESTDIR)$(LIBDIR)/liblz4.$(SHARED_EXT)
	@install -m 644 liblz4.pc $(DESTDIR)$(LIBDIR)/pkgconfig/
	@install -m 644 liblz4.a $(DESTDIR)$(LIBDIR)/liblz4.a
	@install -m 644 lz4.h $(DESTDIR)$(INCLUDEDIR)/lz4.h
	@install -m 644 lz4hc.h $(DESTDIR)$(INCLUDEDIR)/lz4hc.h
	@install -m 644 lz4frame.h $(DESTDIR)$(INCLUDEDIR)/lz4frame.h
	@echo lz4 static and shared libraries installed

uninstall:
	@rm -f $(DESTDIR)$(LIBDIR)/liblz4.$(SHARED_EXT)
	@rm -f $(DESTDIR)$(LIBDIR)/liblz4.$(SHARED_EXT_MAJOR)
	@rm -f $(DESTDIR)$(LIBDIR)/pkgconfig/liblz4.pc
	@[ -x $(DESTDIR)$(LIBDIR)/liblz4.$(SHARED_EXT_VER) ] && rm -f $(DESTDIR)$(LIBDIR)/liblz4.$(SHARED_EXT_VER)
	@[ -f $(DESTDIR)$(LIBDIR)/liblz4.a ] && rm -f $(DESTDIR)$(LIBDIR)/liblz4.a
	@[ -f $(DESTDIR)$(INCLUDEDIR)/lz4.h ] && rm -f $(DESTDIR)$(INCLUDEDIR)/lz4.h
	@[ -f $(DESTDIR)$(INCLUDEDIR)/lz4hc.h ] && rm -f $(DESTDIR)$(INCLUDEDIR)/lz4hc.h
	@[ -f $(DESTDIR)$(INCLUDEDIR)/lz4frame.h ] && rm -f $(DESTDIR)$(INCLUDEDIR)/lz4frame.h
	@echo lz4 libraries successfully uninstalled

endif
