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
	{ 0xa2db3c7f, __VMLINUX_SYMBOL_STR(nft_reject_policy) },
	{ 0xe74de609, __VMLINUX_SYMBOL_STR(nft_reject_dump) },
	{ 0x783e5fd1, __VMLINUX_SYMBOL_STR(nft_reject_init) },
	{ 0xf56690d1, __VMLINUX_SYMBOL_STR(nft_unregister_expr) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xd2e7f50e, __VMLINUX_SYMBOL_STR(nft_register_expr) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xbe4b94b6, __VMLINUX_SYMBOL_STR(nf_send_unreach) },
	{ 0x2a763740, __VMLINUX_SYMBOL_STR(nf_send_reset) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nft_reject,nf_tables,nf_reject_ipv4";

