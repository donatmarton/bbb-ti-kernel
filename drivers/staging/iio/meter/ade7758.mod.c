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

MODULE_INFO(staging, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x2c197ea3, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x6d662533, __VMLINUX_SYMBOL_STR(_find_first_bit_le) },
	{ 0xae000c17, __VMLINUX_SYMBOL_STR(iio_trigger_unregister) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xdf76bbeb, __VMLINUX_SYMBOL_STR(iio_pollfunc_store_time) },
	{ 0x27bbf221, __VMLINUX_SYMBOL_STR(disable_irq_nosync) },
	{ 0xa2e91496, __VMLINUX_SYMBOL_STR(iio_read_const_attr) },
	{ 0x4d1f9895, __VMLINUX_SYMBOL_STR(iio_trigger_notify_done) },
	{ 0xd51f45dc, __VMLINUX_SYMBOL_STR(iio_trigger_alloc) },
	{ 0xb4b743ae, __VMLINUX_SYMBOL_STR(__spi_register_driver) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x62b72b0d, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x621ed07c, __VMLINUX_SYMBOL_STR(iio_kfifo_allocate) },
	{ 0x36ec1661, __VMLINUX_SYMBOL_STR(iio_device_register) },
	{ 0xb7541c52, __VMLINUX_SYMBOL_STR(spi_setup) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x684a2bb7, __VMLINUX_SYMBOL_STR(iio_device_unregister) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xbd7f1641, __VMLINUX_SYMBOL_STR(devm_iio_device_alloc) },
	{ 0x5a5a94a6, __VMLINUX_SYMBOL_STR(kstrtou8) },
	{ 0xef1e4705, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xb5c6a120, __VMLINUX_SYMBOL_STR(iio_triggered_buffer_postenable) },
	{ 0xdc798d37, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0xbf4cb513, __VMLINUX_SYMBOL_STR(iio_trigger_poll) },
	{ 0x2060d6e7, __VMLINUX_SYMBOL_STR(driver_unregister) },
	{ 0xe16b893b, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xd6b8e852, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0x5aab7cf2, __VMLINUX_SYMBOL_STR(iio_buffer_get) },
	{ 0x963133a1, __VMLINUX_SYMBOL_STR(spi_sync) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x5ac15bae, __VMLINUX_SYMBOL_STR(kstrtou16) },
	{ 0x5094f24a, __VMLINUX_SYMBOL_STR(iio_trigger_register) },
	{ 0x19a0c387, __VMLINUX_SYMBOL_STR(iio_triggered_buffer_predisable) },
	{ 0xa011445b, __VMLINUX_SYMBOL_STR(iio_kfifo_free) },
	{ 0xc7da6011, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0xd9ff3ac3, __VMLINUX_SYMBOL_STR(get_device) },
	{ 0xd74f9f2e, __VMLINUX_SYMBOL_STR(__module_get) },
	{ 0xd938a460, __VMLINUX_SYMBOL_STR(iio_trigger_free) },
	{ 0xfcec0987, __VMLINUX_SYMBOL_STR(enable_irq) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x6ada6489, __VMLINUX_SYMBOL_STR(spi_get_device_id) },
	{ 0xe975e5be, __VMLINUX_SYMBOL_STR(iio_alloc_pollfunc) },
	{ 0xb90c9276, __VMLINUX_SYMBOL_STR(iio_push_to_buffers) },
	{ 0x5cdc6155, __VMLINUX_SYMBOL_STR(iio_validate_scan_mask_onehot) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xe50e48b4, __VMLINUX_SYMBOL_STR(iio_dealloc_pollfunc) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=industrialio,kfifo_buf";

MODULE_ALIAS("spi:ade7758");
