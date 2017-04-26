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
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x9d41e38f, __VMLINUX_SYMBOL_STR(i2c_register_driver) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xc7da6011, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x2f0664db, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x815d1ee0, __VMLINUX_SYMBOL_STR(gpiochip_add) },
	{ 0xb7980949, __VMLINUX_SYMBOL_STR(i2c_new_dummy) },
	{ 0xdc798d37, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x8caa767c, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x2f7aab7b, __VMLINUX_SYMBOL_STR(i2c_smbus_read_byte) },
	{ 0x62b72b0d, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x495f13ac, __VMLINUX_SYMBOL_STR(i2c_smbus_write_byte) },
	{ 0xe16b893b, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xef1e4705, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x62ac395e, __VMLINUX_SYMBOL_STR(i2c_unregister_device) },
	{ 0x9c51c7cc, __VMLINUX_SYMBOL_STR(gpiochip_remove) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("of:N*T*Cmaxim,max7319*");
MODULE_ALIAS("of:N*T*Cmaxim,max7320*");
MODULE_ALIAS("of:N*T*Cmaxim,max7321*");
MODULE_ALIAS("of:N*T*Cmaxim,max7322*");
MODULE_ALIAS("of:N*T*Cmaxim,max7323*");
MODULE_ALIAS("of:N*T*Cmaxim,max7324*");
MODULE_ALIAS("of:N*T*Cmaxim,max7325*");
MODULE_ALIAS("of:N*T*Cmaxim,max7326*");
MODULE_ALIAS("of:N*T*Cmaxim,max7327*");
MODULE_ALIAS("i2c:max7319");
MODULE_ALIAS("i2c:max7320");
MODULE_ALIAS("i2c:max7321");
MODULE_ALIAS("i2c:max7322");
MODULE_ALIAS("i2c:max7323");
MODULE_ALIAS("i2c:max7324");
MODULE_ALIAS("i2c:max7325");
MODULE_ALIAS("i2c:max7326");
MODULE_ALIAS("i2c:max7327");
