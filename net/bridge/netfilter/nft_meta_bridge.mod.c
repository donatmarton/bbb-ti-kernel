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
	{ 0xb80e8358, __VMLINUX_SYMBOL_STR(nft_meta_policy) },
	{ 0xa25bc069, __VMLINUX_SYMBOL_STR(nft_meta_get_dump) },
	{ 0x4bcd07dc, __VMLINUX_SYMBOL_STR(nft_meta_set_validate) },
	{ 0x26651d99, __VMLINUX_SYMBOL_STR(nft_meta_set_dump) },
	{ 0x75a726c9, __VMLINUX_SYMBOL_STR(nft_meta_set_destroy) },
	{ 0x8d24c44e, __VMLINUX_SYMBOL_STR(nft_meta_set_init) },
	{ 0x133c0e6a, __VMLINUX_SYMBOL_STR(nft_meta_set_eval) },
	{ 0x53da33e4, __VMLINUX_SYMBOL_STR(nft_unregister_expr) },
	{ 0x2c05069e, __VMLINUX_SYMBOL_STR(nft_register_expr) },
	{ 0x90d35a2e, __VMLINUX_SYMBOL_STR(nft_validate_register_store) },
	{ 0x1e6b75a3, __VMLINUX_SYMBOL_STR(nft_parse_register) },
	{ 0x9158c80, __VMLINUX_SYMBOL_STR(nft_meta_get_init) },
	{ 0xf6604f64, __VMLINUX_SYMBOL_STR(nft_meta_get_eval) },
	{ 0x328a05f1, __VMLINUX_SYMBOL_STR(strncpy) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nft_meta,nf_tables";

