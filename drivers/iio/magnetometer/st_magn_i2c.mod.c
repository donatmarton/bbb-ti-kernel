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
	{ 0x89cd8667, __VMLINUX_SYMBOL_STR(i2c_del_driver) },
	{ 0x9d41e38f, __VMLINUX_SYMBOL_STR(i2c_register_driver) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x36fc8315, __VMLINUX_SYMBOL_STR(st_magn_common_probe) },
	{ 0x39124988, __VMLINUX_SYMBOL_STR(st_sensors_i2c_configure) },
	{ 0x1749d2fc, __VMLINUX_SYMBOL_STR(st_sensors_of_i2c_probe) },
	{ 0xbd7f1641, __VMLINUX_SYMBOL_STR(devm_iio_device_alloc) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb12e0bdc, __VMLINUX_SYMBOL_STR(st_magn_common_remove) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=st_magn,st_sensors_i2c,industrialio";

MODULE_ALIAS("i2c:lsm303dlh_magn");
MODULE_ALIAS("i2c:lsm303dlhc_magn");
MODULE_ALIAS("i2c:lsm303dlm_magn");
MODULE_ALIAS("i2c:lis3mdl");
MODULE_ALIAS("i2c:lsm303agr_magn");
MODULE_ALIAS("of:N*T*Cst,lsm303dlh-magn*");
MODULE_ALIAS("of:N*T*Cst,lsm303dlhc-magn*");
MODULE_ALIAS("of:N*T*Cst,lsm303dlm-magn*");
MODULE_ALIAS("of:N*T*Cst,lis3mdl-magn*");
MODULE_ALIAS("of:N*T*Cst,lsm303agr-magn*");
