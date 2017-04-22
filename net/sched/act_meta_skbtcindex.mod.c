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
	{ 0xf40f1d62, __VMLINUX_SYMBOL_STR(ife_validate_meta_u16) },
	{ 0xba7d171e, __VMLINUX_SYMBOL_STR(ife_release_meta_gen) },
	{ 0xe409d8a, __VMLINUX_SYMBOL_STR(ife_alloc_meta_u16) },
	{ 0xcedd0f24, __VMLINUX_SYMBOL_STR(ife_get_meta_u16) },
	{ 0x72bf0a0a, __VMLINUX_SYMBOL_STR(unregister_ife_op) },
	{ 0x90b255a6, __VMLINUX_SYMBOL_STR(register_ife_op) },
	{ 0x3114e80b, __VMLINUX_SYMBOL_STR(ife_check_meta_u16) },
	{ 0xb71fff0b, __VMLINUX_SYMBOL_STR(ife_encode_meta_u16) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=act_ife";

