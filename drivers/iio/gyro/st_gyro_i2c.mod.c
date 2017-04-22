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
	{ 0x703b5194, __VMLINUX_SYMBOL_STR(i2c_del_driver) },
	{ 0xc619b572, __VMLINUX_SYMBOL_STR(i2c_register_driver) },
	{ 0x98d752d2, __VMLINUX_SYMBOL_STR(st_gyro_common_probe) },
	{ 0x6ab0d825, __VMLINUX_SYMBOL_STR(st_sensors_i2c_configure) },
	{ 0x484fc1b9, __VMLINUX_SYMBOL_STR(st_sensors_of_i2c_probe) },
	{ 0x88d156ca, __VMLINUX_SYMBOL_STR(devm_iio_device_alloc) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x9c083b9d, __VMLINUX_SYMBOL_STR(st_gyro_common_remove) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=st_gyro,st_sensors_i2c,industrialio";

MODULE_ALIAS("i2c:l3g4200d");
MODULE_ALIAS("i2c:lsm330d_gyro");
MODULE_ALIAS("i2c:lsm330dl_gyro");
MODULE_ALIAS("i2c:lsm330dlc_gyro");
MODULE_ALIAS("i2c:l3gd20");
MODULE_ALIAS("i2c:l3g4is_ui");
MODULE_ALIAS("i2c:lsm330_gyro");
MODULE_ALIAS("i2c:lsm9ds0_gyro");
MODULE_ALIAS("of:N*T*Cst,l3g4200d-gyro");
MODULE_ALIAS("of:N*T*Cst,l3g4200d-gyroC*");
MODULE_ALIAS("of:N*T*Cst,lsm330d-gyro");
MODULE_ALIAS("of:N*T*Cst,lsm330d-gyroC*");
MODULE_ALIAS("of:N*T*Cst,lsm330dl-gyro");
MODULE_ALIAS("of:N*T*Cst,lsm330dl-gyroC*");
MODULE_ALIAS("of:N*T*Cst,lsm330dlc-gyro");
MODULE_ALIAS("of:N*T*Cst,lsm330dlc-gyroC*");
MODULE_ALIAS("of:N*T*Cst,l3gd20-gyro");
MODULE_ALIAS("of:N*T*Cst,l3gd20-gyroC*");
MODULE_ALIAS("of:N*T*Cst,l3g4is-gyro");
MODULE_ALIAS("of:N*T*Cst,l3g4is-gyroC*");
MODULE_ALIAS("of:N*T*Cst,lsm330-gyro");
MODULE_ALIAS("of:N*T*Cst,lsm330-gyroC*");
MODULE_ALIAS("of:N*T*Cst,lsm9ds0-gyro");
MODULE_ALIAS("of:N*T*Cst,lsm9ds0-gyroC*");
