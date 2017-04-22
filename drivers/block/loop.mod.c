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
	{ 0x9cef51a8, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0xf6789fdc, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x4b2dcc2b, __VMLINUX_SYMBOL_STR(alloc_disk) },
	{ 0xff178f6, __VMLINUX_SYMBOL_STR(__aeabi_idivmod) },
	{ 0xf6140fe2, __VMLINUX_SYMBOL_STR(blk_cleanup_queue) },
	{ 0xefe21d65, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x3a9b6fb9, __VMLINUX_SYMBOL_STR(blk_unregister_region) },
	{ 0xc1d9d2e4, __VMLINUX_SYMBOL_STR(blk_mq_start_request) },
	{ 0xd5d622c0, __VMLINUX_SYMBOL_STR(blk_mq_unfreeze_queue) },
	{ 0x944a8362, __VMLINUX_SYMBOL_STR(kobject_uevent) },
	{ 0xe3990434, __VMLINUX_SYMBOL_STR(file_path) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x28cc25db, __VMLINUX_SYMBOL_STR(arm_copy_from_user) },
	{ 0xdbe8baac, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xc7aba511, __VMLINUX_SYMBOL_STR(vfs_fsync) },
	{ 0x7072a7c1, __VMLINUX_SYMBOL_STR(bio_advance) },
	{ 0x459302e2, __VMLINUX_SYMBOL_STR(blk_mq_freeze_queue) },
	{ 0xf160812d, __VMLINUX_SYMBOL_STR(blk_mq_complete_request) },
	{ 0xa192813b, __VMLINUX_SYMBOL_STR(idr_for_each) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xb1ea493e, __VMLINUX_SYMBOL_STR(sysfs_remove_group) },
	{ 0xddfee4dd, __VMLINUX_SYMBOL_STR(__alloc_pages_nodemask) },
	{ 0x9417a8d5, __VMLINUX_SYMBOL_STR(kthread_create_on_node) },
	{ 0x9dacce23, __VMLINUX_SYMBOL_STR(nonseekable_open) },
	{ 0xf4fa543b, __VMLINUX_SYMBOL_STR(arm_copy_to_user) },
	{ 0x2b5d1e7e, __VMLINUX_SYMBOL_STR(invalidate_bdev) },
	{ 0x60cdc00a, __VMLINUX_SYMBOL_STR(blk_mq_init_queue) },
	{ 0x49163ab3, __VMLINUX_SYMBOL_STR(kmap_atomic) },
	{ 0x72081300, __VMLINUX_SYMBOL_STR(vfs_iter_write) },
	{ 0x20a6fc5b, __VMLINUX_SYMBOL_STR(misc_register) },
	{ 0x711731f2, __VMLINUX_SYMBOL_STR(iov_iter_bvec) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x58adc6ba, __VMLINUX_SYMBOL_STR(set_device_ro) },
	{ 0xff8cbb1f, __VMLINUX_SYMBOL_STR(idr_destroy) },
	{ 0x5a32f871, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x686f8a1a, __VMLINUX_SYMBOL_STR(kthread_stop) },
	{ 0x19d3b7d8, __VMLINUX_SYMBOL_STR(sysfs_create_group) },
	{ 0x1eb926c4, __VMLINUX_SYMBOL_STR(blk_queue_max_discard_sectors) },
	{ 0x115c2e99, __VMLINUX_SYMBOL_STR(del_gendisk) },
	{ 0x6e4d862d, __VMLINUX_SYMBOL_STR(blk_mq_free_tag_set) },
	{ 0x87b9739b, __VMLINUX_SYMBOL_STR(__kthread_init_worker) },
	{ 0x1a1431fd, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irq) },
	{ 0x6f099344, __VMLINUX_SYMBOL_STR(blk_register_region) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xfed0a669, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xed93f29e, __VMLINUX_SYMBOL_STR(__kunmap_atomic) },
	{ 0x71a50dbc, __VMLINUX_SYMBOL_STR(register_blkdev) },
	{ 0xd9e5aeb6, __VMLINUX_SYMBOL_STR(noop_llseek) },
	{ 0xbfbcddf8, __VMLINUX_SYMBOL_STR(idr_alloc) },
	{ 0x955b0e2e, __VMLINUX_SYMBOL_STR(kthread_worker_fn) },
	{ 0x33ff49a8, __VMLINUX_SYMBOL_STR(fput) },
	{ 0x614d1135, __VMLINUX_SYMBOL_STR(get_disk) },
	{ 0xf69ee7fe, __VMLINUX_SYMBOL_STR(contig_page_data) },
	{ 0x32907b91, __VMLINUX_SYMBOL_STR(idr_remove) },
	{ 0xb5a459dc, __VMLINUX_SYMBOL_STR(unregister_blkdev) },
	{ 0x14846fbb, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0xc6cbbc89, __VMLINUX_SYMBOL_STR(capable) },
	{ 0x9f9d0265, __VMLINUX_SYMBOL_STR(__free_pages) },
	{ 0xb5684e29, __VMLINUX_SYMBOL_STR(idr_find_slowpath) },
	{ 0xbbf7393d, __VMLINUX_SYMBOL_STR(bd_set_size) },
	{ 0x86e2f02e, __VMLINUX_SYMBOL_STR(kthread_queue_work) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xba8bb333, __VMLINUX_SYMBOL_STR(___ratelimit) },
	{ 0x9fc75dac, __VMLINUX_SYMBOL_STR(vfs_iter_read) },
	{ 0xbf4c34d6, __VMLINUX_SYMBOL_STR(put_disk) },
	{ 0x3507a132, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0x34bffdab, __VMLINUX_SYMBOL_STR(bdgrab) },
	{ 0x82178996, __VMLINUX_SYMBOL_STR(wake_up_process) },
	{ 0x3dcc8f63, __VMLINUX_SYMBOL_STR(blk_mq_alloc_tag_set) },
	{ 0x147fb690, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x326439b1, __VMLINUX_SYMBOL_STR(__module_get) },
	{ 0x41ff06f6, __VMLINUX_SYMBOL_STR(blkdev_reread_part) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0xb745a827, __VMLINUX_SYMBOL_STR(blk_queue_write_cache) },
	{ 0x98d0a77e, __VMLINUX_SYMBOL_STR(__blkdev_reread_part) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x7c225c6d, __VMLINUX_SYMBOL_STR(__sb_end_write) },
	{ 0xbc73edc5, __VMLINUX_SYMBOL_STR(set_user_nice) },
	{ 0xa4449a1, __VMLINUX_SYMBOL_STR(fget) },
	{ 0x268d9585, __VMLINUX_SYMBOL_STR(__sb_start_write) },
	{ 0x5c8407af, __VMLINUX_SYMBOL_STR(kthread_flush_worker) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x767a75ff, __VMLINUX_SYMBOL_STR(device_add_disk) },
	{ 0x99bb8806, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0xcc423d26, __VMLINUX_SYMBOL_STR(set_blocksize) },
	{ 0x4abab322, __VMLINUX_SYMBOL_STR(zero_fill_bio) },
	{ 0x8761183a, __VMLINUX_SYMBOL_STR(vfs_getattr) },
	{ 0xc163e689, __VMLINUX_SYMBOL_STR(misc_deregister) },
	{ 0xa2b2d02, __VMLINUX_SYMBOL_STR(bdput) },
	{ 0xe9785bb8, __VMLINUX_SYMBOL_STR(flush_dcache_page) },
	{ 0xb8e4fba7, __VMLINUX_SYMBOL_STR(try_module_get) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

