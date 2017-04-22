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
	{ 0x9cef51a8, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x6e15087e, __VMLINUX_SYMBOL_STR(iio_triggered_buffer_cleanup) },
	{ 0x1cc773b2, __VMLINUX_SYMBOL_STR(st_sensors_set_dataready_irq) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x70504625, __VMLINUX_SYMBOL_STR(st_sensors_power_enable) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xd62f9b59, __VMLINUX_SYMBOL_STR(st_sensors_set_enable) },
	{ 0x74d7047, __VMLINUX_SYMBOL_STR(st_sensors_trigger_handler) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xdbe8baac, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xf9b9e044, __VMLINUX_SYMBOL_STR(st_sensors_deallocate_trigger) },
	{ 0x8b012763, __VMLINUX_SYMBOL_STR(st_sensors_sysfs_sampling_frequency_avail) },
	{ 0x518d5839, __VMLINUX_SYMBOL_STR(iio_device_register) },
	{ 0xb172f12d, __VMLINUX_SYMBOL_STR(st_sensors_allocate_trigger) },
	{ 0x5f1c59a6, __VMLINUX_SYMBOL_STR(iio_device_unregister) },
	{ 0xc98c681f, __VMLINUX_SYMBOL_STR(st_sensors_set_fullscale_by_gain) },
	{ 0xf26fd256, __VMLINUX_SYMBOL_STR(st_sensors_check_device_support) },
	{ 0x34eb4e7b, __VMLINUX_SYMBOL_STR(st_sensors_validate_device) },
	{ 0x8c3cb67a, __VMLINUX_SYMBOL_STR(iio_triggered_buffer_postenable) },
	{ 0x5a32f871, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x9ed19d91, __VMLINUX_SYMBOL_STR(st_sensors_power_disable) },
	{ 0xaaa846f1, __VMLINUX_SYMBOL_STR(st_sensors_init_sensor) },
	{ 0xfed0a669, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x857b0b4c, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xee85c248, __VMLINUX_SYMBOL_STR(st_sensors_debugfs_reg_access) },
	{ 0xaba4bfe1, __VMLINUX_SYMBOL_STR(iio_triggered_buffer_predisable) },
	{ 0x367be8d5, __VMLINUX_SYMBOL_STR(st_sensors_set_odr) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x2b3c9de6, __VMLINUX_SYMBOL_STR(st_sensors_sysfs_scale_avail) },
	{ 0xecae10f7, __VMLINUX_SYMBOL_STR(st_sensors_set_axis_enable) },
	{ 0x5508eb9b, __VMLINUX_SYMBOL_STR(st_sensors_read_info_raw) },
	{ 0x5b44788c, __VMLINUX_SYMBOL_STR(iio_triggered_buffer_setup) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=industrialio-triggered-buffer,st_sensors,industrialio";

