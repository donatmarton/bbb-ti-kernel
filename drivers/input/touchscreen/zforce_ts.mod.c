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
	{ 0x3ce4ca6f, __VMLINUX_SYMBOL_STR(disable_irq) },
	{ 0xfcec0987, __VMLINUX_SYMBOL_STR(enable_irq) },
	{ 0xce2840e7, __VMLINUX_SYMBOL_STR(irq_set_irq_wake) },
	{ 0xbd839740, __VMLINUX_SYMBOL_STR(devm_gpiod_get_index) },
	{ 0x4f161c0a, __VMLINUX_SYMBOL_STR(of_property_read_u32_array) },
	{ 0x6eba04b0, __VMLINUX_SYMBOL_STR(input_register_device) },
	{ 0x15a7a500, __VMLINUX_SYMBOL_STR(device_set_wakeup_capable) },
	{ 0xb62a6155, __VMLINUX_SYMBOL_STR(devm_request_threaded_irq) },
	{ 0xf9dd9922, __VMLINUX_SYMBOL_STR(__init_swait_queue_head) },
	{ 0xfab079d1, __VMLINUX_SYMBOL_STR(input_mt_init_slots) },
	{ 0x33694668, __VMLINUX_SYMBOL_STR(input_set_abs_params) },
	{ 0xdc798d37, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x8de91c15, __VMLINUX_SYMBOL_STR(devm_input_allocate_device) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xb02f5eea, __VMLINUX_SYMBOL_STR(devm_add_action) },
	{ 0x9e5d01d, __VMLINUX_SYMBOL_STR(regulator_enable) },
	{ 0x4eea17c7, __VMLINUX_SYMBOL_STR(devm_regulator_get_optional) },
	{ 0x9092ec61, __VMLINUX_SYMBOL_STR(devm_gpiod_get_optional) },
	{ 0x8caa767c, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x61b3905f, __VMLINUX_SYMBOL_STR(regulator_disable) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0xc806ec77, __VMLINUX_SYMBOL_STR(gpiod_set_value_cansleep) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x8b2e825d, __VMLINUX_SYMBOL_STR(pm_stay_awake) },
	{ 0xbc366133, __VMLINUX_SYMBOL_STR(pm_relax) },
	{ 0xea7eec89, __VMLINUX_SYMBOL_STR(input_mt_report_finger_count) },
	{ 0xa68ed06d, __VMLINUX_SYMBOL_STR(input_mt_sync_frame) },
	{ 0x54b0b3ea, __VMLINUX_SYMBOL_STR(input_mt_report_slot_state) },
	{ 0xf228c79, __VMLINUX_SYMBOL_STR(input_event) },
	{ 0x2cf3f76d, __VMLINUX_SYMBOL_STR(i2c_master_recv) },
	{ 0x6cc699f6, __VMLINUX_SYMBOL_STR(gpiod_get_value_cansleep) },
	{ 0x9cbcaf26, __VMLINUX_SYMBOL_STR(complete) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xa023feba, __VMLINUX_SYMBOL_STR(pm_wakeup_event) },
	{ 0x2f0664db, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xc7da6011, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0xef1e4705, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xcd1f63ee, __VMLINUX_SYMBOL_STR(wait_for_completion_timeout) },
	{ 0x62b72b0d, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x591bd40b, __VMLINUX_SYMBOL_STR(i2c_master_send) },
	{ 0xe16b893b, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xbf1faebe, __VMLINUX_SYMBOL_STR(mutex_trylock) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("of:N*T*Cneonode,zforce*");
MODULE_ALIAS("i2c:zforce-ts");
