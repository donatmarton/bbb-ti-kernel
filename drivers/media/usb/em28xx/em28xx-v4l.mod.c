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
	{ 0x873359a4, __VMLINUX_SYMBOL_STR(em28xx_read_reg) },
	{ 0x7b8c3a36, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xd65e119c, __VMLINUX_SYMBOL_STR(v4l2_event_unsubscribe) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x2dfa331b, __VMLINUX_SYMBOL_STR(video_device_release_empty) },
	{ 0x7e42e836, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x8f3c19, __VMLINUX_SYMBOL_STR(v4l2_i2c_new_subdev) },
	{ 0xcd75ef7f, __VMLINUX_SYMBOL_STR(em28xx_free_device) },
	{ 0x614dd5a, __VMLINUX_SYMBOL_STR(v4l2_video_std_frame_period) },
	{ 0x1a3827ce, __VMLINUX_SYMBOL_STR(em28xx_write_regs) },
	{ 0xf91edbec, __VMLINUX_SYMBOL_STR(v4l2_ctrl_notify) },
	{ 0xf975fbd2, __VMLINUX_SYMBOL_STR(em28xx_setup_xc3028) },
	{ 0x6c2e3c61, __VMLINUX_SYMBOL_STR(v4l2_device_unregister) },
	{ 0x8cc1e73b, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_free) },
	{ 0x7fc8652c, __VMLINUX_SYMBOL_STR(em28xx_tuner_callback) },
	{ 0xf2a353ac, __VMLINUX_SYMBOL_STR(v4l2_i2c_tuner_addrs) },
	{ 0xf30afd02, __VMLINUX_SYMBOL_STR(v4l2_ctrl_new_std) },
	{ 0xfd2d27f4, __VMLINUX_SYMBOL_STR(vb2_fop_poll) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0xecdbf0c1, __VMLINUX_SYMBOL_STR(vb2_ioctl_streamon) },
	{ 0xff356465, __VMLINUX_SYMBOL_STR(vb2_ops_wait_prepare) },
	{ 0xb69eb1d6, __VMLINUX_SYMBOL_STR(em28xx_init_usb_xfer) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xeae67959, __VMLINUX_SYMBOL_STR(__video_register_device) },
	{ 0x62b72b0d, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x30612e89, __VMLINUX_SYMBOL_STR(em28xx_register_extension) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0xf58ce3c6, __VMLINUX_SYMBOL_STR(v4l2_device_register) },
	{ 0xdfcd0d3e, __VMLINUX_SYMBOL_STR(vb2_fop_read) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xe0831637, __VMLINUX_SYMBOL_STR(v4l2_device_disconnect) },
	{ 0xea177cae, __VMLINUX_SYMBOL_STR(vb2_vmalloc_memops) },
	{ 0x706c5a65, __VMLINUX_SYMBOL_STR(preempt_count_sub) },
	{ 0xdca73e2d, __VMLINUX_SYMBOL_STR(vb2_fop_mmap) },
	{ 0x8cbcab60, __VMLINUX_SYMBOL_STR(vb2_ioctl_qbuf) },
	{ 0x48a0f939, __VMLINUX_SYMBOL_STR(mutex_lock_interruptible) },
	{ 0xdc798d37, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x6e59c2b6, __VMLINUX_SYMBOL_STR(video_unregister_device) },
	{ 0xfea687c8, __VMLINUX_SYMBOL_STR(usb_set_interface) },
	{ 0xf14e487f, __VMLINUX_SYMBOL_STR(v4l2_ctrl_subscribe_event) },
	{ 0xecab6780, __VMLINUX_SYMBOL_STR(vb2_plane_vaddr) },
	{ 0x32cdd22a, __VMLINUX_SYMBOL_STR(vb2_buffer_done) },
	{ 0xc7cb5493, __VMLINUX_SYMBOL_STR(em28xx_unregister_extension) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xe16b893b, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x521445b, __VMLINUX_SYMBOL_STR(list_del) },
	{ 0x2ac6de76, __VMLINUX_SYMBOL_STR(vb2_ioctl_prepare_buf) },
	{ 0x60350a8b, __VMLINUX_SYMBOL_STR(em28xx_uninit_usb_xfer) },
	{ 0x3f0bdd35, __VMLINUX_SYMBOL_STR(vb2_ioctl_create_bufs) },
	{ 0x43b0c9c3, __VMLINUX_SYMBOL_STR(preempt_schedule) },
	{ 0xc8c583, __VMLINUX_SYMBOL_STR(vb2_ioctl_dqbuf) },
	{ 0x123959a1, __VMLINUX_SYMBOL_STR(v4l2_type_names) },
	{ 0x1cdd4319, __VMLINUX_SYMBOL_STR(v4l2_ctrl_find) },
	{ 0xf5ef842e, __VMLINUX_SYMBOL_STR(v4l_bound_align_image) },
	{ 0x6f2df140, __VMLINUX_SYMBOL_STR(vb2_fop_release) },
	{ 0xc6cab39f, __VMLINUX_SYMBOL_STR(video_devdata) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x3e8dec39, __VMLINUX_SYMBOL_STR(em28xx_audio_setup) },
	{ 0x7cf00820, __VMLINUX_SYMBOL_STR(v4l2_clk_unregister_fixed) },
	{ 0x2477d21e, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_setup) },
	{ 0x66107d78, __VMLINUX_SYMBOL_STR(v4l2_i2c_subdev_addr) },
	{ 0xcaa1a2be, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x36286b89, __VMLINUX_SYMBOL_STR(v4l2_fh_open) },
	{ 0xd75a955f, __VMLINUX_SYMBOL_STR(em28xx_set_mode) },
	{ 0x2366bad1, __VMLINUX_SYMBOL_STR(vb2_ioctl_querybuf) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x29923658, __VMLINUX_SYMBOL_STR(param_array_ops) },
	{ 0x649dace1, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_init_class) },
	{ 0xbb7e50d4, __VMLINUX_SYMBOL_STR(vb2_ops_wait_finish) },
	{ 0xdee5c0fe, __VMLINUX_SYMBOL_STR(em28xx_stop_urbs) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x9ce95174, __VMLINUX_SYMBOL_STR(em28xx_write_reg) },
	{ 0xb69c9bd5, __VMLINUX_SYMBOL_STR(em28xx_audio_analog_set) },
	{ 0x583b5249, __VMLINUX_SYMBOL_STR(vb2_ioctl_streamoff) },
	{ 0xf229424a, __VMLINUX_SYMBOL_STR(preempt_count_add) },
	{ 0x1c483a9, __VMLINUX_SYMBOL_STR(v4l2_get_timestamp) },
	{ 0x787c75c1, __VMLINUX_SYMBOL_STR(video_ioctl2) },
	{ 0x6d578f78, __VMLINUX_SYMBOL_STR(em28xx_boards) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
	{ 0x66fbea6a, __VMLINUX_SYMBOL_STR(em28xx_init_camera) },
	{ 0xd9967fe7, __VMLINUX_SYMBOL_STR(vb2_queue_init) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=videobuf2-v4l2,em28xx,videobuf2-vmalloc,videobuf2-core";


MODULE_INFO(srcversion, "769279BA70B826DC169E8A3");
