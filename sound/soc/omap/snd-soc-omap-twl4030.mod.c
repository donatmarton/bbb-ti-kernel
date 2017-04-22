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
	{ 0x837bc10d, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0x752aeb9e, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x1f97d8b9, __VMLINUX_SYMBOL_STR(of_find_property) },
	{ 0x80f99a4f, __VMLINUX_SYMBOL_STR(snd_soc_runtime_set_dai_fmt) },
	{ 0xf3fc38b8, __VMLINUX_SYMBOL_STR(of_get_named_gpio_flags) },
	{ 0x77a495f9, __VMLINUX_SYMBOL_STR(snd_soc_of_parse_audio_routing) },
	{  0x9d570, __VMLINUX_SYMBOL_STR(snd_soc_card_jack_new) },
	{ 0x321dccd8, __VMLINUX_SYMBOL_STR(snd_soc_dapm_disable_pin) },
	{ 0xf52ac89e, __VMLINUX_SYMBOL_STR(snd_soc_jack_add_gpios) },
	{ 0xacf4d5a0, __VMLINUX_SYMBOL_STR(snd_soc_jack_free_gpios) },
	{ 0x36cf4f03, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0xc43902e8, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-soc-core";

MODULE_ALIAS("of:N*T*Cti,omap-twl4030");
MODULE_ALIAS("of:N*T*Cti,omap-twl4030C*");
