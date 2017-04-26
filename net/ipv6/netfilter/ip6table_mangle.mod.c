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
	{ 0xdd6dc4b, __VMLINUX_SYMBOL_STR(xt_hook_unlink) },
	{ 0x95f58b2d, __VMLINUX_SYMBOL_STR(unregister_pernet_subsys) },
	{ 0xb9ba0783, __VMLINUX_SYMBOL_STR(xt_hook_link) },
	{ 0xb99f0242, __VMLINUX_SYMBOL_STR(register_pernet_subsys) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xb5137fe9, __VMLINUX_SYMBOL_STR(ip6_route_me_harder) },
	{ 0xa7e2d192, __VMLINUX_SYMBOL_STR(ip6t_do_table) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x374d199, __VMLINUX_SYMBOL_STR(ip6t_register_table) },
	{ 0x5a267d04, __VMLINUX_SYMBOL_STR(ip6t_alloc_initial_table) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xe19f985c, __VMLINUX_SYMBOL_STR(ip6t_unregister_table) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=x_tables,ip6_tables";

