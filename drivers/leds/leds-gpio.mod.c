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
	{ 0xd945909, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x4a4a4bd, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0xc806ec77, __VMLINUX_SYMBOL_STR(gpiod_set_value_cansleep) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xf88c07d6, __VMLINUX_SYMBOL_STR(fwnode_handle_put) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0xf37a8e3e, __VMLINUX_SYMBOL_STR(fwnode_property_read_string) },
	{ 0x304cb234, __VMLINUX_SYMBOL_STR(devm_get_gpiod_from_child) },
	{ 0xe74a742f, __VMLINUX_SYMBOL_STR(fwnode_property_present) },
	{ 0xc25080c7, __VMLINUX_SYMBOL_STR(device_get_next_child_node) },
	{ 0x8caa767c, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x3ae6cf60, __VMLINUX_SYMBOL_STR(device_get_child_node_count) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xc9e4f0cb, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x6cc699f6, __VMLINUX_SYMBOL_STR(gpiod_get_value_cansleep) },
	{ 0xfaed45a9, __VMLINUX_SYMBOL_STR(gpio_to_desc) },
	{ 0x8e376325, __VMLINUX_SYMBOL_STR(devm_gpio_request_one) },
	{ 0x1eaa1bd4, __VMLINUX_SYMBOL_STR(led_classdev_register) },
	{ 0x49cdc64f, __VMLINUX_SYMBOL_STR(gpiod_direction_output) },
	{ 0xe43ab905, __VMLINUX_SYMBOL_STR(gpiod_cansleep) },
	{ 0x4205ad24, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0x1ca84e69, __VMLINUX_SYMBOL_STR(led_classdev_unregister) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x393e4e36, __VMLINUX_SYMBOL_STR(gpiod_set_value) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("of:N*T*Cgpio-leds*");
