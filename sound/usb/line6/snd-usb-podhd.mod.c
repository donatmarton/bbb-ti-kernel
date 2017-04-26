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
	{ 0xd0f76921, __VMLINUX_SYMBOL_STR(line6_resume) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x8bc35d32, __VMLINUX_SYMBOL_STR(line6_probe) },
	{ 0x5c76add7, __VMLINUX_SYMBOL_STR(line6_init_midi) },
	{ 0x178cd8f5, __VMLINUX_SYMBOL_STR(line6_disconnect) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x76d817, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0xb478323b, __VMLINUX_SYMBOL_STR(line6_init_pcm) },
	{ 0x6f0065fb, __VMLINUX_SYMBOL_STR(line6_suspend) },
	{ 0x1cd1a26f, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0x76fa03cc, __VMLINUX_SYMBOL_STR(snd_card_register) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-usb-line6,snd";

MODULE_ALIAS("usb:v0E41p5057d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E41p5058d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E41p414Dd*dc*dsc*dp*ic*isc*ip*in00*");
MODULE_ALIAS("usb:v0E41p414Dd*dc*dsc*dp*ic*isc*ip*in01*");
