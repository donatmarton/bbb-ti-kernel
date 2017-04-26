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
	{ 0xa57b02d8, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x33af8021, __VMLINUX_SYMBOL_STR(dm_unregister_target) },
	{ 0x54ca458c, __VMLINUX_SYMBOL_STR(dm_register_target) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x521445b, __VMLINUX_SYMBOL_STR(list_del) },
	{ 0x4d265394, __VMLINUX_SYMBOL_STR(put_page) },
	{ 0x40913bf, __VMLINUX_SYMBOL_STR(md_error) },
	{ 0xb1425b32, __VMLINUX_SYMBOL_STR(dm_table_add_target_callbacks) },
	{  0xde775, __VMLINUX_SYMBOL_STR(mddev_unlock) },
	{ 0x4de43d9f, __VMLINUX_SYMBOL_STR(md_run) },
	{ 0xe16b893b, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x43b0c9c3, __VMLINUX_SYMBOL_STR(preempt_schedule) },
	{ 0x8d825fa4, __VMLINUX_SYMBOL_STR(raid5_set_cache_size) },
	{ 0x706c5a65, __VMLINUX_SYMBOL_STR(preempt_count_sub) },
	{ 0xf229424a, __VMLINUX_SYMBOL_STR(preempt_count_add) },
	{ 0x6ae0f10b, __VMLINUX_SYMBOL_STR(contig_page_data) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0x492621b9, __VMLINUX_SYMBOL_STR(__alloc_pages_nodemask) },
	{ 0xc1ccfa7a, __VMLINUX_SYMBOL_STR(dm_get_device) },
	{ 0x6d0f1f89, __VMLINUX_SYMBOL_STR(dm_table_get_mode) },
	{ 0x59e5070d, __VMLINUX_SYMBOL_STR(__do_div64) },
	{ 0xd9e4d32b, __VMLINUX_SYMBOL_STR(dm_set_target_max_io_len) },
	{ 0x29420b83, __VMLINUX_SYMBOL_STR(md_rdev_init) },
	{ 0x2d342c46, __VMLINUX_SYMBOL_STR(mddev_init) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x996bdb64, __VMLINUX_SYMBOL_STR(_kstrtoul) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xad84bef8, __VMLINUX_SYMBOL_STR(dm_table_event) },
	{ 0xe385a357, __VMLINUX_SYMBOL_STR(mddev_congested) },
	{ 0x49b43ade, __VMLINUX_SYMBOL_STR(md_stop) },
	{ 0x65e75cb6, __VMLINUX_SYMBOL_STR(__list_del_entry) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xa2e9a27a, __VMLINUX_SYMBOL_STR(md_rdev_clear) },
	{ 0x63ba3cc2, __VMLINUX_SYMBOL_STR(dm_put_device) },
	{ 0x817382e7, __VMLINUX_SYMBOL_STR(md_stop_writes) },
	{ 0xac7872c8, __VMLINUX_SYMBOL_STR(mddev_suspend) },
	{ 0x5447a0b, __VMLINUX_SYMBOL_STR(mddev_resume) },
	{ 0x203d7188, __VMLINUX_SYMBOL_STR(bitmap_load) },
	{ 0x89cf4c4a, __VMLINUX_SYMBOL_STR(page_address) },
	{ 0x1c589c9b, __VMLINUX_SYMBOL_STR(sync_page_io) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0xf9e73082, __VMLINUX_SYMBOL_STR(scnprintf) },
	{ 0x74c134b9, __VMLINUX_SYMBOL_STR(__sw_hweight32) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x5bac3eb6, __VMLINUX_SYMBOL_STR(md_reap_sync_thread) },
	{ 0x2d4e4ffd, __VMLINUX_SYMBOL_STR(md_wakeup_thread) },
	{ 0xaafdc258, __VMLINUX_SYMBOL_STR(strcasecmp) },
	{ 0x8e74e192, __VMLINUX_SYMBOL_STR(blk_limits_io_opt) },
	{ 0xe3baeb78, __VMLINUX_SYMBOL_STR(blk_limits_io_min) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=dm-mod,md-mod,raid456";

