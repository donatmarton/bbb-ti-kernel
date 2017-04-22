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
	{ 0x805540d9, __VMLINUX_SYMBOL_STR(nf_log_unregister) },
	{ 0x30821c64, __VMLINUX_SYMBOL_STR(unregister_pernet_subsys) },
	{ 0x47363bb8, __VMLINUX_SYMBOL_STR(nf_log_register) },
	{ 0x93ee206, __VMLINUX_SYMBOL_STR(register_pernet_subsys) },
	{ 0x39e61495, __VMLINUX_SYMBOL_STR(nf_logger_request_module) },
	{ 0xd23af8a7, __VMLINUX_SYMBOL_STR(nf_log_set) },
	{ 0x16d917c, __VMLINUX_SYMBOL_STR(nf_log_unset) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xfe4a1eed, __VMLINUX_SYMBOL_STR(nf_log_packet) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

