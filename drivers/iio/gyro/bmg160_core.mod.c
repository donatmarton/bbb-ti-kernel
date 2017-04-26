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
	{ 0xae000c17, __VMLINUX_SYMBOL_STR(iio_trigger_unregister) },
	{ 0xe4689576, __VMLINUX_SYMBOL_STR(ktime_get_with_offset) },
	{ 0xf3b12552, __VMLINUX_SYMBOL_STR(__pm_runtime_disable) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xda4b2bd6, __VMLINUX_SYMBOL_STR(__pm_runtime_use_autosuspend) },
	{ 0xdf76bbeb, __VMLINUX_SYMBOL_STR(iio_pollfunc_store_time) },
	{ 0xa2e91496, __VMLINUX_SYMBOL_STR(iio_read_const_attr) },
	{ 0xd325617d, __VMLINUX_SYMBOL_STR(__pm_runtime_suspend) },
	{ 0x4d1f9895, __VMLINUX_SYMBOL_STR(iio_trigger_notify_done) },
	{ 0x7b6304ec, __VMLINUX_SYMBOL_STR(regmap_bulk_read) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x62b72b0d, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x47249507, __VMLINUX_SYMBOL_STR(__pm_runtime_resume) },
	{ 0x33e2d8fe, __VMLINUX_SYMBOL_STR(regmap_read) },
	{ 0x36ec1661, __VMLINUX_SYMBOL_STR(iio_device_register) },
	{ 0x684a2bb7, __VMLINUX_SYMBOL_STR(iio_device_unregister) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xc3ccc97a, __VMLINUX_SYMBOL_STR(devm_iio_trigger_alloc) },
	{ 0xbd7f1641, __VMLINUX_SYMBOL_STR(devm_iio_device_alloc) },
	{ 0xef1e4705, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xb5c6a120, __VMLINUX_SYMBOL_STR(iio_triggered_buffer_postenable) },
	{ 0xdc798d37, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0xbf4cb513, __VMLINUX_SYMBOL_STR(iio_trigger_poll) },
	{ 0xe16b893b, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x12a38747, __VMLINUX_SYMBOL_STR(usleep_range) },
	{ 0xca72012e, __VMLINUX_SYMBOL_STR(pm_runtime_enable) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x5094f24a, __VMLINUX_SYMBOL_STR(iio_trigger_register) },
	{ 0xc652dafa, __VMLINUX_SYMBOL_STR(__pm_runtime_set_status) },
	{ 0x19a0c387, __VMLINUX_SYMBOL_STR(iio_triggered_buffer_predisable) },
	{ 0xcc5005fe, __VMLINUX_SYMBOL_STR(msleep_interruptible) },
	{ 0xc7da6011, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0xb90c9276, __VMLINUX_SYMBOL_STR(iio_push_to_buffers) },
	{ 0xa0e4ae2e, __VMLINUX_SYMBOL_STR(pm_runtime_set_autosuspend_delay) },
	{ 0x6d6b851, __VMLINUX_SYMBOL_STR(regmap_get_device) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xe105ed4c, __VMLINUX_SYMBOL_STR(iio_push_event) },
	{ 0x3237dfb4, __VMLINUX_SYMBOL_STR(regmap_update_bits) },
	{ 0xb62a6155, __VMLINUX_SYMBOL_STR(devm_request_threaded_irq) },
	{ 0x6eaf818b, __VMLINUX_SYMBOL_STR(regmap_write) },
	{ 0x2e7ebe96, __VMLINUX_SYMBOL_STR(iio_triggered_buffer_setup) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=industrialio-triggered-buffer,industrialio";

