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
	{ 0xe56a9336, __VMLINUX_SYMBOL_STR(snd_pcm_format_width) },
	{ 0xff178f6, __VMLINUX_SYMBOL_STR(__aeabi_idivmod) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x8b8409e7, __VMLINUX_SYMBOL_STR(snd_soc_dapm_get_enum_double) },
	{ 0x703b5194, __VMLINUX_SYMBOL_STR(i2c_del_driver) },
	{ 0xb0b9f4e0, __VMLINUX_SYMBOL_STR(snd_soc_dapm_get_volsw) },
	{ 0x94199677, __VMLINUX_SYMBOL_STR(gpio_to_desc) },
	{ 0x16a96132, __VMLINUX_SYMBOL_STR(regulator_register_notifier) },
	{ 0x67b1fb41, __VMLINUX_SYMBOL_STR(snd_soc_add_codec_controls) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x215ee2a6, __VMLINUX_SYMBOL_STR(snd_soc_dapm_new_controls) },
	{ 0xbfc95dc, __VMLINUX_SYMBOL_STR(snd_soc_put_volsw) },
	{ 0xa1746f8a, __VMLINUX_SYMBOL_STR(regmap_read) },
	{ 0xfade4e54, __VMLINUX_SYMBOL_STR(snd_soc_get_volsw) },
	{ 0x40872778, __VMLINUX_SYMBOL_STR(devm_regulator_bulk_get) },
	{ 0xc2756b50, __VMLINUX_SYMBOL_STR(regulator_bulk_enable) },
	{ 0x1f56eb37, __VMLINUX_SYMBOL_STR(snd_soc_info_enum_double) },
	{ 0x60ac1618, __VMLINUX_SYMBOL_STR(regulator_unregister_notifier) },
	{ 0xeb8d1cff, __VMLINUX_SYMBOL_STR(snd_soc_dapm_add_routes) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0x752aeb9e, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xcb7edbf4, __VMLINUX_SYMBOL_STR(snd_soc_update_bits) },
	{ 0xae27d878, __VMLINUX_SYMBOL_STR(snd_soc_dapm_put_volsw) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0xe44ce5b8, __VMLINUX_SYMBOL_STR(devm_gpio_request_one) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0x3630ef7f, __VMLINUX_SYMBOL_STR(snd_soc_info_volsw) },
	{ 0xc619b572, __VMLINUX_SYMBOL_STR(i2c_register_driver) },
	{ 0x119d2cf1, __VMLINUX_SYMBOL_STR(regulator_bulk_disable) },
	{ 0x12a38747, __VMLINUX_SYMBOL_STR(usleep_range) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x3663792, __VMLINUX_SYMBOL_STR(__devm_regmap_init_i2c) },
	{ 0xf3fc38b8, __VMLINUX_SYMBOL_STR(of_get_named_gpio_flags) },
	{ 0xd843fa3f, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x71c8e518, __VMLINUX_SYMBOL_STR(snd_soc_unregister_codec) },
	{ 0xc8269f94, __VMLINUX_SYMBOL_STR(snd_soc_params_to_frame_size) },
	{ 0x1bfaf4a, __VMLINUX_SYMBOL_STR(regcache_mark_dirty) },
	{ 0x732514b2, __VMLINUX_SYMBOL_STR(gpiod_set_raw_value) },
	{ 0xde962e13, __VMLINUX_SYMBOL_STR(dev_alert) },
	{ 0xaa7d42d1, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x2deb66d0, __VMLINUX_SYMBOL_STR(of_property_read_variable_u32_array) },
	{ 0x1ab7336f, __VMLINUX_SYMBOL_STR(snd_soc_register_codec) },
	{ 0xc43902e8, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0xd07664d1, __VMLINUX_SYMBOL_STR(regcache_sync) },
	{ 0x159007b0, __VMLINUX_SYMBOL_STR(regcache_cache_only) },
	{ 0x47b4ad05, __VMLINUX_SYMBOL_STR(snd_soc_write) },
	{ 0x35a74721, __VMLINUX_SYMBOL_STR(snd_soc_dapm_put_enum_double) },
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
MODULE_ALIAS("i2c:tlv320dac3100");
MODULE_ALIAS("of:N*T*Cti,tlv320aic310x");
MODULE_ALIAS("of:N*T*Cti,tlv320aic310xC*");
MODULE_ALIAS("of:N*T*Cti,tlv320aic311x");
MODULE_ALIAS("of:N*T*Cti,tlv320aic311xC*");
MODULE_ALIAS("of:N*T*Cti,tlv320aic3100");
MODULE_ALIAS("of:N*T*Cti,tlv320aic3100C*");
MODULE_ALIAS("of:N*T*Cti,tlv320aic3110");
MODULE_ALIAS("of:N*T*Cti,tlv320aic3110C*");
MODULE_ALIAS("of:N*T*Cti,tlv320aic3120");
MODULE_ALIAS("of:N*T*Cti,tlv320aic3120C*");
MODULE_ALIAS("of:N*T*Cti,tlv320aic3111");
MODULE_ALIAS("of:N*T*Cti,tlv320aic3111C*");
