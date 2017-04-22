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
	{ 0x703b5194, __VMLINUX_SYMBOL_STR(i2c_del_driver) },
	{ 0xc619b572, __VMLINUX_SYMBOL_STR(i2c_register_driver) },
	{ 0x77df3c3b, __VMLINUX_SYMBOL_STR(device_init_wakeup) },
	{ 0x19d3b7d8, __VMLINUX_SYMBOL_STR(sysfs_create_group) },
	{ 0x9776d7e2, __VMLINUX_SYMBOL_STR(devm_request_threaded_irq) },
	{ 0x3604a9a9, __VMLINUX_SYMBOL_STR(input_register_device) },
	{ 0x6a49fc97, __VMLINUX_SYMBOL_STR(input_mt_init_slots) },
	{ 0x9fc1aab, __VMLINUX_SYMBOL_STR(input_alloc_absinfo) },
	{ 0x456e9f87, __VMLINUX_SYMBOL_STR(input_set_abs_params) },
	{ 0xfd901e96, __VMLINUX_SYMBOL_STR(devm_input_allocate_device) },
	{ 0x7a197096, __VMLINUX_SYMBOL_STR(i2c_smbus_xfer) },
	{ 0xf08c0b6e, __VMLINUX_SYMBOL_STR(devm_add_action) },
	{ 0xa6eeef47, __VMLINUX_SYMBOL_STR(devm_gpiod_get) },
	{ 0xea22191c, __VMLINUX_SYMBOL_STR(devm_regulator_get) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x5a32f871, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0xc43902e8, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x3743de2b, __VMLINUX_SYMBOL_STR(release_firmware) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xde0aeb10, __VMLINUX_SYMBOL_STR(request_firmware) },
	{ 0x857b0b4c, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x44b5ee9a, __VMLINUX_SYMBOL_STR(kasprintf) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0xed5605a9, __VMLINUX_SYMBOL_STR(i2c_transfer) },
	{ 0xb1ea493e, __VMLINUX_SYMBOL_STR(sysfs_remove_group) },
	{ 0xd4669fad, __VMLINUX_SYMBOL_STR(complete) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0xaa7d42d1, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0xd843fa3f, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x1c21465e, __VMLINUX_SYMBOL_STR(input_mt_sync_frame) },
	{ 0x30187bfb, __VMLINUX_SYMBOL_STR(input_mt_report_slot_state) },
	{ 0x6422f861, __VMLINUX_SYMBOL_STR(input_event) },
	{ 0xdbe8baac, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xbe2b4186, __VMLINUX_SYMBOL_STR(mutex_lock_interruptible) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x6c6cdd4d, __VMLINUX_SYMBOL_STR(wait_for_completion_interruptible_timeout) },
	{ 0xfcec0987, __VMLINUX_SYMBOL_STR(enable_irq) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xce2840e7, __VMLINUX_SYMBOL_STR(irq_set_irq_wake) },
	{ 0x3ce4ca6f, __VMLINUX_SYMBOL_STR(disable_irq) },
	{ 0x940f12ec, __VMLINUX_SYMBOL_STR(i2c_master_recv) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0x49e6b372, __VMLINUX_SYMBOL_STR(regulator_disable) },
	{ 0xdcd88a5e, __VMLINUX_SYMBOL_STR(regulator_enable) },
	{ 0x156b8b2b, __VMLINUX_SYMBOL_STR(gpiod_set_value_cansleep) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x752aeb9e, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x6ee5e2fb, __VMLINUX_SYMBOL_STR(i2c_master_send) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("of:N*T*Celan,ekth3500");
MODULE_ALIAS("of:N*T*Celan,ekth3500C*");
MODULE_ALIAS("i2c:elants_i2c");

MODULE_INFO(srcversion, "DBC6BAA3E0E85A98B054B40");
