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
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xc471c67a, __VMLINUX_SYMBOL_STR(twl4030_audio_disable_resource) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x712701ab, __VMLINUX_SYMBOL_STR(snd_soc_dapm_get_enum_double) },
	{ 0x3acdf325, __VMLINUX_SYMBOL_STR(twl4030_audio_enable_resource) },
	{ 0xbaaa7662, __VMLINUX_SYMBOL_STR(snd_soc_dapm_get_volsw) },
	{ 0xfaed45a9, __VMLINUX_SYMBOL_STR(gpio_to_desc) },
	{ 0x4f161c0a, __VMLINUX_SYMBOL_STR(of_property_read_u32_array) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x403f9529, __VMLINUX_SYMBOL_STR(gpio_request_one) },
	{ 0xc7563db8, __VMLINUX_SYMBOL_STR(twl_set_regcache_bypass) },
	{ 0xc0823e4c, __VMLINUX_SYMBOL_STR(twl_i2c_write) },
	{ 0xf2ca7a41, __VMLINUX_SYMBOL_STR(snd_soc_put_volsw) },
	{ 0x48b5f8d, __VMLINUX_SYMBOL_STR(twl4030_audio_get_mclk) },
	{ 0x1a08a9ce, __VMLINUX_SYMBOL_STR(snd_soc_get_volsw) },
	{ 0x4a4a4bd, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0x12b0d0d0, __VMLINUX_SYMBOL_STR(snd_soc_info_enum_double) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0xe5f1a284, __VMLINUX_SYMBOL_STR(snd_soc_read) },
	{ 0xef1e4705, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xb7e30bce, __VMLINUX_SYMBOL_STR(snd_soc_update_bits) },
	{ 0x872fb51e, __VMLINUX_SYMBOL_STR(snd_soc_dapm_put_volsw) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0xdd05857f, __VMLINUX_SYMBOL_STR(snd_soc_info_volsw) },
	{ 0x379fa154, __VMLINUX_SYMBOL_STR(snd_soc_get_enum_double) },
	{ 0x12a38747, __VMLINUX_SYMBOL_STR(usleep_range) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x7c98845d, __VMLINUX_SYMBOL_STR(twl_i2c_read) },
	{ 0x81e373bd, __VMLINUX_SYMBOL_STR(of_get_named_gpio_flags) },
	{ 0xc9082d0d, __VMLINUX_SYMBOL_STR(snd_soc_unregister_codec) },
	{ 0xfe990052, __VMLINUX_SYMBOL_STR(gpio_free) },
	{ 0x6d99a545, __VMLINUX_SYMBOL_STR(snd_soc_put_enum_double) },
	{ 0x22461ce0, __VMLINUX_SYMBOL_STR(of_find_node_by_name) },
	{ 0xefac7c4c, __VMLINUX_SYMBOL_STR(gpiod_set_raw_value) },
	{ 0xde5879c1, __VMLINUX_SYMBOL_STR(snd_pcm_hw_constraint_minmax) },
	{ 0x2f0664db, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xd945909, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0x51610043, __VMLINUX_SYMBOL_STR(snd_soc_register_codec) },
	{ 0x8caa767c, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x55466ed0, __VMLINUX_SYMBOL_STR(snd_soc_dapm_put_enum_double) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-pcm,snd-soc-core";

