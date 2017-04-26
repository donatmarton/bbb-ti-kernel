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
	{ 0xb9539d87, __VMLINUX_SYMBOL_STR(lp55xx_unregister_sysfs) },
	{ 0x982784ab, __VMLINUX_SYMBOL_STR(lp55xx_unregister_leds) },
	{ 0xa3d8b5ed, __VMLINUX_SYMBOL_STR(lp55xx_register_sysfs) },
	{ 0x82662b76, __VMLINUX_SYMBOL_STR(lp55xx_of_populate_pdata) },
	{ 0x9709f344, __VMLINUX_SYMBOL_STR(lp55xx_deinit_device) },
	{ 0xb1dfb8db, __VMLINUX_SYMBOL_STR(lp55xx_register_leds) },
	{ 0xc9e4f0cb, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x969f99d6, __VMLINUX_SYMBOL_STR(lp55xx_init_device) },
	{ 0xdc798d37, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x8caa767c, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x62b72b0d, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xe16b893b, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xef1e4705, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x20c55ae0, __VMLINUX_SYMBOL_STR(sscanf) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xa0e9d2e1, __VMLINUX_SYMBOL_STR(lp55xx_update_bits) },
	{ 0xdfcdbdc4, __VMLINUX_SYMBOL_STR(lp55xx_read) },
	{ 0x12a38747, __VMLINUX_SYMBOL_STR(usleep_range) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xc4977399, __VMLINUX_SYMBOL_STR(lp55xx_write) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=leds-lp55xx-common";

MODULE_ALIAS("of:N*T*Cti,lp8501*");
MODULE_ALIAS("i2c:lp8501");
