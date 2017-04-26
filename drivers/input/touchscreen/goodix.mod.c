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
	{ 0xdf98c806, __VMLINUX_SYMBOL_STR(complete_all) },
	{ 0x22ef151f, __VMLINUX_SYMBOL_STR(release_firmware) },
	{ 0xc7da6011, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0xd43972ec, __VMLINUX_SYMBOL_STR(request_firmware_nowait) },
	{ 0x54b04308, __VMLINUX_SYMBOL_STR(devm_kasprintf) },
	{ 0xc9e4f0cb, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x5ac15bae, __VMLINUX_SYMBOL_STR(kstrtou16) },
	{ 0x9092ec61, __VMLINUX_SYMBOL_STR(devm_gpiod_get_optional) },
	{ 0xf9dd9922, __VMLINUX_SYMBOL_STR(__init_swait_queue_head) },
	{ 0x8caa767c, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x6eba04b0, __VMLINUX_SYMBOL_STR(input_register_device) },
	{ 0xfab079d1, __VMLINUX_SYMBOL_STR(input_mt_init_slots) },
	{ 0x33694668, __VMLINUX_SYMBOL_STR(input_set_abs_params) },
	{ 0x8de91c15, __VMLINUX_SYMBOL_STR(devm_input_allocate_device) },
	{ 0x2db75607, __VMLINUX_SYMBOL_STR(device_property_present) },
	{ 0xa68ed06d, __VMLINUX_SYMBOL_STR(input_mt_sync_frame) },
	{ 0x54b0b3ea, __VMLINUX_SYMBOL_STR(input_mt_report_slot_state) },
	{ 0xf228c79, __VMLINUX_SYMBOL_STR(input_event) },
	{ 0x2f0664db, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x9e640c5d, __VMLINUX_SYMBOL_STR(gpiod_direction_input) },
	{ 0xef1e4705, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x12a38747, __VMLINUX_SYMBOL_STR(usleep_range) },
	{ 0x49cdc64f, __VMLINUX_SYMBOL_STR(gpiod_direction_output) },
	{ 0xbfd19bbc, __VMLINUX_SYMBOL_STR(devm_free_irq) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xd49bd803, __VMLINUX_SYMBOL_STR(wait_for_completion) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x72121e72, __VMLINUX_SYMBOL_STR(i2c_transfer) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xb62a6155, __VMLINUX_SYMBOL_STR(devm_request_threaded_irq) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("of:N*T*Cgoodix,gt911*");
MODULE_ALIAS("of:N*T*Cgoodix,gt9110*");
MODULE_ALIAS("of:N*T*Cgoodix,gt912*");
MODULE_ALIAS("of:N*T*Cgoodix,gt927*");
MODULE_ALIAS("of:N*T*Cgoodix,gt9271*");
MODULE_ALIAS("of:N*T*Cgoodix,gt928*");
MODULE_ALIAS("of:N*T*Cgoodix,gt967*");
MODULE_ALIAS("i2c:GDIX1001:00");
