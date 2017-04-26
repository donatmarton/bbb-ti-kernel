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
	{ 0x89cd8667, __VMLINUX_SYMBOL_STR(i2c_del_driver) },
	{ 0x9d41e38f, __VMLINUX_SYMBOL_STR(i2c_register_driver) },
	{ 0xc9dfcbec, __VMLINUX_SYMBOL_STR(i2c_smbus_read_word_data) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xd1b3c58f, __VMLINUX_SYMBOL_STR(i2c_smbus_write_byte_data) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xef1e4705, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xe70c1110, __VMLINUX_SYMBOL_STR(devm_iio_device_register) },
	{ 0xbd7f1641, __VMLINUX_SYMBOL_STR(devm_iio_device_alloc) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=industrialio";

MODULE_ALIAS("i2c:mcp4531-502");
MODULE_ALIAS("i2c:mcp4531-103");
MODULE_ALIAS("i2c:mcp4531-503");
MODULE_ALIAS("i2c:mcp4531-104");
MODULE_ALIAS("i2c:mcp4532-502");
MODULE_ALIAS("i2c:mcp4532-103");
MODULE_ALIAS("i2c:mcp4532-503");
MODULE_ALIAS("i2c:mcp4532-104");
MODULE_ALIAS("i2c:mcp4551-502");
MODULE_ALIAS("i2c:mcp4551-103");
MODULE_ALIAS("i2c:mcp4551-503");
MODULE_ALIAS("i2c:mcp4551-104");
MODULE_ALIAS("i2c:mcp4552-502");
MODULE_ALIAS("i2c:mcp4552-103");
MODULE_ALIAS("i2c:mcp4552-503");
MODULE_ALIAS("i2c:mcp4552-104");
MODULE_ALIAS("i2c:mcp4631-502");
MODULE_ALIAS("i2c:mcp4631-103");
MODULE_ALIAS("i2c:mcp4631-503");
MODULE_ALIAS("i2c:mcp4631-104");
MODULE_ALIAS("i2c:mcp4632-502");
MODULE_ALIAS("i2c:mcp4632-103");
MODULE_ALIAS("i2c:mcp4632-503");
MODULE_ALIAS("i2c:mcp4632-104");
MODULE_ALIAS("i2c:mcp4651-502");
MODULE_ALIAS("i2c:mcp4651-103");
MODULE_ALIAS("i2c:mcp4651-503");
MODULE_ALIAS("i2c:mcp4651-104");
MODULE_ALIAS("i2c:mcp4652-502");
MODULE_ALIAS("i2c:mcp4652-103");
MODULE_ALIAS("i2c:mcp4652-503");
MODULE_ALIAS("i2c:mcp4652-104");
