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
	{ 0x103bacad, __VMLINUX_SYMBOL_STR(iio_enum_available_read) },
	{ 0x13285d23, __VMLINUX_SYMBOL_STR(iio_enum_write) },
	{ 0x3f4037aa, __VMLINUX_SYMBOL_STR(iio_enum_read) },
	{ 0x89cd8667, __VMLINUX_SYMBOL_STR(i2c_del_driver) },
	{ 0x9d41e38f, __VMLINUX_SYMBOL_STR(i2c_register_driver) },
	{ 0xb6785da4, __VMLINUX_SYMBOL_STR(mma9551_read_accel_chan) },
	{ 0x41ef446c, __VMLINUX_SYMBOL_STR(mma9551_read_accel_scale) },
	{ 0x78029c89, __VMLINUX_SYMBOL_STR(mma9551_read_status_word) },
	{ 0xc7da6011, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x76c9fa9f, __VMLINUX_SYMBOL_STR(mma9551_write_config_words) },
	{ 0x52791c1b, __VMLINUX_SYMBOL_STR(mma9551_app_reset) },
	{ 0xa8bd7935, __VMLINUX_SYMBOL_STR(mma9551_read_config_words) },
	{ 0x36ec1661, __VMLINUX_SYMBOL_STR(iio_device_register) },
	{ 0xda4b2bd6, __VMLINUX_SYMBOL_STR(__pm_runtime_use_autosuspend) },
	{ 0xa0e4ae2e, __VMLINUX_SYMBOL_STR(pm_runtime_set_autosuspend_delay) },
	{ 0xca72012e, __VMLINUX_SYMBOL_STR(pm_runtime_enable) },
	{ 0xb62a6155, __VMLINUX_SYMBOL_STR(devm_request_threaded_irq) },
	{ 0x316ed944, __VMLINUX_SYMBOL_STR(mma9551_read_version) },
	{ 0xdc798d37, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0xbd7f1641, __VMLINUX_SYMBOL_STR(devm_iio_device_alloc) },
	{ 0x2e14b32e, __VMLINUX_SYMBOL_STR(mma9551_gpio_config) },
	{ 0xc7b1aa46, __VMLINUX_SYMBOL_STR(mma9551_set_power_state) },
	{ 0x729c19f5, __VMLINUX_SYMBOL_STR(mma9551_read_config_word) },
	{ 0x14242c6a, __VMLINUX_SYMBOL_STR(mma9551_write_config_word) },
	{ 0xe4689576, __VMLINUX_SYMBOL_STR(ktime_get_with_offset) },
	{ 0xe105ed4c, __VMLINUX_SYMBOL_STR(iio_push_event) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xfd53982c, __VMLINUX_SYMBOL_STR(mma9551_read_status_words) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xc652dafa, __VMLINUX_SYMBOL_STR(__pm_runtime_set_status) },
	{ 0xf3b12552, __VMLINUX_SYMBOL_STR(__pm_runtime_disable) },
	{ 0x684a2bb7, __VMLINUX_SYMBOL_STR(iio_device_unregister) },
	{ 0xef1e4705, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x62b72b0d, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xe16b893b, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xbcd7fe96, __VMLINUX_SYMBOL_STR(mma9551_sleep) },
	{ 0x7c55945f, __VMLINUX_SYMBOL_STR(mma9551_set_device_state) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=industrialio,mma9551_core";

MODULE_ALIAS("i2c:mma9553");
MODULE_ALIAS("acpi*:MMA9553:*");
