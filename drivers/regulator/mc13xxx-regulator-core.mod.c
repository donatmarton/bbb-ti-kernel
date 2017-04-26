#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x2c197ea3, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x817ff36d, __VMLINUX_SYMBOL_STR(regulator_list_voltage_table) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xaafdc258, __VMLINUX_SYMBOL_STR(strcasecmp) },
	{ 0x2bad992b, __VMLINUX_SYMBOL_STR(mc13xxx_reg_rmw) },
	{ 0x46e2135a, __VMLINUX_SYMBOL_STR(of_get_regulator_init_data) },
	{ 0xd0365b71, __VMLINUX_SYMBOL_STR(rdev_get_drvdata) },
	{ 0x8de54fef, __VMLINUX_SYMBOL_STR(rdev_get_id) },
	{ 0xd28c95d3, __VMLINUX_SYMBOL_STR(of_get_child_by_name) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x1cf6555, __VMLINUX_SYMBOL_STR(of_get_next_child) },
	{ 0xc7da6011, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x343ffa47, __VMLINUX_SYMBOL_STR(rdev_get_dev) },
	{ 0xf7b2a8ce, __VMLINUX_SYMBOL_STR(mc13xxx_reg_read) },
	{ 0x2f0664db, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xd0532b4a, __VMLINUX_SYMBOL_STR(of_node_put) },
	{ 0x8caa767c, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mc13xxx-core";

