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
	{ 0x2f59eea2, __VMLINUX_SYMBOL_STR(omapdss_default_get_resolution) },
	{ 0x36cf4f03, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0x837bc10d, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0xe722db89, __VMLINUX_SYMBOL_STR(omapdss_of_find_source_for_first_ep) },
	{ 0x752aeb9e, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x456e47a6, __VMLINUX_SYMBOL_STR(omapdss_register_display) },
	{ 0xea03ffd8, __VMLINUX_SYMBOL_STR(omap_dss_find_output) },
	{ 0xc43902e8, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0xb157033, __VMLINUX_SYMBOL_STR(omap_dss_put_device) },
	{ 0x913faeeb, __VMLINUX_SYMBOL_STR(omapdss_unregister_display) },
	{ 0xd843fa3f, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("of:N*T*Comapdss,svideo-connector");
MODULE_ALIAS("of:N*T*Comapdss,svideo-connectorC*");
MODULE_ALIAS("of:N*T*Comapdss,composite-video-connector");
MODULE_ALIAS("of:N*T*Comapdss,composite-video-connectorC*");
