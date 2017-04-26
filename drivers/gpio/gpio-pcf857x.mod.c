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
	{ 0x653f4470, __VMLINUX_SYMBOL_STR(gpiochip_set_chained_irqchip) },
	{ 0x2f0664db, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0xb62a6155, __VMLINUX_SYMBOL_STR(devm_request_threaded_irq) },
	{ 0x9a16af61, __VMLINUX_SYMBOL_STR(_gpiochip_irqchip_add) },
	{ 0xeb067b09, __VMLINUX_SYMBOL_STR(handle_level_irq) },
	{ 0xc9e4f0cb, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x815d1ee0, __VMLINUX_SYMBOL_STR(gpiochip_add) },
	{ 0xdc798d37, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x8caa767c, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x4f161c0a, __VMLINUX_SYMBOL_STR(of_property_read_u32_array) },
	{ 0x2cf3f76d, __VMLINUX_SYMBOL_STR(i2c_master_recv) },
	{ 0x495f13ac, __VMLINUX_SYMBOL_STR(i2c_smbus_write_byte) },
	{ 0x591bd40b, __VMLINUX_SYMBOL_STR(i2c_master_send) },
	{ 0xc7da6011, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0xce2840e7, __VMLINUX_SYMBOL_STR(irq_set_irq_wake) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xd3f57a2, __VMLINUX_SYMBOL_STR(_find_next_bit_le) },
	{ 0x549525ef, __VMLINUX_SYMBOL_STR(handle_nested_irq) },
	{ 0x59014ab1, __VMLINUX_SYMBOL_STR(irq_find_mapping) },
	{ 0x6d662533, __VMLINUX_SYMBOL_STR(_find_first_bit_le) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x62b72b0d, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xe16b893b, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x2f7aab7b, __VMLINUX_SYMBOL_STR(i2c_smbus_read_byte) },
	{ 0xef1e4705, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x9c51c7cc, __VMLINUX_SYMBOL_STR(gpiochip_remove) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("of:N*T*Cnxp,pcf8574*");
MODULE_ALIAS("of:N*T*Cnxp,pcf8574a*");
MODULE_ALIAS("of:N*T*Cnxp,pca8574*");
MODULE_ALIAS("of:N*T*Cnxp,pca9670*");
MODULE_ALIAS("of:N*T*Cnxp,pca9672*");
MODULE_ALIAS("of:N*T*Cnxp,pca9674*");
MODULE_ALIAS("of:N*T*Cnxp,pcf8575*");
MODULE_ALIAS("of:N*T*Cnxp,pca8575*");
MODULE_ALIAS("of:N*T*Cnxp,pca9671*");
MODULE_ALIAS("of:N*T*Cnxp,pca9673*");
MODULE_ALIAS("of:N*T*Cnxp,pca9675*");
MODULE_ALIAS("of:N*T*Cmaxim,max7328*");
MODULE_ALIAS("of:N*T*Cmaxim,max7329*");
MODULE_ALIAS("of:N*T*Cti,tca9554*");
MODULE_ALIAS("i2c:pcf8574");
MODULE_ALIAS("i2c:pcf8574a");
MODULE_ALIAS("i2c:pca8574");
MODULE_ALIAS("i2c:pca9670");
MODULE_ALIAS("i2c:pca9672");
MODULE_ALIAS("i2c:pca9674");
MODULE_ALIAS("i2c:pcf8575");
MODULE_ALIAS("i2c:pca8575");
MODULE_ALIAS("i2c:pca9671");
MODULE_ALIAS("i2c:pca9673");
MODULE_ALIAS("i2c:pca9675");
MODULE_ALIAS("i2c:max7328");
MODULE_ALIAS("i2c:max7329");
MODULE_ALIAS("i2c:tca9554");
