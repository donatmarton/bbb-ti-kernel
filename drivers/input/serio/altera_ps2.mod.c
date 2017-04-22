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
	{ 0x36cf4f03, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0x837bc10d, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0x752aeb9e, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x8e2f6f62, __VMLINUX_SYMBOL_STR(__serio_register_port) },
	{ 0x857b0b4c, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x147fb690, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xf6789fdc, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x9776d7e2, __VMLINUX_SYMBOL_STR(devm_request_threaded_irq) },
	{ 0x21cfb03e, __VMLINUX_SYMBOL_STR(platform_get_irq) },
	{ 0xa7d99be2, __VMLINUX_SYMBOL_STR(devm_ioremap_resource) },
	{ 0x35dd5ad6, __VMLINUX_SYMBOL_STR(platform_get_resource) },
	{ 0xc43902e8, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x97d5575f, __VMLINUX_SYMBOL_STR(serio_interrupt) },
	{ 0x822137e2, __VMLINUX_SYMBOL_STR(arm_heavy_mb) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xa392dc46, __VMLINUX_SYMBOL_STR(serio_unregister_port) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("of:N*T*CALTR,ps2-1.0");
MODULE_ALIAS("of:N*T*CALTR,ps2-1.0C*");
MODULE_ALIAS("of:N*T*Caltr,ps2-1.0");
MODULE_ALIAS("of:N*T*Caltr,ps2-1.0C*");
