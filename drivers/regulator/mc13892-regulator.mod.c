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
	{ 0x6274a61b, __VMLINUX_SYMBOL_STR(mc13xxx_fixed_regulator_set_voltage) },
	{ 0x2677dab1, __VMLINUX_SYMBOL_STR(regulator_map_voltage_ascend) },
	{ 0x817ff36d, __VMLINUX_SYMBOL_STR(regulator_list_voltage_table) },
	{ 0xd8d85797, __VMLINUX_SYMBOL_STR(mc13xxx_regulator_ops) },
	{ 0xa63e863f, __VMLINUX_SYMBOL_STR(mc13xxx_fixed_regulator_ops) },
	{ 0xd945909, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x4a4a4bd, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0x79e8bff2, __VMLINUX_SYMBOL_STR(mc13xxx_reg_write) },
	{ 0xef1e4705, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x3dac5039, __VMLINUX_SYMBOL_STR(devm_regulator_register) },
	{ 0xce6842d8, __VMLINUX_SYMBOL_STR(mc13xxx_parse_regulators_dt) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x8caa767c, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x9818966e, __VMLINUX_SYMBOL_STR(mc13xxx_get_num_regulators_dt) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xc7da6011, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x343ffa47, __VMLINUX_SYMBOL_STR(rdev_get_dev) },
	{ 0x2bad992b, __VMLINUX_SYMBOL_STR(mc13xxx_reg_rmw) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xcbb35a72, __VMLINUX_SYMBOL_STR(mc13xxx_unlock) },
	{ 0xf7b2a8ce, __VMLINUX_SYMBOL_STR(mc13xxx_reg_read) },
	{ 0x70cbfa66, __VMLINUX_SYMBOL_STR(mc13xxx_lock) },
	{ 0x8de54fef, __VMLINUX_SYMBOL_STR(rdev_get_id) },
	{ 0xd0365b71, __VMLINUX_SYMBOL_STR(rdev_get_drvdata) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mc13xxx-regulator-core,mc13xxx-core";

