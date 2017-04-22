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
	{ 0x752aeb9e, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x5ea4aebb, __VMLINUX_SYMBOL_STR(gpiochip_request_own_desc) },
	{ 0x592b8e7b, __VMLINUX_SYMBOL_STR(led_classdev_register) },
	{ 0xc4bbd13f, __VMLINUX_SYMBOL_STR(gpiochip_add_data) },
	{ 0x1f97d8b9, __VMLINUX_SYMBOL_STR(of_find_property) },
	{ 0x1df9d6f5, __VMLINUX_SYMBOL_STR(of_get_property) },
	{ 0x2deb66d0, __VMLINUX_SYMBOL_STR(of_property_read_variable_u32_array) },
	{ 0xe99916b9, __VMLINUX_SYMBOL_STR(of_get_next_child) },
	{ 0x3663792, __VMLINUX_SYMBOL_STR(__devm_regmap_init_i2c) },
	{ 0xc43902e8, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x131152af, __VMLINUX_SYMBOL_STR(of_match_device) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x20cc31ce, __VMLINUX_SYMBOL_STR(regmap_write) },
	{ 0xf3b439c1, __VMLINUX_SYMBOL_STR(regmap_update_bits_base) },
	{ 0xbae5955a, __VMLINUX_SYMBOL_STR(gpiochip_remove) },
	{ 0x1fcd857c, __VMLINUX_SYMBOL_STR(gpiochip_free_own_desc) },
	{ 0xbab724fe, __VMLINUX_SYMBOL_STR(led_classdev_unregister) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("i2c:tlc59116");
MODULE_ALIAS("i2c:tlc59108");
MODULE_ALIAS("of:N*T*Cti,tlc59116");
MODULE_ALIAS("of:N*T*Cti,tlc59116C*");
MODULE_ALIAS("of:N*T*Cti,tlc59108");
MODULE_ALIAS("of:N*T*Cti,tlc59108C*");
