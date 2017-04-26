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
	{ 0x4a4a4bd, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0xd3f57a2, __VMLINUX_SYMBOL_STR(_find_next_bit_le) },
	{ 0x6d662533, __VMLINUX_SYMBOL_STR(_find_first_bit_le) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xf88c07d6, __VMLINUX_SYMBOL_STR(fwnode_handle_put) },
	{ 0xe74a742f, __VMLINUX_SYMBOL_STR(fwnode_property_present) },
	{ 0xf37a8e3e, __VMLINUX_SYMBOL_STR(fwnode_property_read_string) },
	{ 0x304cb234, __VMLINUX_SYMBOL_STR(devm_get_gpiod_from_child) },
	{ 0x858737ec, __VMLINUX_SYMBOL_STR(fwnode_property_read_u32_array) },
	{ 0xc25080c7, __VMLINUX_SYMBOL_STR(device_get_next_child_node) },
	{ 0x71d48624, __VMLINUX_SYMBOL_STR(device_property_read_u32_array) },
	{ 0x2db75607, __VMLINUX_SYMBOL_STR(device_property_present) },
	{ 0x3ae6cf60, __VMLINUX_SYMBOL_STR(device_get_child_node_count) },
	{ 0xef1e4705, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xb985bc87, __VMLINUX_SYMBOL_STR(input_register_polled_device) },
	{ 0x33694668, __VMLINUX_SYMBOL_STR(input_set_abs_params) },
	{ 0xfaed45a9, __VMLINUX_SYMBOL_STR(gpio_to_desc) },
	{ 0x8e376325, __VMLINUX_SYMBOL_STR(devm_gpio_request_one) },
	{ 0xd7333a1b, __VMLINUX_SYMBOL_STR(input_set_capability) },
	{ 0xe43ab905, __VMLINUX_SYMBOL_STR(gpiod_cansleep) },
	{ 0x85cbce3b, __VMLINUX_SYMBOL_STR(devm_input_allocate_polled_device) },
	{ 0x8caa767c, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0xb26aa57e, __VMLINUX_SYMBOL_STR(gpiod_get_value) },
	{ 0x6cc699f6, __VMLINUX_SYMBOL_STR(gpiod_get_value_cansleep) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xf228c79, __VMLINUX_SYMBOL_STR(input_event) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=input-polldev";

MODULE_ALIAS("of:N*T*Cgpio-keys-polled*");
