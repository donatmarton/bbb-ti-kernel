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
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x62b72b0d, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x963133a1, __VMLINUX_SYMBOL_STR(spi_sync) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xe16b893b, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xc9e4f0cb, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xe70c1110, __VMLINUX_SYMBOL_STR(devm_iio_device_register) },
	{ 0xdc798d37, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0xbd7f1641, __VMLINUX_SYMBOL_STR(devm_iio_device_alloc) },
	{ 0x6ada6489, __VMLINUX_SYMBOL_STR(spi_get_device_id) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=industrialio";

MODULE_ALIAS("spi:mcp4131-502");
MODULE_ALIAS("spi:mcp4131-103");
MODULE_ALIAS("spi:mcp4131-503");
MODULE_ALIAS("spi:mcp4131-104");
MODULE_ALIAS("spi:mcp4132-502");
MODULE_ALIAS("spi:mcp4132-103");
MODULE_ALIAS("spi:mcp4132-503");
MODULE_ALIAS("spi:mcp4132-104");
MODULE_ALIAS("spi:mcp4141-502");
MODULE_ALIAS("spi:mcp4141-103");
MODULE_ALIAS("spi:mcp4141-503");
MODULE_ALIAS("spi:mcp4141-104");
MODULE_ALIAS("spi:mcp4142-502");
MODULE_ALIAS("spi:mcp4142-103");
MODULE_ALIAS("spi:mcp4142-503");
MODULE_ALIAS("spi:mcp4142-104");
MODULE_ALIAS("spi:mcp4151-502");
MODULE_ALIAS("spi:mcp4151-103");
MODULE_ALIAS("spi:mcp4151-503");
MODULE_ALIAS("spi:mcp4151-104");
MODULE_ALIAS("spi:mcp4152-502");
MODULE_ALIAS("spi:mcp4152-103");
MODULE_ALIAS("spi:mcp4152-503");
MODULE_ALIAS("spi:mcp4152-104");
MODULE_ALIAS("spi:mcp4161-502");
MODULE_ALIAS("spi:mcp4161-103");
MODULE_ALIAS("spi:mcp4161-503");
MODULE_ALIAS("spi:mcp4161-104");
MODULE_ALIAS("spi:mcp4162-502");
MODULE_ALIAS("spi:mcp4162-103");
MODULE_ALIAS("spi:mcp4162-503");
MODULE_ALIAS("spi:mcp4162-104");
MODULE_ALIAS("spi:mcp4231-502");
MODULE_ALIAS("spi:mcp4231-103");
MODULE_ALIAS("spi:mcp4231-503");
MODULE_ALIAS("spi:mcp4231-104");
MODULE_ALIAS("spi:mcp4232-502");
MODULE_ALIAS("spi:mcp4232-103");
MODULE_ALIAS("spi:mcp4232-503");
MODULE_ALIAS("spi:mcp4232-104");
MODULE_ALIAS("spi:mcp4241-502");
MODULE_ALIAS("spi:mcp4241-103");
MODULE_ALIAS("spi:mcp4241-503");
MODULE_ALIAS("spi:mcp4241-104");
MODULE_ALIAS("spi:mcp4242-502");
MODULE_ALIAS("spi:mcp4242-103");
MODULE_ALIAS("spi:mcp4242-503");
MODULE_ALIAS("spi:mcp4242-104");
MODULE_ALIAS("spi:mcp4251-502");
MODULE_ALIAS("spi:mcp4251-103");
MODULE_ALIAS("spi:mcp4251-503");
MODULE_ALIAS("spi:mcp4251-104");
MODULE_ALIAS("spi:mcp4252-502");
MODULE_ALIAS("spi:mcp4252-103");
MODULE_ALIAS("spi:mcp4252-503");
MODULE_ALIAS("spi:mcp4252-104");
MODULE_ALIAS("spi:mcp4261-502");
MODULE_ALIAS("spi:mcp4261-103");
MODULE_ALIAS("spi:mcp4261-503");
MODULE_ALIAS("spi:mcp4261-104");
MODULE_ALIAS("spi:mcp4262-502");
MODULE_ALIAS("spi:mcp4262-103");
MODULE_ALIAS("spi:mcp4262-503");
MODULE_ALIAS("spi:mcp4262-104");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4131-502*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4131-103*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4131-503*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4131-104*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4132-502*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4132-103*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4132-503*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4132-104*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4141-502*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4141-103*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4141-503*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4141-104*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4142-502*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4142-103*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4142-503*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4142-104*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4151-502*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4151-103*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4151-503*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4151-104*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4152-502*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4152-103*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4152-503*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4152-104*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4161-502*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4161-103*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4161-503*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4161-104*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4162-502*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4162-103*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4162-503*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4162-104*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4231-502*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4231-103*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4231-503*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4231-104*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4232-502*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4232-103*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4232-503*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4232-104*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4241-502*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4241-103*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4241-503*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4241-104*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4242-502*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4242-103*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4242-503*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4242-104*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4251-502*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4251-103*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4251-503*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4251-104*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4252-502*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4252-103*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4252-503*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4252-104*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4261-502*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4261-103*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4261-503*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4261-104*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4262-502*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4262-103*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4262-503*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4262-104*");
