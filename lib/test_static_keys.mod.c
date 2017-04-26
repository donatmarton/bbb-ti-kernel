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
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xfc01e9f, __VMLINUX_SYMBOL_STR(static_key_slow_inc) },
	{ 0x68956406, __VMLINUX_SYMBOL_STR(static_key_slow_dec) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x57861324, __VMLINUX_SYMBOL_STR(base_inv_false_key) },
	{ 0x57d39367, __VMLINUX_SYMBOL_STR(base_false_key) },
	{ 0xc8fca8a6, __VMLINUX_SYMBOL_STR(base_inv_true_key) },
	{ 0xaedfbb15, __VMLINUX_SYMBOL_STR(base_true_key) },
	{ 0xd11741a1, __VMLINUX_SYMBOL_STR(base_inv_old_false_key) },
	{ 0xe3d900b5, __VMLINUX_SYMBOL_STR(base_old_false_key) },
	{ 0x9e0112d0, __VMLINUX_SYMBOL_STR(base_inv_old_true_key) },
	{ 0x882ce5fc, __VMLINUX_SYMBOL_STR(base_old_true_key) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=test_static_key_base";

