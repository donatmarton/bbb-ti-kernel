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
	{ 0x30821c64, __VMLINUX_SYMBOL_STR(unregister_pernet_subsys) },
	{ 0xca3df0a2, __VMLINUX_SYMBOL_STR(init_net) },
	{ 0x93ee206, __VMLINUX_SYMBOL_STR(register_pernet_subsys) },
	{ 0xaa28affa, __VMLINUX_SYMBOL_STR(xt_hook_ops_alloc) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xa06cd46a, __VMLINUX_SYMBOL_STR(arpt_register_table) },
	{ 0xc4f8e797, __VMLINUX_SYMBOL_STR(arpt_alloc_initial_table) },
	{ 0x7207a807, __VMLINUX_SYMBOL_STR(arpt_do_table) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x49bfce47, __VMLINUX_SYMBOL_STR(arpt_unregister_table) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=x_tables,arp_tables";

