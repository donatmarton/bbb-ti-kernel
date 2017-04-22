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
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0xf6789fdc, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xa2b4ff8a, __VMLINUX_SYMBOL_STR(v4l2_event_unsubscribe) },
	{ 0x1f155200, __VMLINUX_SYMBOL_STR(video_device_release_empty) },
	{ 0xefe21d65, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x592b8e7b, __VMLINUX_SYMBOL_STR(led_classdev_register) },
	{ 0x7c85ee2e, __VMLINUX_SYMBOL_STR(v4l2_ctrl_log_status) },
	{ 0x953be438, __VMLINUX_SYMBOL_STR(v4l2_device_unregister) },
	{ 0xcab184b3, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_free) },
	{ 0xaf68dd7b, __VMLINUX_SYMBOL_STR(v4l2_ctrl_new_std) },
	{ 0x2a3aa678, __VMLINUX_SYMBOL_STR(_test_and_clear_bit) },
	{ 0x4205ad24, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xbe661254, __VMLINUX_SYMBOL_STR(__video_register_device) },
	{ 0xdbe8baac, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xb1d8c290, __VMLINUX_SYMBOL_STR(v4l2_device_register) },
	{ 0xdd0a2ba2, __VMLINUX_SYMBOL_STR(strlcat) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x95428892, __VMLINUX_SYMBOL_STR(v4l2_device_disconnect) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x1a329efe, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x5a32f871, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x837dcec3, __VMLINUX_SYMBOL_STR(video_unregister_device) },
	{ 0x7c7ffbd6, __VMLINUX_SYMBOL_STR(v4l2_ctrl_subscribe_event) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0xfed0a669, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x58474f12, __VMLINUX_SYMBOL_STR(v4l2_fh_release) },
	{ 0x480f7e4e, __VMLINUX_SYMBOL_STR(v4l2_device_set_name) },
	{ 0xbaf60ce7, __VMLINUX_SYMBOL_STR(video_devdata) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xd7a37482, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_setup) },
	{ 0x2ccdf392, __VMLINUX_SYMBOL_STR(usb_interrupt_msg) },
	{ 0x147fb690, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xb3fb06a2, __VMLINUX_SYMBOL_STR(v4l2_fh_open) },
	{ 0xbab724fe, __VMLINUX_SYMBOL_STR(led_classdev_unregister) },
	{ 0x9c55cec, __VMLINUX_SYMBOL_STR(schedule_timeout_interruptible) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x5624c03d, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_init_class) },
	{ 0x60fad71b, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xf886c58e, __VMLINUX_SYMBOL_STR(v4l2_device_put) },
	{ 0x964deb5d, __VMLINUX_SYMBOL_STR(video_ioctl2) },
	{ 0x55c0ff92, __VMLINUX_SYMBOL_STR(v4l2_ctrl_poll) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v077Dp627Ad0010dc*dsc*dp*ic03isc*ip*in*");
