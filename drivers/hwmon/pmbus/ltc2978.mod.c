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
	{ 0xc31b5fb6, __VMLINUX_SYMBOL_STR(pmbus_do_remove) },
	{ 0x5223c747, __VMLINUX_SYMBOL_STR(pmbus_regulator_ops) },
	{ 0x89cd8667, __VMLINUX_SYMBOL_STR(i2c_del_driver) },
	{ 0x9d41e38f, __VMLINUX_SYMBOL_STR(i2c_register_driver) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xef1e4705, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x2aa0e4fc, __VMLINUX_SYMBOL_STR(strncasecmp) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x84b183ae, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0x943b982a, __VMLINUX_SYMBOL_STR(i2c_smbus_read_block_data) },
	{ 0xa59a1c6e, __VMLINUX_SYMBOL_STR(pmbus_do_probe) },
	{ 0x2f0664db, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0xc9dfcbec, __VMLINUX_SYMBOL_STR(i2c_smbus_read_word_data) },
	{ 0x8caa767c, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x40398f54, __VMLINUX_SYMBOL_STR(pmbus_write_byte) },
	{ 0x5977238c, __VMLINUX_SYMBOL_STR(pmbus_read_word_data) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x12a38747, __VMLINUX_SYMBOL_STR(usleep_range) },
	{ 0x26c6d648, __VMLINUX_SYMBOL_STR(pmbus_read_byte_data) },
	{ 0x26f3929, __VMLINUX_SYMBOL_STR(pmbus_get_driver_info) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=pmbus_core";

MODULE_ALIAS("of:N*T*Clltc,ltc2974*");
MODULE_ALIAS("of:N*T*Clltc,ltc2975*");
MODULE_ALIAS("of:N*T*Clltc,ltc2977*");
MODULE_ALIAS("of:N*T*Clltc,ltc2978*");
MODULE_ALIAS("of:N*T*Clltc,ltc2980*");
MODULE_ALIAS("of:N*T*Clltc,ltc3880*");
MODULE_ALIAS("of:N*T*Clltc,ltc3882*");
MODULE_ALIAS("of:N*T*Clltc,ltc3883*");
MODULE_ALIAS("of:N*T*Clltc,ltc3886*");
MODULE_ALIAS("of:N*T*Clltc,ltc3887*");
MODULE_ALIAS("of:N*T*Clltc,ltm2987*");
MODULE_ALIAS("of:N*T*Clltc,ltm4675*");
MODULE_ALIAS("of:N*T*Clltc,ltm4676*");
MODULE_ALIAS("i2c:ltc2974");
MODULE_ALIAS("i2c:ltc2975");
MODULE_ALIAS("i2c:ltc2977");
MODULE_ALIAS("i2c:ltc2978");
MODULE_ALIAS("i2c:ltc2980");
MODULE_ALIAS("i2c:ltc3880");
MODULE_ALIAS("i2c:ltc3882");
MODULE_ALIAS("i2c:ltc3883");
MODULE_ALIAS("i2c:ltc3886");
MODULE_ALIAS("i2c:ltc3887");
MODULE_ALIAS("i2c:ltm2987");
MODULE_ALIAS("i2c:ltm4675");
MODULE_ALIAS("i2c:ltm4676");
