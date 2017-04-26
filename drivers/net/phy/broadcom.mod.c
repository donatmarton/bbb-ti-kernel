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
	{ 0x68885183, __VMLINUX_SYMBOL_STR(bcm_phy_config_intr) },
	{ 0x760e420c, __VMLINUX_SYMBOL_STR(bcm_phy_ack_intr) },
	{ 0x4dd4bea6, __VMLINUX_SYMBOL_STR(phy_drivers_unregister) },
	{ 0xfc146e5d, __VMLINUX_SYMBOL_STR(phy_drivers_register) },
	{ 0xc169328b, __VMLINUX_SYMBOL_STR(bcm_phy_read_exp) },
	{ 0x742a5915, __VMLINUX_SYMBOL_STR(bcm_phy_write_exp) },
	{ 0x753a5a0d, __VMLINUX_SYMBOL_STR(bcm_phy_read_shadow) },
	{ 0xd9d509f4, __VMLINUX_SYMBOL_STR(bcm_phy_write_shadow) },
	{ 0xf8024945, __VMLINUX_SYMBOL_STR(genphy_read_status) },
	{ 0xfaca67a6, __VMLINUX_SYMBOL_STR(genphy_config_aneg) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xb15006b1, __VMLINUX_SYMBOL_STR(mdiobus_write) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x1756eea9, __VMLINUX_SYMBOL_STR(mdiobus_read) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=bcm-phy-lib";

MODULE_ALIAS("mdio:0000000000100000011000000111????");
MODULE_ALIAS("mdio:0000000000100000011000001110????");
MODULE_ALIAS("mdio:0000000000100000011000001100????");
MODULE_ALIAS("mdio:0000001101100010010111010001????");
MODULE_ALIAS("mdio:0000000000100000011000001011????");
MODULE_ALIAS("mdio:0000000101000011101111001010????");
MODULE_ALIAS("mdio:0000000101000011101111001011????");
MODULE_ALIAS("mdio:0000000101000011101111010110????");
MODULE_ALIAS("mdio:0000000101000011101111010111????");
MODULE_ALIAS("mdio:0000001101100010010111011001????");
MODULE_ALIAS("mdio:0000000101000011101111000111????");
MODULE_ALIAS("mdio:0000000101000011101111000011????");
