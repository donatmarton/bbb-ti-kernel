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
	{ 0xfe2e393c, __VMLINUX_SYMBOL_STR(line6_read_serial_number) },
	{ 0x405c1144, __VMLINUX_SYMBOL_STR(get_seconds) },
	{ 0xd0f76921, __VMLINUX_SYMBOL_STR(line6_resume) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x6c09c2a4, __VMLINUX_SYMBOL_STR(del_timer) },
	{ 0x8bc35d32, __VMLINUX_SYMBOL_STR(line6_probe) },
	{ 0x1eaa1bd4, __VMLINUX_SYMBOL_STR(led_classdev_register) },
	{ 0x61b7999a, __VMLINUX_SYMBOL_STR(line6_write_data) },
	{ 0x178cd8f5, __VMLINUX_SYMBOL_STR(line6_disconnect) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x9580deb, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x4609efb9, __VMLINUX_SYMBOL_STR(line6_pcm_release) },
	{ 0xef1e4705, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x76d817, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x3f6f7dd8, __VMLINUX_SYMBOL_STR(line6_pcm_acquire) },
	{ 0x94e8602, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0x16e5c2a, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0xb478323b, __VMLINUX_SYMBOL_STR(line6_init_pcm) },
	{ 0x6f0065fb, __VMLINUX_SYMBOL_STR(line6_suspend) },
	{ 0x6a9b1b0d, __VMLINUX_SYMBOL_STR(line6_read_data) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xf2ca1931, __VMLINUX_SYMBOL_STR(snd_ctl_new1) },
	{ 0x1ca84e69, __VMLINUX_SYMBOL_STR(led_classdev_unregister) },
	{ 0x1cd1a26f, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0x76fa03cc, __VMLINUX_SYMBOL_STR(snd_card_register) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x51dda338, __VMLINUX_SYMBOL_STR(snd_ctl_add) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-usb-line6,snd";

MODULE_ALIAS("usb:v0E41p4750d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E41p4153d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E41p4150d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E41p4151d*dc*dsc*dp*ic*isc*ip*in00*");
MODULE_ALIAS("usb:v0E41p4147d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E41p4141d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E41p4142d*dc*dsc*dp*ic*isc*ip*in00*");
