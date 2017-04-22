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
	{ 0x9cef51a8, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0xd66faa83, __VMLINUX_SYMBOL_STR(blk_init_queue) },
	{ 0x4b2dcc2b, __VMLINUX_SYMBOL_STR(alloc_disk) },
	{ 0xf6140fe2, __VMLINUX_SYMBOL_STR(blk_cleanup_queue) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x292db41e, __VMLINUX_SYMBOL_STR(page_address) },
	{ 0x43a53735, __VMLINUX_SYMBOL_STR(__alloc_workqueue_key) },
	{ 0x23e72f2d, __VMLINUX_SYMBOL_STR(mtd_table_mutex) },
	{ 0xb818750a, __VMLINUX_SYMBOL_STR(rq_flush_dcache_pages) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xdbe8baac, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x83011b65, __VMLINUX_SYMBOL_STR(__put_mtd_device) },
	{ 0xbb848e45, __VMLINUX_SYMBOL_STR(blk_start_queue) },
	{ 0x8ec71641, __VMLINUX_SYMBOL_STR(__get_mtd_device) },
	{ 0xb1ea493e, __VMLINUX_SYMBOL_STR(sysfs_remove_group) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0x51b652f, __VMLINUX_SYMBOL_STR(mutex_trylock) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x5a32f871, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x19d3b7d8, __VMLINUX_SYMBOL_STR(sysfs_create_group) },
	{ 0x1eb926c4, __VMLINUX_SYMBOL_STR(blk_queue_max_discard_sectors) },
	{ 0x115c2e99, __VMLINUX_SYMBOL_STR(del_gendisk) },
	{ 0xe1af415, __VMLINUX_SYMBOL_STR(register_mtd_user) },
	{ 0x562a5069, __VMLINUX_SYMBOL_STR(__mtd_next_device) },
	{ 0x1a1431fd, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irq) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xfed0a669, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x8c03d20c, __VMLINUX_SYMBOL_STR(destroy_workqueue) },
	{ 0x521445b, __VMLINUX_SYMBOL_STR(list_del) },
	{ 0x71a50dbc, __VMLINUX_SYMBOL_STR(register_blkdev) },
	{ 0x13a4beef, __VMLINUX_SYMBOL_STR(unregister_mtd_user) },
	{ 0xb5a459dc, __VMLINUX_SYMBOL_STR(unregister_blkdev) },
	{ 0x14846fbb, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0xbf4c34d6, __VMLINUX_SYMBOL_STR(put_disk) },
	{ 0x3507a132, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0xacced7c9, __VMLINUX_SYMBOL_STR(__blk_end_request_cur) },
	{ 0xdcc53f82, __VMLINUX_SYMBOL_STR(blk_fetch_request) },
	{ 0xb15fd798, __VMLINUX_SYMBOL_STR(__blk_end_request_all) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x326439b1, __VMLINUX_SYMBOL_STR(__module_get) },
	{ 0xb745a827, __VMLINUX_SYMBOL_STR(blk_queue_write_cache) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x767a75ff, __VMLINUX_SYMBOL_STR(device_add_disk) },
	{ 0xcf78e92, __VMLINUX_SYMBOL_STR(blk_queue_logical_block_size) },
	{ 0x23b0db80, __VMLINUX_SYMBOL_STR(set_disk_ro) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

