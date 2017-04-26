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
	{ 0x8208930c, __VMLINUX_SYMBOL_STR(usbnet_disconnect) },
	{ 0xdb20336a, __VMLINUX_SYMBOL_STR(usbnet_probe) },
	{ 0x6a624fa4, __VMLINUX_SYMBOL_STR(cdc_ncm_tx_fixup) },
	{ 0x6508e924, __VMLINUX_SYMBOL_STR(cdc_ncm_rx_fixup) },
	{ 0x76d817, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x1cd1a26f, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xa45e57e, __VMLINUX_SYMBOL_STR(usb_autopm_put_interface) },
	{ 0x3c117aa, __VMLINUX_SYMBOL_STR(usb_autopm_get_interface) },
	{ 0x327477f2, __VMLINUX_SYMBOL_STR(usbnet_suspend) },
	{ 0xa75f1fe2, __VMLINUX_SYMBOL_STR(usbnet_resume) },
	{ 0x8e929281, __VMLINUX_SYMBOL_STR(usb_cdc_wdm_register) },
	{ 0x3b6453cc, __VMLINUX_SYMBOL_STR(cdc_ncm_bind_common) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xbd168ac3, __VMLINUX_SYMBOL_STR(cdc_ncm_unbind) },
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
