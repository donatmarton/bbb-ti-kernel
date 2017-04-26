#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x2c197ea3, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0xe56a9336, __VMLINUX_SYMBOL_STR(snd_pcm_format_width) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x712701ab, __VMLINUX_SYMBOL_STR(snd_soc_dapm_get_enum_double) },
	{ 0xbaaa7662, __VMLINUX_SYMBOL_STR(snd_soc_dapm_get_volsw) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xf2ca7a41, __VMLINUX_SYMBOL_STR(snd_soc_put_volsw) },
	{ 0x1a08a9ce, __VMLINUX_SYMBOL_STR(snd_soc_get_volsw) },
	{ 0x12b0d0d0, __VMLINUX_SYMBOL_STR(snd_soc_info_enum_double) },
	{ 0xe5f1a284, __VMLINUX_SYMBOL_STR(snd_soc_read) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xb7e30bce, __VMLINUX_SYMBOL_STR(snd_soc_update_bits) },
	{ 0x872fb51e, __VMLINUX_SYMBOL_STR(snd_soc_dapm_put_volsw) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0xdd05857f, __VMLINUX_SYMBOL_STR(snd_soc_info_volsw) },
	{ 0x379fa154, __VMLINUX_SYMBOL_STR(snd_soc_get_enum_double) },
	{ 0x9d05daca, __VMLINUX_SYMBOL_STR(regcache_mark_dirty) },
	{ 0x6d99a545, __VMLINUX_SYMBOL_STR(snd_soc_put_enum_double) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x51610043, __VMLINUX_SYMBOL_STR(snd_soc_register_codec) },
	{ 0x8caa767c, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x69be0f70, __VMLINUX_SYMBOL_STR(regcache_sync) },
	{ 0x15f6b51a, __VMLINUX_SYMBOL_STR(snd_soc_write) },
	{ 0x55466ed0, __VMLINUX_SYMBOL_STR(snd_soc_dapm_put_enum_double) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-pcm,snd-soc-core";

