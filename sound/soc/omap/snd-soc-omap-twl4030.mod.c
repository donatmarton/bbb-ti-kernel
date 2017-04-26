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
	{ 0x88504fd4, __VMLINUX_SYMBOL_STR(devm_snd_soc_register_card) },
	{ 0xa2df77f9, __VMLINUX_SYMBOL_STR(snd_soc_of_parse_card_name) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x14253ae5, __VMLINUX_SYMBOL_STR(of_parse_phandle) },
	{ 0xa30d697a, __VMLINUX_SYMBOL_STR(snd_soc_pm_ops) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x4a4a4bd, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0xef1e4705, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xaeb4e64d, __VMLINUX_SYMBOL_STR(of_find_property) },
	{ 0xd8d73e48, __VMLINUX_SYMBOL_STR(snd_soc_runtime_set_dai_fmt) },
	{ 0x81e373bd, __VMLINUX_SYMBOL_STR(of_get_named_gpio_flags) },
	{ 0x1325cc84, __VMLINUX_SYMBOL_STR(snd_soc_of_parse_audio_routing) },
	{ 0xedbd9bd6, __VMLINUX_SYMBOL_STR(snd_soc_card_jack_new) },
	{ 0xb50584d5, __VMLINUX_SYMBOL_STR(snd_soc_dapm_disable_pin) },
	{ 0x7b03b01a, __VMLINUX_SYMBOL_STR(snd_soc_jack_add_gpios) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x23e8e64c, __VMLINUX_SYMBOL_STR(snd_soc_jack_free_gpios) },
	{ 0xd945909, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0x8caa767c, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-soc-core";

MODULE_ALIAS("of:N*T*Cti,omap-twl4030*");
