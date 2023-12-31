/* SPDX-License-Identifier: GPL-2.0-only */

#include <cbmem.h>
#include <stage_cache.h>
#include <string.h>
#include <console/console.h>

/* Stage cache uses cbmem. */
void stage_cache_add(int stage_id, const struct prog *stage)
{
	struct stage_cache *meta;
	void *c;

	meta = cbmem_add(CBMEM_ID_STAGEx_META + stage_id, sizeof(*meta));
	if (meta == NULL) {
		printk(BIOS_ERR, "Can't add %x metadata to cbmem\n",
				CBMEM_ID_STAGEx_META + stage_id);
		return;
	}
	meta->load_addr = (uintptr_t)prog_start(stage);
	meta->entry_addr = (uintptr_t)prog_entry(stage);
	meta->arg = (uintptr_t)prog_entry_arg(stage);

	unsigned int p_size = prog_size(stage);
	if (stage_id == STAGE_RAMSTAGE) {
		/* heap resides at the end of the image and will be
		   reinitialized, so it doesn't make sense to copy it around. */
		p_size -= CONFIG_HEAP_SIZE;
	}

	c = cbmem_add(CBMEM_ID_STAGEx_CACHE + stage_id, p_size);
	if (c == NULL) {
		printk(BIOS_ERR, "Can't add stage_cache %x to cbmem\n",
				CBMEM_ID_STAGEx_CACHE + stage_id);
		return;
	}

	memcpy(c, prog_start(stage), p_size);
}

void stage_cache_add_raw(int stage_id, const void *base, const size_t size)
{
	void *c;

	c = cbmem_add(CBMEM_ID_STAGEx_RAW + stage_id, size);
	if (c == NULL) {
		printk(BIOS_DEBUG, "Error: Can't add %x raw data to cbmem\n",
				CBMEM_ID_STAGEx_RAW + stage_id);
		return;
	}

	memcpy(c, base, size);
}

void stage_cache_get_raw(int stage_id, void **base, size_t *size)
{
	const struct cbmem_entry *e;

	e = cbmem_entry_find(CBMEM_ID_STAGEx_RAW + stage_id);
	if (e == NULL) {
		printk(BIOS_ERR, "Can't find raw %x data in cbmem\n",
				CBMEM_ID_STAGEx_RAW + stage_id);
		return;
	}

	*base = cbmem_entry_start(e);
	*size = cbmem_entry_size(e);
}

void stage_cache_load_stage(int stage_id, struct prog *stage)
{
	struct stage_cache *meta;
	const struct cbmem_entry *e;
	void *c;
	size_t size;
	void *load_addr;

	prog_set_entry(stage, NULL, NULL);

	meta = cbmem_find(CBMEM_ID_STAGEx_META + stage_id);
	if (meta == NULL) {
		printk(BIOS_ERR, "Can't find %x metadata in cbmem\n",
				CBMEM_ID_STAGEx_META + stage_id);
		return;
	}

	e = cbmem_entry_find(CBMEM_ID_STAGEx_CACHE + stage_id);

	if (e == NULL) {
		printk(BIOS_ERR, "Can't find stage_cache %x in cbmem\n",
				CBMEM_ID_STAGEx_CACHE + stage_id);
		return;
	}

	c = cbmem_entry_start(e);
	size = cbmem_entry_size(e);
	load_addr = (void *)(uintptr_t)meta->load_addr;

	memcpy(load_addr, c, size);

	prog_set_area(stage, load_addr, size);
	prog_set_entry(stage, (void *)(uintptr_t)meta->entry_addr,
			(void *)(uintptr_t)meta->arg);
}
