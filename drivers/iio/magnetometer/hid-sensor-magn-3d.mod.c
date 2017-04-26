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
	{ 0xed48e4cb, __VMLINUX_SYMBOL_STR(hid_sensor_pm_ops) },
	{ 0xd945909, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x4a4a4bd, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0x4dc21aeb, __VMLINUX_SYMBOL_STR(sensor_hub_register_callback) },
	{ 0x36ec1661, __VMLINUX_SYMBOL_STR(iio_device_register) },
	{ 0xb7e424e3, __VMLINUX_SYMBOL_STR(hid_sensor_setup_trigger) },
	{ 0x2e7ebe96, __VMLINUX_SYMBOL_STR(iio_triggered_buffer_setup) },
	{ 0xdf76bbeb, __VMLINUX_SYMBOL_STR(iio_pollfunc_store_time) },
	{ 0xc83a92bf, __VMLINUX_SYMBOL_STR(hid_sensor_format_scale) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x8caa767c, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0xef1e4705, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xff740149, __VMLINUX_SYMBOL_STR(sensor_hub_input_get_attribute_info) },
	{ 0x94e68736, __VMLINUX_SYMBOL_STR(hid_sensor_parse_common_attributes) },
	{ 0xbd7f1641, __VMLINUX_SYMBOL_STR(devm_iio_device_alloc) },
	{ 0x4b97faab, __VMLINUX_SYMBOL_STR(hid_sensor_read_samp_freq_value) },
	{ 0x3c7c5000, __VMLINUX_SYMBOL_STR(sensor_hub_input_attr_get_raw_value) },
	{ 0x8d69d504, __VMLINUX_SYMBOL_STR(hid_sensor_power_state) },
	{ 0xf8928545, __VMLINUX_SYMBOL_STR(hid_sensor_read_raw_hyst_value) },
	{ 0x8c068b3f, __VMLINUX_SYMBOL_STR(hid_sensor_write_samp_freq_value) },
	{ 0x3baba396, __VMLINUX_SYMBOL_STR(hid_sensor_write_raw_hyst_value) },
	{ 0xc7da6011, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0xb90c9276, __VMLINUX_SYMBOL_STR(iio_push_to_buffers) },
	{ 0xbbca0ff7, __VMLINUX_SYMBOL_STR(iio_triggered_buffer_cleanup) },
	{ 0x1603111c, __VMLINUX_SYMBOL_STR(hid_sensor_remove_trigger) },
	{ 0x684a2bb7, __VMLINUX_SYMBOL_STR(iio_device_unregister) },
	{ 0x37180869, __VMLINUX_SYMBOL_STR(sensor_hub_remove_callback) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=hid-sensor-trigger,hid-sensor-hub,industrialio,industrialio-triggered-buffer,hid-sensor-iio-common";

MODULE_ALIAS("platform:HID-SENSOR-200083");
