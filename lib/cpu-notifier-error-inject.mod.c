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
	{ 0xefe21d65, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x79dfacdf, __VMLINUX_SYMBOL_STR(__cpuhp_remove_state) },
	{ 0xa23f1c57, __VMLINUX_SYMBOL_STR(debugfs_remove_recursive) },
	{ 0x7cefe561, __VMLINUX_SYMBOL_STR(__cpuhp_setup_state) },
	{ 0x51910bdc, __VMLINUX_SYMBOL_STR(notifier_err_inject_init) },
	{ 0x8b3396bc, __VMLINUX_SYMBOL_STR(notifier_err_inject_dir) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x4507f4a8, __VMLINUX_SYMBOL_STR(cpuhp_tasks_frozen) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=notifier-error-inject";

