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
	{ 0x2ba1adfe, __VMLINUX_SYMBOL_STR(team_mode_unregister) },
	{ 0x2977c520, __VMLINUX_SYMBOL_STR(team_mode_register) },
	{ 0x64f2a9d1, __VMLINUX_SYMBOL_STR(team_option_inst_set_change) },
	{ 0x5ad88e44, __VMLINUX_SYMBOL_STR(team_options_register) },
	{ 0x86187ff9, __VMLINUX_SYMBOL_STR(team_options_unregister) },
	{ 0xe4ca266e, __VMLINUX_SYMBOL_STR(netpoll_send_skb_on_dev) },
	{ 0xf3eaafa9, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0x5b344826, __VMLINUX_SYMBOL_STR(dev_queue_xmit) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=team";

