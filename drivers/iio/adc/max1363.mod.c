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
	{ 0xa2e91496, __VMLINUX_SYMBOL_STR(iio_read_const_attr) },
	{ 0x89cd8667, __VMLINUX_SYMBOL_STR(i2c_del_driver) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x9d41e38f, __VMLINUX_SYMBOL_STR(i2c_register_driver) },
	{ 0x36ec1661, __VMLINUX_SYMBOL_STR(iio_device_register) },
	{ 0xb62a6155, __VMLINUX_SYMBOL_STR(devm_request_threaded_irq) },
	{ 0x2e7ebe96, __VMLINUX_SYMBOL_STR(iio_triggered_buffer_setup) },
	{ 0x8caa767c, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x591bd40b, __VMLINUX_SYMBOL_STR(i2c_master_send) },
	{ 0x2cf3f76d, __VMLINUX_SYMBOL_STR(i2c_master_recv) },
	{ 0x8c663951, __VMLINUX_SYMBOL_STR(regulator_get_voltage) },
	{ 0x4eea17c7, __VMLINUX_SYMBOL_STR(devm_regulator_get_optional) },
	{ 0x9e5d01d, __VMLINUX_SYMBOL_STR(regulator_enable) },
	{ 0xf05fd8a6, __VMLINUX_SYMBOL_STR(devm_regulator_get) },
	{ 0x56b00d47, __VMLINUX_SYMBOL_STR(iio_map_array_register) },
	{ 0xbd7f1641, __VMLINUX_SYMBOL_STR(devm_iio_device_alloc) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x996bdb64, __VMLINUX_SYMBOL_STR(_kstrtoul) },
	{ 0x62b72b0d, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xe16b893b, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x495f13ac, __VMLINUX_SYMBOL_STR(i2c_smbus_write_byte) },
	{ 0x2f7aab7b, __VMLINUX_SYMBOL_STR(i2c_smbus_read_byte) },
	{ 0x4d1f9895, __VMLINUX_SYMBOL_STR(iio_trigger_notify_done) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xb90c9276, __VMLINUX_SYMBOL_STR(iio_push_to_buffers) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x74c134b9, __VMLINUX_SYMBOL_STR(__sw_hweight32) },
	{ 0xd3f57a2, __VMLINUX_SYMBOL_STR(_find_next_bit_le) },
	{ 0xe105ed4c, __VMLINUX_SYMBOL_STR(iio_push_event) },
	{ 0x6d662533, __VMLINUX_SYMBOL_STR(_find_first_bit_le) },
	{ 0xe4689576, __VMLINUX_SYMBOL_STR(ktime_get_with_offset) },
	{ 0x425c9b57, __VMLINUX_SYMBOL_STR(iio_map_array_unregister) },
	{ 0x61b3905f, __VMLINUX_SYMBOL_STR(regulator_disable) },
	{ 0xbbca0ff7, __VMLINUX_SYMBOL_STR(iio_triggered_buffer_cleanup) },
	{ 0x684a2bb7, __VMLINUX_SYMBOL_STR(iio_device_unregister) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=industrialio,industrialio-triggered-buffer";

MODULE_ALIAS("i2c:max1361");
MODULE_ALIAS("i2c:max1362");
MODULE_ALIAS("i2c:max1363");
MODULE_ALIAS("i2c:max1364");
MODULE_ALIAS("i2c:max1036");
MODULE_ALIAS("i2c:max1037");
MODULE_ALIAS("i2c:max1038");
MODULE_ALIAS("i2c:max1039");
MODULE_ALIAS("i2c:max1136");
MODULE_ALIAS("i2c:max1137");
MODULE_ALIAS("i2c:max1138");
MODULE_ALIAS("i2c:max1139");
MODULE_ALIAS("i2c:max1236");
MODULE_ALIAS("i2c:max1237");
MODULE_ALIAS("i2c:max1238");
MODULE_ALIAS("i2c:max1239");
MODULE_ALIAS("i2c:max11600");
MODULE_ALIAS("i2c:max11601");
MODULE_ALIAS("i2c:max11602");
MODULE_ALIAS("i2c:max11603");
MODULE_ALIAS("i2c:max11604");
MODULE_ALIAS("i2c:max11605");
MODULE_ALIAS("i2c:max11606");
MODULE_ALIAS("i2c:max11607");
MODULE_ALIAS("i2c:max11608");
MODULE_ALIAS("i2c:max11609");
MODULE_ALIAS("i2c:max11610");
MODULE_ALIAS("i2c:max11611");
MODULE_ALIAS("i2c:max11612");
MODULE_ALIAS("i2c:max11613");
MODULE_ALIAS("i2c:max11614");
MODULE_ALIAS("i2c:max11615");
MODULE_ALIAS("i2c:max11616");
MODULE_ALIAS("i2c:max11617");
MODULE_ALIAS("i2c:max11644");
MODULE_ALIAS("i2c:max11645");
MODULE_ALIAS("i2c:max11646");
MODULE_ALIAS("i2c:max11647");
