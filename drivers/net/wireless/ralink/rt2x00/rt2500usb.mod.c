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
	{ 0x5788a263, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0xbb264581, __VMLINUX_SYMBOL_STR(rt2x00usb_resume) },
	{ 0x55c42c13, __VMLINUX_SYMBOL_STR(rt2x00usb_suspend) },
	{ 0x2c56a1c4, __VMLINUX_SYMBOL_STR(rt2x00usb_disconnect) },
	{ 0x679fe6ce, __VMLINUX_SYMBOL_STR(rt2x00mac_tx_frames_pending) },
	{ 0x5f7587c7, __VMLINUX_SYMBOL_STR(rt2x00mac_get_ringparam) },
	{ 0x53322308, __VMLINUX_SYMBOL_STR(rt2x00mac_get_antenna) },
	{ 0x4847646e, __VMLINUX_SYMBOL_STR(rt2x00mac_set_antenna) },
	{ 0x91a46183, __VMLINUX_SYMBOL_STR(rt2x00mac_flush) },
	{ 0x98fa67a5, __VMLINUX_SYMBOL_STR(rt2x00mac_rfkill_poll) },
	{ 0xe804840d, __VMLINUX_SYMBOL_STR(rt2x00mac_conf_tx) },
	{ 0xd0d5f5ee, __VMLINUX_SYMBOL_STR(rt2x00mac_get_stats) },
	{ 0xcf14e57c, __VMLINUX_SYMBOL_STR(rt2x00mac_sw_scan_complete) },
	{ 0xd876ba9c, __VMLINUX_SYMBOL_STR(rt2x00mac_sw_scan_start) },
	{ 0x32f06d62, __VMLINUX_SYMBOL_STR(rt2x00mac_set_key) },
	{ 0xe322ae9b, __VMLINUX_SYMBOL_STR(rt2x00mac_set_tim) },
	{ 0xb392d975, __VMLINUX_SYMBOL_STR(rt2x00mac_configure_filter) },
	{ 0x7d071da9, __VMLINUX_SYMBOL_STR(rt2x00mac_bss_info_changed) },
	{ 0x95e1e50d, __VMLINUX_SYMBOL_STR(rt2x00mac_config) },
	{ 0x7e79350c, __VMLINUX_SYMBOL_STR(rt2x00mac_remove_interface) },
	{ 0xe4041c55, __VMLINUX_SYMBOL_STR(rt2x00mac_add_interface) },
	{ 0x856e58c3, __VMLINUX_SYMBOL_STR(rt2x00mac_stop) },
	{ 0xab02ca2a, __VMLINUX_SYMBOL_STR(rt2x00mac_start) },
	{ 0x6b82f3d8, __VMLINUX_SYMBOL_STR(rt2x00mac_tx) },
	{ 0x6da7c6a7, __VMLINUX_SYMBOL_STR(rt2x00usb_flush_queue) },
	{ 0x6fdc9fd4, __VMLINUX_SYMBOL_STR(rt2x00usb_kick_queue) },
	{ 0x4d602b7a, __VMLINUX_SYMBOL_STR(rt2x00usb_watchdog) },
	{ 0x5926558b, __VMLINUX_SYMBOL_STR(rt2x00usb_clear_entry) },
	{ 0x2b4ae8b4, __VMLINUX_SYMBOL_STR(rt2x00usb_uninitialize) },
	{ 0xdb9c73c0, __VMLINUX_SYMBOL_STR(rt2x00usb_initialize) },
	{ 0x1a329efe, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x60fad71b, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0xd843fa3f, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x79aa04a2, __VMLINUX_SYMBOL_STR(get_random_bytes) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x857b0b4c, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xd295dad2, __VMLINUX_SYMBOL_STR(rt2x00usb_vendor_request) },
	{ 0x1d1265b3, __VMLINUX_SYMBOL_STR(rt2x00usb_disable_radio) },
	{ 0xdbe8baac, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xfed0a669, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x752aeb9e, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xd313ae1e, __VMLINUX_SYMBOL_STR(rt2x00usb_vendor_req_buff_lock) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0xcb62ec7d, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0x7500da19, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xfdf8f58f, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0x71f7577d, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xa72c35f, __VMLINUX_SYMBOL_STR(rt2x00usb_vendor_request_buff) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x643a113, __VMLINUX_SYMBOL_STR(rt2x00usb_probe) },
	{ 0xff178f6, __VMLINUX_SYMBOL_STR(__aeabi_idivmod) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
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

MODULE_INFO(srcversion, "E9AC6BB9CE0D2E8FDD62219");
