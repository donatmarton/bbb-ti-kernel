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
	{ 0x1d757e2, __VMLINUX_SYMBOL_STR(tsc200x_pm_ops) },
	{ 0x89cd8667, __VMLINUX_SYMBOL_STR(i2c_del_driver) },
	{ 0x9d41e38f, __VMLINUX_SYMBOL_STR(i2c_register_driver) },
	{ 0xef1e4705, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x495f13ac, __VMLINUX_SYMBOL_STR(i2c_smbus_write_byte) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xed23acc7, __VMLINUX_SYMBOL_STR(tsc200x_probe) },
	{ 0x5870b9ef, __VMLINUX_SYMBOL_STR(__devm_regmap_init_i2c) },
	{ 0x330ae06d, __VMLINUX_SYMBOL_STR(tsc200x_regmap_config) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x78ad746e, __VMLINUX_SYMBOL_STR(tsc200x_remove) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=tsc200x-core";

MODULE_ALIAS("of:N*T*Cti,tsc2004*");
MODULE_ALIAS("i2c:tsc2004");
