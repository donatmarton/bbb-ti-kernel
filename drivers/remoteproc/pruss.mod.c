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
	{ 0x3fd97816, __VMLINUX_SYMBOL_STR(of_platform_populate) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x16e06b09, __VMLINUX_SYMBOL_STR(of_parse_phandle) },
	{ 0xa7d99be2, __VMLINUX_SYMBOL_STR(devm_ioremap_resource) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xdbe8baac, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x837bc10d, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x752aeb9e, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x95302095, __VMLINUX_SYMBOL_STR(of_device_is_available) },
	{ 0x5a32f871, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0xfed0a669, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x521445b, __VMLINUX_SYMBOL_STR(list_del) },
	{ 0x131152af, __VMLINUX_SYMBOL_STR(of_match_device) },
	{ 0x857b0b4c, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xf8dfe3ad, __VMLINUX_SYMBOL_STR(put_device) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xe99916b9, __VMLINUX_SYMBOL_STR(of_get_next_child) },
	{ 0xd843fa3f, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x4d5cb16c, __VMLINUX_SYMBOL_STR(of_platform_depopulate) },
	{ 0x657b2089, __VMLINUX_SYMBOL_STR(get_device) },
	{ 0xb2cffb18, __VMLINUX_SYMBOL_STR(platform_get_resource_byname) },
	{ 0xfb59a5b7, __VMLINUX_SYMBOL_STR(dma_supported) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xe3dfe433, __VMLINUX_SYMBOL_STR(of_property_match_string) },
	{ 0x16d5da11, __VMLINUX_SYMBOL_STR(of_find_device_by_node) },
	{ 0x36cf4f03, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0x42e28e96, __VMLINUX_SYMBOL_STR(of_node_put) },
	{ 0xc43902e8, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("of:N*T*Cti,am3356-pruss");
MODULE_ALIAS("of:N*T*Cti,am3356-prussC*");
MODULE_ALIAS("of:N*T*Cti,am4376-pruss");
MODULE_ALIAS("of:N*T*Cti,am4376-prussC*");
MODULE_ALIAS("of:N*T*Cti,am5728-pruss");
MODULE_ALIAS("of:N*T*Cti,am5728-prussC*");
MODULE_ALIAS("of:N*T*Cti,k2g-pruss");
MODULE_ALIAS("of:N*T*Cti,k2g-prussC*");
