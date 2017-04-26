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
	{ 0x89cd8667, __VMLINUX_SYMBOL_STR(i2c_del_driver) },
	{ 0x9d41e38f, __VMLINUX_SYMBOL_STR(i2c_register_driver) },
	{ 0x8f7a5832, __VMLINUX_SYMBOL_STR(sysfs_create_group) },
	{ 0xb62a6155, __VMLINUX_SYMBOL_STR(devm_request_threaded_irq) },
	{ 0x6eba04b0, __VMLINUX_SYMBOL_STR(input_register_device) },
	{ 0xfab079d1, __VMLINUX_SYMBOL_STR(input_mt_init_slots) },
	{ 0x8225eee3, __VMLINUX_SYMBOL_STR(input_alloc_absinfo) },
	{ 0x33694668, __VMLINUX_SYMBOL_STR(input_set_abs_params) },
	{ 0x8de91c15, __VMLINUX_SYMBOL_STR(devm_input_allocate_device) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xdc798d37, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x8caa767c, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x62b72b0d, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x22ef151f, __VMLINUX_SYMBOL_STR(release_firmware) },
	{ 0x48a0f939, __VMLINUX_SYMBOL_STR(mutex_lock_interruptible) },
	{ 0x5ed56e18, __VMLINUX_SYMBOL_STR(request_firmware) },
	{ 0xc9e4f0cb, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0xc7da6011, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x54b0b3ea, __VMLINUX_SYMBOL_STR(input_mt_report_slot_state) },
	{ 0x2cf3f76d, __VMLINUX_SYMBOL_STR(i2c_master_recv) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0xf228c79, __VMLINUX_SYMBOL_STR(input_event) },
	{ 0xa68ed06d, __VMLINUX_SYMBOL_STR(input_mt_sync_frame) },
	{ 0xf9e73082, __VMLINUX_SYMBOL_STR(scnprintf) },
	{ 0x72121e72, __VMLINUX_SYMBOL_STR(i2c_transfer) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x906099bd, __VMLINUX_SYMBOL_STR(sysfs_remove_group) },
	{ 0x3ce4ca6f, __VMLINUX_SYMBOL_STR(disable_irq) },
	{ 0xfcec0987, __VMLINUX_SYMBOL_STR(enable_irq) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xef1e4705, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0x591bd40b, __VMLINUX_SYMBOL_STR(i2c_master_send) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("acpi*:WDHT0001:*");
MODULE_ALIAS("i2c:wdt87xx_i2c");

MODULE_INFO(srcversion, "F1E13FECD3FBD37693461F2");
