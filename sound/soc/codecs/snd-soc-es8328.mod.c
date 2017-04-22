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
	{ 0x9cef51a8, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0xb077e70a, __VMLINUX_SYMBOL_STR(clk_unprepare) },
	{ 0xe56a9336, __VMLINUX_SYMBOL_STR(snd_pcm_format_width) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x815588a6, __VMLINUX_SYMBOL_STR(clk_enable) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x8b8409e7, __VMLINUX_SYMBOL_STR(snd_soc_dapm_get_enum_double) },
	{ 0xb0b9f4e0, __VMLINUX_SYMBOL_STR(snd_soc_dapm_get_volsw) },
	{ 0xb6e6d99d, __VMLINUX_SYMBOL_STR(clk_disable) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xbfc95dc, __VMLINUX_SYMBOL_STR(snd_soc_put_volsw) },
	{ 0xfade4e54, __VMLINUX_SYMBOL_STR(snd_soc_get_volsw) },
	{ 0x40872778, __VMLINUX_SYMBOL_STR(devm_regulator_bulk_get) },
	{ 0xc2756b50, __VMLINUX_SYMBOL_STR(regulator_bulk_enable) },
	{ 0x1f56eb37, __VMLINUX_SYMBOL_STR(snd_soc_info_enum_double) },
	{ 0x752aeb9e, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x8c74bd91, __VMLINUX_SYMBOL_STR(snd_pcm_hw_constraint_list) },
	{ 0xcb7edbf4, __VMLINUX_SYMBOL_STR(snd_soc_update_bits) },
	{ 0xc0ba7290, __VMLINUX_SYMBOL_STR(dev_get_regmap) },
	{ 0xae27d878, __VMLINUX_SYMBOL_STR(snd_soc_dapm_put_volsw) },
	{ 0xcf547f24, __VMLINUX_SYMBOL_STR(snd_ctl_boolean_mono_info) },
	{ 0x3630ef7f, __VMLINUX_SYMBOL_STR(snd_soc_info_volsw) },
	{ 0x44f8f548, __VMLINUX_SYMBOL_STR(snd_soc_get_enum_double) },
	{ 0x119d2cf1, __VMLINUX_SYMBOL_STR(regulator_bulk_disable) },
	{ 0x7c9a7371, __VMLINUX_SYMBOL_STR(clk_prepare) },
	{ 0xde038c26, __VMLINUX_SYMBOL_STR(devm_clk_get) },
	{ 0xd843fa3f, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x1bfaf4a, __VMLINUX_SYMBOL_STR(regcache_mark_dirty) },
	{ 0xf60353e7, __VMLINUX_SYMBOL_STR(snd_soc_put_enum_double) },
	{ 0x1ab7336f, __VMLINUX_SYMBOL_STR(snd_soc_register_codec) },
	{ 0xc43902e8, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0xd07664d1, __VMLINUX_SYMBOL_STR(regcache_sync) },
	{ 0x47b4ad05, __VMLINUX_SYMBOL_STR(snd_soc_write) },
	{ 0x35a74721, __VMLINUX_SYMBOL_STR(snd_soc_dapm_put_enum_double) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-pcm,snd-soc-core,snd";

