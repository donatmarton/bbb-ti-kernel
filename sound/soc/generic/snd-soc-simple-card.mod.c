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
	{ 0xb077e70a, __VMLINUX_SYMBOL_STR(clk_unprepare) },
	{ 0xff820182, __VMLINUX_SYMBOL_STR(devm_snd_soc_register_card) },
	{ 0x815588a6, __VMLINUX_SYMBOL_STR(clk_enable) },
	{ 0x202f231e, __VMLINUX_SYMBOL_STR(asoc_simple_card_canonicalize_dailink) },
	{ 0xca081713, __VMLINUX_SYMBOL_STR(snd_soc_of_parse_audio_simple_widgets) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x4d519b7f, __VMLINUX_SYMBOL_STR(asoc_simple_card_canonicalize_cpu) },
	{ 0x16e06b09, __VMLINUX_SYMBOL_STR(of_parse_phandle) },
	{ 0xd85953f7, __VMLINUX_SYMBOL_STR(asoc_simple_card_clean_reference) },
	{ 0xaec37e92, __VMLINUX_SYMBOL_STR(snd_soc_pm_ops) },
	{ 0xb6e6d99d, __VMLINUX_SYMBOL_STR(clk_disable) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x837bc10d, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0x752aeb9e, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x95302095, __VMLINUX_SYMBOL_STR(of_device_is_available) },
	{ 0x1f97d8b9, __VMLINUX_SYMBOL_STR(of_find_property) },
	{ 0x3e4a23ee, __VMLINUX_SYMBOL_STR(asoc_simple_card_set_dailink_name) },
	{ 0x77b5037e, __VMLINUX_SYMBOL_STR(of_get_child_by_name) },
	{ 0x5af93fbe, __VMLINUX_SYMBOL_STR(asoc_simple_card_init_dai) },
	{ 0xdd1f7498, __VMLINUX_SYMBOL_STR(asoc_simple_card_parse_clk) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xfd5b2c90, __VMLINUX_SYMBOL_STR(asoc_simple_card_parse_daifmt) },
	{ 0xe99916b9, __VMLINUX_SYMBOL_STR(of_get_next_child) },
	{ 0x7c9a7371, __VMLINUX_SYMBOL_STR(clk_prepare) },
	{ 0xf3fc38b8, __VMLINUX_SYMBOL_STR(of_get_named_gpio_flags) },
	{ 0xd843fa3f, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x7a94f6dd, __VMLINUX_SYMBOL_STR(snd_soc_dai_set_sysclk) },
	{ 0x77a495f9, __VMLINUX_SYMBOL_STR(snd_soc_of_parse_audio_routing) },
	{  0x9d570, __VMLINUX_SYMBOL_STR(snd_soc_card_jack_new) },
	{ 0xf52ac89e, __VMLINUX_SYMBOL_STR(snd_soc_jack_add_gpios) },
	{ 0xc53b21bb, __VMLINUX_SYMBOL_STR(asoc_simple_card_parse_card_name) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xacf4d5a0, __VMLINUX_SYMBOL_STR(snd_soc_jack_free_gpios) },
	{ 0x36cf4f03, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0x2deb66d0, __VMLINUX_SYMBOL_STR(of_property_read_variable_u32_array) },
	{ 0x42e28e96, __VMLINUX_SYMBOL_STR(of_node_put) },
	{ 0xc43902e8, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0xac49a9f8, __VMLINUX_SYMBOL_STR(snd_soc_of_parse_tdm_slot) },
	{ 0x72cff9af, __VMLINUX_SYMBOL_STR(asoc_simple_card_parse_dai) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-soc-core,snd-soc-simple-card-utils";

MODULE_ALIAS("of:N*T*Csimple-audio-card");
MODULE_ALIAS("of:N*T*Csimple-audio-cardC*");
