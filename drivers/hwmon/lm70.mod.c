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
	{ 0xce9e09ef, __VMLINUX_SYMBOL_STR(driver_unregister) },
	{ 0x36e4c428, __VMLINUX_SYMBOL_STR(__spi_register_driver) },
	{ 0x1e8c0eb, __VMLINUX_SYMBOL_STR(spi_get_device_id) },
	{ 0x230d36bb, __VMLINUX_SYMBOL_STR(devm_hwmon_device_register_with_groups) },
	{ 0x5a32f871, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0xc43902e8, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x131152af, __VMLINUX_SYMBOL_STR(of_match_device) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xdbe8baac, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xd843fa3f, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0xe98ad5f5, __VMLINUX_SYMBOL_STR(spi_write_then_read) },
	{ 0xbe2b4186, __VMLINUX_SYMBOL_STR(mutex_lock_interruptible) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("spi:lm70");
MODULE_ALIAS("spi:tmp121");
MODULE_ALIAS("spi:lm71");
MODULE_ALIAS("spi:lm74");
MODULE_ALIAS("of:N*T*Cti,lm70");
MODULE_ALIAS("of:N*T*Cti,lm70C*");
MODULE_ALIAS("of:N*T*Cti,tmp121");
MODULE_ALIAS("of:N*T*Cti,tmp121C*");
MODULE_ALIAS("of:N*T*Cti,lm71");
MODULE_ALIAS("of:N*T*Cti,lm71C*");
MODULE_ALIAS("of:N*T*Cti,lm74");
MODULE_ALIAS("of:N*T*Cti,lm74C*");
