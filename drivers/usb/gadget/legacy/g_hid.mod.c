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
	{ 0xf6789fdc, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xbd6a4636, __VMLINUX_SYMBOL_STR(usb_add_config) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xe3e67981, __VMLINUX_SYMBOL_STR(__platform_driver_probe) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0xf028fc8a, __VMLINUX_SYMBOL_STR(usb_otg_descriptor_init) },
	{ 0x820dcad, __VMLINUX_SYMBOL_STR(param_ops_charp) },
	{ 0xffb76eee, __VMLINUX_SYMBOL_STR(usb_put_function_instance) },
	{ 0x752aeb9e, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x521445b, __VMLINUX_SYMBOL_STR(list_del) },
	{ 0xfd1f530e, __VMLINUX_SYMBOL_STR(usb_otg_descriptor_alloc) },
	{ 0x5b06e16b, __VMLINUX_SYMBOL_STR(usb_composite_overwrite_options) },
	{ 0x857b0b4c, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x9136dcd6, __VMLINUX_SYMBOL_STR(usb_composite_probe) },
	{ 0x99111502, __VMLINUX_SYMBOL_STR(usb_add_function) },
	{ 0x970b8835, __VMLINUX_SYMBOL_STR(usb_put_function) },
	{ 0xcad3bff8, __VMLINUX_SYMBOL_STR(usb_composite_unregister) },
	{ 0x147fb690, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x977fb8e8, __VMLINUX_SYMBOL_STR(usb_get_function) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xcdb360e, __VMLINUX_SYMBOL_STR(usb_string_ids_tab) },
	{ 0x73b7e824, __VMLINUX_SYMBOL_STR(usb_get_function_instance) },
	{ 0x5e2cca6d, __VMLINUX_SYMBOL_STR(param_ops_ushort) },
	{ 0x36cf4f03, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0xb3d41edf, __VMLINUX_SYMBOL_STR(usb_remove_function) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libcomposite";

