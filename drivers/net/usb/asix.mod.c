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
	{ 0xb9fc86d3, __VMLINUX_SYMBOL_STR(mii_ethtool_gset) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xd6b2e8d, __VMLINUX_SYMBOL_STR(phy_disconnect) },
	{ 0xa75f1fe2, __VMLINUX_SYMBOL_STR(usbnet_resume) },
	{ 0x2a90ba66, __VMLINUX_SYMBOL_STR(phy_stop) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xdb20336a, __VMLINUX_SYMBOL_STR(usbnet_probe) },
	{ 0xb46736c9, __VMLINUX_SYMBOL_STR(usbnet_set_settings) },
	{ 0x79aa04a2, __VMLINUX_SYMBOL_STR(get_random_bytes) },
	{ 0xaf08d698, __VMLINUX_SYMBOL_STR(usbnet_link_change) },
	{ 0x7f900fd3, __VMLINUX_SYMBOL_STR(__mdiobus_register) },
	{ 0x8208930c, __VMLINUX_SYMBOL_STR(usbnet_disconnect) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0x7db7bbb1, __VMLINUX_SYMBOL_STR(generic_mii_ioctl) },
	{ 0x6f008822, __VMLINUX_SYMBOL_STR(phy_ethtool_gset) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xa59a091d, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0xea1124f6, __VMLINUX_SYMBOL_STR(usbnet_stop) },
	{ 0xc5b0b8fc, __VMLINUX_SYMBOL_STR(usbnet_update_max_qlen) },
	{ 0x62b72b0d, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x3fa2f178, __VMLINUX_SYMBOL_STR(mdiobus_unregister) },
	{ 0x87f51bbb, __VMLINUX_SYMBOL_STR(__dynamic_netdev_dbg) },
	{ 0xc84fc707, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0xeed31ef8, __VMLINUX_SYMBOL_STR(phy_start_aneg) },
	{ 0xd55e1410, __VMLINUX_SYMBOL_STR(phy_print_status) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xb48d00ec, __VMLINUX_SYMBOL_STR(usbnet_nway_reset) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x79fc0855, __VMLINUX_SYMBOL_STR(phy_start) },
	{ 0xb4d7d799, __VMLINUX_SYMBOL_STR(mii_nway_restart) },
	{ 0x76d817, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0xd7f096d1, __VMLINUX_SYMBOL_STR(mdiobus_free) },
	{ 0x8570c1a6, __VMLINUX_SYMBOL_STR(usbnet_get_endpoints) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0xe1dc9f1f, __VMLINUX_SYMBOL_STR(usbnet_get_drvinfo) },
	{ 0x8286a48, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0xe16b893b, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x6220b4a2, __VMLINUX_SYMBOL_STR(crc32_le) },
	{ 0xa8f8b579, __VMLINUX_SYMBOL_STR(usbnet_start_xmit) },
	{ 0x327477f2, __VMLINUX_SYMBOL_STR(usbnet_suspend) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0x3a009a27, __VMLINUX_SYMBOL_STR(usbnet_get_link) },
	{ 0x2f7a02a7, __VMLINUX_SYMBOL_STR(usbnet_get_settings) },
	{ 0x1f5f1c48, __VMLINUX_SYMBOL_STR(skb_copy_expand) },
	{ 0x207aa521, __VMLINUX_SYMBOL_STR(usbnet_read_cmd) },
	{ 0xbd041566, __VMLINUX_SYMBOL_STR(usbnet_tx_timeout) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x4a211dfd, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x232c6b, __VMLINUX_SYMBOL_STR(genphy_resume) },
	{ 0xa4f594ec, __VMLINUX_SYMBOL_STR(usbnet_skb_return) },
	{ 0x20385fef, __VMLINUX_SYMBOL_STR(usbnet_open) },
	{ 0x830c8efe, __VMLINUX_SYMBOL_STR(mii_check_media) },
	{ 0x5a7f1e2a, __VMLINUX_SYMBOL_STR(usbnet_get_msglevel) },
	{ 0xd9e787e1, __VMLINUX_SYMBOL_STR(netdev_err) },
	{ 0xcaa1a2be, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x41e7f351, __VMLINUX_SYMBOL_STR(usbnet_unlink_rx_urbs) },
	{ 0xb8ec1b03, __VMLINUX_SYMBOL_STR(eth_validate_addr) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x9e225661, __VMLINUX_SYMBOL_STR(usbnet_write_cmd_async) },
	{ 0xca60996a, __VMLINUX_SYMBOL_STR(usbnet_change_mtu) },
	{ 0xbbc5d233, __VMLINUX_SYMBOL_STR(phy_connect) },
	{ 0x1cd1a26f, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x11dbc6b6, __VMLINUX_SYMBOL_STR(phy_mii_ioctl) },
	{ 0x8353674d, __VMLINUX_SYMBOL_STR(phy_ethtool_sset) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x14eb67aa, __VMLINUX_SYMBOL_STR(mii_link_ok) },
	{ 0x99bb8806, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0xfe8e1ccd, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x18096457, __VMLINUX_SYMBOL_STR(eth_mac_addr) },
	{ 0x510e0752, __VMLINUX_SYMBOL_STR(usbnet_write_cmd) },
	{ 0x2499c85, __VMLINUX_SYMBOL_STR(usbnet_set_msglevel) },
	{ 0x28ddcde4, __VMLINUX_SYMBOL_STR(mdiobus_alloc_size) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mii,usbnet";

MODULE_ALIAS("usb:v077Bp2226d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p1040d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p1A00d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B95p1720d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07B8p420Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v08DDp90FFd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v08DDp0114d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0557p2009d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p003Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p006Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v6189p182Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0056d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p061Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07AAp0017d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1189p0893d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1631p6200d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04F1p3008d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17EFp7203d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B95p772Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B95p7720d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B95p1780d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0789p0160d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13B1p0018d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1557p7720d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07D1p3C05d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3C05d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p1A02d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1737p0039d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04BBp0930d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp5055d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp1402d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B95p772Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v14EApAB11d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DB0pA877d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B95p7E2Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B95p172Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v066Bp20F9d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "6DC57650C94C15D43747D8F");
