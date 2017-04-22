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
	{ 0x2a4f60cd, __VMLINUX_SYMBOL_STR(nft_unregister_chain_type) },
	{ 0x5dfff42e, __VMLINUX_SYMBOL_STR(nft_register_chain_type) },
	{ 0x9a2dbe04, __VMLINUX_SYMBOL_STR(nf_nat_ipv4_in) },
	{ 0x7503156e, __VMLINUX_SYMBOL_STR(nf_nat_ipv4_fn) },
	{ 0xe7ed4b21, __VMLINUX_SYMBOL_STR(nf_nat_ipv4_local_fn) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x349a05ce, __VMLINUX_SYMBOL_STR(nft_do_chain) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x4169f3c4, __VMLINUX_SYMBOL_STR(nf_nat_ipv4_out) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nf_tables,nf_nat_ipv4";

