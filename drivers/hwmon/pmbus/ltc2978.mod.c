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
	{ 0xcec66914, __VMLINUX_SYMBOL_STR(pmbus_do_remove) },
	{ 0xad9a9040, __VMLINUX_SYMBOL_STR(pmbus_regulator_ops) },
	{ 0x703b5194, __VMLINUX_SYMBOL_STR(i2c_del_driver) },
	{ 0xc619b572, __VMLINUX_SYMBOL_STR(i2c_register_driver) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x2aa0e4fc, __VMLINUX_SYMBOL_STR(strncasecmp) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x84b183ae, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0x32269d5b, __VMLINUX_SYMBOL_STR(i2c_smbus_read_block_data) },
	{ 0x752aeb9e, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xab6fd388, __VMLINUX_SYMBOL_STR(pmbus_do_probe) },
	{ 0xaa7d42d1, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0xbf39463, __VMLINUX_SYMBOL_STR(i2c_smbus_read_word_data) },
	{ 0xc43902e8, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xa0ff041f, __VMLINUX_SYMBOL_STR(pmbus_write_byte) },
	{ 0xa5576e90, __VMLINUX_SYMBOL_STR(pmbus_read_word_data) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x12a38747, __VMLINUX_SYMBOL_STR(usleep_range) },
	{ 0x520f3458, __VMLINUX_SYMBOL_STR(pmbus_read_byte_data) },
	{ 0x635c36a1, __VMLINUX_SYMBOL_STR(pmbus_get_driver_info) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=pmbus_core";

MODULE_ALIAS("of:N*T*Clltc,ltc2974");
MODULE_ALIAS("of:N*T*Clltc,ltc2974C*");
MODULE_ALIAS("of:N*T*Clltc,ltc2975");
MODULE_ALIAS("of:N*T*Clltc,ltc2975C*");
MODULE_ALIAS("of:N*T*Clltc,ltc2977");
MODULE_ALIAS("of:N*T*Clltc,ltc2977C*");
MODULE_ALIAS("of:N*T*Clltc,ltc2978");
MODULE_ALIAS("of:N*T*Clltc,ltc2978C*");
MODULE_ALIAS("of:N*T*Clltc,ltc2980");
MODULE_ALIAS("of:N*T*Clltc,ltc2980C*");
MODULE_ALIAS("of:N*T*Clltc,ltc3880");
MODULE_ALIAS("of:N*T*Clltc,ltc3880C*");
MODULE_ALIAS("of:N*T*Clltc,ltc3882");
MODULE_ALIAS("of:N*T*Clltc,ltc3882C*");
MODULE_ALIAS("of:N*T*Clltc,ltc3883");
MODULE_ALIAS("of:N*T*Clltc,ltc3883C*");
MODULE_ALIAS("of:N*T*Clltc,ltc3886");
MODULE_ALIAS("of:N*T*Clltc,ltc3886C*");
MODULE_ALIAS("of:N*T*Clltc,ltc3887");
MODULE_ALIAS("of:N*T*Clltc,ltc3887C*");
MODULE_ALIAS("of:N*T*Clltc,ltm2987");
MODULE_ALIAS("of:N*T*Clltc,ltm2987C*");
MODULE_ALIAS("of:N*T*Clltc,ltm4675");
MODULE_ALIAS("of:N*T*Clltc,ltm4675C*");
MODULE_ALIAS("of:N*T*Clltc,ltm4676");
MODULE_ALIAS("of:N*T*Clltc,ltm4676C*");
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
