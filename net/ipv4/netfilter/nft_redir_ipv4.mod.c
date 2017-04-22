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
	{ 0xa5be1e1e, __VMLINUX_SYMBOL_STR(nft_redir_policy) },
	{ 0x8b654012, __VMLINUX_SYMBOL_STR(nft_redir_validate) },
	{ 0xe6f0f7b2, __VMLINUX_SYMBOL_STR(nft_redir_dump) },
	{ 0x983c63b7, __VMLINUX_SYMBOL_STR(nft_redir_init) },
	{ 0x53da33e4, __VMLINUX_SYMBOL_STR(nft_unregister_expr) },
	{ 0x2c05069e, __VMLINUX_SYMBOL_STR(nft_register_expr) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x78485f8e, __VMLINUX_SYMBOL_STR(nf_nat_redirect_ipv4) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nft_redir,nf_tables,nf_nat_redirect";

