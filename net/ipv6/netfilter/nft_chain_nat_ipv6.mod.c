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
	{ 0x6f2ec82c, __VMLINUX_SYMBOL_STR(nft_unregister_chain_type) },
	{ 0x8c1afeee, __VMLINUX_SYMBOL_STR(nft_register_chain_type) },
	{ 0xfa58039c, __VMLINUX_SYMBOL_STR(nf_nat_ipv6_in) },
	{ 0xb9f0c249, __VMLINUX_SYMBOL_STR(nf_nat_ipv6_fn) },
	{ 0x3edf63de, __VMLINUX_SYMBOL_STR(nf_nat_ipv6_local_fn) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x9bdb9038, __VMLINUX_SYMBOL_STR(nft_do_chain) },
	{ 0xec2c8817, __VMLINUX_SYMBOL_STR(ipv6_find_hdr) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x6c60c325, __VMLINUX_SYMBOL_STR(nf_nat_ipv6_out) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nf_tables,nf_nat_ipv6";

