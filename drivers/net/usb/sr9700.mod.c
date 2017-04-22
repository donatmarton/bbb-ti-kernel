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
	{ 0x45dd7383, __VMLINUX_SYMBOL_STR(usbnet_resume) },
	{ 0xa086f1ed, __VMLINUX_SYMBOL_STR(usbnet_suspend) },
	{ 0xf0f96d9a, __VMLINUX_SYMBOL_STR(usbnet_disconnect) },
	{ 0xf38b5c82, __VMLINUX_SYMBOL_STR(usbnet_probe) },
	{ 0x715a325b, __VMLINUX_SYMBOL_STR(usbnet_nway_reset) },
	{ 0xcb3b8e1a, __VMLINUX_SYMBOL_STR(usbnet_set_msglevel) },
	{ 0x17257070, __VMLINUX_SYMBOL_STR(usbnet_get_msglevel) },
	{ 0x6375d990, __VMLINUX_SYMBOL_STR(usbnet_get_drvinfo) },
	{ 0x974cb37, __VMLINUX_SYMBOL_STR(usbnet_set_settings) },
	{ 0xd4ce80f4, __VMLINUX_SYMBOL_STR(usbnet_get_settings) },
	{ 0x1cf5de7b, __VMLINUX_SYMBOL_STR(usbnet_tx_timeout) },
	{ 0x35a37658, __VMLINUX_SYMBOL_STR(usbnet_change_mtu) },
	{ 0x8441c6d0, __VMLINUX_SYMBOL_STR(eth_validate_addr) },
	{ 0xbaf690ea, __VMLINUX_SYMBOL_STR(usbnet_start_xmit) },
	{ 0x18c883b1, __VMLINUX_SYMBOL_STR(usbnet_stop) },
	{ 0x44d50731, __VMLINUX_SYMBOL_STR(usbnet_open) },
	{ 0x1a329efe, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x60fad71b, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0x921f659, __VMLINUX_SYMBOL_STR(mii_nway_restart) },
	{ 0xfeaab9a5, __VMLINUX_SYMBOL_STR(usbnet_get_endpoints) },
	{ 0xdbe8baac, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x2a4fa1a6, __VMLINUX_SYMBOL_STR(usbnet_write_cmd) },
	{ 0xfed0a669, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0x1b8e8e24, __VMLINUX_SYMBOL_STR(usbnet_link_change) },
	{ 0x3007ee30, __VMLINUX_SYMBOL_STR(skb_clone) },
	{ 0x9badcfb5, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x8fc67403, __VMLINUX_SYMBOL_STR(usbnet_skb_return) },
	{ 0x6220b4a2, __VMLINUX_SYMBOL_STR(crc32_le) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xd8782e3e, __VMLINUX_SYMBOL_STR(usbnet_read_cmd) },
	{ 0x1c49fc83, __VMLINUX_SYMBOL_STR(netdev_err) },
	{ 0xe9406e50, __VMLINUX_SYMBOL_STR(usbnet_write_cmd_async) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x985a6ea1, __VMLINUX_SYMBOL_STR(generic_mii_ioctl) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x949e981b, __VMLINUX_SYMBOL_STR(__dynamic_netdev_dbg) },
	{ 0x23d0da5d, __VMLINUX_SYMBOL_STR(mii_ethtool_gset) },
	{ 0x6637d3ba, __VMLINUX_SYMBOL_STR(mii_check_media) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xf3eaafa9, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0x1f19afd4, __VMLINUX_SYMBOL_STR(skb_copy_expand) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usbnet,mii";

MODULE_ALIAS("usb:v0FE6p9700d*dc*dsc*dp*ic*isc*ip*in*");
