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
	{ 0xefe21d65, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0xbe2068f9, __VMLINUX_SYMBOL_STR(single_release) },
	{ 0x69e412be, __VMLINUX_SYMBOL_STR(seq_read) },
	{ 0x99062aba, __VMLINUX_SYMBOL_STR(seq_lseek) },
	{ 0xb5a459dc, __VMLINUX_SYMBOL_STR(unregister_blkdev) },
	{ 0x115c2e99, __VMLINUX_SYMBOL_STR(del_gendisk) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xf6140fe2, __VMLINUX_SYMBOL_STR(blk_cleanup_queue) },
	{ 0x767a75ff, __VMLINUX_SYMBOL_STR(device_add_disk) },
	{ 0x5a32f871, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x71a50dbc, __VMLINUX_SYMBOL_STR(register_blkdev) },
	{ 0xd086d411, __VMLINUX_SYMBOL_STR(blk_queue_max_hw_sectors) },
	{ 0x1eb926c4, __VMLINUX_SYMBOL_STR(blk_queue_max_discard_sectors) },
	{ 0xbf4c34d6, __VMLINUX_SYMBOL_STR(put_disk) },
	{ 0x6e4d862d, __VMLINUX_SYMBOL_STR(blk_mq_free_tag_set) },
	{ 0x60cdc00a, __VMLINUX_SYMBOL_STR(blk_mq_init_queue) },
	{ 0x3dcc8f63, __VMLINUX_SYMBOL_STR(blk_mq_alloc_tag_set) },
	{ 0x4b2dcc2b, __VMLINUX_SYMBOL_STR(alloc_disk) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xcd34439e, __VMLINUX_SYMBOL_STR(blk_mq_tag_to_rq) },
	{ 0x41ff06f6, __VMLINUX_SYMBOL_STR(blkdev_reread_part) },
	{ 0x58adc6ba, __VMLINUX_SYMBOL_STR(set_device_ro) },
	{ 0xf419695, __VMLINUX_SYMBOL_STR(kill_bdev) },
	{ 0xa23f1c57, __VMLINUX_SYMBOL_STR(debugfs_remove_recursive) },
	{ 0xe01615de, __VMLINUX_SYMBOL_STR(device_remove_file) },
	{ 0x9347e40, __VMLINUX_SYMBOL_STR(device_create_file) },
	{ 0x271f5d3b, __VMLINUX_SYMBOL_STR(sk_set_memalloc) },
	{ 0x342bcc54, __VMLINUX_SYMBOL_STR(debugfs_create_u32) },
	{ 0x1782f605, __VMLINUX_SYMBOL_STR(debugfs_create_u64) },
	{ 0x40f24b28, __VMLINUX_SYMBOL_STR(debugfs_create_file) },
	{ 0x5d443c09, __VMLINUX_SYMBOL_STR(debugfs_create_dir) },
	{ 0xb745a827, __VMLINUX_SYMBOL_STR(blk_queue_write_cache) },
	{ 0x5b19634d, __VMLINUX_SYMBOL_STR(div_s64_rem) },
	{ 0x1a1431fd, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irq) },
	{ 0x3507a132, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0x98714d13, __VMLINUX_SYMBOL_STR(sockfd_lookup) },
	{ 0xdf33f093, __VMLINUX_SYMBOL_STR(blk_mq_free_request) },
	{ 0x98c425b5, __VMLINUX_SYMBOL_STR(fsync_bdev) },
	{ 0xd9ba05c2, __VMLINUX_SYMBOL_STR(blk_mq_alloc_request) },
	{ 0x857b0b4c, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xc6cbbc89, __VMLINUX_SYMBOL_STR(capable) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0xbc52f688, __VMLINUX_SYMBOL_STR(blk_mq_tagset_busy_iter) },
	{ 0x1fd92d7d, __VMLINUX_SYMBOL_STR(blk_mq_request_started) },
	{ 0xcc423d26, __VMLINUX_SYMBOL_STR(set_blocksize) },
	{ 0xdbe8baac, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xfed0a669, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xc1d9d2e4, __VMLINUX_SYMBOL_STR(blk_mq_start_request) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0x33ff49a8, __VMLINUX_SYMBOL_STR(fput) },
	{ 0x4371f77a, __VMLINUX_SYMBOL_STR(kernel_sock_shutdown) },
	{ 0x5fc56a46, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0xaa7d42d1, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0xf160812d, __VMLINUX_SYMBOL_STR(blk_mq_complete_request) },
	{ 0x87eb09e3, __VMLINUX_SYMBOL_STR(seq_puts) },
	{ 0x40a9317a, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0xc7fd8e9, __VMLINUX_SYMBOL_STR(single_open) },
	{ 0x944a8362, __VMLINUX_SYMBOL_STR(kobject_uevent) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0xbcff3d85, __VMLINUX_SYMBOL_STR(kunmap) },
	{ 0x2d41e8fa, __VMLINUX_SYMBOL_STR(kmap) },
	{ 0xd843fa3f, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x752aeb9e, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x37b01fd2, __VMLINUX_SYMBOL_STR(kernel_recvmsg) },
	{ 0x1dc738c1, __VMLINUX_SYMBOL_STR(kernel_sendmsg) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

