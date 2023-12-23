#!/bin/bash

objdump -D -b binary -mi386 -Maddr32,data32 -Matt --start-address $1 hello.elf | head -n 20
