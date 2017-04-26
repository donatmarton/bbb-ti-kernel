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
	{ 0x88504fd4, __VMLINUX_SYMBOL_STR(devm_snd_soc_register_card) },
	{ 0x815588a6, __VMLINUX_SYMBOL_STR(clk_enable) },
	{ 0xa2df77f9, __VMLINUX_SYMBOL_STR(snd_soc_of_parse_card_name) },
	{ 0x8a4bc3ec, __VMLINUX_SYMBOL_STR(snd_soc_of_parse_audio_simple_widgets) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0xb6e6d99d, __VMLINUX_SYMBOL_STR(clk_disable) },
	{ 0x4f161c0a, __VMLINUX_SYMBOL_STR(of_property_read_u32_array) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x556e4390, __VMLINUX_SYMBOL_STR(clk_get_rate) },
	{ 0x4a4a4bd, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0xef1e4705, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xb487c570, __VMLINUX_SYMBOL_STR(snd_soc_of_get_dai_name) },
	{ 0x707077b3, __VMLINUX_SYMBOL_STR(of_device_is_available) },
	{ 0xaeb4e64d, __VMLINUX_SYMBOL_STR(of_find_property) },
	{ 0xd28c95d3, __VMLINUX_SYMBOL_STR(of_get_child_by_name) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x1cf6555, __VMLINUX_SYMBOL_STR(of_get_next_child) },
	{ 0x7c9a7371, __VMLINUX_SYMBOL_STR(clk_prepare) },
	{ 0x81e373bd, __VMLINUX_SYMBOL_STR(of_get_named_gpio_flags) },
	{ 0xf102612b, __VMLINUX_SYMBOL_STR(of_clk_get) },
	{ 0xc7da6011, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0xcdd1d0ff, __VMLINUX_SYMBOL_STR(snd_soc_dai_set_sysclk) },
	{ 0x1325cc84, __VMLINUX_SYMBOL_STR(snd_soc_of_parse_audio_routing) },
	{ 0xedbd9bd6, __VMLINUX_SYMBOL_STR(snd_soc_card_jack_new) },
	{ 0x7b03b01a, __VMLINUX_SYMBOL_STR(snd_soc_jack_add_gpios) },
	{ 0x5db3995f, __VMLINUX_SYMBOL_STR(snd_soc_of_parse_daifmt) },
	{ 0x1237ec55, __VMLINUX_SYMBOL_STR(of_parse_phandle_with_args) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xee5d3156, __VMLINUX_SYMBOL_STR(snd_soc_dai_set_tdm_slot) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x23e8e64c, __VMLINUX_SYMBOL_STR(snd_soc_jack_free_gpios) },
	{ 0xd945909, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0xd0532b4a, __VMLINUX_SYMBOL_STR(of_node_put) },
	{ 0x8caa767c, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x60eca027, __VMLINUX_SYMBOL_STR(snd_soc_of_parse_tdm_slot) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-soc-core";

MODULE_ALIAS("of:N*T*Csimple-audio-card*");
