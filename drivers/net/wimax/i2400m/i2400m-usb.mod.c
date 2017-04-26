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
	{ 0xd058949f, __VMLINUX_SYMBOL_STR(i2400m_cmd_enter_powersave) },
	{ 0x7b8c3a36, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x32d07864, __VMLINUX_SYMBOL_STR(i2400m_dev_reset_handle) },
	{ 0x8cdce33c, __VMLINUX_SYMBOL_STR(debugfs_create_dir) },
	{ 0x349cba85, __VMLINUX_SYMBOL_STR(strchr) },
	{ 0x666fb705, __VMLINUX_SYMBOL_STR(debugfs_create_u8) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x857fdb6b, __VMLINUX_SYMBOL_STR(usb_init_urb) },
	{ 0x16b7c05d, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0x89fe777c, __VMLINUX_SYMBOL_STR(i2400m_tx_msg_get) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x5e63dba1, __VMLINUX_SYMBOL_STR(i2400m_rx) },
	{ 0x3c117aa, __VMLINUX_SYMBOL_STR(usb_autopm_get_interface) },
	{ 0x85df9b6c, __VMLINUX_SYMBOL_STR(strsep) },
	{ 0xf2a10de1, __VMLINUX_SYMBOL_STR(usb_enable_autosuspend) },
	{ 0xfbd9716b, __VMLINUX_SYMBOL_STR(usb_get_urb) },
	{ 0x2eada87e, __VMLINUX_SYMBOL_STR(debugfs_remove_recursive) },
	{ 0xc499ae1e, __VMLINUX_SYMBOL_STR(kstrdup) },
	{ 0xe564cc94, __VMLINUX_SYMBOL_STR(kthread_create_on_node) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x8af622fe, __VMLINUX_SYMBOL_STR(param_ops_string) },
	{ 0xc84fc707, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0x63b87fc5, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x390f1957, __VMLINUX_SYMBOL_STR(i2400m_setup) },
	{ 0x782d2e76, __VMLINUX_SYMBOL_STR(i2400m_is_boot_barker) },
	{ 0x706c5a65, __VMLINUX_SYMBOL_STR(preempt_count_sub) },
	{ 0xcf83f72f, __VMLINUX_SYMBOL_STR(i2400m_post_reset) },
	{ 0xef1e4705, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x76d817, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xbe4c8b3b, __VMLINUX_SYMBOL_STR(ethtool_op_get_link) },
	{ 0x20c55ae0, __VMLINUX_SYMBOL_STR(sscanf) },
	{ 0xaf0d0b73, __VMLINUX_SYMBOL_STR(kthread_stop) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0xcfcf943d, __VMLINUX_SYMBOL_STR(debugfs_create_size_t) },
	{ 0xbe43413c, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xbcc481ae, __VMLINUX_SYMBOL_STR(i2400m_netdev_setup) },
	{ 0x43b0c9c3, __VMLINUX_SYMBOL_STR(preempt_schedule) },
	{ 0x308754b1, __VMLINUX_SYMBOL_STR(device_init_wakeup) },
	{ 0x6b88db50, __VMLINUX_SYMBOL_STR(i2400m_unknown_barker) },
	{ 0xa0f3f3db, __VMLINUX_SYMBOL_STR(i2400m_pre_reset) },
	{ 0xdaf8598f, __VMLINUX_SYMBOL_STR(usb_queue_reset_device) },
	{ 0x4059792f, __VMLINUX_SYMBOL_STR(print_hex_dump) },
	{ 0x1f5f1c48, __VMLINUX_SYMBOL_STR(skb_copy_expand) },
	{ 0xc4ad22c6, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0xd6efd600, __VMLINUX_SYMBOL_STR(usb_get_dev) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x8881268b, __VMLINUX_SYMBOL_STR(usb_reset_device) },
	{ 0x7624ae76, __VMLINUX_SYMBOL_STR(usb_bulk_msg) },
	{ 0x92d08eb8, __VMLINUX_SYMBOL_STR(usb_put_dev) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0x4a211dfd, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x46f344d6, __VMLINUX_SYMBOL_STR(usb_clear_halt) },
	{ 0x3835e6a1, __VMLINUX_SYMBOL_STR(alloc_netdev_mqs) },
	{ 0x87a10d5, __VMLINUX_SYMBOL_STR(wait_for_completion_interruptible_timeout) },
	{ 0x9126c0e0, __VMLINUX_SYMBOL_STR(dev_driver_string) },
	{ 0xd65172e, __VMLINUX_SYMBOL_STR(wake_up_process) },
	{ 0xcaa1a2be, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xb00b793c, __VMLINUX_SYMBOL_STR(i2400m_bm_cmd_prepare) },
	{ 0xb9e52429, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0xd6a36033, __VMLINUX_SYMBOL_STR(i2400m_release) },
	{ 0xb3f7646e, __VMLINUX_SYMBOL_STR(kthread_should_stop) },
	{ 0x158f2f00, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x4433ef31, __VMLINUX_SYMBOL_STR(i2400m_init) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x6128b5fc, __VMLINUX_SYMBOL_STR(__printk_ratelimit) },
	{ 0x1cd1a26f, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0x8893fa5d, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0xf9dd9922, __VMLINUX_SYMBOL_STR(__init_swait_queue_head) },
	{ 0xa0e4ae2e, __VMLINUX_SYMBOL_STR(pm_runtime_set_autosuspend_delay) },
	{ 0x2f0664db, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x9cbcaf26, __VMLINUX_SYMBOL_STR(complete) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x99bb8806, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0xf229424a, __VMLINUX_SYMBOL_STR(preempt_count_add) },
	{ 0xfe8e1ccd, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0xae1051ca, __VMLINUX_SYMBOL_STR(i2400m_tx_msg_sent) },
	{ 0x900f303a, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0xa45e57e, __VMLINUX_SYMBOL_STR(usb_autopm_put_interface) },
	{ 0x55da3d4e, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=i2400m";

MODULE_ALIAS("usb:v8086p0186d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v8086p0188d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v8087p07D6d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v8087p07D7d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v8087p07D9d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v8086p0187d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v8086p0181d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v8086p1403d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v8086p1405d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v8086p0180d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v8086p0182d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v8086p1406d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v8086p1403d*dc*dsc*dp*ic*isc*ip*in*");
