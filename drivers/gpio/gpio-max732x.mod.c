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
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xaa7d42d1, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0xc4bbd13f, __VMLINUX_SYMBOL_STR(gpiochip_add_data) },
	{ 0xd843fa3f, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0xdcf0bf2f, __VMLINUX_SYMBOL_STR(i2c_new_dummy) },
	{ 0x5a32f871, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0xc43902e8, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0xe186c597, __VMLINUX_SYMBOL_STR(i2c_smbus_read_byte) },
	{ 0xdbe8baac, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xc966c3bd, __VMLINUX_SYMBOL_STR(i2c_smbus_write_byte) },
	{ 0xfed0a669, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x8af3b585, __VMLINUX_SYMBOL_STR(gpiochip_get_data) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x752aeb9e, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xea977d1c, __VMLINUX_SYMBOL_STR(i2c_unregister_device) },
	{ 0xbae5955a, __VMLINUX_SYMBOL_STR(gpiochip_remove) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("of:N*T*Cmaxim,max7319");
MODULE_ALIAS("of:N*T*Cmaxim,max7319C*");
MODULE_ALIAS("of:N*T*Cmaxim,max7320");
MODULE_ALIAS("of:N*T*Cmaxim,max7320C*");
MODULE_ALIAS("of:N*T*Cmaxim,max7321");
MODULE_ALIAS("of:N*T*Cmaxim,max7321C*");
MODULE_ALIAS("of:N*T*Cmaxim,max7322");
MODULE_ALIAS("of:N*T*Cmaxim,max7322C*");
MODULE_ALIAS("of:N*T*Cmaxim,max7323");
MODULE_ALIAS("of:N*T*Cmaxim,max7323C*");
MODULE_ALIAS("of:N*T*Cmaxim,max7324");
MODULE_ALIAS("of:N*T*Cmaxim,max7324C*");
MODULE_ALIAS("of:N*T*Cmaxim,max7325");
MODULE_ALIAS("of:N*T*Cmaxim,max7325C*");
MODULE_ALIAS("of:N*T*Cmaxim,max7326");
MODULE_ALIAS("of:N*T*Cmaxim,max7326C*");
MODULE_ALIAS("of:N*T*Cmaxim,max7327");
MODULE_ALIAS("of:N*T*Cmaxim,max7327C*");
MODULE_ALIAS("i2c:max7319");
MODULE_ALIAS("i2c:max7320");
MODULE_ALIAS("i2c:max7321");
MODULE_ALIAS("i2c:max7322");
MODULE_ALIAS("i2c:max7323");
MODULE_ALIAS("i2c:max7324");
MODULE_ALIAS("i2c:max7325");
MODULE_ALIAS("i2c:max7326");
MODULE_ALIAS("i2c:max7327");
