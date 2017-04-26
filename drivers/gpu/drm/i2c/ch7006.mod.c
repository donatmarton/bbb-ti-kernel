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
	{ 0x591bd40b, __VMLINUX_SYMBOL_STR(i2c_master_send) },
	{ 0x7b8c3a36, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x7e42e836, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x89cd8667, __VMLINUX_SYMBOL_STR(i2c_del_driver) },
	{ 0xd8bdde0b, __VMLINUX_SYMBOL_STR(dev_printk) },
	{ 0x27131f9f, __VMLINUX_SYMBOL_STR(drm_property_create_range) },
	{ 0xd479fe49, __VMLINUX_SYMBOL_STR(drm_helper_probe_single_connector_modes) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x47151c38, __VMLINUX_SYMBOL_STR(drm_object_property_set_value) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x54614509, __VMLINUX_SYMBOL_STR(param_ops_charp) },
	{ 0xef1e4705, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x717c75cb, __VMLINUX_SYMBOL_STR(drm_object_attach_property) },
	{ 0xe0d033c4, __VMLINUX_SYMBOL_STR(drm_mode_duplicate) },
	{ 0x2935c39d, __VMLINUX_SYMBOL_STR(drm_mode_create_tv_properties) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0x59e5070d, __VMLINUX_SYMBOL_STR(__do_div64) },
	{ 0x9d41e38f, __VMLINUX_SYMBOL_STR(i2c_register_driver) },
	{ 0xc9e4f0cb, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x772f7545, __VMLINUX_SYMBOL_STR(drm_i2c_encoder_destroy) },
	{ 0xcaa1a2be, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x2cf3f76d, __VMLINUX_SYMBOL_STR(i2c_master_recv) },
	{ 0x18a976ee, __VMLINUX_SYMBOL_STR(drm_mode_set_config_internal) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x3221a238, __VMLINUX_SYMBOL_STR(drm_property_destroy) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xc6dc78a7, __VMLINUX_SYMBOL_STR(drm_mode_probed_add) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("i2c:ch7006");
