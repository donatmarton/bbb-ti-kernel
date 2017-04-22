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
	{ 0x518d5839, __VMLINUX_SYMBOL_STR(iio_device_register) },
	{ 0x5b44788c, __VMLINUX_SYMBOL_STR(iio_triggered_buffer_setup) },
	{ 0xdcd88a5e, __VMLINUX_SYMBOL_STR(regulator_enable) },
	{ 0xea22191c, __VMLINUX_SYMBOL_STR(devm_regulator_get) },
	{ 0x1e8c0eb, __VMLINUX_SYMBOL_STR(spi_get_device_id) },
	{ 0x88d156ca, __VMLINUX_SYMBOL_STR(devm_iio_device_alloc) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xd3f57a2, __VMLINUX_SYMBOL_STR(_find_next_bit_le) },
	{ 0x6d662533, __VMLINUX_SYMBOL_STR(_find_first_bit_le) },
	{ 0x3dc152c2, __VMLINUX_SYMBOL_STR(iio_device_release_direct_mode) },
	{ 0x1ae023ec, __VMLINUX_SYMBOL_STR(iio_device_claim_direct_mode) },
	{ 0xa4374fe1, __VMLINUX_SYMBOL_STR(regulator_get_voltage) },
	{ 0xee8b6c0, __VMLINUX_SYMBOL_STR(iio_push_to_buffers) },
	{ 0xaa9a9172, __VMLINUX_SYMBOL_STR(iio_get_time_ns) },
	{ 0x9369f5c1, __VMLINUX_SYMBOL_STR(iio_trigger_notify_done) },
	{ 0x8de5b447, __VMLINUX_SYMBOL_STR(spi_sync) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x49e6b372, __VMLINUX_SYMBOL_STR(regulator_disable) },
	{ 0x6e15087e, __VMLINUX_SYMBOL_STR(iio_triggered_buffer_cleanup) },
	{ 0x5f1c59a6, __VMLINUX_SYMBOL_STR(iio_device_unregister) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=industrialio,industrialio-triggered-buffer";

MODULE_ALIAS("spi:ad7904");
MODULE_ALIAS("spi:ad7914");
MODULE_ALIAS("spi:ad7923");
MODULE_ALIAS("spi:ad7924");
