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
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xc653e0a7, __VMLINUX_SYMBOL_STR(gspca_suspend) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xf57c19a4, __VMLINUX_SYMBOL_STR(gspca_dev_probe) },
	{ 0x489b7d58, __VMLINUX_SYMBOL_STR(gspca_expo_autogain) },
	{ 0xc08b5fd3, __VMLINUX_SYMBOL_STR(gspca_resume) },
	{ 0xf30afd02, __VMLINUX_SYMBOL_STR(v4l2_ctrl_new_std) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x18af91a6, __VMLINUX_SYMBOL_STR(gspca_disconnect) },
	{ 0x8e911d34, __VMLINUX_SYMBOL_STR(gspca_coarse_grained_expo_autogain) },
	{ 0xf228c79, __VMLINUX_SYMBOL_STR(input_event) },
	{ 0xd5d1568, __VMLINUX_SYMBOL_STR(v4l2_ctrl_new_std_menu) },
	{ 0xef1e4705, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x76d817, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x94e8602, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x9b66b765, __VMLINUX_SYMBOL_STR(v4l2_ctrl_auto_cluster) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x149bda52, __VMLINUX_SYMBOL_STR(gspca_frame_add) },
	{ 0x649dace1, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_init_class) },
	{ 0x1cd1a26f, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=gspca_main";

MODULE_ALIAS("usb:v0C45p6001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C45p6005d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C45p6007d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C45p6009d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C45p600Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C45p6011d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C45p6019d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C45p6024d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C45p6025d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C45p6027d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C45p6028d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C45p6029d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C45p602Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C45p602Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C45p602Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C45p602Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C45p6083d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C45p608Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C45p608Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C45p60A8d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C45p60AAd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C45p60AFd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C45p60B0d*dc*dsc*dp*ic*isc*ip*in*");
