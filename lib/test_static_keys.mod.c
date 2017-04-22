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
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xee52541b, __VMLINUX_SYMBOL_STR(static_key_enable) },
	{ 0xa95fd54e, __VMLINUX_SYMBOL_STR(static_key_disable) },
	{ 0x2197c69f, __VMLINUX_SYMBOL_STR(static_key_count) },
	{ 0x57861324, __VMLINUX_SYMBOL_STR(base_inv_false_key) },
	{ 0x57d39367, __VMLINUX_SYMBOL_STR(base_false_key) },
	{ 0xc8fca8a6, __VMLINUX_SYMBOL_STR(base_inv_true_key) },
	{ 0xaedfbb15, __VMLINUX_SYMBOL_STR(base_true_key) },
	{ 0xd11741a1, __VMLINUX_SYMBOL_STR(base_inv_old_false_key) },
	{ 0xe3d900b5, __VMLINUX_SYMBOL_STR(base_old_false_key) },
	{ 0x9e0112d0, __VMLINUX_SYMBOL_STR(base_inv_old_true_key) },
	{ 0x882ce5fc, __VMLINUX_SYMBOL_STR(base_old_true_key) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=test_static_key_base";

