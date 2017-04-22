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
	{ 0xd31ccb06, __VMLINUX_SYMBOL_STR(of_machine_is_compatible) },
	{ 0xff820182, __VMLINUX_SYMBOL_STR(devm_snd_soc_register_card) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x16e06b09, __VMLINUX_SYMBOL_STR(of_parse_phandle) },
	{ 0x161cdce9, __VMLINUX_SYMBOL_STR(snd_soc_dapm_info_pin_switch) },
	{ 0xa963b3f7, __VMLINUX_SYMBOL_STR(snd_soc_dapm_put_pin_switch) },
	{ 0xa6eeef47, __VMLINUX_SYMBOL_STR(devm_gpiod_get) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xdbe8baac, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x65234a50, __VMLINUX_SYMBOL_STR(desc_to_gpio) },
	{ 0x837bc10d, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0x1f56eb37, __VMLINUX_SYMBOL_STR(snd_soc_info_enum_double) },
	{ 0x752aeb9e, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x3e650df1, __VMLINUX_SYMBOL_STR(snd_soc_dapm_disable_pin_unlocked) },
	{ 0xfed0a669, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x813d6585, __VMLINUX_SYMBOL_STR(snd_soc_dapm_get_pin_switch) },
	{ 0x122f7c9f, __VMLINUX_SYMBOL_STR(snd_soc_dapm_enable_pin_unlocked) },
	{ 0x12d87485, __VMLINUX_SYMBOL_STR(devm_gpiod_put) },
	{ 0x7a94f6dd, __VMLINUX_SYMBOL_STR(snd_soc_dai_set_sysclk) },
	{ 0x389fbc9c, __VMLINUX_SYMBOL_STR(omap_mcbsp_st_add_controls) },
	{  0x9d570, __VMLINUX_SYMBOL_STR(snd_soc_card_jack_new) },
	{ 0x22b43ced, __VMLINUX_SYMBOL_STR(snd_soc_dapm_sync_unlocked) },
	{ 0xd292808e, __VMLINUX_SYMBOL_STR(snd_pcm_hw_constraint_minmax) },
	{ 0xf52ac89e, __VMLINUX_SYMBOL_STR(snd_soc_jack_add_gpios) },
	{ 0x9a824727, __VMLINUX_SYMBOL_STR(gpiod_set_raw_value_cansleep) },
	{ 0x75aca3aa, __VMLINUX_SYMBOL_STR(snd_soc_limit_volume) },
	{ 0xacf4d5a0, __VMLINUX_SYMBOL_STR(snd_soc_jack_free_gpios) },
	{ 0x36cf4f03, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0x5e1e522a, __VMLINUX_SYMBOL_STR(gpiod_set_value) },
	{ 0xc43902e8, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-soc-core,snd-soc-omap-mcbsp,snd-pcm";

MODULE_ALIAS("of:N*T*Cnokia,n900-audio");
MODULE_ALIAS("of:N*T*Cnokia,n900-audioC*");
