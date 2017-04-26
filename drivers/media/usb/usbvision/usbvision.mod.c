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
	{ 0x930284be, __VMLINUX_SYMBOL_STR(device_remove_file) },
	{ 0x7b8c3a36, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xd65e119c, __VMLINUX_SYMBOL_STR(v4l2_event_unsubscribe) },
	{ 0x65e75cb6, __VMLINUX_SYMBOL_STR(__list_del_entry) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x2dfa331b, __VMLINUX_SYMBOL_STR(video_device_release_empty) },
	{ 0x7e42e836, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x8f3c19, __VMLINUX_SYMBOL_STR(v4l2_i2c_new_subdev) },
	{ 0xf2e99a87, __VMLINUX_SYMBOL_STR(v4l2_ctrl_log_status) },
	{ 0x6c2e3c61, __VMLINUX_SYMBOL_STR(v4l2_device_unregister) },
	{ 0x8cc1e73b, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_free) },
	{ 0xf2a353ac, __VMLINUX_SYMBOL_STR(v4l2_i2c_tuner_addrs) },
	{ 0x16b7c05d, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xeae67959, __VMLINUX_SYMBOL_STR(__video_register_device) },
	{ 0x62b72b0d, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0xe2566433, __VMLINUX_SYMBOL_STR(i2c_add_adapter) },
	{ 0xf4fa543b, __VMLINUX_SYMBOL_STR(arm_copy_to_user) },
	{ 0xf58ce3c6, __VMLINUX_SYMBOL_STR(v4l2_device_register) },
	{ 0x63b87fc5, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xe0831637, __VMLINUX_SYMBOL_STR(v4l2_device_disconnect) },
	{ 0x706c5a65, __VMLINUX_SYMBOL_STR(preempt_count_sub) },
	{ 0xef1e4705, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x76d817, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x48a0f939, __VMLINUX_SYMBOL_STR(mutex_lock_interruptible) },
	{ 0xdc798d37, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x6e59c2b6, __VMLINUX_SYMBOL_STR(video_unregister_device) },
	{ 0xfea687c8, __VMLINUX_SYMBOL_STR(usb_set_interface) },
	{ 0xf14e487f, __VMLINUX_SYMBOL_STR(v4l2_ctrl_subscribe_event) },
	{ 0x94e8602, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0xe16b893b, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x30cf8fd9, __VMLINUX_SYMBOL_STR(v4l2_fh_release) },
	{ 0x521445b, __VMLINUX_SYMBOL_STR(list_del) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0x43b0c9c3, __VMLINUX_SYMBOL_STR(preempt_schedule) },
	{ 0x40825f43, __VMLINUX_SYMBOL_STR(usb_free_coherent) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0x4adde97d, __VMLINUX_SYMBOL_STR(vm_insert_page) },
	{ 0xb65a5213, __VMLINUX_SYMBOL_STR(device_create_file) },
	{ 0xfb46815d, __VMLINUX_SYMBOL_STR(i2c_del_adapter) },
	{ 0xc4ad22c6, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0xd6efd600, __VMLINUX_SYMBOL_STR(usb_get_dev) },
	{ 0xc6cab39f, __VMLINUX_SYMBOL_STR(video_devdata) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x92d08eb8, __VMLINUX_SYMBOL_STR(usb_put_dev) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0xa0b04675, __VMLINUX_SYMBOL_STR(vmalloc_32) },
	{ 0x66107d78, __VMLINUX_SYMBOL_STR(v4l2_i2c_subdev_addr) },
	{ 0xcaa1a2be, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x36286b89, __VMLINUX_SYMBOL_STR(v4l2_fh_open) },
	{ 0xb9e52429, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x158f2f00, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x649dace1, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_init_class) },
	{ 0x1cd1a26f, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0x8893fa5d, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x1029e48c, __VMLINUX_SYMBOL_STR(vmalloc_to_page) },
	{ 0x7174ae4a, __VMLINUX_SYMBOL_STR(usb_alloc_coherent) },
	{ 0xf229424a, __VMLINUX_SYMBOL_STR(preempt_count_add) },
	{ 0x900f303a, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0x1c483a9, __VMLINUX_SYMBOL_STR(v4l2_get_timestamp) },
	{ 0x787c75c1, __VMLINUX_SYMBOL_STR(video_ioctl2) },
	{ 0xae922089, __VMLINUX_SYMBOL_STR(v4l2_ctrl_poll) },
	{ 0x55da3d4e, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v0A6Fp0400d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp0106d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp0207d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp0208d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0571p0002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0573p0003d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0573p0400d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0573p2000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0573p2D00d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0573p2D01d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0573p2101d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0573p3000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0573p3001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0573p4100d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0573p4110d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0573p4450d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0573p4550d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0573p4D00d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0573p4D01d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0573p4D02d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0573p4D03d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0573p4D04d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0573p4D10d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0573p4D11d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0573p4D12d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0573p4D14d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0573p4D2Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0573p4D2Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0573p4D2Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0573p4D20d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0573p4D21d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0573p4D22d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0573p4D23d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0573p4D24d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0573p4D25d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0573p4D26d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0573p4D27d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0573p4D28d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0573p4D29d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0573p4D30d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0573p4D31d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0573p4D32d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0573p4D34d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0573p4D35d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0573p4D36d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0573p4D37d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0573p4D38d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0768p0006d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07D0p0001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07D0p0002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07D0p0003d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07D0p0004d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07D0p0005d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07F8p9104d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2304p010Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2304p0109d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2304p0110d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2304p0111d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2304p0112d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2304p0113d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2304p0210d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2304p0212d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2304p0214d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2304p0300d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2304p0301d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2304p0419d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2400p4200d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "32B7EF9968BE53F6E0BA670");
