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
	{ 0xff820182, __VMLINUX_SYMBOL_STR(devm_snd_soc_register_card) },
	{ 0x56a49c82, __VMLINUX_SYMBOL_STR(snd_soc_of_parse_card_name) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x16e06b09, __VMLINUX_SYMBOL_STR(of_parse_phandle) },
	{ 0xaec37e92, __VMLINUX_SYMBOL_STR(snd_soc_pm_ops) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xa632cc41, __VMLINUX_SYMBOL_STR(platform_device_register_full) },
	{ 0x837bc10d, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0x7238b819, __VMLINUX_SYMBOL_STR(twl6040_get_clk_id) },
	{ 0xeb8d1cff, __VMLINUX_SYMBOL_STR(snd_soc_dapm_add_routes) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x752aeb9e, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xece44e52, __VMLINUX_SYMBOL_STR(twl6040_hs_jack_detect) },
	{ 0x52f8b0e7, __VMLINUX_SYMBOL_STR(omap_mcpdm_configure_dn_offsets) },
	{ 0x1f97d8b9, __VMLINUX_SYMBOL_STR(of_find_property) },
	{ 0xce098205, __VMLINUX_SYMBOL_STR(platform_device_unregister) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x7a94f6dd, __VMLINUX_SYMBOL_STR(snd_soc_dai_set_sysclk) },
	{ 0x77a495f9, __VMLINUX_SYMBOL_STR(snd_soc_of_parse_audio_routing) },
	{  0x9d570, __VMLINUX_SYMBOL_STR(snd_soc_card_jack_new) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x36cf4f03, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0xe8427203, __VMLINUX_SYMBOL_STR(twl6040_get_trim_value) },
	{ 0x2deb66d0, __VMLINUX_SYMBOL_STR(of_property_read_variable_u32_array) },
	{ 0xc43902e8, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-soc-core,snd-soc-twl6040,snd-soc-omap-mcpdm";

MODULE_ALIAS("of:N*T*Cti,abe-twl6040");
MODULE_ALIAS("of:N*T*Cti,abe-twl6040C*");
