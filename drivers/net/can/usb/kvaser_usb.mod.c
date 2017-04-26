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
	{ 0x8c1b4133, __VMLINUX_SYMBOL_STR(can_change_mtu) },
	{ 0x76d817, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x1cd1a26f, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0x7174ae4a, __VMLINUX_SYMBOL_STR(usb_alloc_coherent) },
	{ 0x492e950, __VMLINUX_SYMBOL_STR(open_candev) },
	{ 0xcd1f63ee, __VMLINUX_SYMBOL_STR(wait_for_completion_timeout) },
	{ 0x9a188766, __VMLINUX_SYMBOL_STR(close_candev) },
	{ 0xc7da6011, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x80c75352, __VMLINUX_SYMBOL_STR(register_candev) },
	{ 0xf9dd9922, __VMLINUX_SYMBOL_STR(__init_swait_queue_head) },
	{ 0x27a0b356, __VMLINUX_SYMBOL_STR(alloc_candev) },
	{ 0x63b87fc5, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x8caa767c, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x9cbcaf26, __VMLINUX_SYMBOL_STR(complete) },
	{ 0xd9f59361, __VMLINUX_SYMBOL_STR(can_get_echo_skb) },
	{ 0x15cb090a, __VMLINUX_SYMBOL_STR(completion_done) },
	{ 0x2f0664db, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0xc9e4f0cb, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0x28cd593f, __VMLINUX_SYMBOL_STR(alloc_can_skb) },
	{ 0x87f51bbb, __VMLINUX_SYMBOL_STR(__dynamic_netdev_dbg) },
	{ 0x38b6f297, __VMLINUX_SYMBOL_STR(netif_carrier_on) },
	{ 0x1030b539, __VMLINUX_SYMBOL_STR(netif_rx) },
	{ 0x8ca73395, __VMLINUX_SYMBOL_STR(netif_carrier_off) },
	{ 0xd439038f, __VMLINUX_SYMBOL_STR(alloc_can_err_skb) },
	{ 0xd9249598, __VMLINUX_SYMBOL_STR(can_change_state) },
	{ 0x16784ae4, __VMLINUX_SYMBOL_STR(netif_device_detach) },
	{ 0x55d2f2cd, __VMLINUX_SYMBOL_STR(netif_tx_wake_queue) },
	{ 0x5d02d5e4, __VMLINUX_SYMBOL_STR(can_free_echo_skb) },
	{ 0x1d8f4c65, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0x43b0c9c3, __VMLINUX_SYMBOL_STR(preempt_schedule) },
	{ 0x809ef2c2, __VMLINUX_SYMBOL_STR(can_put_echo_skb) },
	{ 0x706c5a65, __VMLINUX_SYMBOL_STR(preempt_count_sub) },
	{ 0xf229424a, __VMLINUX_SYMBOL_STR(preempt_count_add) },
	{ 0x4a211dfd, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xa83aeacf, __VMLINUX_SYMBOL_STR(netdev_info) },
	{ 0x3b3556e6, __VMLINUX_SYMBOL_STR(usb_unanchor_urb) },
	{ 0xd9e787e1, __VMLINUX_SYMBOL_STR(netdev_err) },
	{ 0x900f303a, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0xc4ad22c6, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0xae48b57b, __VMLINUX_SYMBOL_STR(usb_anchor_urb) },
	{ 0x55da3d4e, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
	{ 0xca2e290d, __VMLINUX_SYMBOL_STR(netdev_warn) },
	{ 0xef1e4705, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x7624ae76, __VMLINUX_SYMBOL_STR(usb_bulk_msg) },
	{ 0xcaa1a2be, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x7b8c3a36, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x30ccc9ab, __VMLINUX_SYMBOL_STR(free_candev) },
	{ 0x40825f43, __VMLINUX_SYMBOL_STR(usb_free_coherent) },
	{ 0x3da6f9d3, __VMLINUX_SYMBOL_STR(usb_kill_anchored_urbs) },
	{ 0x4af77e77, __VMLINUX_SYMBOL_STR(unregister_candev) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=can-dev";

MODULE_ALIAS("usb:v0BFDp000Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BFDp000Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BFDp000Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BFDp000Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BFDp000Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BFDp0010d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BFDp0011d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BFDp0012d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BFDp0013d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BFDp0016d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BFDp0017d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BFDp0018d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BFDp0019d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BFDp001Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BFDp001Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BFDp001Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BFDp001Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BFDp0022d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BFDp0023d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BFDp0027d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BFDp0120d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BFDp0121d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BFDp0004d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BFDp0002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BFDp0005d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BFDp0003d*dc*dsc*dp*ic*isc*ip*in*");
