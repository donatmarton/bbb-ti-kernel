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
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xb7629ba4, __VMLINUX_SYMBOL_STR(i2c_mux_add_adapter) },
	{ 0xd0532b4a, __VMLINUX_SYMBOL_STR(of_node_put) },
	{ 0xc01e28aa, __VMLINUX_SYMBOL_STR(of_get_i2c_adapter_by_node) },
	{ 0x14253ae5, __VMLINUX_SYMBOL_STR(of_parse_phandle) },
	{ 0x4f161c0a, __VMLINUX_SYMBOL_STR(of_property_read_u32_array) },
	{ 0x8e376325, __VMLINUX_SYMBOL_STR(devm_gpio_request_one) },
	{ 0x81e373bd, __VMLINUX_SYMBOL_STR(of_get_named_gpio_flags) },
	{ 0xa78c489d, __VMLINUX_SYMBOL_STR(i2c_mux_alloc) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xef1e4705, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xffe809da, __VMLINUX_SYMBOL_STR(gpiod_get_raw_value) },
	{ 0x12a38747, __VMLINUX_SYMBOL_STR(usleep_range) },
	{ 0xf1969a8e, __VMLINUX_SYMBOL_STR(__usecs_to_jiffies) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0xefac7c4c, __VMLINUX_SYMBOL_STR(gpiod_set_raw_value) },
	{ 0xfaed45a9, __VMLINUX_SYMBOL_STR(gpio_to_desc) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xe87f2add, __VMLINUX_SYMBOL_STR(i2c_put_adapter) },
	{ 0x9263be6f, __VMLINUX_SYMBOL_STR(i2c_mux_del_adapters) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("of:N*T*Ci2c-arb-gpio-challenge*");
