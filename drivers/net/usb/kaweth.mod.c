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
	{ 0x6756873d, __VMLINUX_SYMBOL_STR(eth_change_mtu) },
	{ 0xb8ec1b03, __VMLINUX_SYMBOL_STR(eth_validate_addr) },
	{ 0x18096457, __VMLINUX_SYMBOL_STR(eth_mac_addr) },
	{ 0x76d817, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x1cd1a26f, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0x3c117aa, __VMLINUX_SYMBOL_STR(usb_autopm_get_interface) },
	{ 0x1f5f1c48, __VMLINUX_SYMBOL_STR(skb_copy_expand) },
	{ 0x4302d0eb, __VMLINUX_SYMBOL_STR(free_pages) },
	{ 0x93fca811, __VMLINUX_SYMBOL_STR(__get_free_pages) },
	{ 0x63fda361, __VMLINUX_SYMBOL_STR(register_netdev) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0x9580deb, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x7174ae4a, __VMLINUX_SYMBOL_STR(usb_alloc_coherent) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0xab5eb9a1, __VMLINUX_SYMBOL_STR(usb_reset_configuration) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0xfc642a79, __VMLINUX_SYMBOL_STR(alloc_etherdev_mqs) },
	{ 0x22ef151f, __VMLINUX_SYMBOL_STR(release_firmware) },
	{ 0x5ed56e18, __VMLINUX_SYMBOL_STR(request_firmware) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x8893fa5d, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0x158f2f00, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x63b87fc5, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x55da3d4e, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
	{ 0xcaa1a2be, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x7b8c3a36, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x38b6f297, __VMLINUX_SYMBOL_STR(netif_carrier_on) },
	{ 0xa45e57e, __VMLINUX_SYMBOL_STR(usb_autopm_put_interface) },
	{ 0x90117b78, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_irq) },
	{ 0x55d2f2cd, __VMLINUX_SYMBOL_STR(netif_tx_wake_queue) },
	{ 0x71d463ea, __VMLINUX_SYMBOL_STR(usb_unlink_urb) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x2f0664db, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x87f51bbb, __VMLINUX_SYMBOL_STR(__dynamic_netdev_dbg) },
	{ 0xbe43413c, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0x40825f43, __VMLINUX_SYMBOL_STR(usb_free_coherent) },
	{ 0x900f303a, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0x95eef112, __VMLINUX_SYMBOL_STR(unregister_netdev) },
	{ 0xc9e4f0cb, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x4c29dcbf, __VMLINUX_SYMBOL_STR(cancel_delayed_work_sync) },
	{ 0x16b7c05d, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0x43b0c9c3, __VMLINUX_SYMBOL_STR(preempt_schedule) },
	{ 0xc7da6011, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x1030b539, __VMLINUX_SYMBOL_STR(netif_rx) },
	{ 0x11064f33, __VMLINUX_SYMBOL_STR(eth_type_trans) },
	{ 0xfe8e1ccd, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xc84fc707, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0x706c5a65, __VMLINUX_SYMBOL_STR(preempt_count_sub) },
	{ 0xf229424a, __VMLINUX_SYMBOL_STR(preempt_count_add) },
	{ 0x3f616ce2, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0xef1e4705, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xc4ad22c6, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0xb9e52429, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v03E8p0008d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04BBp0901d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0506p03E8d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0506p11F8d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0557p2002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0557p4000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0565p0002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0565p0003d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0565p0005d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05E9p0008d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05E9p0009d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v066Bp2202d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06E1p0008d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06E1p0009d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0707p0100d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07AAp0001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07B8p4000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07C9pB010d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p1001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p1002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v085Ap0008d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v085Ap0009d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v087Dp5704d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0951p0008d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v095Ap3003d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v10BDp1427d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1342p0204d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D2p0400d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1485p0001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1485p0002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1645p0005d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1645p0008d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1645p8005d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1668p0323d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p4000d*dc*dsc*dp*ic*isc*ip*in*");
