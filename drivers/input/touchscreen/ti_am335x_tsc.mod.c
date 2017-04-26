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
	{ 0xd945909, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x4a4a4bd, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0x2f0664db, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x6eba04b0, __VMLINUX_SYMBOL_STR(input_register_device) },
	{ 0x33694668, __VMLINUX_SYMBOL_STR(input_set_abs_params) },
	{ 0xd6b8e852, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0x4f161c0a, __VMLINUX_SYMBOL_STR(of_property_read_u32_array) },
	{ 0x8d221fda, __VMLINUX_SYMBOL_STR(input_free_device) },
	{ 0xef1e4705, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x30c0ddd6, __VMLINUX_SYMBOL_STR(input_allocate_device) },
	{ 0xcaa1a2be, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x7b8c3a36, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x310917fe, __VMLINUX_SYMBOL_STR(sort) },
	{ 0xf228c79, __VMLINUX_SYMBOL_STR(input_event) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x1d620657, __VMLINUX_SYMBOL_STR(input_unregister_device) },
	{ 0x90cc83b3, __VMLINUX_SYMBOL_STR(am335x_tsc_se_clr) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
	{ 0x39ecedfd, __VMLINUX_SYMBOL_STR(am335x_tsc_se_set_cache) },
	{ 0x822137e2, __VMLINUX_SYMBOL_STR(arm_heavy_mb) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ti_am335x_tscadc";

MODULE_ALIAS("of:N*T*Cti,am3359-tsc*");
