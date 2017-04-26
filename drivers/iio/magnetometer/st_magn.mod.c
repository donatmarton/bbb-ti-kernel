#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x2c197ea3, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0xbbca0ff7, __VMLINUX_SYMBOL_STR(iio_triggered_buffer_cleanup) },
	{ 0x729a52c6, __VMLINUX_SYMBOL_STR(st_sensors_set_dataready_irq) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x1c45cc49, __VMLINUX_SYMBOL_STR(st_sensors_power_enable) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xcdc704b1, __VMLINUX_SYMBOL_STR(st_sensors_set_enable) },
	{ 0x74d7047, __VMLINUX_SYMBOL_STR(st_sensors_trigger_handler) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x62b72b0d, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x3d6d3fd0, __VMLINUX_SYMBOL_STR(st_sensors_deallocate_trigger) },
	{ 0xe2ea5307, __VMLINUX_SYMBOL_STR(st_sensors_sysfs_sampling_frequency_avail) },
	{ 0x36ec1661, __VMLINUX_SYMBOL_STR(iio_device_register) },
	{ 0x11c70d59, __VMLINUX_SYMBOL_STR(st_sensors_allocate_trigger) },
	{ 0x684a2bb7, __VMLINUX_SYMBOL_STR(iio_device_unregister) },
	{ 0xc66238e7, __VMLINUX_SYMBOL_STR(st_sensors_set_fullscale_by_gain) },
	{ 0xe641d64f, __VMLINUX_SYMBOL_STR(st_sensors_check_device_support) },
	{ 0x5ff2aca0, __VMLINUX_SYMBOL_STR(st_sensors_validate_device) },
	{ 0xb5c6a120, __VMLINUX_SYMBOL_STR(iio_triggered_buffer_postenable) },
	{ 0xdc798d37, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x30a9fb97, __VMLINUX_SYMBOL_STR(st_sensors_power_disable) },
	{ 0xb39c135, __VMLINUX_SYMBOL_STR(st_sensors_init_sensor) },
	{ 0xe16b893b, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xc9e4f0cb, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x90ff32e8, __VMLINUX_SYMBOL_STR(st_sensors_debugfs_reg_access) },
	{ 0x19a0c387, __VMLINUX_SYMBOL_STR(iio_triggered_buffer_predisable) },
	{ 0xa9387ded, __VMLINUX_SYMBOL_STR(st_sensors_set_odr) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x8d707ec8, __VMLINUX_SYMBOL_STR(st_sensors_sysfs_scale_avail) },
	{ 0xb853741, __VMLINUX_SYMBOL_STR(st_sensors_read_info_raw) },
	{ 0x2e7ebe96, __VMLINUX_SYMBOL_STR(iio_triggered_buffer_setup) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=industrialio-triggered-buffer,st_sensors,industrialio";

