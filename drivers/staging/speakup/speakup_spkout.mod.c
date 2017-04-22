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

MODULE_INFO(staging, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x9cef51a8, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0xefe21d65, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x8f456c01, __VMLINUX_SYMBOL_STR(param_ops_short) },
	{ 0x917edddf, __VMLINUX_SYMBOL_STR(spk_var_store) },
	{ 0x55e0f245, __VMLINUX_SYMBOL_STR(spk_var_show) },
	{ 0x14f06fe7, __VMLINUX_SYMBOL_STR(spk_serial_in_nowait) },
	{ 0x819a9fbc, __VMLINUX_SYMBOL_STR(spk_synth_is_alive_restart) },
	{ 0xd20886ad, __VMLINUX_SYMBOL_STR(spk_do_catch_up) },
	{ 0x5ef756ef, __VMLINUX_SYMBOL_STR(spk_synth_immediate) },
	{ 0xe7cd4558, __VMLINUX_SYMBOL_STR(spk_serial_release) },
	{ 0x253a0fc6, __VMLINUX_SYMBOL_STR(spk_serial_synth_probe) },
	{ 0x71b4628d, __VMLINUX_SYMBOL_STR(synth_remove) },
	{ 0xf731c6fa, __VMLINUX_SYMBOL_STR(synth_add) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x822137e2, __VMLINUX_SYMBOL_STR(arm_heavy_mb) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=speakup";


MODULE_INFO(srcversion, "0DAA6C9A8E706BCF7D3791D");
