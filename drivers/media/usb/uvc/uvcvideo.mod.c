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
	{ 0xd65e119c, __VMLINUX_SYMBOL_STR(v4l2_event_unsubscribe) },
	{ 0x4be85a03, __VMLINUX_SYMBOL_STR(memweight) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xe6da44a, __VMLINUX_SYMBOL_STR(set_normalized_timespec) },
	{ 0x528c709d, __VMLINUX_SYMBOL_STR(simple_read_from_buffer) },
	{ 0x8cdce33c, __VMLINUX_SYMBOL_STR(debugfs_create_dir) },
	{ 0x81c85944, __VMLINUX_SYMBOL_STR(v4l2_event_queue_fh) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xaa6c9c56, __VMLINUX_SYMBOL_STR(vb2_mmap) },
	{ 0xea99b9d5, __VMLINUX_SYMBOL_STR(usb_debug_root) },
	{ 0x6c2e3c61, __VMLINUX_SYMBOL_STR(v4l2_device_unregister) },
	{ 0xb5a12ae1, __VMLINUX_SYMBOL_STR(no_llseek) },
	{ 0xb6219f47, __VMLINUX_SYMBOL_STR(vb2_create_bufs) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0x16b7c05d, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0xe2fae716, __VMLINUX_SYMBOL_STR(kmemdup) },
	{ 0xff356465, __VMLINUX_SYMBOL_STR(vb2_ops_wait_prepare) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xeae67959, __VMLINUX_SYMBOL_STR(__video_register_device) },
	{ 0x28cc25db, __VMLINUX_SYMBOL_STR(arm_copy_from_user) },
	{ 0x62b72b0d, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x3c117aa, __VMLINUX_SYMBOL_STR(usb_autopm_get_interface) },
	{ 0xf2a10de1, __VMLINUX_SYMBOL_STR(usb_enable_autosuspend) },
	{ 0x9590237e, __VMLINUX_SYMBOL_STR(debugfs_create_file) },
	{ 0x1b5c0864, __VMLINUX_SYMBOL_STR(v4l2_ctrl_merge) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x2eada87e, __VMLINUX_SYMBOL_STR(debugfs_remove_recursive) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0xf4fa543b, __VMLINUX_SYMBOL_STR(arm_copy_to_user) },
	{ 0x12d3f6d7, __VMLINUX_SYMBOL_STR(media_entity_cleanup) },
	{ 0xf58ce3c6, __VMLINUX_SYMBOL_STR(v4l2_device_register) },
	{ 0xf228c79, __VMLINUX_SYMBOL_STR(input_event) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0xdd0a2ba2, __VMLINUX_SYMBOL_STR(strlcat) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xea177cae, __VMLINUX_SYMBOL_STR(vb2_vmalloc_memops) },
	{ 0x666b9845, __VMLINUX_SYMBOL_STR(usb_string) },
	{ 0x706c5a65, __VMLINUX_SYMBOL_STR(preempt_count_sub) },
	{ 0x76d817, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x48a0f939, __VMLINUX_SYMBOL_STR(mutex_lock_interruptible) },
	{ 0x4d8374ed, __VMLINUX_SYMBOL_STR(v4l2_event_subscribe) },
	{ 0xdc798d37, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xb77b0159, __VMLINUX_SYMBOL_STR(v4l2_prio_init) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x6e59c2b6, __VMLINUX_SYMBOL_STR(video_unregister_device) },
	{ 0xfea687c8, __VMLINUX_SYMBOL_STR(usb_set_interface) },
	{ 0x17702358, __VMLINUX_SYMBOL_STR(v4l2_fh_init) },
	{ 0xecab6780, __VMLINUX_SYMBOL_STR(vb2_plane_vaddr) },
	{ 0x32cdd22a, __VMLINUX_SYMBOL_STR(vb2_buffer_done) },
	{ 0xaafdc258, __VMLINUX_SYMBOL_STR(strcasecmp) },
	{ 0x94e8602, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0xf57dc2e2, __VMLINUX_SYMBOL_STR(usb_driver_claim_interface) },
	{ 0xe16b893b, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x521445b, __VMLINUX_SYMBOL_STR(list_del) },
	{ 0x8f8eb0e, __VMLINUX_SYMBOL_STR(vb2_qbuf) },
	{ 0x43b0c9c3, __VMLINUX_SYMBOL_STR(preempt_schedule) },
	{ 0x40825f43, __VMLINUX_SYMBOL_STR(usb_free_coherent) },
	{ 0x3adedb46, __VMLINUX_SYMBOL_STR(vb2_querybuf) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0xe9841363, __VMLINUX_SYMBOL_STR(media_entity_init) },
	{ 0x59e5070d, __VMLINUX_SYMBOL_STR(__do_div64) },
	{ 0xc4ad22c6, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0x4b77c88d, __VMLINUX_SYMBOL_STR(v4l2_ctrl_replace) },
	{ 0x261604a4, __VMLINUX_SYMBOL_STR(vb2_streamon) },
	{ 0xd6efd600, __VMLINUX_SYMBOL_STR(usb_get_dev) },
	{ 0xc6cab39f, __VMLINUX_SYMBOL_STR(video_devdata) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x4fd71222, __VMLINUX_SYMBOL_STR(vb2_expbuf) },
	{ 0x6eba04b0, __VMLINUX_SYMBOL_STR(input_register_device) },
	{ 0x92d08eb8, __VMLINUX_SYMBOL_STR(usb_put_dev) },
	{ 0x2aa0e4fc, __VMLINUX_SYMBOL_STR(strncasecmp) },
	{ 0x46f344d6, __VMLINUX_SYMBOL_STR(usb_clear_halt) },
	{ 0x8861ea16, __VMLINUX_SYMBOL_STR(usb_driver_release_interface) },
	{ 0x8d221fda, __VMLINUX_SYMBOL_STR(input_free_device) },
	{ 0x94eea794, __VMLINUX_SYMBOL_STR(getnstimeofday64) },
	{ 0x36572420, __VMLINUX_SYMBOL_STR(v4l2_device_register_subdev) },
	{ 0x4841ebe1, __VMLINUX_SYMBOL_STR(vb2_reqbufs) },
	{ 0xcaa1a2be, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x2fe3966a, __VMLINUX_SYMBOL_STR(usb_get_intf) },
	{ 0x15a6fa3d, __VMLINUX_SYMBOL_STR(v4l2_subdev_init) },
	{ 0xa2bf7d90, __VMLINUX_SYMBOL_STR(__media_device_register) },
	{ 0x8ca5f57b, __VMLINUX_SYMBOL_STR(vb2_dqbuf) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x1d620657, __VMLINUX_SYMBOL_STR(input_unregister_device) },
	{ 0x1a1ce6e8, __VMLINUX_SYMBOL_STR(usb_match_one_id) },
	{ 0xf9e73082, __VMLINUX_SYMBOL_STR(scnprintf) },
	{ 0x1cd1a26f, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0xbb7e50d4, __VMLINUX_SYMBOL_STR(vb2_ops_wait_finish) },
	{ 0x847287f1, __VMLINUX_SYMBOL_STR(v4l2_fh_add) },
	{ 0xc4b8d1c6, __VMLINUX_SYMBOL_STR(v4l2_fh_del) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x4ceedf1a, __VMLINUX_SYMBOL_STR(usb_ifnum_to_if) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x4970c9d2, __VMLINUX_SYMBOL_STR(vb2_poll) },
	{ 0x7174ae4a, __VMLINUX_SYMBOL_STR(usb_alloc_coherent) },
	{ 0x9ccce9f0, __VMLINUX_SYMBOL_STR(usb_get_current_frame_number) },
	{ 0x5e515be6, __VMLINUX_SYMBOL_STR(ktime_get_ts64) },
	{ 0xf229424a, __VMLINUX_SYMBOL_STR(preempt_count_add) },
	{ 0x280e4834, __VMLINUX_SYMBOL_STR(vb2_queue_release) },
	{ 0xd109e4f8, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0x4b3a5a26, __VMLINUX_SYMBOL_STR(media_entity_create_link) },
	{ 0xfe406a9d, __VMLINUX_SYMBOL_STR(vb2_streamoff) },
	{ 0x900f303a, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0x6adeb6ed, __VMLINUX_SYMBOL_STR(media_device_unregister) },
	{ 0x787c75c1, __VMLINUX_SYMBOL_STR(video_ioctl2) },
	{ 0xa45e57e, __VMLINUX_SYMBOL_STR(usb_autopm_put_interface) },
	{ 0x55da3d4e, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
	{ 0x60b3b289, __VMLINUX_SYMBOL_STR(usb_put_intf) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
	{ 0xf5d6a8b4, __VMLINUX_SYMBOL_STR(v4l2_fh_exit) },
	{ 0x30c0ddd6, __VMLINUX_SYMBOL_STR(input_allocate_device) },
	{ 0xd9967fe7, __VMLINUX_SYMBOL_STR(vb2_queue_init) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=videobuf2-core,videobuf2-v4l2,videobuf2-vmalloc";

MODULE_ALIAS("usb:v0416pA91Ad*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v0458p706Ed*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v045Ep00F8d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v045Ep0721d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v045Ep0723d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v046Dp08C1d*dc*dsc*dp*icFFisc01ip00in*");
MODULE_ALIAS("usb:v046Dp08C2d*dc*dsc*dp*icFFisc01ip00in*");
MODULE_ALIAS("usb:v046Dp08C3d*dc*dsc*dp*icFFisc01ip00in*");
MODULE_ALIAS("usb:v046Dp08C5d*dc*dsc*dp*icFFisc01ip00in*");
MODULE_ALIAS("usb:v046Dp08C6d*dc*dsc*dp*icFFisc01ip00in*");
MODULE_ALIAS("usb:v046Dp08C7d*dc*dsc*dp*icFFisc01ip00in*");
MODULE_ALIAS("usb:v046Dp082Dd*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v04F2pB071d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v058Fp3820d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v05A9p2640d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v05A9p2641d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v05A9p2643d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v05A9p264Ad*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v05A9p7670d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v05ACp8501d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v05C8p0403d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v05E3p0505d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v06F8p300Cd*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v0AC8p332Dd*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v0AC8p3410d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v0AC8p3420d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v0BD3p0555d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v0E8Dp0004d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v13D3p5103d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v152Dp0310d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v174Fp5212d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v174Fp5931d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v174Fp8A12d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v174Fp8A31d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v174Fp8A33d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v174Fp8A34d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v17DCp0202d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v17EFp480Bd*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v1871p0306d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v1871p0516d*dc*dsc*dp*icFFisc01ip00in*");
MODULE_ALIAS("usb:v18CDpCAFEd*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v18ECp3188d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v18ECp3288d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v18ECp3290d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v199Ep8102d*dc*dsc*dp*icFFisc01ip00in*");
MODULE_ALIAS("usb:v19ABp1000d012[0-6]dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v19ABp1000d01[0-1]*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v19ABp1000d00*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v1B3Bp2951d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v1C4Fp3000d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v2833p0201d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic0Eisc01ip00in*");

MODULE_INFO(srcversion, "A4786D24E620FCE360D3D3E");
