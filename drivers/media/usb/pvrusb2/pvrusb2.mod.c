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
	{ 0x402b8281, __VMLINUX_SYMBOL_STR(__request_module) },
	{ 0x930284be, __VMLINUX_SYMBOL_STR(device_remove_file) },
	{ 0x7b8c3a36, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x65e75cb6, __VMLINUX_SYMBOL_STR(__list_del_entry) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x7e42e836, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x2abae88d, __VMLINUX_SYMBOL_STR(dvb_dmx_init) },
	{ 0x6c09c2a4, __VMLINUX_SYMBOL_STR(del_timer) },
	{ 0x5b888ea4, __VMLINUX_SYMBOL_STR(dvb_unregister_adapter) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x8f3c19, __VMLINUX_SYMBOL_STR(v4l2_i2c_new_subdev) },
	{ 0x43a53735, __VMLINUX_SYMBOL_STR(__alloc_workqueue_key) },
	{ 0xdd51c7e7, __VMLINUX_SYMBOL_STR(tveeprom_hauppauge_analog) },
	{ 0xec0d5c1e, __VMLINUX_SYMBOL_STR(dvb_register_frontend) },
	{ 0x6c2e3c61, __VMLINUX_SYMBOL_STR(v4l2_device_unregister) },
	{ 0x72121e72, __VMLINUX_SYMBOL_STR(i2c_transfer) },
	{ 0x7ab88a45, __VMLINUX_SYMBOL_STR(system_freezing_cnt) },
	{ 0x16b7c05d, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0xe2fae716, __VMLINUX_SYMBOL_STR(kmemdup) },
	{ 0xddf6839, __VMLINUX_SYMBOL_STR(dvb_unregister_frontend) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xeae67959, __VMLINUX_SYMBOL_STR(__video_register_device) },
	{ 0x9580deb, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x62b72b0d, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xcf76ce95, __VMLINUX_SYMBOL_STR(cx2341x_fill_defaults) },
	{ 0x71d463ea, __VMLINUX_SYMBOL_STR(usb_unlink_urb) },
	{ 0x906099bd, __VMLINUX_SYMBOL_STR(sysfs_remove_group) },
	{ 0x1ca0c084, __VMLINUX_SYMBOL_STR(cx2341x_log_status) },
	{ 0x440f84db, __VMLINUX_SYMBOL_STR(dvb_net_release) },
	{ 0xe564cc94, __VMLINUX_SYMBOL_STR(kthread_create_on_node) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0xe2566433, __VMLINUX_SYMBOL_STR(i2c_add_adapter) },
	{ 0xf4fa543b, __VMLINUX_SYMBOL_STR(arm_copy_to_user) },
	{ 0x943f402e, __VMLINUX_SYMBOL_STR(dvb_frontend_detach) },
	{ 0xf58ce3c6, __VMLINUX_SYMBOL_STR(v4l2_device_register) },
	{ 0xc184ec1e, __VMLINUX_SYMBOL_STR(cx2341x_ctrl_get_menu) },
	{ 0x63b87fc5, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xd49bd803, __VMLINUX_SYMBOL_STR(wait_for_completion) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xe0831637, __VMLINUX_SYMBOL_STR(v4l2_device_disconnect) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x706c5a65, __VMLINUX_SYMBOL_STR(preempt_count_sub) },
	{ 0xd304f5a5, __VMLINUX_SYMBOL_STR(param_ops_short) },
	{ 0xb2797252, __VMLINUX_SYMBOL_STR(device_register) },
	{ 0x16041f83, __VMLINUX_SYMBOL_STR(usb_lock_device_for_reset) },
	{ 0x2f25eee2, __VMLINUX_SYMBOL_STR(cx2341x_update) },
	{ 0x942c9222, __VMLINUX_SYMBOL_STR(freezing_slow_path) },
	{ 0x76d817, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x23ffbee, __VMLINUX_SYMBOL_STR(dvb_dmxdev_release) },
	{ 0xdc798d37, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xaf0d0b73, __VMLINUX_SYMBOL_STR(kthread_stop) },
	{ 0x8f7a5832, __VMLINUX_SYMBOL_STR(sysfs_create_group) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x6e59c2b6, __VMLINUX_SYMBOL_STR(video_unregister_device) },
	{ 0x8efb86a3, __VMLINUX_SYMBOL_STR(dvb_dmx_swfilter) },
	{ 0xe70f5df4, __VMLINUX_SYMBOL_STR(class_unregister) },
	{ 0xc654e37, __VMLINUX_SYMBOL_STR(dvb_net_init) },
	{ 0xfea687c8, __VMLINUX_SYMBOL_STR(usb_set_interface) },
	{ 0x17702358, __VMLINUX_SYMBOL_STR(v4l2_fh_init) },
	{ 0x328a05f1, __VMLINUX_SYMBOL_STR(strncpy) },
	{ 0x94e8602, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0xe16b893b, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x8c03d20c, __VMLINUX_SYMBOL_STR(destroy_workqueue) },
	{ 0x5c93be6c, __VMLINUX_SYMBOL_STR(device_move) },
	{ 0x1bb31047, __VMLINUX_SYMBOL_STR(add_timer) },
	{ 0x43b0c9c3, __VMLINUX_SYMBOL_STR(preempt_schedule) },
	{ 0xdae9baa6, __VMLINUX_SYMBOL_STR(__class_register) },
	{ 0x65f3a750, __VMLINUX_SYMBOL_STR(dvb_dmx_release) },
	{ 0x42160169, __VMLINUX_SYMBOL_STR(flush_workqueue) },
	{ 0x868784cb, __VMLINUX_SYMBOL_STR(__symbol_get) },
	{ 0xbc5671dc, __VMLINUX_SYMBOL_STR(v4l_printk_ioctl) },
	{ 0xb65a5213, __VMLINUX_SYMBOL_STR(device_create_file) },
	{ 0xfb46815d, __VMLINUX_SYMBOL_STR(i2c_del_adapter) },
	{ 0xc4ad22c6, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0x7c8e67a0, __VMLINUX_SYMBOL_STR(put_device) },
	{ 0xc6cab39f, __VMLINUX_SYMBOL_STR(video_devdata) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x8881268b, __VMLINUX_SYMBOL_STR(usb_reset_device) },
	{ 0x7624ae76, __VMLINUX_SYMBOL_STR(usb_bulk_msg) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0x46f344d6, __VMLINUX_SYMBOL_STR(usb_clear_halt) },
	{ 0x3db8be82, __VMLINUX_SYMBOL_STR(cx2341x_ctrl_query) },
	{ 0x4482cdb, __VMLINUX_SYMBOL_STR(__refrigerator) },
	{ 0xd65172e, __VMLINUX_SYMBOL_STR(wake_up_process) },
	{ 0xc9ee230b, __VMLINUX_SYMBOL_STR(dvb_register_adapter) },
	{ 0xcaa1a2be, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xd9ff3ac3, __VMLINUX_SYMBOL_STR(get_device) },
	{ 0xb9e52429, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0xb3f7646e, __VMLINUX_SYMBOL_STR(kthread_should_stop) },
	{ 0x158f2f00, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x29923658, __VMLINUX_SYMBOL_STR(param_array_ops) },
	{ 0x9e61bb05, __VMLINUX_SYMBOL_STR(set_freezable) },
	{ 0xf9e73082, __VMLINUX_SYMBOL_STR(scnprintf) },
	{ 0x1cd1a26f, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0x5ed56e18, __VMLINUX_SYMBOL_STR(request_firmware) },
	{ 0x8893fa5d, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x847287f1, __VMLINUX_SYMBOL_STR(v4l2_fh_add) },
	{ 0xf9dd9922, __VMLINUX_SYMBOL_STR(__init_swait_queue_head) },
	{ 0x684ff483, __VMLINUX_SYMBOL_STR(device_unregister) },
	{ 0xc4b8d1c6, __VMLINUX_SYMBOL_STR(v4l2_fh_del) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x30cb4cd7, __VMLINUX_SYMBOL_STR(cx2341x_ext_ctrls) },
	{ 0xb742fd7, __VMLINUX_SYMBOL_STR(simple_strtol) },
	{ 0x6e9dd606, __VMLINUX_SYMBOL_STR(__symbol_put) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x9cbcaf26, __VMLINUX_SYMBOL_STR(complete) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xd035cb86, __VMLINUX_SYMBOL_STR(dev_set_name) },
	{ 0xf229424a, __VMLINUX_SYMBOL_STR(preempt_count_add) },
	{ 0x500015c0, __VMLINUX_SYMBOL_STR(i2c_new_device) },
	{ 0x900f303a, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0x22ef151f, __VMLINUX_SYMBOL_STR(release_firmware) },
	{ 0x787c75c1, __VMLINUX_SYMBOL_STR(video_ioctl2) },
	{ 0x55da3d4e, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
	{ 0xd123948d, __VMLINUX_SYMBOL_STR(dvb_dmxdev_init) },
	{ 0xf5d6a8b4, __VMLINUX_SYMBOL_STR(v4l2_fh_exit) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=tveeprom,cx2341x";

MODULE_ALIAS("usb:v2040p2900d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p2950d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p2400d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1164p0622d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1164p0602d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v11BAp1003d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v11BAp1001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7300d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7500d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7501d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CCDp0039d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "9F053E1B790B811D906B1B7");
