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
	{ 0x76d817, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x1cd1a26f, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0x95ae17c6, __VMLINUX_SYMBOL_STR(sdev_prefix_printk) },
	{ 0x71d463ea, __VMLINUX_SYMBOL_STR(usb_unlink_urb) },
	{ 0x1bc3edc2, __VMLINUX_SYMBOL_STR(usb_stor_sense_invalidCDB) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x7b94e95a, __VMLINUX_SYMBOL_STR(scsi_cmd_get_serial) },
	{ 0x3b3556e6, __VMLINUX_SYMBOL_STR(usb_unanchor_urb) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x82701365, __VMLINUX_SYMBOL_STR(int_to_scsilun) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xcaa1a2be, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x7b8c3a36, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xc4ad22c6, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0xae48b57b, __VMLINUX_SYMBOL_STR(usb_anchor_urb) },
	{ 0x55da3d4e, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
	{ 0x288bd629, __VMLINUX_SYMBOL_STR(blk_queue_max_hw_sectors) },
	{ 0x1d51fec4, __VMLINUX_SYMBOL_STR(blk_queue_update_dma_alignment) },
	{ 0x25622303, __VMLINUX_SYMBOL_STR(scsi_scan_host) },
	{ 0x2f0664db, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x5fe8cd77, __VMLINUX_SYMBOL_STR(scsi_add_host_with_dma) },
	{ 0x63b87fc5, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x4d11b986, __VMLINUX_SYMBOL_STR(scsi_host_alloc) },
	{ 0xdd0ac828, __VMLINUX_SYMBOL_STR(usb_stor_adjust_quirks) },
	{ 0xfbd9716b, __VMLINUX_SYMBOL_STR(usb_get_urb) },
	{ 0x16b7c05d, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0x62b72b0d, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x16041f83, __VMLINUX_SYMBOL_STR(usb_lock_device_for_reset) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xa2b43768, __VMLINUX_SYMBOL_STR(scsi_change_queue_depth) },
	{ 0xbb152ef3, __VMLINUX_SYMBOL_STR(scsi_is_host_device) },
	{ 0xef1e4705, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x3aa5d21, __VMLINUX_SYMBOL_STR(scsi_host_put) },
	{ 0x5481567a, __VMLINUX_SYMBOL_STR(scsi_remove_host) },
	{ 0x3da6f9d3, __VMLINUX_SYMBOL_STR(usb_kill_anchored_urbs) },
	{ 0x4205ad24, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x900f303a, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0xbd5bb47, __VMLINUX_SYMBOL_STR(scsi_print_command) },
	{ 0x2f7e2e14, __VMLINUX_SYMBOL_STR(scmd_printk) },
	{ 0x30fad32e, __VMLINUX_SYMBOL_STR(scsi_block_requests) },
	{ 0x99c4fed9, __VMLINUX_SYMBOL_STR(usb_wait_anchor_empty_timeout) },
	{ 0x92b57248, __VMLINUX_SYMBOL_STR(flush_work) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x43b0c9c3, __VMLINUX_SYMBOL_STR(preempt_schedule) },
	{ 0xd8bdde0b, __VMLINUX_SYMBOL_STR(dev_printk) },
	{ 0x9c65e0c0, __VMLINUX_SYMBOL_STR(scsi_unblock_requests) },
	{ 0x706c5a65, __VMLINUX_SYMBOL_STR(preempt_count_sub) },
	{ 0x7275a0e2, __VMLINUX_SYMBOL_STR(scsi_report_bus_reset) },
	{ 0xf229424a, __VMLINUX_SYMBOL_STR(preempt_count_add) },
	{ 0x86adc268, __VMLINUX_SYMBOL_STR(usb_alloc_streams) },
	{ 0x8881268b, __VMLINUX_SYMBOL_STR(usb_reset_device) },
	{ 0xfea687c8, __VMLINUX_SYMBOL_STR(usb_set_interface) },
	{ 0x662198b2, __VMLINUX_SYMBOL_STR(system_state) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x22680f93, __VMLINUX_SYMBOL_STR(usb_free_streams) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v0984p0301d0128dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BC2p2312d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BC2p3312d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BC2p331Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BC2p3320d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BC2pA003d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BC2pA013d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BC2pA0A4d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BC2pAB20d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BC2pAB21d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BC2pAB2Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13FDp3940d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v152Dp0539d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v152Dp0567d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2109p0711d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v357Dp7788d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v4971p1012d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v4971p8017d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic08isc06ip50in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic08isc06ip62in*");
