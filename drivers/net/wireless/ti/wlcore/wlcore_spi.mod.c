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
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x49e6b372, __VMLINUX_SYMBOL_STR(regulator_disable) },
	{ 0x66213969, __VMLINUX_SYMBOL_STR(crc7_be) },
	{ 0x36e4c428, __VMLINUX_SYMBOL_STR(__spi_register_driver) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x2300dd19, __VMLINUX_SYMBOL_STR(spi_setup) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x752aeb9e, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x86b4fb27, __VMLINUX_SYMBOL_STR(of_match_node) },
	{ 0x1f97d8b9, __VMLINUX_SYMBOL_STR(of_find_property) },
	{ 0xcf95234a, __VMLINUX_SYMBOL_STR(platform_device_alloc) },
	{ 0xce9e09ef, __VMLINUX_SYMBOL_STR(driver_unregister) },
	{ 0xbeafd254, __VMLINUX_SYMBOL_STR(platform_device_add) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x5a1164a5, __VMLINUX_SYMBOL_STR(irq_get_irq_data) },
	{ 0xce098205, __VMLINUX_SYMBOL_STR(platform_device_unregister) },
	{ 0x8de5b447, __VMLINUX_SYMBOL_STR(spi_sync) },
	{ 0x278ac11b, __VMLINUX_SYMBOL_STR(platform_device_add_resources) },
	{ 0x857b0b4c, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xea22191c, __VMLINUX_SYMBOL_STR(devm_regulator_get) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x3c088924, __VMLINUX_SYMBOL_STR(platform_device_add_data) },
	{ 0x147fb690, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x2deb66d0, __VMLINUX_SYMBOL_STR(of_property_read_variable_u32_array) },
	{ 0xc43902e8, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0xdcd88a5e, __VMLINUX_SYMBOL_STR(regulator_enable) },
	{ 0x80484abb, __VMLINUX_SYMBOL_STR(platform_device_put) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=crc7";

MODULE_ALIAS("of:N*T*Cti,wl1271");
MODULE_ALIAS("of:N*T*Cti,wl1271C*");
MODULE_ALIAS("of:N*T*Cti,wl1273");
MODULE_ALIAS("of:N*T*Cti,wl1273C*");
MODULE_ALIAS("of:N*T*Cti,wl1281");
MODULE_ALIAS("of:N*T*Cti,wl1281C*");
MODULE_ALIAS("of:N*T*Cti,wl1283");
MODULE_ALIAS("of:N*T*Cti,wl1283C*");
MODULE_ALIAS("of:N*T*Cti,wl1801");
MODULE_ALIAS("of:N*T*Cti,wl1801C*");
MODULE_ALIAS("of:N*T*Cti,wl1805");
MODULE_ALIAS("of:N*T*Cti,wl1805C*");
MODULE_ALIAS("of:N*T*Cti,wl1807");
MODULE_ALIAS("of:N*T*Cti,wl1807C*");
MODULE_ALIAS("of:N*T*Cti,wl1831");
MODULE_ALIAS("of:N*T*Cti,wl1831C*");
MODULE_ALIAS("of:N*T*Cti,wl1835");
MODULE_ALIAS("of:N*T*Cti,wl1835C*");
MODULE_ALIAS("of:N*T*Cti,wl1837");
MODULE_ALIAS("of:N*T*Cti,wl1837C*");
