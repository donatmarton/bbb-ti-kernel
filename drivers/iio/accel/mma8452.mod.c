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
	{ 0x9d41e38f, __VMLINUX_SYMBOL_STR(i2c_register_driver) },
	{ 0x4d1f9895, __VMLINUX_SYMBOL_STR(iio_trigger_notify_done) },
	{ 0xb90c9276, __VMLINUX_SYMBOL_STR(iio_push_to_buffers) },
	{ 0x9d40e838, __VMLINUX_SYMBOL_STR(i2c_smbus_read_i2c_block_data) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xc7da6011, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0xb62a6155, __VMLINUX_SYMBOL_STR(devm_request_threaded_irq) },
	{ 0x36ec1661, __VMLINUX_SYMBOL_STR(iio_device_register) },
	{ 0xda4b2bd6, __VMLINUX_SYMBOL_STR(__pm_runtime_use_autosuspend) },
	{ 0xa0e4ae2e, __VMLINUX_SYMBOL_STR(pm_runtime_set_autosuspend_delay) },
	{ 0xca72012e, __VMLINUX_SYMBOL_STR(pm_runtime_enable) },
	{ 0x2e7ebe96, __VMLINUX_SYMBOL_STR(iio_triggered_buffer_setup) },
	{ 0x5094f24a, __VMLINUX_SYMBOL_STR(iio_trigger_register) },
	{ 0xc3ccc97a, __VMLINUX_SYMBOL_STR(devm_iio_trigger_alloc) },
	{ 0xbc7fafae, __VMLINUX_SYMBOL_STR(of_irq_get_byname) },
	{ 0xc9e4f0cb, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xdc798d37, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0xbd7f1641, __VMLINUX_SYMBOL_STR(devm_iio_device_alloc) },
	{ 0x8b7245c2, __VMLINUX_SYMBOL_STR(of_match_device) },
	{ 0xf9e73082, __VMLINUX_SYMBOL_STR(scnprintf) },
	{ 0xd325617d, __VMLINUX_SYMBOL_STR(__pm_runtime_suspend) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x47249507, __VMLINUX_SYMBOL_STR(__pm_runtime_resume) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xe105ed4c, __VMLINUX_SYMBOL_STR(iio_push_event) },
	{ 0x785b4d48, __VMLINUX_SYMBOL_STR(iio_trigger_poll_chained) },
	{ 0xe4689576, __VMLINUX_SYMBOL_STR(ktime_get_with_offset) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x70dae047, __VMLINUX_SYMBOL_STR(i2c_smbus_read_byte_data) },
	{ 0xae000c17, __VMLINUX_SYMBOL_STR(iio_trigger_unregister) },
	{ 0xbbca0ff7, __VMLINUX_SYMBOL_STR(iio_triggered_buffer_cleanup) },
	{ 0xc652dafa, __VMLINUX_SYMBOL_STR(__pm_runtime_set_status) },
	{ 0xf3b12552, __VMLINUX_SYMBOL_STR(__pm_runtime_disable) },
	{ 0x684a2bb7, __VMLINUX_SYMBOL_STR(iio_device_unregister) },
	{ 0xef1e4705, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x62b72b0d, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xe16b893b, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x12a38747, __VMLINUX_SYMBOL_STR(usleep_range) },
	{ 0xcc5005fe, __VMLINUX_SYMBOL_STR(msleep_interruptible) },
	{ 0xd1b3c58f, __VMLINUX_SYMBOL_STR(i2c_smbus_write_byte_data) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=industrialio,industrialio-triggered-buffer";

MODULE_ALIAS("i2c:mma8451");
MODULE_ALIAS("i2c:mma8452");
MODULE_ALIAS("i2c:mma8453");
MODULE_ALIAS("i2c:mma8652");
MODULE_ALIAS("i2c:mma8653");
MODULE_ALIAS("i2c:fxls8471");
MODULE_ALIAS("of:N*T*Cfsl,mma8451*");
MODULE_ALIAS("of:N*T*Cfsl,mma8452*");
MODULE_ALIAS("of:N*T*Cfsl,mma8453*");
MODULE_ALIAS("of:N*T*Cfsl,mma8652*");
MODULE_ALIAS("of:N*T*Cfsl,mma8653*");
MODULE_ALIAS("of:N*T*Cfsl,fxls8471*");
