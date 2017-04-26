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
	{ 0x7b8c3a36, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xa5cef8ad, __VMLINUX_SYMBOL_STR(release_resource) },
	{ 0x50e10625, __VMLINUX_SYMBOL_STR(serio_unregister_driver) },
	{ 0x16b7c05d, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0x25e84297, __VMLINUX_SYMBOL_STR(input_ff_create) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x62b72b0d, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x71d463ea, __VMLINUX_SYMBOL_STR(usb_unlink_urb) },
	{ 0x91621d6a, __VMLINUX_SYMBOL_STR(allocate_resource) },
	{ 0x33694668, __VMLINUX_SYMBOL_STR(input_set_abs_params) },
	{ 0xf228c79, __VMLINUX_SYMBOL_STR(input_event) },
	{ 0x63b87fc5, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x706c5a65, __VMLINUX_SYMBOL_STR(preempt_count_sub) },
	{ 0x2deff3aa, __VMLINUX_SYMBOL_STR(__serio_register_driver) },
	{ 0xef1e4705, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x76d817, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0xdc798d37, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xe16b893b, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xb800c05f, __VMLINUX_SYMBOL_STR(serio_close) },
	{ 0x43b0c9c3, __VMLINUX_SYMBOL_STR(preempt_schedule) },
	{ 0x69cb5dda, __VMLINUX_SYMBOL_STR(serio_open) },
	{ 0xc4ad22c6, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x6eba04b0, __VMLINUX_SYMBOL_STR(input_register_device) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0x8d221fda, __VMLINUX_SYMBOL_STR(input_free_device) },
	{ 0xcaa1a2be, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xc7da6011, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0xb9e52429, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x158f2f00, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x1d620657, __VMLINUX_SYMBOL_STR(input_unregister_device) },
	{ 0x1cd1a26f, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0x8893fa5d, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x2f0664db, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xf229424a, __VMLINUX_SYMBOL_STR(preempt_count_add) },
	{ 0x900f303a, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0x55da3d4e, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
	{ 0x30c0ddd6, __VMLINUX_SYMBOL_STR(input_allocate_device) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("serio:ty02pr1Did*ex*");
MODULE_ALIAS("usb:v044FpA01Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v046DpC281d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v046DpC291d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05EFp020Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05EFp8884d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05EFp8888d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v061CpC0A4d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v061CpC084d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06F8p0001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06F8p0003d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06F8p0004d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06F8pA302d*dc*dsc*dp*ic*isc*ip*in*");
