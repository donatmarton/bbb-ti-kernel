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
	{ 0xf0f96d9a, __VMLINUX_SYMBOL_STR(usbnet_disconnect) },
	{ 0xf38b5c82, __VMLINUX_SYMBOL_STR(usbnet_probe) },
	{ 0xfafb3d8f, __VMLINUX_SYMBOL_STR(cdc_ncm_tx_fixup) },
	{ 0xb91481a8, __VMLINUX_SYMBOL_STR(cdc_ncm_rx_fixup) },
	{ 0x1a329efe, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x60fad71b, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0xa086f1ed, __VMLINUX_SYMBOL_STR(usbnet_suspend) },
	{ 0x45dd7383, __VMLINUX_SYMBOL_STR(usbnet_resume) },
	{ 0x2b8ac7a9, __VMLINUX_SYMBOL_STR(usb_cdc_wdm_register) },
	{ 0xf5e95e17, __VMLINUX_SYMBOL_STR(cdc_ncm_bind_common) },
	{ 0x57b5efc0, __VMLINUX_SYMBOL_STR(cdc_ncm_unbind) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xadb6c848, __VMLINUX_SYMBOL_STR(usb_autopm_put_interface) },
	{ 0x37dfcc74, __VMLINUX_SYMBOL_STR(usb_autopm_get_interface) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usbnet,cdc_ncm,cdc-wdm";

MODULE_ALIAS("usb:v12D1p*d*dc*dsc*dp*icFFisc02ip16in*");
MODULE_ALIAS("usb:v12D1p*d*dc*dsc*dp*icFFisc02ip46in*");
MODULE_ALIAS("usb:v12D1p*d*dc*dsc*dp*icFFisc02ip76in*");
MODULE_ALIAS("usb:v12D1p*d*dc*dsc*dp*icFFisc03ip16in*");
