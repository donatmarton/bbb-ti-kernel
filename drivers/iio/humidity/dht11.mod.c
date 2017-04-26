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
	{ 0xe70c1110, __VMLINUX_SYMBOL_STR(devm_iio_device_register) },
	{ 0xdc798d37, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0xf9dd9922, __VMLINUX_SYMBOL_STR(__init_swait_queue_head) },
	{ 0x841dcfa4, __VMLINUX_SYMBOL_STR(gpiod_to_irq) },
	{ 0x8e376325, __VMLINUX_SYMBOL_STR(devm_gpio_request_one) },
	{ 0x81e373bd, __VMLINUX_SYMBOL_STR(of_get_named_gpio_flags) },
	{ 0xbd7f1641, __VMLINUX_SYMBOL_STR(devm_iio_device_alloc) },
	{ 0x9cbcaf26, __VMLINUX_SYMBOL_STR(complete) },
	{ 0xffe809da, __VMLINUX_SYMBOL_STR(gpiod_get_raw_value) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xef1e4705, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x2f0664db, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0xc7da6011, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
	{ 0xddadf023, __VMLINUX_SYMBOL_STR(wait_for_completion_killable_timeout) },
	{ 0xd6b8e852, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0x9e640c5d, __VMLINUX_SYMBOL_STR(gpiod_direction_input) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x406e7cfb, __VMLINUX_SYMBOL_STR(gpiod_direction_output_raw) },
	{ 0xfaed45a9, __VMLINUX_SYMBOL_STR(gpio_to_desc) },
	{ 0xf3f18238, __VMLINUX_SYMBOL_STR(ktime_get_resolution_ns) },
	{ 0x62b72b0d, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xe4689576, __VMLINUX_SYMBOL_STR(ktime_get_with_offset) },
	{ 0xe16b893b, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=industrialio";

MODULE_ALIAS("of:N*T*Cdht11*");
