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
	{ 0xcea899ea, __VMLINUX_SYMBOL_STR(down) },
	{ 0x2f0664db, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0xa59fe963, __VMLINUX_SYMBOL_STR(devm_rtc_device_register) },
	{ 0x364b3fff, __VMLINUX_SYMBOL_STR(up) },
	{ 0x60d9daf0, __VMLINUX_SYMBOL_STR(sensor_hub_device_open) },
	{ 0x4dc21aeb, __VMLINUX_SYMBOL_STR(sensor_hub_register_callback) },
	{ 0xef1e4705, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xff740149, __VMLINUX_SYMBOL_STR(sensor_hub_input_get_attribute_info) },
	{ 0x94e68736, __VMLINUX_SYMBOL_STR(hid_sensor_parse_common_attributes) },
	{ 0xf9dd9922, __VMLINUX_SYMBOL_STR(__init_swait_queue_head) },
	{ 0x8caa767c, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x9cbcaf26, __VMLINUX_SYMBOL_STR(complete) },
	{ 0x43b0c9c3, __VMLINUX_SYMBOL_STR(preempt_schedule) },
	{ 0x706c5a65, __VMLINUX_SYMBOL_STR(preempt_count_sub) },
	{ 0xf229424a, __VMLINUX_SYMBOL_STR(preempt_count_add) },
	{ 0xddadf023, __VMLINUX_SYMBOL_STR(wait_for_completion_killable_timeout) },
	{ 0x3c7c5000, __VMLINUX_SYMBOL_STR(sensor_hub_input_attr_get_raw_value) },
	{ 0x37180869, __VMLINUX_SYMBOL_STR(sensor_hub_remove_callback) },
	{ 0xbe4e6341, __VMLINUX_SYMBOL_STR(sensor_hub_device_close) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=hid-sensor-hub,hid-sensor-iio-common";

MODULE_ALIAS("platform:HID-SENSOR-2000a0");
