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
	{ 0x2c197ea3, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x8dca28d0, __VMLINUX_SYMBOL_STR(spk_var_store) },
	{ 0x14708c6e, __VMLINUX_SYMBOL_STR(spk_var_show) },
	{ 0x7b665e29, __VMLINUX_SYMBOL_STR(spk_synth_is_alive_restart) },
	{ 0xaefe4fea, __VMLINUX_SYMBOL_STR(spk_synth_flush) },
	{ 0xf6337d2, __VMLINUX_SYMBOL_STR(spk_do_catch_up) },
	{ 0xe7cd4558, __VMLINUX_SYMBOL_STR(spk_serial_release) },
	{ 0x7e42e836, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0xd304f5a5, __VMLINUX_SYMBOL_STR(param_ops_short) },
	{ 0x135c5767, __VMLINUX_SYMBOL_STR(synth_remove) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x5f05e140, __VMLINUX_SYMBOL_STR(synth_add) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x5b136033, __VMLINUX_SYMBOL_STR(spk_synth_immediate) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0xadd9b540, __VMLINUX_SYMBOL_STR(spk_serial_synth_probe) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=speakup";


MODULE_INFO(srcversion, "395AA726348039A96904656");
