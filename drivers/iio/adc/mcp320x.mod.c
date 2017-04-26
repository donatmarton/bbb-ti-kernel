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
	{ 0x2060d6e7, __VMLINUX_SYMBOL_STR(driver_unregister) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb4b743ae, __VMLINUX_SYMBOL_STR(__spi_register_driver) },
	{ 0x36ec1661, __VMLINUX_SYMBOL_STR(iio_device_register) },
	{ 0xdc798d37, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x9e5d01d, __VMLINUX_SYMBOL_STR(regulator_enable) },
	{ 0xf05fd8a6, __VMLINUX_SYMBOL_STR(devm_regulator_get) },
	{ 0xbd7f1641, __VMLINUX_SYMBOL_STR(devm_iio_device_alloc) },
	{ 0x62b72b0d, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x8c663951, __VMLINUX_SYMBOL_STR(regulator_get_voltage) },
	{ 0x6ada6489, __VMLINUX_SYMBOL_STR(spi_get_device_id) },
	{ 0xe16b893b, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x963133a1, __VMLINUX_SYMBOL_STR(spi_sync) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x61b3905f, __VMLINUX_SYMBOL_STR(regulator_disable) },
	{ 0x684a2bb7, __VMLINUX_SYMBOL_STR(iio_device_unregister) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=industrialio";

MODULE_ALIAS("spi:mcp3001");
MODULE_ALIAS("spi:mcp3002");
MODULE_ALIAS("spi:mcp3004");
MODULE_ALIAS("spi:mcp3008");
MODULE_ALIAS("spi:mcp3201");
MODULE_ALIAS("spi:mcp3202");
MODULE_ALIAS("spi:mcp3204");
MODULE_ALIAS("spi:mcp3208");
MODULE_ALIAS("spi:mcp3301");
MODULE_ALIAS("of:N*T*Cmcp3001*");
MODULE_ALIAS("of:N*T*Cmcp3002*");
MODULE_ALIAS("of:N*T*Cmcp3004*");
MODULE_ALIAS("of:N*T*Cmcp3008*");
MODULE_ALIAS("of:N*T*Cmcp3201*");
MODULE_ALIAS("of:N*T*Cmcp3202*");
MODULE_ALIAS("of:N*T*Cmcp3204*");
MODULE_ALIAS("of:N*T*Cmcp3208*");
MODULE_ALIAS("of:N*T*Cmcp3301*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp3001*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp3002*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp3004*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp3008*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp3201*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp3202*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp3204*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp3208*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp3301*");
