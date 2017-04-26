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
	{ 0xe4391f54, __VMLINUX_SYMBOL_STR(ipt_register_table) },
	{ 0x259d1bca, __VMLINUX_SYMBOL_STR(ipt_alloc_initial_table) },
	{ 0x419fa848, __VMLINUX_SYMBOL_STR(ipt_unregister_table) },
	{ 0x2430a0f3, __VMLINUX_SYMBOL_STR(nf_nat_ipv4_in) },
	{ 0x2457bb49, __VMLINUX_SYMBOL_STR(nf_nat_ipv4_out) },
	{ 0xbc6e9aae, __VMLINUX_SYMBOL_STR(nf_nat_ipv4_local_fn) },
	{ 0xbc68abf9, __VMLINUX_SYMBOL_STR(ipt_do_table) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xad929a83, __VMLINUX_SYMBOL_STR(nf_nat_ipv4_fn) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ip_tables,nf_nat_ipv4";

