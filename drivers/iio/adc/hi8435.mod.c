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
	{ 0x13285d23, __VMLINUX_SYMBOL_STR(iio_enum_write) },
	{ 0x3f4037aa, __VMLINUX_SYMBOL_STR(iio_enum_read) },
	{ 0x2060d6e7, __VMLINUX_SYMBOL_STR(driver_unregister) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb4b743ae, __VMLINUX_SYMBOL_STR(__spi_register_driver) },
	{ 0xd3f57a2, __VMLINUX_SYMBOL_STR(_find_next_bit_le) },
	{ 0xe105ed4c, __VMLINUX_SYMBOL_STR(iio_push_event) },
	{ 0xe4689576, __VMLINUX_SYMBOL_STR(ktime_get_with_offset) },
	{ 0x6d662533, __VMLINUX_SYMBOL_STR(_find_first_bit_le) },
	{ 0x4d1f9895, __VMLINUX_SYMBOL_STR(iio_trigger_notify_done) },
	{ 0xef1e4705, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x36ec1661, __VMLINUX_SYMBOL_STR(iio_device_register) },
	{ 0x675550fd, __VMLINUX_SYMBOL_STR(iio_triggered_event_setup) },
	{ 0x6ada6489, __VMLINUX_SYMBOL_STR(spi_get_device_id) },
	{ 0xdc798d37, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x393e4e36, __VMLINUX_SYMBOL_STR(gpiod_set_value) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0x7761004e, __VMLINUX_SYMBOL_STR(devm_gpiod_get) },
	{ 0xbd7f1641, __VMLINUX_SYMBOL_STR(devm_iio_device_alloc) },
	{ 0x62b72b0d, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xe16b893b, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x963133a1, __VMLINUX_SYMBOL_STR(spi_sync) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x3232f56d, __VMLINUX_SYMBOL_STR(spi_write_then_read) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x36f03b80, __VMLINUX_SYMBOL_STR(iio_triggered_event_cleanup) },
	{ 0x684a2bb7, __VMLINUX_SYMBOL_STR(iio_device_unregister) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=industrialio,industrialio-triggered-event";

MODULE_ALIAS("spi:hi8435");
MODULE_ALIAS("of:N*T*Cholt,hi8435*");
