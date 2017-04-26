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
	{ 0x750ca8c2, __VMLINUX_SYMBOL_STR(__devm_regmap_init_spi) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x740a42dd, __VMLINUX_SYMBOL_STR(inv_mpu_pmops) },
	{ 0xb4b743ae, __VMLINUX_SYMBOL_STR(__spi_register_driver) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xef1e4705, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x2060d6e7, __VMLINUX_SYMBOL_STR(driver_unregister) },
	{ 0x22f7cdd7, __VMLINUX_SYMBOL_STR(inv_mpu6050_set_power_itg) },
	{ 0x2f4987c9, __VMLINUX_SYMBOL_STR(inv_mpu_core_remove) },
	{ 0x4f0547f4, __VMLINUX_SYMBOL_STR(inv_mpu_core_probe) },
	{ 0x6ada6489, __VMLINUX_SYMBOL_STR(spi_get_device_id) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x6eaf818b, __VMLINUX_SYMBOL_STR(regmap_write) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=inv-mpu6050";

MODULE_ALIAS("spi:mpu6000");
MODULE_ALIAS("spi:mpu6500");
MODULE_ALIAS("spi:mpu9150");
MODULE_ALIAS("acpi*:INVN6000:*");
