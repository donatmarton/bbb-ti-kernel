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

MODULE_INFO(staging, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x2c197ea3, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0xbbca0ff7, __VMLINUX_SYMBOL_STR(iio_triggered_buffer_cleanup) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xe4689576, __VMLINUX_SYMBOL_STR(ktime_get_with_offset) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x8574ca6c, __VMLINUX_SYMBOL_STR(gpio_request_array) },
	{ 0xa2e91496, __VMLINUX_SYMBOL_STR(iio_read_const_attr) },
	{ 0x4d1f9895, __VMLINUX_SYMBOL_STR(iio_trigger_notify_done) },
	{ 0x61b3905f, __VMLINUX_SYMBOL_STR(regulator_disable) },
	{ 0xfaed45a9, __VMLINUX_SYMBOL_STR(gpio_to_desc) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x403f9529, __VMLINUX_SYMBOL_STR(gpio_request_one) },
	{ 0x62b72b0d, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x36ec1661, __VMLINUX_SYMBOL_STR(iio_device_register) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x684a2bb7, __VMLINUX_SYMBOL_STR(iio_device_unregister) },
	{ 0x63b87fc5, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xbd7f1641, __VMLINUX_SYMBOL_STR(devm_iio_device_alloc) },
	{ 0xef1e4705, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xe16b893b, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xd6b8e852, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0x3bd5bf97, __VMLINUX_SYMBOL_STR(iio_device_claim_direct_mode) },
	{ 0xf05fd8a6, __VMLINUX_SYMBOL_STR(devm_regulator_get) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0x996bdb64, __VMLINUX_SYMBOL_STR(_kstrtoul) },
	{ 0xb9e52429, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x158f2f00, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0xfe990052, __VMLINUX_SYMBOL_STR(gpio_free) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xefac7c4c, __VMLINUX_SYMBOL_STR(gpiod_set_raw_value) },
	{ 0xc3dcf6d5, __VMLINUX_SYMBOL_STR(iio_device_release_direct_mode) },
	{ 0x8893fa5d, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0xb90c9276, __VMLINUX_SYMBOL_STR(iio_push_to_buffers) },
	{ 0x2f0664db, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xffe809da, __VMLINUX_SYMBOL_STR(gpiod_get_raw_value) },
	{ 0x9dfdf722, __VMLINUX_SYMBOL_STR(gpio_free_array) },
	{ 0x2e7ebe96, __VMLINUX_SYMBOL_STR(iio_triggered_buffer_setup) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
	{ 0x9e5d01d, __VMLINUX_SYMBOL_STR(regulator_enable) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=industrialio-triggered-buffer,industrialio";

