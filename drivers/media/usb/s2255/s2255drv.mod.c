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
	{ 0xefe21d65, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0xd980d45d, __VMLINUX_SYMBOL_STR(vb2_fop_release) },
	{ 0x30b88bc1, __VMLINUX_SYMBOL_STR(vb2_fop_mmap) },
	{ 0x964deb5d, __VMLINUX_SYMBOL_STR(video_ioctl2) },
	{ 0x999a188, __VMLINUX_SYMBOL_STR(vb2_fop_poll) },
	{ 0x9a78a0f0, __VMLINUX_SYMBOL_STR(vb2_fop_read) },
	{ 0xa2b4ff8a, __VMLINUX_SYMBOL_STR(v4l2_event_unsubscribe) },
	{ 0x7c7ffbd6, __VMLINUX_SYMBOL_STR(v4l2_ctrl_subscribe_event) },
	{ 0x7c85ee2e, __VMLINUX_SYMBOL_STR(v4l2_ctrl_log_status) },
	{ 0x29f4ece5, __VMLINUX_SYMBOL_STR(vb2_ioctl_streamoff) },
	{ 0xbb9916cc, __VMLINUX_SYMBOL_STR(vb2_ioctl_streamon) },
	{ 0xe63fafb2, __VMLINUX_SYMBOL_STR(vb2_ioctl_dqbuf) },
	{ 0xff55c391, __VMLINUX_SYMBOL_STR(vb2_ioctl_qbuf) },
	{ 0x44058527, __VMLINUX_SYMBOL_STR(vb2_ioctl_querybuf) },
	{ 0x666f894e, __VMLINUX_SYMBOL_STR(vb2_ioctl_reqbufs) },
	{ 0x81a200e0, __VMLINUX_SYMBOL_STR(vb2_ops_wait_finish) },
	{ 0x224db162, __VMLINUX_SYMBOL_STR(vb2_ops_wait_prepare) },
	{ 0x1a329efe, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x60fad71b, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0xb3fb06a2, __VMLINUX_SYMBOL_STR(v4l2_fh_open) },
	{ 0x2d7ed253, __VMLINUX_SYMBOL_STR(v4l2_ctrl_new_custom) },
	{ 0xbe661254, __VMLINUX_SYMBOL_STR(__video_register_device) },
	{ 0x5b079986, __VMLINUX_SYMBOL_STR(vb2_queue_init) },
	{ 0x4e013662, __VMLINUX_SYMBOL_STR(vb2_vmalloc_memops) },
	{ 0xaf68dd7b, __VMLINUX_SYMBOL_STR(v4l2_ctrl_new_std) },
	{ 0x5624c03d, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_init_class) },
	{ 0xb1d8c290, __VMLINUX_SYMBOL_STR(v4l2_device_register) },
	{ 0xd6ee688f, __VMLINUX_SYMBOL_STR(vmalloc) },
	{ 0x584c9d8c, __VMLINUX_SYMBOL_STR(usb_reset_device) },
	{ 0xd843fa3f, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0xde0aeb10, __VMLINUX_SYMBOL_STR(request_firmware) },
	{ 0x4ecc5f3f, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x8fdf772a, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x182469b8, __VMLINUX_SYMBOL_STR(usb_get_dev) },
	{ 0x5a32f871, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0xfa5bcf35, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xcab184b3, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_free) },
	{ 0x837dcec3, __VMLINUX_SYMBOL_STR(video_unregister_device) },
	{ 0x95428892, __VMLINUX_SYMBOL_STR(v4l2_device_disconnect) },
	{ 0x953be438, __VMLINUX_SYMBOL_STR(v4l2_device_unregister) },
	{ 0x631c30ca, __VMLINUX_SYMBOL_STR(usb_put_dev) },
	{ 0x3743de2b, __VMLINUX_SYMBOL_STR(release_firmware) },
	{ 0x3f5c6471, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x82fc1495, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0x147fb690, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xf6789fdc, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0xa2615298, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0xae9d6cbf, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0x857b0b4c, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x1cfb04fa, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0x344b7739, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x622598b1, __VMLINUX_SYMBOL_STR(init_wait_entry) },
	{ 0x30800578, __VMLINUX_SYMBOL_STR(usb_bulk_msg) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0xdbe8baac, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xa53aaa13, __VMLINUX_SYMBOL_STR(__v4l2_ctrl_s_ctrl) },
	{ 0xfed0a669, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xbaf60ce7, __VMLINUX_SYMBOL_STR(video_devdata) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x56a638bb, __VMLINUX_SYMBOL_STR(vb2_buffer_done) },
	{ 0x2488f58f, __VMLINUX_SYMBOL_STR(vb2_plane_vaddr) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0xc87c1f84, __VMLINUX_SYMBOL_STR(ktime_get) },
	{ 0x521445b, __VMLINUX_SYMBOL_STR(list_del) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x752aeb9e, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xd85cd67e, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x7500da19, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=videobuf2-v4l2,videobuf2-vmalloc,videobuf2-core";

MODULE_ALIAS("usb:v1943p2255d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1943p2257d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "CC5C6346F58A9EA8C6B6E18");
