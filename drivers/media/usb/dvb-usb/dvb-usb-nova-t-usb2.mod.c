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
	{ 0x879a1239, __VMLINUX_SYMBOL_STR(dibusb_read_eeprom_byte) },
	{ 0x7e42e836, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x570b6b8e, __VMLINUX_SYMBOL_STR(dvb_usb_device_exit) },
	{ 0x6f37c406, __VMLINUX_SYMBOL_STR(dvb_usb_device_init) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x3ffbc434, __VMLINUX_SYMBOL_STR(dibusb_pid_filter) },
	{ 0xd304f5a5, __VMLINUX_SYMBOL_STR(param_ops_short) },
	{ 0x76d817, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0xa873993, __VMLINUX_SYMBOL_STR(dibusb2_0_power_ctrl) },
	{ 0x2d976c0f, __VMLINUX_SYMBOL_STR(dibusb_dib3000mc_frontend_attach) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x532f0a2f, __VMLINUX_SYMBOL_STR(dvb_usb_generic_rw) },
	{ 0x29923658, __VMLINUX_SYMBOL_STR(param_array_ops) },
	{ 0x8e6447b6, __VMLINUX_SYMBOL_STR(dibusb_dib3000mc_tuner_attach) },
	{ 0xa7d48520, __VMLINUX_SYMBOL_STR(dibusb2_0_streaming_ctrl) },
	{ 0x1cd1a26f, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0x2080266a, __VMLINUX_SYMBOL_STR(dibusb_i2c_algo) },
	{ 0x420cc586, __VMLINUX_SYMBOL_STR(dibusb_pid_filter_ctrl) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=dvb-usb-dibusb-common,dvb-usb";

MODULE_ALIAS("usb:v2040p9300d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p9301d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "DB8A5BFD66BFDCED2C327BD");
