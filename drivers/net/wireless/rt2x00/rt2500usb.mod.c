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
	{ 0x606dbfd2, __VMLINUX_SYMBOL_STR(rt2x00usb_resume) },
	{ 0x3a239f98, __VMLINUX_SYMBOL_STR(rt2x00usb_suspend) },
	{ 0xd24f0437, __VMLINUX_SYMBOL_STR(rt2x00usb_disconnect) },
	{ 0xbb56a7dd, __VMLINUX_SYMBOL_STR(rt2x00mac_tx_frames_pending) },
	{ 0x69f723fb, __VMLINUX_SYMBOL_STR(rt2x00mac_get_ringparam) },
	{ 0x65700c34, __VMLINUX_SYMBOL_STR(rt2x00mac_get_antenna) },
	{ 0xa440f4d5, __VMLINUX_SYMBOL_STR(rt2x00mac_set_antenna) },
	{ 0x27bcae68, __VMLINUX_SYMBOL_STR(rt2x00mac_flush) },
	{ 0x41123098, __VMLINUX_SYMBOL_STR(rt2x00mac_rfkill_poll) },
	{ 0xea08e80f, __VMLINUX_SYMBOL_STR(rt2x00mac_conf_tx) },
	{ 0xac5b4ddc, __VMLINUX_SYMBOL_STR(rt2x00mac_get_stats) },
	{ 0x655d70, __VMLINUX_SYMBOL_STR(rt2x00mac_sw_scan_complete) },
	{ 0x255a8d1b, __VMLINUX_SYMBOL_STR(rt2x00mac_sw_scan_start) },
	{ 0x40d78599, __VMLINUX_SYMBOL_STR(rt2x00mac_set_key) },
	{ 0x513d589d, __VMLINUX_SYMBOL_STR(rt2x00mac_set_tim) },
	{ 0xd47c126a, __VMLINUX_SYMBOL_STR(rt2x00mac_configure_filter) },
	{ 0xf1c6fae7, __VMLINUX_SYMBOL_STR(rt2x00mac_bss_info_changed) },
	{ 0x8068792f, __VMLINUX_SYMBOL_STR(rt2x00mac_config) },
	{ 0x56007310, __VMLINUX_SYMBOL_STR(rt2x00mac_remove_interface) },
	{ 0x3bac4973, __VMLINUX_SYMBOL_STR(rt2x00mac_add_interface) },
	{ 0x53506abd, __VMLINUX_SYMBOL_STR(rt2x00mac_stop) },
	{ 0xd97d1800, __VMLINUX_SYMBOL_STR(rt2x00mac_start) },
	{ 0xed1a9188, __VMLINUX_SYMBOL_STR(rt2x00mac_tx) },
	{ 0xda4e9d4, __VMLINUX_SYMBOL_STR(rt2x00usb_flush_queue) },
	{ 0xa780dda8, __VMLINUX_SYMBOL_STR(rt2x00usb_kick_queue) },
	{ 0xa7c9d044, __VMLINUX_SYMBOL_STR(rt2x00usb_watchdog) },
	{ 0xe22fb9f6, __VMLINUX_SYMBOL_STR(rt2x00usb_clear_entry) },
	{ 0x1c7d4d7d, __VMLINUX_SYMBOL_STR(rt2x00usb_uninitialize) },
	{ 0xe668ee90, __VMLINUX_SYMBOL_STR(rt2x00usb_initialize) },
	{ 0x76d817, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x1cd1a26f, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0xc7da6011, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x79aa04a2, __VMLINUX_SYMBOL_STR(get_random_bytes) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xc9e4f0cb, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x7589af07, __VMLINUX_SYMBOL_STR(rt2x00usb_vendor_request) },
	{ 0xc987e5d2, __VMLINUX_SYMBOL_STR(rt2x00usb_disable_radio) },
	{ 0x62b72b0d, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xe16b893b, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xef1e4705, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x25c4dbfe, __VMLINUX_SYMBOL_STR(rt2x00usb_vendor_req_buff_lock) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0x1d8f4c65, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0xc4ad22c6, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x8286a48, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0x18cf6166, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x747d8ab3, __VMLINUX_SYMBOL_STR(rt2x00usb_vendor_request_buff) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x1bc5499, __VMLINUX_SYMBOL_STR(rt2x00usb_probe) },
	{ 0xff178f6, __VMLINUX_SYMBOL_STR(__aeabi_idivmod) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=rt2x00usb,rt2x00lib";

MODULE_ALIAS("usb:v0B05p1706d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B05p1707d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp7050d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp7051d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13B1p000Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13B1p0011d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13B1p001Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v14B2p3C02d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3C00d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1044p8001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1044p8007d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06F8pE000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p005Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p0066d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p0067d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p008Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p0097d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DB0p6861d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DB0p6865d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DB0p6869d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp1706d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp2570d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp9020d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v079Bp004Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0681p3C06d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0707pEE13d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v114Bp0110d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0769p11F3d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0EB0p9020d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0F88p3012d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v5A57p0260d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "6B90FF814E9ED16BAB14799");
