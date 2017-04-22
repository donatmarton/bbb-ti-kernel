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
	{ 0x703b5194, __VMLINUX_SYMBOL_STR(i2c_del_driver) },
	{ 0xc619b572, __VMLINUX_SYMBOL_STR(i2c_register_driver) },
	{ 0xbf39463, __VMLINUX_SYMBOL_STR(i2c_smbus_read_word_data) },
	{ 0x6651f0dd, __VMLINUX_SYMBOL_STR(i2c_smbus_write_byte_data) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x752aeb9e, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x45404215, __VMLINUX_SYMBOL_STR(devm_iio_device_register) },
	{ 0x6afb3f25, __VMLINUX_SYMBOL_STR(of_device_get_match_data) },
	{ 0x131152af, __VMLINUX_SYMBOL_STR(of_match_device) },
	{ 0x88d156ca, __VMLINUX_SYMBOL_STR(devm_iio_device_alloc) },
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
MODULE_ALIAS("i2c:mcp4541-502");
MODULE_ALIAS("i2c:mcp4541-103");
MODULE_ALIAS("i2c:mcp4541-503");
MODULE_ALIAS("i2c:mcp4541-104");
MODULE_ALIAS("i2c:mcp4542-502");
MODULE_ALIAS("i2c:mcp4542-103");
MODULE_ALIAS("i2c:mcp4542-503");
MODULE_ALIAS("i2c:mcp4542-104");
MODULE_ALIAS("i2c:mcp4551-502");
MODULE_ALIAS("i2c:mcp4551-103");
MODULE_ALIAS("i2c:mcp4551-503");
MODULE_ALIAS("i2c:mcp4551-104");
MODULE_ALIAS("i2c:mcp4552-502");
MODULE_ALIAS("i2c:mcp4552-103");
MODULE_ALIAS("i2c:mcp4552-503");
MODULE_ALIAS("i2c:mcp4552-104");
MODULE_ALIAS("i2c:mcp4561-502");
MODULE_ALIAS("i2c:mcp4561-103");
MODULE_ALIAS("i2c:mcp4561-503");
MODULE_ALIAS("i2c:mcp4561-104");
MODULE_ALIAS("i2c:mcp4562-502");
MODULE_ALIAS("i2c:mcp4562-103");
MODULE_ALIAS("i2c:mcp4562-503");
MODULE_ALIAS("i2c:mcp4562-104");
MODULE_ALIAS("i2c:mcp4631-502");
MODULE_ALIAS("i2c:mcp4631-103");
MODULE_ALIAS("i2c:mcp4631-503");
MODULE_ALIAS("i2c:mcp4631-104");
MODULE_ALIAS("i2c:mcp4632-502");
MODULE_ALIAS("i2c:mcp4632-103");
MODULE_ALIAS("i2c:mcp4632-503");
MODULE_ALIAS("i2c:mcp4632-104");
MODULE_ALIAS("i2c:mcp4641-502");
MODULE_ALIAS("i2c:mcp4641-103");
MODULE_ALIAS("i2c:mcp4641-503");
MODULE_ALIAS("i2c:mcp4641-104");
MODULE_ALIAS("i2c:mcp4642-502");
MODULE_ALIAS("i2c:mcp4642-103");
MODULE_ALIAS("i2c:mcp4642-503");
MODULE_ALIAS("i2c:mcp4642-104");
MODULE_ALIAS("i2c:mcp4651-502");
MODULE_ALIAS("i2c:mcp4651-103");
MODULE_ALIAS("i2c:mcp4651-503");
MODULE_ALIAS("i2c:mcp4651-104");
MODULE_ALIAS("i2c:mcp4652-502");
MODULE_ALIAS("i2c:mcp4652-103");
MODULE_ALIAS("i2c:mcp4652-503");
MODULE_ALIAS("i2c:mcp4652-104");
MODULE_ALIAS("i2c:mcp4661-502");
MODULE_ALIAS("i2c:mcp4661-103");
MODULE_ALIAS("i2c:mcp4661-503");
MODULE_ALIAS("i2c:mcp4661-104");
MODULE_ALIAS("i2c:mcp4662-502");
MODULE_ALIAS("i2c:mcp4662-103");
MODULE_ALIAS("i2c:mcp4662-503");
MODULE_ALIAS("i2c:mcp4662-104");
