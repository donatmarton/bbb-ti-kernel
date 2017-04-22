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
	{ 0x75d3affc, __VMLINUX_SYMBOL_STR(param_array_ops) },
	{ 0xd84f325a, __VMLINUX_SYMBOL_STR(param_ops_ulong) },
	{ 0xefe21d65, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0xe34b5df8, __VMLINUX_SYMBOL_STR(param_ops_byte) },
	{ 0x36cf4f03, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0xce098205, __VMLINUX_SYMBOL_STR(platform_device_unregister) },
	{ 0x837bc10d, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0x69c03fc5, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x80484abb, __VMLINUX_SYMBOL_STR(platform_device_put) },
	{ 0xbeafd254, __VMLINUX_SYMBOL_STR(platform_device_add) },
	{ 0xcf95234a, __VMLINUX_SYMBOL_STR(platform_device_alloc) },
	{ 0x857b0b4c, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x79c5a9f0, __VMLINUX_SYMBOL_STR(ioremap) },
	{ 0xd843fa3f, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x752aeb9e, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xbde2b988, __VMLINUX_SYMBOL_STR(register_sja1000dev) },
	{ 0xb1960f39, __VMLINUX_SYMBOL_STR(alloc_sja1000dev) },
	{ 0x9416e1d8, __VMLINUX_SYMBOL_STR(__request_region) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x822137e2, __VMLINUX_SYMBOL_STR(arm_heavy_mb) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x85f74b00, __VMLINUX_SYMBOL_STR(iomem_resource) },
	{ 0xedc03953, __VMLINUX_SYMBOL_STR(iounmap) },
	{ 0xe52491bf, __VMLINUX_SYMBOL_STR(free_sja1000dev) },
	{ 0x2ab3cc9d, __VMLINUX_SYMBOL_STR(__release_region) },
	{ 0xc02c0b2a, __VMLINUX_SYMBOL_STR(ioport_resource) },
	{ 0x89145cca, __VMLINUX_SYMBOL_STR(unregister_sja1000dev) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=sja1000";

