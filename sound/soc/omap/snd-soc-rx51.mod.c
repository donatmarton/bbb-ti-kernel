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
	{ 0xd31ccb06, __VMLINUX_SYMBOL_STR(of_machine_is_compatible) },
	{ 0x88504fd4, __VMLINUX_SYMBOL_STR(devm_snd_soc_register_card) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x14253ae5, __VMLINUX_SYMBOL_STR(of_parse_phandle) },
	{ 0x5d84eb74, __VMLINUX_SYMBOL_STR(snd_soc_dapm_info_pin_switch) },
	{ 0xfaf5573e, __VMLINUX_SYMBOL_STR(snd_soc_dapm_put_pin_switch) },
	{ 0x7761004e, __VMLINUX_SYMBOL_STR(devm_gpiod_get) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x62b72b0d, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x2f3d72dd, __VMLINUX_SYMBOL_STR(desc_to_gpio) },
	{ 0x4a4a4bd, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0x12b0d0d0, __VMLINUX_SYMBOL_STR(snd_soc_info_enum_double) },
	{ 0xef1e4705, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x95e95975, __VMLINUX_SYMBOL_STR(tpa6130a2_stereo_enable) },
	{ 0x5478b500, __VMLINUX_SYMBOL_STR(snd_soc_dapm_disable_pin_unlocked) },
	{ 0xe16b893b, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x2f398acd, __VMLINUX_SYMBOL_STR(snd_soc_dapm_get_pin_switch) },
	{ 0x5e0dcd8e, __VMLINUX_SYMBOL_STR(tpa6130a2_add_controls) },
	{ 0xf4c08b19, __VMLINUX_SYMBOL_STR(snd_soc_dapm_enable_pin_unlocked) },
	{ 0x763405c7, __VMLINUX_SYMBOL_STR(devm_gpiod_put) },
	{ 0xcdd1d0ff, __VMLINUX_SYMBOL_STR(snd_soc_dai_set_sysclk) },
	{ 0xe3dcd2cc, __VMLINUX_SYMBOL_STR(omap_mcbsp_st_add_controls) },
	{ 0xedbd9bd6, __VMLINUX_SYMBOL_STR(snd_soc_card_jack_new) },
	{ 0xd118991, __VMLINUX_SYMBOL_STR(snd_soc_dapm_sync_unlocked) },
	{ 0xde5879c1, __VMLINUX_SYMBOL_STR(snd_pcm_hw_constraint_minmax) },
	{ 0x7b03b01a, __VMLINUX_SYMBOL_STR(snd_soc_jack_add_gpios) },
	{ 0xd653691b, __VMLINUX_SYMBOL_STR(gpiod_set_raw_value_cansleep) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x3a7e08bb, __VMLINUX_SYMBOL_STR(snd_soc_limit_volume) },
	{ 0x23e8e64c, __VMLINUX_SYMBOL_STR(snd_soc_jack_free_gpios) },
	{ 0xd945909, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0x393e4e36, __VMLINUX_SYMBOL_STR(gpiod_set_value) },
	{ 0x8caa767c, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-soc-core,snd-soc-tpa6130a2,snd-soc-omap-mcbsp,snd-pcm";

MODULE_ALIAS("of:N*T*Cnokia,n900-audio*");
