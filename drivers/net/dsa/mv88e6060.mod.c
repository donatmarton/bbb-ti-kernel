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
	{ 0x9cda40ac, __VMLINUX_SYMBOL_STR(unregister_switch_driver) },
	{ 0x508a93bd, __VMLINUX_SYMBOL_STR(register_switch_driver) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x12a38747, __VMLINUX_SYMBOL_STR(usleep_range) },
	{ 0xc43902e8, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x20dac1f, __VMLINUX_SYMBOL_STR(mdiobus_read) },
	{ 0xe2dec42d, __VMLINUX_SYMBOL_STR(dsa_host_dev_to_mii_bus) },
	{ 0x5591a60d, __VMLINUX_SYMBOL_STR(mdiobus_read_nested) },
	{ 0x5f8d663e, __VMLINUX_SYMBOL_STR(mdiobus_write_nested) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=dsa_core";

