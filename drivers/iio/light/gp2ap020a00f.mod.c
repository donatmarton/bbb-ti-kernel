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
	{ 0x518d5839, __VMLINUX_SYMBOL_STR(iio_device_register) },
	{ 0x85f37eac, __VMLINUX_SYMBOL_STR(iio_trigger_register) },
	{ 0x7090f8c3, __VMLINUX_SYMBOL_STR(devm_iio_trigger_alloc) },
	{ 0x5b44788c, __VMLINUX_SYMBOL_STR(iio_triggered_buffer_setup) },
	{ 0xdf76bbeb, __VMLINUX_SYMBOL_STR(iio_pollfunc_store_time) },
	{ 0x5a32f871, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x3663792, __VMLINUX_SYMBOL_STR(__devm_regmap_init_i2c) },
	{ 0xdcd88a5e, __VMLINUX_SYMBOL_STR(regulator_enable) },
	{ 0xea22191c, __VMLINUX_SYMBOL_STR(devm_regulator_get) },
	{ 0x88d156ca, __VMLINUX_SYMBOL_STR(devm_iio_device_alloc) },
	{ 0xd843fa3f, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x1cfb04fa, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0x344b7739, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x622598b1, __VMLINUX_SYMBOL_STR(init_wait_entry) },
	{ 0x3dc152c2, __VMLINUX_SYMBOL_STR(iio_device_release_direct_mode) },
	{ 0x1ae023ec, __VMLINUX_SYMBOL_STR(iio_device_claim_direct_mode) },
	{ 0x9369f5c1, __VMLINUX_SYMBOL_STR(iio_trigger_notify_done) },
	{ 0xee8b6c0, __VMLINUX_SYMBOL_STR(iio_push_to_buffers) },
	{ 0x8c3cb67a, __VMLINUX_SYMBOL_STR(iio_triggered_buffer_postenable) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xd6b8e852, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0xdbe8baac, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xd3f57a2, __VMLINUX_SYMBOL_STR(_find_next_bit_le) },
	{ 0x6d662533, __VMLINUX_SYMBOL_STR(_find_first_bit_le) },
	{ 0xaba4bfe1, __VMLINUX_SYMBOL_STR(iio_triggered_buffer_predisable) },
	{ 0xfed0a669, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0xf7a872d7, __VMLINUX_SYMBOL_STR(iio_push_event) },
	{ 0xaa9a9172, __VMLINUX_SYMBOL_STR(iio_get_time_ns) },
	{ 0x200cd300, __VMLINUX_SYMBOL_STR(regmap_bulk_read) },
	{ 0xcfb5871c, __VMLINUX_SYMBOL_STR(irq_work_queue) },
	{ 0xd85cd67e, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0x20cc31ce, __VMLINUX_SYMBOL_STR(regmap_write) },
	{ 0x130e7c3f, __VMLINUX_SYMBOL_STR(iio_trigger_poll) },
	{ 0x7fe0dc08, __VMLINUX_SYMBOL_STR(regmap_bulk_write) },
	{ 0x752aeb9e, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x49e6b372, __VMLINUX_SYMBOL_STR(regulator_disable) },
	{ 0x6e15087e, __VMLINUX_SYMBOL_STR(iio_triggered_buffer_cleanup) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
	{ 0xac1ce979, __VMLINUX_SYMBOL_STR(iio_trigger_unregister) },
	{ 0x5f1c59a6, __VMLINUX_SYMBOL_STR(iio_device_unregister) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xf3b439c1, __VMLINUX_SYMBOL_STR(regmap_update_bits_base) },
	{ 0xa1746f8a, __VMLINUX_SYMBOL_STR(regmap_read) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=industrialio,industrialio-triggered-buffer";

MODULE_ALIAS("of:N*T*Csharp,gp2ap020a00f");
MODULE_ALIAS("of:N*T*Csharp,gp2ap020a00fC*");
MODULE_ALIAS("i2c:gp2ap020a00f");
