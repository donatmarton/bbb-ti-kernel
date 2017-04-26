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
	{ 0xf2ca7a41, __VMLINUX_SYMBOL_STR(snd_soc_put_volsw) },
	{ 0x1a08a9ce, __VMLINUX_SYMBOL_STR(snd_soc_get_volsw) },
	{ 0x872fb51e, __VMLINUX_SYMBOL_STR(snd_soc_dapm_put_volsw) },
	{ 0xbaaa7662, __VMLINUX_SYMBOL_STR(snd_soc_dapm_get_volsw) },
	{ 0xdd05857f, __VMLINUX_SYMBOL_STR(snd_soc_info_volsw) },
	{ 0xd945909, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x4a4a4bd, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0xda606ed2, __VMLINUX_SYMBOL_STR(snd_soc_register_card) },
	{ 0x2c2ff67f, __VMLINUX_SYMBOL_STR(devm_snd_dmaengine_pcm_register) },
	{ 0xabfb3323, __VMLINUX_SYMBOL_STR(devm_snd_soc_register_component) },
	{ 0x51610043, __VMLINUX_SYMBOL_STR(snd_soc_register_codec) },
	{ 0xef1e4705, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xbf55a21, __VMLINUX_SYMBOL_STR(devm_clk_get) },
	{ 0x3b547bc9, __VMLINUX_SYMBOL_STR(__devm_regmap_init_mmio_clk) },
	{ 0xddb3e439, __VMLINUX_SYMBOL_STR(devm_ioremap_resource) },
	{ 0x2cf249c1, __VMLINUX_SYMBOL_STR(platform_get_resource) },
	{ 0x8caa767c, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x815588a6, __VMLINUX_SYMBOL_STR(clk_enable) },
	{ 0x7c9a7371, __VMLINUX_SYMBOL_STR(clk_prepare) },
	{ 0x76d9b876, __VMLINUX_SYMBOL_STR(clk_set_rate) },
	{ 0x3237dfb4, __VMLINUX_SYMBOL_STR(regmap_update_bits) },
	{ 0xc9082d0d, __VMLINUX_SYMBOL_STR(snd_soc_unregister_codec) },
	{ 0x37243ed5, __VMLINUX_SYMBOL_STR(snd_soc_unregister_card) },
	{ 0xb077e70a, __VMLINUX_SYMBOL_STR(clk_unprepare) },
	{ 0xb6e6d99d, __VMLINUX_SYMBOL_STR(clk_disable) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-soc-core";

MODULE_ALIAS("of:N*T*Callwinner,sun4i-a10-codec*");
MODULE_ALIAS("of:N*T*Callwinner,sun7i-a20-codec*");
