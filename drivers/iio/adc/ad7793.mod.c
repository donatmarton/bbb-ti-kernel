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
	{ 0x3fc54cba, __VMLINUX_SYMBOL_STR(iio_read_const_attr) },
	{ 0x2607c90d, __VMLINUX_SYMBOL_STR(ad_sd_validate_trigger) },
	{ 0xce9e09ef, __VMLINUX_SYMBOL_STR(driver_unregister) },
	{ 0x36e4c428, __VMLINUX_SYMBOL_STR(__spi_register_driver) },
	{ 0x518d5839, __VMLINUX_SYMBOL_STR(iio_device_register) },
	{ 0x7f7c61fc, __VMLINUX_SYMBOL_STR(ad_sd_setup_buffer_and_trigger) },
	{ 0x1e8c0eb, __VMLINUX_SYMBOL_STR(spi_get_device_id) },
	{ 0xa4374fe1, __VMLINUX_SYMBOL_STR(regulator_get_voltage) },
	{ 0xdcd88a5e, __VMLINUX_SYMBOL_STR(regulator_enable) },
	{ 0xea22191c, __VMLINUX_SYMBOL_STR(devm_regulator_get) },
	{ 0x71d4a8a3, __VMLINUX_SYMBOL_STR(ad_sd_init) },
	{ 0x88d156ca, __VMLINUX_SYMBOL_STR(devm_iio_device_alloc) },
	{ 0x9fc1581a, __VMLINUX_SYMBOL_STR(ad_sd_calibrate_all) },
	{ 0x752aeb9e, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x2df425de, __VMLINUX_SYMBOL_STR(ad_sd_read_reg) },
	{ 0x12a38747, __VMLINUX_SYMBOL_STR(usleep_range) },
	{ 0x8de5b447, __VMLINUX_SYMBOL_STR(spi_sync) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x3dc152c2, __VMLINUX_SYMBOL_STR(iio_device_release_direct_mode) },
	{ 0x1ae023ec, __VMLINUX_SYMBOL_STR(iio_device_claim_direct_mode) },
	{ 0x11a13e31, __VMLINUX_SYMBOL_STR(_kstrtol) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x518b4ea6, __VMLINUX_SYMBOL_STR(ad_sigma_delta_single_conversion) },
	{ 0x605676d8, __VMLINUX_SYMBOL_STR(ad_sd_write_reg) },
	{ 0x49e6b372, __VMLINUX_SYMBOL_STR(regulator_disable) },
	{ 0x64e24cf4, __VMLINUX_SYMBOL_STR(ad_sd_cleanup_buffer_and_trigger) },
	{ 0x5f1c59a6, __VMLINUX_SYMBOL_STR(iio_device_unregister) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=industrialio,ad_sigma_delta";

MODULE_ALIAS("spi:ad7785");
MODULE_ALIAS("spi:ad7792");
MODULE_ALIAS("spi:ad7793");
MODULE_ALIAS("spi:ad7794");
MODULE_ALIAS("spi:ad7795");
MODULE_ALIAS("spi:ad7796");
MODULE_ALIAS("spi:ad7797");
MODULE_ALIAS("spi:ad7798");
MODULE_ALIAS("spi:ad7799");
