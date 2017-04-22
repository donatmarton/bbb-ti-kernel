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
	{ 0x1a329efe, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x60fad71b, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x921f659, __VMLINUX_SYMBOL_STR(mii_nway_restart) },
	{ 0xfeaab9a5, __VMLINUX_SYMBOL_STR(usbnet_get_endpoints) },
	{ 0xe2fae716, __VMLINUX_SYMBOL_STR(kmemdup) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x82fc1495, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0x147fb690, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xf6789fdc, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xc73b1f2a, __VMLINUX_SYMBOL_STR(usbnet_defer_kevent) },
	{ 0x6d4e025a, __VMLINUX_SYMBOL_STR(netif_carrier_on) },
	{ 0xd7dd8451, __VMLINUX_SYMBOL_STR(netif_carrier_off) },
	{ 0x752aeb9e, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x71f7577d, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x949e981b, __VMLINUX_SYMBOL_STR(__dynamic_netdev_dbg) },
	{ 0x23d0da5d, __VMLINUX_SYMBOL_STR(mii_ethtool_gset) },
	{ 0x6637d3ba, __VMLINUX_SYMBOL_STR(mii_check_media) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xf3eaafa9, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0x1f19afd4, __VMLINUX_SYMBOL_STR(skb_copy_expand) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usbnet,mii";

MODULE_ALIAS("usb:v1A86pE092d*dc*dsc*dp*ic*isc*ip*in*");
