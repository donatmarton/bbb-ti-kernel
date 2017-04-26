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
	{ 0xc9e4f0cb, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xbe89dbd0, __VMLINUX_SYMBOL_STR(devm_kfree) },
	{ 0x14373f96, __VMLINUX_SYMBOL_STR(spi_bitbang_start) },
	{ 0xc63b6727, __VMLINUX_SYMBOL_STR(spi_bitbang_setup_transfer) },
	{ 0xef1e4705, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xc6a5abc1, __VMLINUX_SYMBOL_STR(spi_alloc_master) },
	{ 0x9e640c5d, __VMLINUX_SYMBOL_STR(gpiod_direction_input) },
	{ 0x4f161c0a, __VMLINUX_SYMBOL_STR(of_property_read_u32_array) },
	{ 0x81e373bd, __VMLINUX_SYMBOL_STR(of_get_named_gpio_flags) },
	{ 0x8caa767c, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x8b7245c2, __VMLINUX_SYMBOL_STR(of_match_device) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xf7e2dc40, __VMLINUX_SYMBOL_STR(spi_bitbang_setup) },
	{ 0x406e7cfb, __VMLINUX_SYMBOL_STR(gpiod_direction_output_raw) },
	{ 0x47229b5c, __VMLINUX_SYMBOL_STR(gpio_request) },
	{ 0x648a8b65, __VMLINUX_SYMBOL_STR(spi_bitbang_cleanup) },
	{ 0x84235abc, __VMLINUX_SYMBOL_STR(gpiod_get_raw_value_cansleep) },
	{ 0xd653691b, __VMLINUX_SYMBOL_STR(gpiod_set_raw_value_cansleep) },
	{ 0xfaed45a9, __VMLINUX_SYMBOL_STR(gpio_to_desc) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x7c8e67a0, __VMLINUX_SYMBOL_STR(put_device) },
	{ 0xfe990052, __VMLINUX_SYMBOL_STR(gpio_free) },
	{ 0x2ad4babd, __VMLINUX_SYMBOL_STR(spi_bitbang_stop) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=spi-bitbang";

MODULE_ALIAS("of:N*T*Cspi-gpio*");
