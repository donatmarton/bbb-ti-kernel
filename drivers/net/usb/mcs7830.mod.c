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
	{ 0x327477f2, __VMLINUX_SYMBOL_STR(usbnet_suspend) },
	{ 0x8208930c, __VMLINUX_SYMBOL_STR(usbnet_disconnect) },
	{ 0xdb20336a, __VMLINUX_SYMBOL_STR(usbnet_probe) },
	{ 0xbd041566, __VMLINUX_SYMBOL_STR(usbnet_tx_timeout) },
	{ 0xca60996a, __VMLINUX_SYMBOL_STR(usbnet_change_mtu) },
	{ 0xb8ec1b03, __VMLINUX_SYMBOL_STR(eth_validate_addr) },
	{ 0xa8f8b579, __VMLINUX_SYMBOL_STR(usbnet_start_xmit) },
	{ 0xea1124f6, __VMLINUX_SYMBOL_STR(usbnet_stop) },
	{ 0x20385fef, __VMLINUX_SYMBOL_STR(usbnet_open) },
	{ 0x3a009a27, __VMLINUX_SYMBOL_STR(usbnet_get_link) },
	{ 0xb48d00ec, __VMLINUX_SYMBOL_STR(usbnet_nway_reset) },
	{ 0x2499c85, __VMLINUX_SYMBOL_STR(usbnet_set_msglevel) },
	{ 0x5a7f1e2a, __VMLINUX_SYMBOL_STR(usbnet_get_msglevel) },
	{ 0xb46736c9, __VMLINUX_SYMBOL_STR(usbnet_set_settings) },
	{ 0x2f7a02a7, __VMLINUX_SYMBOL_STR(usbnet_get_settings) },
	{ 0x76d817, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x1cd1a26f, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0xa75f1fe2, __VMLINUX_SYMBOL_STR(usbnet_resume) },
	{ 0x2f0664db, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x8570c1a6, __VMLINUX_SYMBOL_STR(usbnet_get_endpoints) },
	{ 0xc9e4f0cb, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x9e225661, __VMLINUX_SYMBOL_STR(usbnet_write_cmd_async) },
	{ 0x6220b4a2, __VMLINUX_SYMBOL_STR(crc32_le) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xe1dc9f1f, __VMLINUX_SYMBOL_STR(usbnet_get_drvinfo) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x7db7bbb1, __VMLINUX_SYMBOL_STR(generic_mii_ioctl) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x62b72b0d, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x207aa521, __VMLINUX_SYMBOL_STR(usbnet_read_cmd) },
	{ 0x510e0752, __VMLINUX_SYMBOL_STR(usbnet_write_cmd) },
	{ 0xe16b893b, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x87f51bbb, __VMLINUX_SYMBOL_STR(__dynamic_netdev_dbg) },
	{ 0xaf08d698, __VMLINUX_SYMBOL_STR(usbnet_link_change) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xc7da6011, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0xef1e4705, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x18cf6166, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usbnet,mii";

MODULE_ALIAS("usb:v9710p7832d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v9710p7830d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v9710p7730d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0021d*dc*dsc*dp*ic*isc*ip*in*");
