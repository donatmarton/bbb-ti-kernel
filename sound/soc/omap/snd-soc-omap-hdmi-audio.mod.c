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
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x2e4194bc, __VMLINUX_SYMBOL_STR(snd_pcm_hw_constraint_step) },
	{ 0x4c040a03, __VMLINUX_SYMBOL_STR(of_alias_get_id) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xdbe8baac, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xe079b293, __VMLINUX_SYMBOL_STR(snd_soc_register_component) },
	{ 0x8fb6c99f, __VMLINUX_SYMBOL_STR(devm_kasprintf) },
	{ 0x837bc10d, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x752aeb9e, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x5a32f871, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xfed0a669, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xd79adb8b, __VMLINUX_SYMBOL_STR(snd_soc_unregister_card) },
	{ 0x4ef9133b, __VMLINUX_SYMBOL_STR(snd_soc_unregister_component) },
	{ 0x2f0a776e, __VMLINUX_SYMBOL_STR(snd_pcm_stream_lock_irq) },
	{ 0x4628d1e5, __VMLINUX_SYMBOL_STR(snd_pcm_stream_unlock_irq) },
	{ 0x58d7447c, __VMLINUX_SYMBOL_STR(snd_pcm_stop) },
	{ 0x36cf4f03, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0x441af902, __VMLINUX_SYMBOL_STR(omap_pcm_platform_register) },
	{ 0xc43902e8, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x9b70ce47, __VMLINUX_SYMBOL_STR(snd_soc_register_card) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-pcm,snd-soc-core,snd-soc-omap";

