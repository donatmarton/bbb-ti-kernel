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
	{ 0x61cebba, __VMLINUX_SYMBOL_STR(vb2_ioctl_reqbufs) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x402b8281, __VMLINUX_SYMBOL_STR(__request_module) },
	{ 0x7b8c3a36, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xd65e119c, __VMLINUX_SYMBOL_STR(v4l2_event_unsubscribe) },
	{ 0x605d4ce7, __VMLINUX_SYMBOL_STR(rc_unregister_device) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xff178f6, __VMLINUX_SYMBOL_STR(__aeabi_idivmod) },
	{ 0x14096ab6, __VMLINUX_SYMBOL_STR(_vb2_fop_release) },
	{ 0x2dfa331b, __VMLINUX_SYMBOL_STR(video_device_release_empty) },
	{ 0x7e42e836, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x2abae88d, __VMLINUX_SYMBOL_STR(dvb_dmx_init) },
	{ 0x6c09c2a4, __VMLINUX_SYMBOL_STR(del_timer) },
	{ 0x5b888ea4, __VMLINUX_SYMBOL_STR(dvb_unregister_adapter) },
	{ 0x8f3c19, __VMLINUX_SYMBOL_STR(v4l2_i2c_new_subdev) },
	{ 0xf2e99a87, __VMLINUX_SYMBOL_STR(v4l2_ctrl_log_status) },
	{ 0xdd51c7e7, __VMLINUX_SYMBOL_STR(tveeprom_hauppauge_analog) },
	{ 0x311f79d1, __VMLINUX_SYMBOL_STR(dvb_frontend_suspend) },
	{ 0xec0d5c1e, __VMLINUX_SYMBOL_STR(dvb_register_frontend) },
	{ 0x6c2e3c61, __VMLINUX_SYMBOL_STR(v4l2_device_unregister) },
	{ 0x89c767f9, __VMLINUX_SYMBOL_STR(dvb_frontend_resume) },
	{ 0x72121e72, __VMLINUX_SYMBOL_STR(i2c_transfer) },
	{ 0x8cc1e73b, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_free) },
	{ 0xfd2d27f4, __VMLINUX_SYMBOL_STR(vb2_fop_poll) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0xecdbf0c1, __VMLINUX_SYMBOL_STR(vb2_ioctl_streamon) },
	{ 0x4205ad24, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0x16b7c05d, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0xff356465, __VMLINUX_SYMBOL_STR(vb2_ops_wait_prepare) },
	{ 0xddf6839, __VMLINUX_SYMBOL_STR(dvb_unregister_frontend) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xeae67959, __VMLINUX_SYMBOL_STR(__video_register_device) },
	{ 0x9580deb, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x4c29dcbf, __VMLINUX_SYMBOL_STR(cancel_delayed_work_sync) },
	{ 0x62b72b0d, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x71d463ea, __VMLINUX_SYMBOL_STR(usb_unlink_urb) },
	{ 0x73d65cd, __VMLINUX_SYMBOL_STR(rc_allocate_device) },
	{ 0x440f84db, __VMLINUX_SYMBOL_STR(dvb_net_release) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0xe2566433, __VMLINUX_SYMBOL_STR(i2c_add_adapter) },
	{ 0x943f402e, __VMLINUX_SYMBOL_STR(dvb_frontend_detach) },
	{ 0xf58ce3c6, __VMLINUX_SYMBOL_STR(v4l2_device_register) },
	{ 0xdfcd0d3e, __VMLINUX_SYMBOL_STR(vb2_fop_read) },
	{ 0x63b87fc5, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xdd0a2ba2, __VMLINUX_SYMBOL_STR(strlcat) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xe0831637, __VMLINUX_SYMBOL_STR(v4l2_device_disconnect) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xea177cae, __VMLINUX_SYMBOL_STR(vb2_vmalloc_memops) },
	{ 0x664ca1c5, __VMLINUX_SYMBOL_STR(rc_free_device) },
	{ 0x706c5a65, __VMLINUX_SYMBOL_STR(preempt_count_sub) },
	{ 0xd304f5a5, __VMLINUX_SYMBOL_STR(param_ops_short) },
	{ 0xdca73e2d, __VMLINUX_SYMBOL_STR(vb2_fop_mmap) },
	{ 0x8cbcab60, __VMLINUX_SYMBOL_STR(vb2_ioctl_qbuf) },
	{ 0x76d817, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x23ffbee, __VMLINUX_SYMBOL_STR(dvb_dmxdev_release) },
	{ 0x48a0f939, __VMLINUX_SYMBOL_STR(mutex_lock_interruptible) },
	{ 0xdc798d37, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x6e59c2b6, __VMLINUX_SYMBOL_STR(video_unregister_device) },
	{ 0xc654e37, __VMLINUX_SYMBOL_STR(dvb_net_init) },
	{ 0xfea687c8, __VMLINUX_SYMBOL_STR(usb_set_interface) },
	{ 0xf14e487f, __VMLINUX_SYMBOL_STR(v4l2_ctrl_subscribe_event) },
	{ 0xecab6780, __VMLINUX_SYMBOL_STR(vb2_plane_vaddr) },
	{ 0x32cdd22a, __VMLINUX_SYMBOL_STR(vb2_buffer_done) },
	{ 0x94e8602, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x7e0b888f, __VMLINUX_SYMBOL_STR(rc_register_device) },
	{ 0xe16b893b, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x521445b, __VMLINUX_SYMBOL_STR(list_del) },
	{ 0x2ac6de76, __VMLINUX_SYMBOL_STR(vb2_ioctl_prepare_buf) },
	{ 0x16e5c2a, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0x1a83ca08, __VMLINUX_SYMBOL_STR(tveeprom_read) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0x3f0bdd35, __VMLINUX_SYMBOL_STR(vb2_ioctl_create_bufs) },
	{ 0x43b0c9c3, __VMLINUX_SYMBOL_STR(preempt_schedule) },
	{ 0x40825f43, __VMLINUX_SYMBOL_STR(usb_free_coherent) },
	{ 0x65f3a750, __VMLINUX_SYMBOL_STR(dvb_dmx_release) },
	{ 0xc8c583, __VMLINUX_SYMBOL_STR(vb2_ioctl_dqbuf) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0x868784cb, __VMLINUX_SYMBOL_STR(__symbol_get) },
	{ 0xfb46815d, __VMLINUX_SYMBOL_STR(i2c_del_adapter) },
	{ 0xc4ad22c6, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0xb52cecf6, __VMLINUX_SYMBOL_STR(dvb_dmx_swfilter_packets) },
	{ 0xc6cab39f, __VMLINUX_SYMBOL_STR(video_devdata) },
	{ 0x3f616ce2, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xc9ee230b, __VMLINUX_SYMBOL_STR(dvb_register_adapter) },
	{ 0xcaa1a2be, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x2cf3f76d, __VMLINUX_SYMBOL_STR(i2c_master_recv) },
	{ 0x36286b89, __VMLINUX_SYMBOL_STR(v4l2_fh_open) },
	{ 0x2366bad1, __VMLINUX_SYMBOL_STR(vb2_ioctl_querybuf) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x29923658, __VMLINUX_SYMBOL_STR(param_array_ops) },
	{ 0x649dace1, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_init_class) },
	{ 0x1cd1a26f, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0xbb7e50d4, __VMLINUX_SYMBOL_STR(vb2_ops_wait_finish) },
	{ 0xf84cc2e6, __VMLINUX_SYMBOL_STR(ir_raw_event_store) },
	{ 0xb2b2f68, __VMLINUX_SYMBOL_STR(i2c_probe_func_quick_read) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x6e9dd606, __VMLINUX_SYMBOL_STR(__symbol_put) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x4ceedf1a, __VMLINUX_SYMBOL_STR(usb_ifnum_to_if) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x32fefc7d, __VMLINUX_SYMBOL_STR(vb2_ioctl_expbuf) },
	{ 0x7174ae4a, __VMLINUX_SYMBOL_STR(usb_alloc_coherent) },
	{ 0x7f02188f, __VMLINUX_SYMBOL_STR(__msecs_to_jiffies) },
	{ 0x583b5249, __VMLINUX_SYMBOL_STR(vb2_ioctl_streamoff) },
	{ 0xf229424a, __VMLINUX_SYMBOL_STR(preempt_count_add) },
	{ 0x280e4834, __VMLINUX_SYMBOL_STR(vb2_queue_release) },
	{ 0x4e50231d, __VMLINUX_SYMBOL_STR(v4l2_device_put) },
	{ 0x70718b3e, __VMLINUX_SYMBOL_STR(ir_raw_event_handle) },
	{ 0x900f303a, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0x1c483a9, __VMLINUX_SYMBOL_STR(v4l2_get_timestamp) },
	{ 0x787c75c1, __VMLINUX_SYMBOL_STR(video_ioctl2) },
	{ 0x55da3d4e, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
	{ 0xd123948d, __VMLINUX_SYMBOL_STR(dvb_dmxdev_init) },
	{ 0xd9967fe7, __VMLINUX_SYMBOL_STR(vb2_queue_init) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=videobuf2-v4l2,tveeprom,videobuf2-vmalloc,videobuf2-core";

MODULE_ALIAS("usb:v2040p7200d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7240d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0FE9pD620d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7210d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7217d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p721Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p721Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p721Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7280d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0FD9p0008d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7201d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7211d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7281d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05E1p0480d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p8200d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7260d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7213d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7270d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "D0324931E82C7C8815E207B");
