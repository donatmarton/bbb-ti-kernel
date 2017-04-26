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
	{ 0x2c197ea3, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0xb077e70a, __VMLINUX_SYMBOL_STR(clk_unprepare) },
	{ 0xe56a9336, __VMLINUX_SYMBOL_STR(snd_pcm_format_width) },
	{ 0x7b8c3a36, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x815588a6, __VMLINUX_SYMBOL_STR(clk_enable) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x712701ab, __VMLINUX_SYMBOL_STR(snd_soc_dapm_get_enum_double) },
	{ 0x89cd8667, __VMLINUX_SYMBOL_STR(i2c_del_driver) },
	{ 0xb6e6d99d, __VMLINUX_SYMBOL_STR(clk_disable) },
	{ 0x4f161c0a, __VMLINUX_SYMBOL_STR(of_property_read_u32_array) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xf2ca7a41, __VMLINUX_SYMBOL_STR(snd_soc_put_volsw) },
	{ 0x33e2d8fe, __VMLINUX_SYMBOL_STR(regmap_read) },
	{ 0x1a08a9ce, __VMLINUX_SYMBOL_STR(snd_soc_get_volsw) },
	{ 0xc499ae1e, __VMLINUX_SYMBOL_STR(kstrdup) },
	{ 0x5278e086, __VMLINUX_SYMBOL_STR(regulator_bulk_enable) },
	{ 0x12b0d0d0, __VMLINUX_SYMBOL_STR(snd_soc_info_enum_double) },
	{ 0xe5f1a284, __VMLINUX_SYMBOL_STR(snd_soc_read) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xef1e4705, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xb7e30bce, __VMLINUX_SYMBOL_STR(snd_soc_update_bits) },
	{ 0x2edc5d8, __VMLINUX_SYMBOL_STR(regulator_bulk_get) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0xd0365b71, __VMLINUX_SYMBOL_STR(rdev_get_drvdata) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0x59e5070d, __VMLINUX_SYMBOL_STR(__do_div64) },
	{ 0xdd05857f, __VMLINUX_SYMBOL_STR(snd_soc_info_volsw) },
	{ 0x9d41e38f, __VMLINUX_SYMBOL_STR(i2c_register_driver) },
	{ 0xc9e4f0cb, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x34317eea, __VMLINUX_SYMBOL_STR(regulator_bulk_disable) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x5870b9ef, __VMLINUX_SYMBOL_STR(__devm_regmap_init_i2c) },
	{ 0x954c1ae0, __VMLINUX_SYMBOL_STR(regulator_get_optional) },
	{ 0x7c9a7371, __VMLINUX_SYMBOL_STR(clk_prepare) },
	{ 0x8c663951, __VMLINUX_SYMBOL_STR(regulator_get_voltage) },
	{ 0xbf55a21, __VMLINUX_SYMBOL_STR(devm_clk_get) },
	{ 0xcaa1a2be, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xc9082d0d, __VMLINUX_SYMBOL_STR(snd_soc_unregister_codec) },
	{ 0xbbc007c, __VMLINUX_SYMBOL_STR(regulator_register) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xf825875c, __VMLINUX_SYMBOL_STR(regulator_put) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x9faa3571, __VMLINUX_SYMBOL_STR(regulator_unregister) },
	{ 0x717615d0, __VMLINUX_SYMBOL_STR(regulator_bulk_free) },
	{ 0x51610043, __VMLINUX_SYMBOL_STR(snd_soc_register_codec) },
	{ 0x8caa767c, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x6eaf818b, __VMLINUX_SYMBOL_STR(regmap_write) },
	{ 0x69be0f70, __VMLINUX_SYMBOL_STR(regcache_sync) },
	{ 0xe72f6ac7, __VMLINUX_SYMBOL_STR(regcache_cache_only) },
	{ 0x15f6b51a, __VMLINUX_SYMBOL_STR(snd_soc_write) },
	{ 0x55466ed0, __VMLINUX_SYMBOL_STR(snd_soc_dapm_put_enum_double) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-pcm,snd-soc-core";

MODULE_ALIAS("i2c:sgtl5000");
MODULE_ALIAS("of:N*T*Cfsl,sgtl5000*");
