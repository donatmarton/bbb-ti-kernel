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
	{ 0xe964e0a4, __VMLINUX_SYMBOL_STR(genphy_read_status) },
	{ 0x47501d1a, __VMLINUX_SYMBOL_STR(phy_drivers_unregister) },
	{ 0x5bdf4279, __VMLINUX_SYMBOL_STR(phy_drivers_register) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0x9833e1e8, __VMLINUX_SYMBOL_STR(genphy_config_aneg) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x79d6e59a, __VMLINUX_SYMBOL_STR(bcm_phy_enable_apd) },
	{ 0x23c2e464, __VMLINUX_SYMBOL_STR(bcm_phy_enable_eee) },
	{ 0x32ca8d57, __VMLINUX_SYMBOL_STR(bcm_phy_write_misc) },
	{ 0x20dac1f, __VMLINUX_SYMBOL_STR(mdiobus_read) },
	{ 0x55ead8c6, __VMLINUX_SYMBOL_STR(bcm_phy_write_exp) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x32331345, __VMLINUX_SYMBOL_STR(mdiobus_write) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=bcm-phy-lib";

MODULE_ALIAS("mdio:1010111000000010010100101000????");
MODULE_ALIAS("mdio:1010111000000010010100100110????");
MODULE_ALIAS("mdio:0110000000001101100001001001????");
MODULE_ALIAS("mdio:0110000000001101100001100101????");
MODULE_ALIAS("mdio:0110000000001101100001001011????");
MODULE_ALIAS("mdio:0110000000001101100001101011????");
MODULE_ALIAS("mdio:0110000000001101100001110011????");
MODULE_ALIAS("mdio:0110000000001101100001001000????");
MODULE_ALIAS("mdio:0110000000001101100001110101????");
MODULE_ALIAS("mdio:0110000000001101100001010001????");
