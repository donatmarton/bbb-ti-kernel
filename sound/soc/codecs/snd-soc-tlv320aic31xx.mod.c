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
	{ 0xe56a9336, __VMLINUX_SYMBOL_STR(snd_pcm_format_width) },
	{ 0xff178f6, __VMLINUX_SYMBOL_STR(__aeabi_idivmod) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x712701ab, __VMLINUX_SYMBOL_STR(snd_soc_dapm_get_enum_double) },
	{ 0x89cd8667, __VMLINUX_SYMBOL_STR(i2c_del_driver) },
	{ 0xbaaa7662, __VMLINUX_SYMBOL_STR(snd_soc_dapm_get_volsw) },
	{ 0xfaed45a9, __VMLINUX_SYMBOL_STR(gpio_to_desc) },
	{ 0x4eb1373d, __VMLINUX_SYMBOL_STR(regulator_register_notifier) },
	{ 0xf6147221, __VMLINUX_SYMBOL_STR(snd_soc_add_codec_controls) },
	{ 0x4f161c0a, __VMLINUX_SYMBOL_STR(of_property_read_u32_array) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xcd3eda52, __VMLINUX_SYMBOL_STR(snd_soc_dapm_new_controls) },
	{ 0xf2ca7a41, __VMLINUX_SYMBOL_STR(snd_soc_put_volsw) },
	{ 0x33e2d8fe, __VMLINUX_SYMBOL_STR(regmap_read) },
	{ 0x1a08a9ce, __VMLINUX_SYMBOL_STR(snd_soc_get_volsw) },
	{ 0xac385690, __VMLINUX_SYMBOL_STR(devm_regulator_bulk_get) },
	{ 0x5278e086, __VMLINUX_SYMBOL_STR(regulator_bulk_enable) },
	{ 0x12b0d0d0, __VMLINUX_SYMBOL_STR(snd_soc_info_enum_double) },
	{ 0x76eb2dd1, __VMLINUX_SYMBOL_STR(regulator_unregister_notifier) },
	{ 0xbbabc5d8, __VMLINUX_SYMBOL_STR(snd_soc_dapm_add_routes) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0xef1e4705, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xb7e30bce, __VMLINUX_SYMBOL_STR(snd_soc_update_bits) },
	{ 0x872fb51e, __VMLINUX_SYMBOL_STR(snd_soc_dapm_put_volsw) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0x8e376325, __VMLINUX_SYMBOL_STR(devm_gpio_request_one) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0xdd05857f, __VMLINUX_SYMBOL_STR(snd_soc_info_volsw) },
	{ 0x9d41e38f, __VMLINUX_SYMBOL_STR(i2c_register_driver) },
	{ 0x34317eea, __VMLINUX_SYMBOL_STR(regulator_bulk_disable) },
	{ 0x12a38747, __VMLINUX_SYMBOL_STR(usleep_range) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x5870b9ef, __VMLINUX_SYMBOL_STR(__devm_regmap_init_i2c) },
	{ 0x81e373bd, __VMLINUX_SYMBOL_STR(of_get_named_gpio_flags) },
	{ 0xc7da6011, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0xc9082d0d, __VMLINUX_SYMBOL_STR(snd_soc_unregister_codec) },
	{ 0xc8269f94, __VMLINUX_SYMBOL_STR(snd_soc_params_to_frame_size) },
	{ 0x9d05daca, __VMLINUX_SYMBOL_STR(regcache_mark_dirty) },
	{ 0xefac7c4c, __VMLINUX_SYMBOL_STR(gpiod_set_raw_value) },
	{ 0x91635320, __VMLINUX_SYMBOL_STR(dev_alert) },
	{ 0x2f0664db, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x51610043, __VMLINUX_SYMBOL_STR(snd_soc_register_codec) },
	{ 0x8caa767c, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x69be0f70, __VMLINUX_SYMBOL_STR(regcache_sync) },
	{ 0xe72f6ac7, __VMLINUX_SYMBOL_STR(regcache_cache_only) },
	{ 0x15f6b51a, __VMLINUX_SYMBOL_STR(snd_soc_write) },
	{ 0x55466ed0, __VMLINUX_SYMBOL_STR(snd_soc_dapm_put_enum_double) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-pcm,snd-soc-core";

MODULE_ALIAS("i2c:tlv320aic310x");
MODULE_ALIAS("i2c:tlv320aic311x");
MODULE_ALIAS("i2c:tlv320aic3100");
MODULE_ALIAS("i2c:tlv320aic3110");
MODULE_ALIAS("i2c:tlv320aic3120");
MODULE_ALIAS("i2c:tlv320aic3111");
MODULE_ALIAS("of:N*T*Cti,tlv320aic310x*");
MODULE_ALIAS("of:N*T*Cti,tlv320aic311x*");
MODULE_ALIAS("of:N*T*Cti,tlv320aic3100*");
MODULE_ALIAS("of:N*T*Cti,tlv320aic3110*");
MODULE_ALIAS("of:N*T*Cti,tlv320aic3120*");
MODULE_ALIAS("of:N*T*Cti,tlv320aic3111*");
