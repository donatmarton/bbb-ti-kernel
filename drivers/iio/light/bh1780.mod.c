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
	{ 0x9f2d75d7, __VMLINUX_SYMBOL_STR(pm_runtime_force_resume) },
	{ 0xb2f859ce, __VMLINUX_SYMBOL_STR(pm_runtime_force_suspend) },
	{ 0x703b5194, __VMLINUX_SYMBOL_STR(i2c_del_driver) },
	{ 0xc619b572, __VMLINUX_SYMBOL_STR(i2c_register_driver) },
	{ 0x31087444, __VMLINUX_SYMBOL_STR(__pm_runtime_suspend) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xbf39463, __VMLINUX_SYMBOL_STR(i2c_smbus_read_word_data) },
	{ 0x518d5839, __VMLINUX_SYMBOL_STR(iio_device_register) },
	{ 0x7cefdeff, __VMLINUX_SYMBOL_STR(__pm_runtime_idle) },
	{ 0xf14cddbd, __VMLINUX_SYMBOL_STR(__pm_runtime_use_autosuspend) },
	{ 0xfdb0e9a1, __VMLINUX_SYMBOL_STR(pm_runtime_set_autosuspend_delay) },
	{ 0x857b0b4c, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xb153e01d, __VMLINUX_SYMBOL_STR(i2c_smbus_read_byte_data) },
	{ 0xa1a69463, __VMLINUX_SYMBOL_STR(pm_runtime_enable) },
	{ 0xcc848dc, __VMLINUX_SYMBOL_STR(__pm_runtime_set_status) },
	{ 0x88d156ca, __VMLINUX_SYMBOL_STR(devm_iio_device_alloc) },
	{ 0x1c87ee07, __VMLINUX_SYMBOL_STR(__pm_runtime_disable) },
	{ 0x72662feb, __VMLINUX_SYMBOL_STR(__pm_runtime_resume) },
	{ 0x5f1c59a6, __VMLINUX_SYMBOL_STR(iio_device_unregister) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x752aeb9e, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x6651f0dd, __VMLINUX_SYMBOL_STR(i2c_smbus_write_byte_data) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=industrialio";

MODULE_ALIAS("of:N*T*Crohm,bh1780gli");
MODULE_ALIAS("of:N*T*Crohm,bh1780gliC*");
MODULE_ALIAS("i2c:bh1780");
