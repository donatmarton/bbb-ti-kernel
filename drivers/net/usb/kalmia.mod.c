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
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x90b961ae, __VMLINUX_SYMBOL_STR(usb_driver_release_interface) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x30800578, __VMLINUX_SYMBOL_STR(usb_bulk_msg) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x1c49fc83, __VMLINUX_SYMBOL_STR(netdev_err) },
	{ 0x8fc67403, __VMLINUX_SYMBOL_STR(usbnet_skb_return) },
	{ 0x71f7577d, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0x3007ee30, __VMLINUX_SYMBOL_STR(skb_clone) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x9badcfb5, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x9cfd625d, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x949e981b, __VMLINUX_SYMBOL_STR(__dynamic_netdev_dbg) },
	{ 0x99bb8806, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0xfdf8f58f, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0xf3eaafa9, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0x1f19afd4, __VMLINUX_SYMBOL_STR(skb_copy_expand) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usbnet";

MODULE_ALIAS("usb:v04E8p689Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04E8p6889d*dc*dsc*dp*ic*isc*ip*in*");
