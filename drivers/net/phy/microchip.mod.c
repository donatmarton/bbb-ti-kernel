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
	{ 0x9833e1e8, __VMLINUX_SYMBOL_STR(genphy_config_aneg) },
	{ 0xdc327b44, __VMLINUX_SYMBOL_STR(genphy_resume) },
	{ 0x9c80dbd9, __VMLINUX_SYMBOL_STR(genphy_config_init) },
	{ 0x47501d1a, __VMLINUX_SYMBOL_STR(phy_drivers_unregister) },
	{ 0x5bdf4279, __VMLINUX_SYMBOL_STR(phy_drivers_register) },
	{ 0xcf9d4d42, __VMLINUX_SYMBOL_STR(phy_read_mmd_indirect) },
	{ 0xc43902e8, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0xcd776c4, __VMLINUX_SYMBOL_STR(genphy_suspend) },
	{ 0x32331345, __VMLINUX_SYMBOL_STR(mdiobus_write) },
	{ 0x20dac1f, __VMLINUX_SYMBOL_STR(mdiobus_read) },
	{ 0x173e25cc, __VMLINUX_SYMBOL_STR(devm_kfree) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("mdio:0000000000000111110000010011????");
