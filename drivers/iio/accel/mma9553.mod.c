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
	{ 0x46e281dd, __VMLINUX_SYMBOL_STR(iio_enum_available_read) },
	{ 0xa946f517, __VMLINUX_SYMBOL_STR(iio_enum_write) },
	{ 0x3d96126, __VMLINUX_SYMBOL_STR(iio_enum_read) },
	{ 0x703b5194, __VMLINUX_SYMBOL_STR(i2c_del_driver) },
	{ 0xc619b572, __VMLINUX_SYMBOL_STR(i2c_register_driver) },
	{ 0xd0b78757, __VMLINUX_SYMBOL_STR(mma9551_read_accel_chan) },
	{ 0x41ef446c, __VMLINUX_SYMBOL_STR(mma9551_read_accel_scale) },
	{ 0x1502bc6d, __VMLINUX_SYMBOL_STR(mma9551_read_status_word) },
	{ 0xd843fa3f, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x270b9f1e, __VMLINUX_SYMBOL_STR(mma9551_write_config_words) },
	{ 0x10765c7, __VMLINUX_SYMBOL_STR(mma9551_app_reset) },
	{ 0x597ead24, __VMLINUX_SYMBOL_STR(mma9551_read_config_words) },
	{ 0x518d5839, __VMLINUX_SYMBOL_STR(iio_device_register) },
	{ 0xf14cddbd, __VMLINUX_SYMBOL_STR(__pm_runtime_use_autosuspend) },
	{ 0xfdb0e9a1, __VMLINUX_SYMBOL_STR(pm_runtime_set_autosuspend_delay) },
	{ 0xa1a69463, __VMLINUX_SYMBOL_STR(pm_runtime_enable) },
	{ 0x9776d7e2, __VMLINUX_SYMBOL_STR(devm_request_threaded_irq) },
	{ 0x33600881, __VMLINUX_SYMBOL_STR(mma9551_read_version) },
	{ 0x5a32f871, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x88d156ca, __VMLINUX_SYMBOL_STR(devm_iio_device_alloc) },
	{ 0xfe9a9c22, __VMLINUX_SYMBOL_STR(mma9551_gpio_config) },
	{ 0x5fb370ac, __VMLINUX_SYMBOL_STR(mma9551_set_power_state) },
	{ 0xbdeecf52, __VMLINUX_SYMBOL_STR(mma9551_read_config_word) },
	{ 0xbb6ddcd0, __VMLINUX_SYMBOL_STR(mma9551_write_config_word) },
	{ 0xaa9a9172, __VMLINUX_SYMBOL_STR(iio_get_time_ns) },
	{ 0xf7a872d7, __VMLINUX_SYMBOL_STR(iio_push_event) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x59e2701b, __VMLINUX_SYMBOL_STR(mma9551_read_status_words) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xcc848dc, __VMLINUX_SYMBOL_STR(__pm_runtime_set_status) },
	{ 0x1c87ee07, __VMLINUX_SYMBOL_STR(__pm_runtime_disable) },
	{ 0x5f1c59a6, __VMLINUX_SYMBOL_STR(iio_device_unregister) },
	{ 0x752aeb9e, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xdbe8baac, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xfed0a669, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xbcd7fe96, __VMLINUX_SYMBOL_STR(mma9551_sleep) },
	{ 0xf1211d20, __VMLINUX_SYMBOL_STR(mma9551_set_device_state) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=industrialio,mma9551_core";

MODULE_ALIAS("i2c:mma9553");
MODULE_ALIAS("acpi*:MMA9553:*");
