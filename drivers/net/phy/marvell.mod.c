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
	{ 0xf8024945, __VMLINUX_SYMBOL_STR(genphy_read_status) },
	{ 0x232c6b, __VMLINUX_SYMBOL_STR(genphy_resume) },
	{ 0x74459d01, __VMLINUX_SYMBOL_STR(genphy_suspend) },
	{ 0x4dd4bea6, __VMLINUX_SYMBOL_STR(phy_drivers_unregister) },
	{ 0xfc146e5d, __VMLINUX_SYMBOL_STR(phy_drivers_register) },
	{ 0xfbe9abfc, __VMLINUX_SYMBOL_STR(genphy_update_link) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xd460a022, __VMLINUX_SYMBOL_STR(of_get_property) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xfaca67a6, __VMLINUX_SYMBOL_STR(genphy_config_aneg) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0xb15006b1, __VMLINUX_SYMBOL_STR(mdiobus_write) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x1756eea9, __VMLINUX_SYMBOL_STR(mdiobus_read) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("mdio:0000000101000001000011000110????");
MODULE_ALIAS("mdio:0000000101000001000011001001????");
MODULE_ALIAS("mdio:0000000101000001000011001100????");
MODULE_ALIAS("mdio:0000000101000001000011100001????");
MODULE_ALIAS("mdio:0000000101000001000011001011????");
MODULE_ALIAS("mdio:0000000101000001000011001101????");
MODULE_ALIAS("mdio:0000000101000001000011100101????");
MODULE_ALIAS("mdio:0000000101000001000011100011????");
MODULE_ALIAS("mdio:0000000101000001000011101001????");
MODULE_ALIAS("mdio:0000000101000001000011100100????");
MODULE_ALIAS("mdio:0000000101000001000011011101????");
MODULE_ALIAS("mdio:0000000101000001000011101011????");
MODULE_ALIAS("mdio:0000000101000001000011100110????");
