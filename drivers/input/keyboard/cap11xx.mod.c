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
	{ 0x97f3f11c, __VMLINUX_SYMBOL_STR(devm_led_classdev_register) },
	{ 0xd460a022, __VMLINUX_SYMBOL_STR(of_get_property) },
	{ 0xb62a6155, __VMLINUX_SYMBOL_STR(devm_request_threaded_irq) },
	{ 0x98a28081, __VMLINUX_SYMBOL_STR(irq_of_parse_and_map) },
	{ 0x6eba04b0, __VMLINUX_SYMBOL_STR(input_register_device) },
	{ 0x1cf6555, __VMLINUX_SYMBOL_STR(of_get_next_child) },
	{ 0x8de91c15, __VMLINUX_SYMBOL_STR(devm_input_allocate_device) },
	{ 0x6eaf818b, __VMLINUX_SYMBOL_STR(regmap_write) },
	{ 0xaeb4e64d, __VMLINUX_SYMBOL_STR(of_find_property) },
	{ 0xef1e4705, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x4f161c0a, __VMLINUX_SYMBOL_STR(of_property_read_u32_array) },
	{ 0xc9e4f0cb, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x5870b9ef, __VMLINUX_SYMBOL_STR(__devm_regmap_init_i2c) },
	{ 0x8caa767c, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xf228c79, __VMLINUX_SYMBOL_STR(input_event) },
	{ 0x33e2d8fe, __VMLINUX_SYMBOL_STR(regmap_read) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x3237dfb4, __VMLINUX_SYMBOL_STR(regmap_update_bits) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("i2c:cap1106");
MODULE_ALIAS("i2c:cap1126");
MODULE_ALIAS("i2c:cap1188");
MODULE_ALIAS("of:N*T*Cmicrochip,cap1106*");
MODULE_ALIAS("of:N*T*Cmicrochip,cap1126*");
MODULE_ALIAS("of:N*T*Cmicrochip,cap1188*");
