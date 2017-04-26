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
	{ 0xddfccf25, __VMLINUX_SYMBOL_STR(regulator_get_voltage_sel_regmap) },
	{ 0x5616b262, __VMLINUX_SYMBOL_STR(regulator_set_voltage_sel_regmap) },
	{ 0xfb8e867c, __VMLINUX_SYMBOL_STR(regulator_map_voltage_linear_range) },
	{ 0x4d6e2e78, __VMLINUX_SYMBOL_STR(regulator_list_voltage_linear_range) },
	{ 0xfc2b2d7b, __VMLINUX_SYMBOL_STR(regulator_is_enabled_regmap) },
	{ 0x458a73bb, __VMLINUX_SYMBOL_STR(regulator_disable_regmap) },
	{ 0x98b56980, __VMLINUX_SYMBOL_STR(regulator_enable_regmap) },
	{ 0x89cd8667, __VMLINUX_SYMBOL_STR(i2c_del_driver) },
	{ 0x9d41e38f, __VMLINUX_SYMBOL_STR(i2c_register_driver) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xd0532b4a, __VMLINUX_SYMBOL_STR(of_node_put) },
	{ 0xb007051a, __VMLINUX_SYMBOL_STR(of_regulator_match) },
	{ 0xd28c95d3, __VMLINUX_SYMBOL_STR(of_get_child_by_name) },
	{ 0xd460a022, __VMLINUX_SYMBOL_STR(of_get_property) },
	{ 0x8b7245c2, __VMLINUX_SYMBOL_STR(of_match_device) },
	{ 0xef1e4705, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xbe89dbd0, __VMLINUX_SYMBOL_STR(devm_kfree) },
	{ 0x3dac5039, __VMLINUX_SYMBOL_STR(devm_regulator_register) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x60a32ea9, __VMLINUX_SYMBOL_STR(pm_power_off) },
	{ 0xaeb4e64d, __VMLINUX_SYMBOL_STR(of_find_property) },
	{ 0x5870b9ef, __VMLINUX_SYMBOL_STR(__devm_regmap_init_i2c) },
	{ 0x8caa767c, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x6eaf818b, __VMLINUX_SYMBOL_STR(regmap_write) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("i2c:act8600");
MODULE_ALIAS("i2c:act8846");
MODULE_ALIAS("i2c:act8865");
MODULE_ALIAS("of:N*T*Cactive-semi,act8600*");
MODULE_ALIAS("of:N*T*Cactive-semi,act8846*");
MODULE_ALIAS("of:N*T*Cactive-semi,act8865*");
