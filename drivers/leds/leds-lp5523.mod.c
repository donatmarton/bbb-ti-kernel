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
	{ 0x253cfee1, __VMLINUX_SYMBOL_STR(lp55xx_unregister_sysfs) },
	{ 0x84b183ae, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0x996bdb64, __VMLINUX_SYMBOL_STR(_kstrtoul) },
	{ 0x466b4dc6, __VMLINUX_SYMBOL_STR(lp55xx_of_populate_pdata) },
	{ 0x49637624, __VMLINUX_SYMBOL_STR(lp55xx_deinit_device) },
	{ 0xc7ab9c5b, __VMLINUX_SYMBOL_STR(lp55xx_unregister_leds) },
	{ 0x9ab49cdb, __VMLINUX_SYMBOL_STR(lp55xx_register_sysfs) },
	{ 0x873a46e1, __VMLINUX_SYMBOL_STR(lp55xx_register_leds) },
	{ 0x857b0b4c, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x235b7fec, __VMLINUX_SYMBOL_STR(lp55xx_init_device) },
	{ 0x5a32f871, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0xc43902e8, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x752aeb9e, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x20c55ae0, __VMLINUX_SYMBOL_STR(sscanf) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x60974c7e, __VMLINUX_SYMBOL_STR(lp55xx_read) },
	{ 0xdbe8baac, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xfed0a669, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x12a38747, __VMLINUX_SYMBOL_STR(usleep_range) },
	{ 0x819f2e4, __VMLINUX_SYMBOL_STR(lp55xx_update_bits) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x142532a7, __VMLINUX_SYMBOL_STR(lp55xx_write) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=leds-lp55xx-common";

MODULE_ALIAS("of:N*T*Cnational,lp5523");
MODULE_ALIAS("of:N*T*Cnational,lp5523C*");
MODULE_ALIAS("of:N*T*Cti,lp55231");
MODULE_ALIAS("of:N*T*Cti,lp55231C*");
MODULE_ALIAS("i2c:lp5523");
MODULE_ALIAS("i2c:lp55231");
