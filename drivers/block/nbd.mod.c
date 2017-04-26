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
	{ 0x56878201, __VMLINUX_SYMBOL_STR(single_release) },
	{ 0x2fefcfbf, __VMLINUX_SYMBOL_STR(seq_read) },
	{ 0x963de423, __VMLINUX_SYMBOL_STR(seq_lseek) },
	{ 0xb5a459dc, __VMLINUX_SYMBOL_STR(unregister_blkdev) },
	{ 0x251b483d, __VMLINUX_SYMBOL_STR(del_gendisk) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x8dc00423, __VMLINUX_SYMBOL_STR(blk_cleanup_queue) },
	{ 0x6a3868ff, __VMLINUX_SYMBOL_STR(add_disk) },
	{ 0x63b87fc5, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x9580deb, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0xdc798d37, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x288bd629, __VMLINUX_SYMBOL_STR(blk_queue_max_hw_sectors) },
	{ 0xcf08c24, __VMLINUX_SYMBOL_STR(blk_queue_max_discard_sectors) },
	{ 0x71a50dbc, __VMLINUX_SYMBOL_STR(register_blkdev) },
	{ 0xdb6afd09, __VMLINUX_SYMBOL_STR(put_disk) },
	{ 0xee0443a7, __VMLINUX_SYMBOL_STR(blk_init_queue) },
	{ 0x550fdba2, __VMLINUX_SYMBOL_STR(alloc_disk) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xc6cbbc89, __VMLINUX_SYMBOL_STR(capable) },
	{ 0x2fd85baf, __VMLINUX_SYMBOL_STR(___ratelimit) },
	{ 0x2c158f66, __VMLINUX_SYMBOL_STR(blk_fetch_request) },
	{ 0x3848ac64, __VMLINUX_SYMBOL_STR(force_sig) },
	{ 0xa88ba6f2, __VMLINUX_SYMBOL_STR(sockfd_lookup) },
	{ 0xef4930e4, __VMLINUX_SYMBOL_STR(blkdev_reread_part) },
	{ 0x394fd24c, __VMLINUX_SYMBOL_STR(fput) },
	{ 0x15f29fab, __VMLINUX_SYMBOL_STR(set_device_ro) },
	{ 0xde96e99, __VMLINUX_SYMBOL_STR(kill_bdev) },
	{ 0xaf0d0b73, __VMLINUX_SYMBOL_STR(kthread_stop) },
	{ 0x2eada87e, __VMLINUX_SYMBOL_STR(debugfs_remove_recursive) },
	{ 0x33a58f4c, __VMLINUX_SYMBOL_STR(debugfs_create_u32) },
	{ 0x100cb51d, __VMLINUX_SYMBOL_STR(debugfs_create_u64) },
	{ 0x9590237e, __VMLINUX_SYMBOL_STR(debugfs_create_file) },
	{ 0x8cdce33c, __VMLINUX_SYMBOL_STR(debugfs_create_dir) },
	{ 0xd65172e, __VMLINUX_SYMBOL_STR(wake_up_process) },
	{ 0xe564cc94, __VMLINUX_SYMBOL_STR(kthread_create_on_node) },
	{ 0xaf0f167f, __VMLINUX_SYMBOL_STR(blk_queue_flush) },
	{ 0xb2af8d51, __VMLINUX_SYMBOL_STR(blk_rq_init) },
	{ 0xe8fc3c51, __VMLINUX_SYMBOL_STR(fsync_bdev) },
	{ 0x6b21f7f, __VMLINUX_SYMBOL_STR(set_blocksize) },
	{ 0xc9e4f0cb, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x930284be, __VMLINUX_SYMBOL_STR(device_remove_file) },
	{ 0xb65a5213, __VMLINUX_SYMBOL_STR(device_create_file) },
	{ 0x87f12024, __VMLINUX_SYMBOL_STR(sk_set_memalloc) },
	{ 0x5f0d19, __VMLINUX_SYMBOL_STR(dequeue_signal) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0x8893fa5d, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x158f2f00, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0xb9e52429, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x62b72b0d, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xe16b893b, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xb3f7646e, __VMLINUX_SYMBOL_STR(kthread_should_stop) },
	{ 0x9fdc6284, __VMLINUX_SYMBOL_STR(set_user_nice) },
	{ 0x6c09c2a4, __VMLINUX_SYMBOL_STR(del_timer) },
	{ 0x92f19c62, __VMLINUX_SYMBOL_STR(kernel_sock_shutdown) },
	{ 0x2f0664db, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x95db5ba0, __VMLINUX_SYMBOL_STR(seq_puts) },
	{ 0xe6657df, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0xf4cf9543, __VMLINUX_SYMBOL_STR(single_open) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0x82bf6794, __VMLINUX_SYMBOL_STR(kunmap) },
	{ 0xd50d26aa, __VMLINUX_SYMBOL_STR(kmap) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xef1e4705, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x16e5c2a, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x2414fc7d, __VMLINUX_SYMBOL_STR(kernel_recvmsg) },
	{ 0x4805e22, __VMLINUX_SYMBOL_STR(kernel_sendmsg) },
	{ 0x4d3c153f, __VMLINUX_SYMBOL_STR(sigprocmask) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x65e75cb6, __VMLINUX_SYMBOL_STR(__list_del_entry) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x43b0c9c3, __VMLINUX_SYMBOL_STR(preempt_schedule) },
	{ 0xc7da6011, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x706c5a65, __VMLINUX_SYMBOL_STR(preempt_count_sub) },
	{ 0xd2df4266, __VMLINUX_SYMBOL_STR(__blk_end_request_all) },
	{ 0xf229424a, __VMLINUX_SYMBOL_STR(preempt_count_add) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

