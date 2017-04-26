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
	{ 0xb7629ba4, __VMLINUX_SYMBOL_STR(i2c_mux_add_adapter) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x89cd8667, __VMLINUX_SYMBOL_STR(i2c_del_driver) },
	{ 0x9263be6f, __VMLINUX_SYMBOL_STR(i2c_mux_del_adapters) },
	{ 0x740a42dd, __VMLINUX_SYMBOL_STR(inv_mpu_pmops) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x62b72b0d, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xa78c489d, __VMLINUX_SYMBOL_STR(i2c_mux_alloc) },
	{ 0xef1e4705, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xe16b893b, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x9d41e38f, __VMLINUX_SYMBOL_STR(i2c_register_driver) },
	{ 0x12a38747, __VMLINUX_SYMBOL_STR(usleep_range) },
	{ 0x5870b9ef, __VMLINUX_SYMBOL_STR(__devm_regmap_init_i2c) },
	{ 0x2f4987c9, __VMLINUX_SYMBOL_STR(inv_mpu_core_remove) },
	{ 0x4f0547f4, __VMLINUX_SYMBOL_STR(inv_mpu_core_probe) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x6eaf818b, __VMLINUX_SYMBOL_STR(regmap_write) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=inv-mpu6050";

MODULE_ALIAS("acpi*:INVN6500:*");
MODULE_ALIAS("i2c:mpu6050");
MODULE_ALIAS("i2c:mpu6500");
MODULE_ALIAS("i2c:mpu9150");
