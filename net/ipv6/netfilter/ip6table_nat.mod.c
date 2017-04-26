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
	{ 0xe0ed6ff, __VMLINUX_SYMBOL_STR(nf_unregister_hooks) },
	{ 0x95f58b2d, __VMLINUX_SYMBOL_STR(unregister_pernet_subsys) },
	{ 0x98c74f45, __VMLINUX_SYMBOL_STR(nf_register_hooks) },
	{ 0xb99f0242, __VMLINUX_SYMBOL_STR(register_pernet_subsys) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x374d199, __VMLINUX_SYMBOL_STR(ip6t_register_table) },
	{ 0x5a267d04, __VMLINUX_SYMBOL_STR(ip6t_alloc_initial_table) },
	{ 0xe19f985c, __VMLINUX_SYMBOL_STR(ip6t_unregister_table) },
	{ 0xfa58039c, __VMLINUX_SYMBOL_STR(nf_nat_ipv6_in) },
	{ 0x6c60c325, __VMLINUX_SYMBOL_STR(nf_nat_ipv6_out) },
	{ 0x3edf63de, __VMLINUX_SYMBOL_STR(nf_nat_ipv6_local_fn) },
	{ 0xa7e2d192, __VMLINUX_SYMBOL_STR(ip6t_do_table) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb9f0c249, __VMLINUX_SYMBOL_STR(nf_nat_ipv6_fn) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ip6_tables,nf_nat_ipv6";

