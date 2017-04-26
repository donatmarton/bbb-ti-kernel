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
	{ 0xa75f1fe2, __VMLINUX_SYMBOL_STR(usbnet_resume) },
	{ 0x327477f2, __VMLINUX_SYMBOL_STR(usbnet_suspend) },
	{ 0x8208930c, __VMLINUX_SYMBOL_STR(usbnet_disconnect) },
	{ 0xdb20336a, __VMLINUX_SYMBOL_STR(usbnet_probe) },
	{ 0x76d817, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x1cd1a26f, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0xa83aeacf, __VMLINUX_SYMBOL_STR(netdev_info) },
	{ 0x510e0752, __VMLINUX_SYMBOL_STR(usbnet_write_cmd) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x207aa521, __VMLINUX_SYMBOL_STR(usbnet_read_cmd) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x18cf6166, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0x43102a32, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x87f51bbb, __VMLINUX_SYMBOL_STR(__dynamic_netdev_dbg) },
	{ 0x9e225661, __VMLINUX_SYMBOL_STR(usbnet_write_cmd_async) },
	{ 0x8570c1a6, __VMLINUX_SYMBOL_STR(usbnet_get_endpoints) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x99bb8806, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0xfe8e1ccd, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x8286a48, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0xa59a091d, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0x1f5f1c48, __VMLINUX_SYMBOL_STR(skb_copy_expand) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usbnet";

MODULE_ALIAS("usb:v0525p1080d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06D0p0622d*dc*dsc*dp*ic*isc*ip*in*");
