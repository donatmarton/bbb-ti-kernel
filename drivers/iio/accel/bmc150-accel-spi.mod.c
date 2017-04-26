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
	{ 0x19f92b7e, __VMLINUX_SYMBOL_STR(bmc150_accel_pm_ops) },
	{ 0x2060d6e7, __VMLINUX_SYMBOL_STR(driver_unregister) },
	{ 0xb4b743ae, __VMLINUX_SYMBOL_STR(__spi_register_driver) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xef1e4705, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x22de62bd, __VMLINUX_SYMBOL_STR(bmc150_accel_core_probe) },
	{ 0x750ca8c2, __VMLINUX_SYMBOL_STR(__devm_regmap_init_spi) },
	{ 0xa8aa977a, __VMLINUX_SYMBOL_STR(bmc150_regmap_conf) },
	{ 0x6ada6489, __VMLINUX_SYMBOL_STR(spi_get_device_id) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xc171d059, __VMLINUX_SYMBOL_STR(bmc150_accel_core_remove) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=bmc150-accel-core";

MODULE_ALIAS("spi:bmc150_accel");
MODULE_ALIAS("spi:bmi055_accel");
MODULE_ALIAS("spi:bma255");
MODULE_ALIAS("spi:bma250e");
MODULE_ALIAS("spi:bma222e");
MODULE_ALIAS("spi:bma280");
MODULE_ALIAS("acpi*:BSBA0150:*");
MODULE_ALIAS("acpi*:BMC150A:*");
MODULE_ALIAS("acpi*:BMI055A:*");
MODULE_ALIAS("acpi*:BMA0255:*");
MODULE_ALIAS("acpi*:BMA250E:*");
MODULE_ALIAS("acpi*:BMA222E:*");
MODULE_ALIAS("acpi*:BMA0280:*");
