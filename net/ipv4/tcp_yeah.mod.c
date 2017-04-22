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
	{ 0x8d6d8841, __VMLINUX_SYMBOL_STR(tcp_vegas_get_info) },
	{ 0xe2f77e48, __VMLINUX_SYMBOL_STR(tcp_vegas_cwnd_event) },
	{ 0xa3c4215d, __VMLINUX_SYMBOL_STR(tcp_vegas_state) },
	{ 0x3f411268, __VMLINUX_SYMBOL_STR(tcp_unregister_congestion_control) },
	{ 0xad2c43a7, __VMLINUX_SYMBOL_STR(tcp_register_congestion_control) },
	{ 0xcaccbdf7, __VMLINUX_SYMBOL_STR(tcp_vegas_init) },
	{ 0x59e5070d, __VMLINUX_SYMBOL_STR(__do_div64) },
	{ 0x4432b984, __VMLINUX_SYMBOL_STR(tcp_cong_avoid_ai) },
	{ 0x71eaa17d, __VMLINUX_SYMBOL_STR(tcp_slow_start) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0xa72f68e2, __VMLINUX_SYMBOL_STR(tcp_vegas_pkts_acked) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=tcp_vegas";

