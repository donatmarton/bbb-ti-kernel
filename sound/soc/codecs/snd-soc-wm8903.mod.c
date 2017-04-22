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
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x8b8409e7, __VMLINUX_SYMBOL_STR(snd_soc_dapm_get_enum_double) },
	{ 0x703b5194, __VMLINUX_SYMBOL_STR(i2c_del_driver) },
	{ 0xb0b9f4e0, __VMLINUX_SYMBOL_STR(snd_soc_dapm_get_volsw) },
	{ 0xf3b439c1, __VMLINUX_SYMBOL_STR(regmap_update_bits_base) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xdbe8baac, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xbfc95dc, __VMLINUX_SYMBOL_STR(snd_soc_put_volsw) },
	{ 0xa1746f8a, __VMLINUX_SYMBOL_STR(regmap_read) },
	{ 0xfade4e54, __VMLINUX_SYMBOL_STR(snd_soc_get_volsw) },
	{ 0xbae5955a, __VMLINUX_SYMBOL_STR(gpiochip_remove) },
	{ 0x1f56eb37, __VMLINUX_SYMBOL_STR(snd_soc_info_enum_double) },
	{ 0xf682e49a, __VMLINUX_SYMBOL_STR(snd_soc_dapm_kcontrol_dapm) },
	{ 0x1623b586, __VMLINUX_SYMBOL_STR(snd_soc_read) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x752aeb9e, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x5a32f871, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xcb7edbf4, __VMLINUX_SYMBOL_STR(snd_soc_update_bits) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xfed0a669, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xae27d878, __VMLINUX_SYMBOL_STR(snd_soc_dapm_put_volsw) },
	{ 0x5a1164a5, __VMLINUX_SYMBOL_STR(irq_get_irq_data) },
	{ 0xd6b8e852, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0xcf547f24, __VMLINUX_SYMBOL_STR(snd_ctl_boolean_mono_info) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0x8af3b585, __VMLINUX_SYMBOL_STR(gpiochip_get_data) },
	{ 0x3630ef7f, __VMLINUX_SYMBOL_STR(snd_soc_info_volsw) },
	{ 0xc619b572, __VMLINUX_SYMBOL_STR(i2c_register_driver) },
	{ 0x857b0b4c, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x44f8f548, __VMLINUX_SYMBOL_STR(snd_soc_get_enum_double) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x3663792, __VMLINUX_SYMBOL_STR(__devm_regmap_init_i2c) },
	{ 0xc4bbd13f, __VMLINUX_SYMBOL_STR(gpiochip_add_data) },
	{ 0xd843fa3f, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x71c8e518, __VMLINUX_SYMBOL_STR(snd_soc_unregister_codec) },
	{ 0xf60353e7, __VMLINUX_SYMBOL_STR(snd_soc_put_enum_double) },
	{ 0xaa7d42d1, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x52f1b428, __VMLINUX_SYMBOL_STR(snd_soc_jack_report) },
	{ 0x2deb66d0, __VMLINUX_SYMBOL_STR(of_property_read_variable_u32_array) },
	{ 0x1ab7336f, __VMLINUX_SYMBOL_STR(snd_soc_register_codec) },
	{ 0xc43902e8, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x20cc31ce, __VMLINUX_SYMBOL_STR(regmap_write) },
	{ 0xd07664d1, __VMLINUX_SYMBOL_STR(regcache_sync) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
	{ 0x47b4ad05, __VMLINUX_SYMBOL_STR(snd_soc_write) },
	{ 0x35a74721, __VMLINUX_SYMBOL_STR(snd_soc_dapm_put_enum_double) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-pcm,snd-soc-core,snd";

MODULE_ALIAS("i2c:wm8903");
MODULE_ALIAS("of:N*T*Cwlf,wm8903");
MODULE_ALIAS("of:N*T*Cwlf,wm8903C*");
