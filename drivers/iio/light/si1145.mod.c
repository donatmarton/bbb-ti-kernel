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
	{ 0x3fc54cba, __VMLINUX_SYMBOL_STR(iio_read_const_attr) },
	{ 0xaba4bfe1, __VMLINUX_SYMBOL_STR(iio_triggered_buffer_predisable) },
	{ 0x8c3cb67a, __VMLINUX_SYMBOL_STR(iio_triggered_buffer_postenable) },
	{ 0x703b5194, __VMLINUX_SYMBOL_STR(i2c_del_driver) },
	{ 0xc619b572, __VMLINUX_SYMBOL_STR(i2c_register_driver) },
	{ 0xbf39463, __VMLINUX_SYMBOL_STR(i2c_smbus_read_word_data) },
	{ 0x3dc152c2, __VMLINUX_SYMBOL_STR(iio_device_release_direct_mode) },
	{ 0x1ae023ec, __VMLINUX_SYMBOL_STR(iio_device_claim_direct_mode) },
	{ 0x326439b1, __VMLINUX_SYMBOL_STR(__module_get) },
	{ 0x657b2089, __VMLINUX_SYMBOL_STR(get_device) },
	{ 0x518d5839, __VMLINUX_SYMBOL_STR(iio_device_register) },
	{ 0x85f37eac, __VMLINUX_SYMBOL_STR(iio_trigger_register) },
	{ 0x9776d7e2, __VMLINUX_SYMBOL_STR(devm_request_threaded_irq) },
	{ 0x2d6bcdcb, __VMLINUX_SYMBOL_STR(iio_trigger_generic_data_rdy_poll) },
	{ 0x7090f8c3, __VMLINUX_SYMBOL_STR(devm_iio_trigger_alloc) },
	{ 0x5b44788c, __VMLINUX_SYMBOL_STR(iio_triggered_buffer_setup) },
	{ 0x5a32f871, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x857b0b4c, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x88d156ca, __VMLINUX_SYMBOL_STR(devm_iio_device_alloc) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0xfc19255, __VMLINUX_SYMBOL_STR(i2c_smbus_write_word_data) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x9369f5c1, __VMLINUX_SYMBOL_STR(iio_trigger_notify_done) },
	{ 0xee8b6c0, __VMLINUX_SYMBOL_STR(iio_push_to_buffers) },
	{ 0xaa9a9172, __VMLINUX_SYMBOL_STR(iio_get_time_ns) },
	{ 0xcc261c45, __VMLINUX_SYMBOL_STR(i2c_smbus_read_i2c_block_data_or_emulated) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xd843fa3f, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x752aeb9e, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xdbe8baac, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xaa7d42d1, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0xb153e01d, __VMLINUX_SYMBOL_STR(i2c_smbus_read_byte_data) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x6651f0dd, __VMLINUX_SYMBOL_STR(i2c_smbus_write_byte_data) },
	{ 0xfed0a669, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xd3f57a2, __VMLINUX_SYMBOL_STR(_find_next_bit_le) },
	{ 0x6d662533, __VMLINUX_SYMBOL_STR(_find_first_bit_le) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x6e15087e, __VMLINUX_SYMBOL_STR(iio_triggered_buffer_cleanup) },
	{ 0xac1ce979, __VMLINUX_SYMBOL_STR(iio_trigger_unregister) },
	{ 0x5f1c59a6, __VMLINUX_SYMBOL_STR(iio_device_unregister) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=industrialio,industrialio-triggered-buffer";

MODULE_ALIAS("i2c:si1132");
MODULE_ALIAS("i2c:si1141");
MODULE_ALIAS("i2c:si1142");
MODULE_ALIAS("i2c:si1143");
MODULE_ALIAS("i2c:si1145");
MODULE_ALIAS("i2c:si1146");
MODULE_ALIAS("i2c:si1147");
