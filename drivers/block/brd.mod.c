#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x2c197ea3, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x7e42e836, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x3a9b6fb9, __VMLINUX_SYMBOL_STR(blk_unregister_region) },
	{ 0x251b483d, __VMLINUX_SYMBOL_STR(del_gendisk) },
	{ 0xb5a459dc, __VMLINUX_SYMBOL_STR(unregister_blkdev) },
	{ 0x521445b, __VMLINUX_SYMBOL_STR(list_del) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x3d85a60d, __VMLINUX_SYMBOL_STR(blk_register_region) },
	{ 0x71a50dbc, __VMLINUX_SYMBOL_STR(register_blkdev) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0xad14fc55, __VMLINUX_SYMBOL_STR(bio_endio) },
	{ 0x27b50837, __VMLINUX_SYMBOL_STR(page_endio) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xed93f29e, __VMLINUX_SYMBOL_STR(__kunmap_atomic) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xb9a1aebe, __VMLINUX_SYMBOL_STR(flush_dcache_page) },
	{ 0xd1a5deac, __VMLINUX_SYMBOL_STR(kmap_atomic) },
	{ 0x6ae0f10b, __VMLINUX_SYMBOL_STR(contig_page_data) },
	{ 0x43b0c9c3, __VMLINUX_SYMBOL_STR(preempt_schedule) },
	{ 0x3dd8aa5e, __VMLINUX_SYMBOL_STR(radix_tree_preload_end) },
	{ 0x706c5a65, __VMLINUX_SYMBOL_STR(preempt_count_sub) },
	{ 0x6e6514ed, __VMLINUX_SYMBOL_STR(radix_tree_insert) },
	{ 0xf229424a, __VMLINUX_SYMBOL_STR(preempt_count_add) },
	{ 0x9754ec10, __VMLINUX_SYMBOL_STR(radix_tree_preload) },
	{ 0x492621b9, __VMLINUX_SYMBOL_STR(__alloc_pages_nodemask) },
	{ 0x2469810f, __VMLINUX_SYMBOL_STR(__rcu_read_unlock) },
	{ 0xae85a27e, __VMLINUX_SYMBOL_STR(radix_tree_lookup) },
	{ 0x8d522714, __VMLINUX_SYMBOL_STR(__rcu_read_lock) },
	{ 0xdb6afd09, __VMLINUX_SYMBOL_STR(put_disk) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0x6a3868ff, __VMLINUX_SYMBOL_STR(add_disk) },
	{ 0xe20d115b, __VMLINUX_SYMBOL_STR(get_disk) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x8dc00423, __VMLINUX_SYMBOL_STR(blk_cleanup_queue) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x550fdba2, __VMLINUX_SYMBOL_STR(alloc_disk) },
	{ 0xcf08c24, __VMLINUX_SYMBOL_STR(blk_queue_max_discard_sectors) },
	{ 0x630da999, __VMLINUX_SYMBOL_STR(blk_queue_physical_block_size) },
	{ 0x7620ef27, __VMLINUX_SYMBOL_STR(blk_queue_bounce_limit) },
	{ 0x288bd629, __VMLINUX_SYMBOL_STR(blk_queue_max_hw_sectors) },
	{ 0x5a6ba175, __VMLINUX_SYMBOL_STR(blk_queue_make_request) },
	{ 0x145fa4fa, __VMLINUX_SYMBOL_STR(blk_alloc_queue) },
	{ 0xcaa1a2be, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x7b8c3a36, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xde96e99, __VMLINUX_SYMBOL_STR(kill_bdev) },
	{ 0x62b72b0d, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xe16b893b, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x6be960f4, __VMLINUX_SYMBOL_STR(__free_pages) },
	{ 0x1683a50b, __VMLINUX_SYMBOL_STR(radix_tree_delete) },
	{ 0x5fd268cb, __VMLINUX_SYMBOL_STR(radix_tree_gang_lookup) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

