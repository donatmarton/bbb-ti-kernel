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
	{ 0xa83aeacf, __VMLINUX_SYMBOL_STR(netdev_info) },
	{ 0x7b8c3a36, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xf6128e9c, __VMLINUX_SYMBOL_STR(ethtool_op_get_ts_info) },
	{ 0xcb809244, __VMLINUX_SYMBOL_STR(usb_altnum_to_altsetting) },
	{ 0xa75f1fe2, __VMLINUX_SYMBOL_STR(usbnet_resume) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x12ab4d30, __VMLINUX_SYMBOL_STR(hrtimer_active) },
	{ 0xdb20336a, __VMLINUX_SYMBOL_STR(usbnet_probe) },
	{ 0xb46736c9, __VMLINUX_SYMBOL_STR(usbnet_set_settings) },
	{ 0xaf08d698, __VMLINUX_SYMBOL_STR(usbnet_link_change) },
	{ 0x9e14108e, __VMLINUX_SYMBOL_STR(hrtimer_cancel) },
	{ 0x8208930c, __VMLINUX_SYMBOL_STR(usbnet_disconnect) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xa59a091d, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0xea1124f6, __VMLINUX_SYMBOL_STR(usbnet_stop) },
	{ 0xc5b0b8fc, __VMLINUX_SYMBOL_STR(usbnet_update_max_qlen) },
	{ 0xa57b02d8, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x87f51bbb, __VMLINUX_SYMBOL_STR(__dynamic_netdev_dbg) },
	{ 0xc84fc707, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0xc6236975, __VMLINUX_SYMBOL_STR(netif_schedule_queue) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xb48d00ec, __VMLINUX_SYMBOL_STR(usbnet_nway_reset) },
	{ 0x6a1b7fe9, __VMLINUX_SYMBOL_STR(hrtimer_start_range_ns) },
	{ 0x706c5a65, __VMLINUX_SYMBOL_STR(preempt_count_sub) },
	{ 0xef1e4705, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x76d817, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x3c3fce39, __VMLINUX_SYMBOL_STR(__local_bh_enable_ip) },
	{ 0xc917e655, __VMLINUX_SYMBOL_STR(debug_smp_processor_id) },
	{ 0xfea687c8, __VMLINUX_SYMBOL_STR(usb_set_interface) },
	{ 0xfaef0ed, __VMLINUX_SYMBOL_STR(__tasklet_schedule) },
	{ 0xf57dc2e2, __VMLINUX_SYMBOL_STR(usb_driver_claim_interface) },
	{ 0xe1dc9f1f, __VMLINUX_SYMBOL_STR(usbnet_get_drvinfo) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xa8f8b579, __VMLINUX_SYMBOL_STR(usbnet_start_xmit) },
	{ 0x327477f2, __VMLINUX_SYMBOL_STR(usbnet_suspend) },
	{ 0x43b0c9c3, __VMLINUX_SYMBOL_STR(preempt_schedule) },
	{ 0x3a009a27, __VMLINUX_SYMBOL_STR(usbnet_get_link) },
	{ 0x82072614, __VMLINUX_SYMBOL_STR(tasklet_kill) },
	{ 0x2f7a02a7, __VMLINUX_SYMBOL_STR(usbnet_get_settings) },
	{ 0x207aa521, __VMLINUX_SYMBOL_STR(usbnet_read_cmd) },
	{ 0xc9e4f0cb, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xc2102972, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0x12a38747, __VMLINUX_SYMBOL_STR(usleep_range) },
	{ 0xbd041566, __VMLINUX_SYMBOL_STR(usbnet_tx_timeout) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xd650a6a, __VMLINUX_SYMBOL_STR(cdc_parse_cdc_header) },
	{ 0x67b066ed, __VMLINUX_SYMBOL_STR(usbnet_get_ethernet_addr) },
	{ 0xa4f594ec, __VMLINUX_SYMBOL_STR(usbnet_skb_return) },
	{ 0x8861ea16, __VMLINUX_SYMBOL_STR(usb_driver_release_interface) },
	{ 0x996bdb64, __VMLINUX_SYMBOL_STR(_kstrtoul) },
	{ 0x20385fef, __VMLINUX_SYMBOL_STR(usbnet_open) },
	{ 0x5a7f1e2a, __VMLINUX_SYMBOL_STR(usbnet_get_msglevel) },
	{ 0xcaa1a2be, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xc7da6011, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x41e7f351, __VMLINUX_SYMBOL_STR(usbnet_unlink_rx_urbs) },
	{ 0xb8ec1b03, __VMLINUX_SYMBOL_STR(eth_validate_addr) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x3eb7a160, __VMLINUX_SYMBOL_STR(hrtimer_init) },
	{ 0x1cd1a26f, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0x2f0664db, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x4ceedf1a, __VMLINUX_SYMBOL_STR(usb_ifnum_to_if) },
	{ 0xf229424a, __VMLINUX_SYMBOL_STR(preempt_count_add) },
	{ 0xfe8e1ccd, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x18096457, __VMLINUX_SYMBOL_STR(eth_mac_addr) },
	{ 0x4901220c, __VMLINUX_SYMBOL_STR(usbnet_manage_power) },
	{ 0x510e0752, __VMLINUX_SYMBOL_STR(usbnet_write_cmd) },
	{ 0x2499c85, __VMLINUX_SYMBOL_STR(usbnet_set_msglevel) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usbnet";

MODULE_ALIAS("usb:v0BDBp*d*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v413Cp81BBd*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v413Cp81BCd*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v413Cp*d*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v0930p*d*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v12D1p*d*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v1519p0443d*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic02isc0Dip00in*");
