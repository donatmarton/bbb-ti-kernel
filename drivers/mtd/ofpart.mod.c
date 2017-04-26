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
	{ 0x636f3775, __VMLINUX_SYMBOL_STR(deregister_mtd_parser) },
	{ 0xc3ca6ab4, __VMLINUX_SYMBOL_STR(register_mtd_parser) },
	{ 0x44b1d426, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xd0532b4a, __VMLINUX_SYMBOL_STR(of_node_put) },
	{ 0x4fef4998, __VMLINUX_SYMBOL_STR(of_n_size_cells) },
	{ 0x31975cdb, __VMLINUX_SYMBOL_STR(of_n_addr_cells) },
	{ 0x1cf6555, __VMLINUX_SYMBOL_STR(of_get_next_child) },
	{ 0xba8253ae, __VMLINUX_SYMBOL_STR(of_device_is_compatible) },
	{ 0xd28c95d3, __VMLINUX_SYMBOL_STR(of_get_child_by_name) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xd460a022, __VMLINUX_SYMBOL_STR(of_get_property) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

