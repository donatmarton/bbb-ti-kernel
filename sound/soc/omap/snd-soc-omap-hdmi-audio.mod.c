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
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x3de4b42, __VMLINUX_SYMBOL_STR(snd_pcm_hw_constraint_step) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x62b72b0d, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x424d076a, __VMLINUX_SYMBOL_STR(snd_soc_register_component) },
	{ 0x54b04308, __VMLINUX_SYMBOL_STR(devm_kasprintf) },
	{ 0x4a4a4bd, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xef1e4705, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xdc798d37, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xe16b893b, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x37243ed5, __VMLINUX_SYMBOL_STR(snd_soc_unregister_card) },
	{ 0x41f2c7f, __VMLINUX_SYMBOL_STR(snd_soc_unregister_component) },
	{ 0x3ef014d9, __VMLINUX_SYMBOL_STR(snd_pcm_stream_lock_irq) },
	{ 0x43eb5afa, __VMLINUX_SYMBOL_STR(snd_pcm_stream_unlock_irq) },
	{ 0xdd2da9c7, __VMLINUX_SYMBOL_STR(snd_pcm_stop) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xd945909, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0x6cfe7286, __VMLINUX_SYMBOL_STR(omap_pcm_platform_register) },
	{ 0x8caa767c, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0xda606ed2, __VMLINUX_SYMBOL_STR(snd_soc_register_card) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-pcm,snd-soc-core,snd-soc-omap";

