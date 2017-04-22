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
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x9b359cf1, __VMLINUX_SYMBOL_STR(__devm_regmap_init_spi) },
	{ 0xefe21d65, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x8b8409e7, __VMLINUX_SYMBOL_STR(snd_soc_dapm_get_enum_double) },
	{ 0x703b5194, __VMLINUX_SYMBOL_STR(i2c_del_driver) },
	{ 0xb0b9f4e0, __VMLINUX_SYMBOL_STR(snd_soc_dapm_get_volsw) },
	{ 0xf3b439c1, __VMLINUX_SYMBOL_STR(regmap_update_bits_base) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0x36e4c428, __VMLINUX_SYMBOL_STR(__spi_register_driver) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x8fdf772a, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0xa0744ea9, __VMLINUX_SYMBOL_STR(cancel_delayed_work_sync) },
	{ 0xbfc95dc, __VMLINUX_SYMBOL_STR(snd_soc_put_volsw) },
	{ 0xfade4e54, __VMLINUX_SYMBOL_STR(snd_soc_get_volsw) },
	{ 0x1f56eb37, __VMLINUX_SYMBOL_STR(snd_soc_info_enum_double) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0x1623b586, __VMLINUX_SYMBOL_STR(snd_soc_read) },
	{ 0x752aeb9e, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xcb7edbf4, __VMLINUX_SYMBOL_STR(snd_soc_update_bits) },
	{ 0xce9e09ef, __VMLINUX_SYMBOL_STR(driver_unregister) },
	{ 0xae27d878, __VMLINUX_SYMBOL_STR(snd_soc_dapm_put_volsw) },
	{ 0x59e5070d, __VMLINUX_SYMBOL_STR(__do_div64) },
	{ 0x3630ef7f, __VMLINUX_SYMBOL_STR(snd_soc_info_volsw) },
	{ 0xc619b572, __VMLINUX_SYMBOL_STR(i2c_register_driver) },
	{ 0x44f8f548, __VMLINUX_SYMBOL_STR(snd_soc_get_enum_double) },
	{ 0x85d472aa, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0x3663792, __VMLINUX_SYMBOL_STR(__devm_regmap_init_i2c) },
	{ 0xf748472c, __VMLINUX_SYMBOL_STR(flush_delayed_work) },
	{ 0x71c8e518, __VMLINUX_SYMBOL_STR(snd_soc_unregister_codec) },
	{ 0xf60353e7, __VMLINUX_SYMBOL_STR(snd_soc_put_enum_double) },
	{ 0x7f02188f, __VMLINUX_SYMBOL_STR(__msecs_to_jiffies) },
	{ 0x1ab7336f, __VMLINUX_SYMBOL_STR(snd_soc_register_codec) },
	{ 0xc43902e8, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0xd07664d1, __VMLINUX_SYMBOL_STR(regcache_sync) },
	{ 0x47b4ad05, __VMLINUX_SYMBOL_STR(snd_soc_write) },
	{ 0x35a74721, __VMLINUX_SYMBOL_STR(snd_soc_dapm_put_enum_double) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-pcm,snd-soc-core";

MODULE_ALIAS("of:N*T*Cwlf,wm8753");
MODULE_ALIAS("of:N*T*Cwlf,wm8753C*");
MODULE_ALIAS("i2c:wm8753");
