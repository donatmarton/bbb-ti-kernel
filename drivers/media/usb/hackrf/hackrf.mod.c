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
	{ 0xa57b02d8, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0xbb7e50d4, __VMLINUX_SYMBOL_STR(vb2_ops_wait_finish) },
	{ 0xff356465, __VMLINUX_SYMBOL_STR(vb2_ops_wait_prepare) },
	{ 0xd65e119c, __VMLINUX_SYMBOL_STR(v4l2_event_unsubscribe) },
	{ 0xf14e487f, __VMLINUX_SYMBOL_STR(v4l2_ctrl_subscribe_event) },
	{ 0xf2e99a87, __VMLINUX_SYMBOL_STR(v4l2_ctrl_log_status) },
	{ 0x583b5249, __VMLINUX_SYMBOL_STR(vb2_ioctl_streamoff) },
	{ 0xecdbf0c1, __VMLINUX_SYMBOL_STR(vb2_ioctl_streamon) },
	{ 0x2ac6de76, __VMLINUX_SYMBOL_STR(vb2_ioctl_prepare_buf) },
	{ 0x3f0bdd35, __VMLINUX_SYMBOL_STR(vb2_ioctl_create_bufs) },
	{ 0xc8c583, __VMLINUX_SYMBOL_STR(vb2_ioctl_dqbuf) },
	{ 0x32fefc7d, __VMLINUX_SYMBOL_STR(vb2_ioctl_expbuf) },
	{ 0x8cbcab60, __VMLINUX_SYMBOL_STR(vb2_ioctl_qbuf) },
	{ 0x2366bad1, __VMLINUX_SYMBOL_STR(vb2_ioctl_querybuf) },
	{ 0x61cebba, __VMLINUX_SYMBOL_STR(vb2_ioctl_reqbufs) },
	{ 0x6f2df140, __VMLINUX_SYMBOL_STR(vb2_fop_release) },
	{ 0x36286b89, __VMLINUX_SYMBOL_STR(v4l2_fh_open) },
	{ 0xdca73e2d, __VMLINUX_SYMBOL_STR(vb2_fop_mmap) },
	{ 0x787c75c1, __VMLINUX_SYMBOL_STR(video_ioctl2) },
	{ 0xfd2d27f4, __VMLINUX_SYMBOL_STR(vb2_fop_poll) },
	{ 0x79d15749, __VMLINUX_SYMBOL_STR(vb2_fop_write) },
	{ 0xdfcd0d3e, __VMLINUX_SYMBOL_STR(vb2_fop_read) },
	{ 0x2dfa331b, __VMLINUX_SYMBOL_STR(video_device_release_empty) },
	{ 0x76d817, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x1cd1a26f, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0x55da3d4e, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
	{ 0x7174ae4a, __VMLINUX_SYMBOL_STR(usb_alloc_coherent) },
	{ 0xeae67959, __VMLINUX_SYMBOL_STR(__video_register_device) },
	{ 0xf58ce3c6, __VMLINUX_SYMBOL_STR(v4l2_device_register) },
	{ 0x2477d21e, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_setup) },
	{ 0x9bd58117, __VMLINUX_SYMBOL_STR(v4l2_ctrl_grab) },
	{ 0x9b66b765, __VMLINUX_SYMBOL_STR(v4l2_ctrl_auto_cluster) },
	{ 0xf30afd02, __VMLINUX_SYMBOL_STR(v4l2_ctrl_new_std) },
	{ 0x649dace1, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_init_class) },
	{ 0xd9967fe7, __VMLINUX_SYMBOL_STR(vb2_queue_init) },
	{ 0xc9e4f0cb, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xea177cae, __VMLINUX_SYMBOL_STR(vb2_vmalloc_memops) },
	{ 0xdc798d37, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0xcaa1a2be, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x7b8c3a36, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x94e8602, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0x6cfda908, __VMLINUX_SYMBOL_STR(dev_notice) },
	{ 0xef1e4705, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xc4ad22c6, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0x1c483a9, __VMLINUX_SYMBOL_STR(v4l2_get_timestamp) },
	{ 0xecab6780, __VMLINUX_SYMBOL_STR(vb2_plane_vaddr) },
	{ 0x37befc70, __VMLINUX_SYMBOL_STR(jiffies_to_msecs) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0x521445b, __VMLINUX_SYMBOL_STR(list_del) },
	{ 0x32cdd22a, __VMLINUX_SYMBOL_STR(vb2_buffer_done) },
	{ 0x40825f43, __VMLINUX_SYMBOL_STR(usb_free_coherent) },
	{ 0x900f303a, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0x16b7c05d, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0x43b0c9c3, __VMLINUX_SYMBOL_STR(preempt_schedule) },
	{ 0x2fd85baf, __VMLINUX_SYMBOL_STR(___ratelimit) },
	{ 0x706c5a65, __VMLINUX_SYMBOL_STR(preempt_count_sub) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0xf229424a, __VMLINUX_SYMBOL_STR(preempt_count_add) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xc6cab39f, __VMLINUX_SYMBOL_STR(video_devdata) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x6c2e3c61, __VMLINUX_SYMBOL_STR(v4l2_device_unregister) },
	{ 0x8cc1e73b, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_free) },
	{ 0x4e50231d, __VMLINUX_SYMBOL_STR(v4l2_device_put) },
	{ 0x62b72b0d, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x6e59c2b6, __VMLINUX_SYMBOL_STR(video_unregister_device) },
	{ 0xe0831637, __VMLINUX_SYMBOL_STR(v4l2_device_disconnect) },
	{ 0xe16b893b, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xc7da6011, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=videobuf2-v4l2,videobuf2-vmalloc,videobuf2-core";

MODULE_ALIAS("usb:v1D50p6089d*dc*dsc*dp*ic*isc*ip*in*");
