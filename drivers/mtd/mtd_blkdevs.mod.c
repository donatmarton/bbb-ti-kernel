#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
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
	{ 0xee0443a7, __VMLINUX_SYMBOL_STR(blk_init_queue) },
	{ 0x550fdba2, __VMLINUX_SYMBOL_STR(alloc_disk) },
	{ 0x8dc00423, __VMLINUX_SYMBOL_STR(blk_cleanup_queue) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x89cf4c4a, __VMLINUX_SYMBOL_STR(page_address) },
	{ 0x43a53735, __VMLINUX_SYMBOL_STR(__alloc_workqueue_key) },
	{ 0x995b38b2, __VMLINUX_SYMBOL_STR(mtd_table_mutex) },
	{ 0x4ff4d2c9, __VMLINUX_SYMBOL_STR(rq_flush_dcache_pages) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x62b72b0d, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xb638bf86, __VMLINUX_SYMBOL_STR(__put_mtd_device) },
	{ 0xaf0f167f, __VMLINUX_SYMBOL_STR(blk_queue_flush) },
	{ 0x188d5fd9, __VMLINUX_SYMBOL_STR(blk_start_queue) },
	{ 0x311a3966, __VMLINUX_SYMBOL_STR(__get_mtd_device) },
	{ 0x906099bd, __VMLINUX_SYMBOL_STR(sysfs_remove_group) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0xbf1faebe, __VMLINUX_SYMBOL_STR(mutex_trylock) },
	{ 0x706c5a65, __VMLINUX_SYMBOL_STR(preempt_count_sub) },
	{ 0xdc798d37, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x8f7a5832, __VMLINUX_SYMBOL_STR(sysfs_create_group) },
	{ 0xcf08c24, __VMLINUX_SYMBOL_STR(blk_queue_max_discard_sectors) },
	{ 0x251b483d, __VMLINUX_SYMBOL_STR(del_gendisk) },
	{ 0xe079f173, __VMLINUX_SYMBOL_STR(register_mtd_user) },
	{ 0xf7cf3133, __VMLINUX_SYMBOL_STR(__mtd_next_device) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xe16b893b, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x8c03d20c, __VMLINUX_SYMBOL_STR(destroy_workqueue) },
	{ 0x521445b, __VMLINUX_SYMBOL_STR(list_del) },
	{ 0x71a50dbc, __VMLINUX_SYMBOL_STR(register_blkdev) },
	{ 0x5559dda0, __VMLINUX_SYMBOL_STR(unregister_mtd_user) },
	{ 0x43b0c9c3, __VMLINUX_SYMBOL_STR(preempt_schedule) },
	{ 0xb5a459dc, __VMLINUX_SYMBOL_STR(unregister_blkdev) },
	{ 0x2d9b9ea6, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0xdb6afd09, __VMLINUX_SYMBOL_STR(put_disk) },
	{ 0x25499f29, __VMLINUX_SYMBOL_STR(__blk_end_request_cur) },
	{ 0x2c158f66, __VMLINUX_SYMBOL_STR(blk_fetch_request) },
	{ 0xd2df4266, __VMLINUX_SYMBOL_STR(__blk_end_request_all) },
	{ 0xd74f9f2e, __VMLINUX_SYMBOL_STR(__module_get) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x6a3868ff, __VMLINUX_SYMBOL_STR(add_disk) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xf229424a, __VMLINUX_SYMBOL_STR(preempt_count_add) },
	{ 0x8800bc09, __VMLINUX_SYMBOL_STR(blk_queue_logical_block_size) },
	{ 0xb68c967f, __VMLINUX_SYMBOL_STR(set_disk_ro) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

