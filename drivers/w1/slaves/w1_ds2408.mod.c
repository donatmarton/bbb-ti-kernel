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
	{ 0x3cfdadf5, __VMLINUX_SYMBOL_STR(w1_unregister_family) },
	{ 0xde1ca104, __VMLINUX_SYMBOL_STR(w1_register_family) },
	{ 0x768c617c, __VMLINUX_SYMBOL_STR(w1_reset_bus) },
	{ 0x16cdb87a, __VMLINUX_SYMBOL_STR(w1_write_8) },
	{ 0xd843fa3f, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xdbe8baac, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x2ea9129f, __VMLINUX_SYMBOL_STR(w1_read_8) },
	{ 0x1c4c4392, __VMLINUX_SYMBOL_STR(w1_reset_resume_command) },
	{ 0xf2be6875, __VMLINUX_SYMBOL_STR(w1_write_block) },
	{ 0x40b15e4e, __VMLINUX_SYMBOL_STR(w1_reset_select_slave) },
	{ 0xfed0a669, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=wire";

