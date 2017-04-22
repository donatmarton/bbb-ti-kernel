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
	{ 0x666f894e, __VMLINUX_SYMBOL_STR(vb2_ioctl_reqbufs) },
	{ 0x7b38f2ee, __VMLINUX_SYMBOL_STR(em28xx_read_reg) },
	{ 0xf6789fdc, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xa2b4ff8a, __VMLINUX_SYMBOL_STR(v4l2_event_unsubscribe) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x1f155200, __VMLINUX_SYMBOL_STR(video_device_release_empty) },
	{ 0xefe21d65, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xc0eee251, __VMLINUX_SYMBOL_STR(media_device_unregister_entity) },
	{ 0x8cfa3e02, __VMLINUX_SYMBOL_STR(v4l2_i2c_new_subdev) },
	{ 0xcd75ef7f, __VMLINUX_SYMBOL_STR(em28xx_free_device) },
	{ 0x614dd5a, __VMLINUX_SYMBOL_STR(v4l2_video_std_frame_period) },
	{ 0x89869fcc, __VMLINUX_SYMBOL_STR(em28xx_write_regs) },
	{ 0x3d7043d4, __VMLINUX_SYMBOL_STR(v4l2_ctrl_notify) },
	{ 0x97344b35, __VMLINUX_SYMBOL_STR(em28xx_setup_xc3028) },
	{ 0x953be438, __VMLINUX_SYMBOL_STR(v4l2_device_unregister) },
	{ 0xcab184b3, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_free) },
	{ 0x7fc8652c, __VMLINUX_SYMBOL_STR(em28xx_tuner_callback) },
	{ 0xf2a353ac, __VMLINUX_SYMBOL_STR(v4l2_i2c_tuner_addrs) },
	{ 0xaf68dd7b, __VMLINUX_SYMBOL_STR(v4l2_ctrl_new_std) },
	{ 0x999a188, __VMLINUX_SYMBOL_STR(vb2_fop_poll) },
	{ 0x428e868a, __VMLINUX_SYMBOL_STR(v4l2_mc_create_media_graph) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0xbb9916cc, __VMLINUX_SYMBOL_STR(vb2_ioctl_streamon) },
	{ 0xc87c1f84, __VMLINUX_SYMBOL_STR(ktime_get) },
	{ 0x224db162, __VMLINUX_SYMBOL_STR(vb2_ops_wait_prepare) },
	{ 0x35d1402e, __VMLINUX_SYMBOL_STR(em28xx_init_usb_xfer) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xbe661254, __VMLINUX_SYMBOL_STR(__video_register_device) },
	{ 0xdbe8baac, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x8471884e, __VMLINUX_SYMBOL_STR(em28xx_register_extension) },
	{ 0xee9c8402, __VMLINUX_SYMBOL_STR(media_entity_setup_link) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0xb1d8c290, __VMLINUX_SYMBOL_STR(v4l2_device_register) },
	{ 0x9a78a0f0, __VMLINUX_SYMBOL_STR(vb2_fop_read) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x95428892, __VMLINUX_SYMBOL_STR(v4l2_device_disconnect) },
	{ 0x4e013662, __VMLINUX_SYMBOL_STR(vb2_vmalloc_memops) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x30b88bc1, __VMLINUX_SYMBOL_STR(vb2_fop_mmap) },
	{ 0xff55c391, __VMLINUX_SYMBOL_STR(vb2_ioctl_qbuf) },
	{ 0xbe2b4186, __VMLINUX_SYMBOL_STR(mutex_lock_interruptible) },
	{ 0x5a32f871, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x837dcec3, __VMLINUX_SYMBOL_STR(video_unregister_device) },
	{ 0x8b7136ae, __VMLINUX_SYMBOL_STR(media_entity_pads_init) },
	{ 0x6fbc742a, __VMLINUX_SYMBOL_STR(usb_set_interface) },
	{ 0x7c7ffbd6, __VMLINUX_SYMBOL_STR(v4l2_ctrl_subscribe_event) },
	{ 0x2488f58f, __VMLINUX_SYMBOL_STR(vb2_plane_vaddr) },
	{ 0x56a638bb, __VMLINUX_SYMBOL_STR(vb2_buffer_done) },
	{ 0x6cf5c3ef, __VMLINUX_SYMBOL_STR(em28xx_unregister_extension) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xfed0a669, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x521445b, __VMLINUX_SYMBOL_STR(list_del) },
	{ 0x4c20a587, __VMLINUX_SYMBOL_STR(vb2_ioctl_prepare_buf) },
	{ 0x4a366ddc, __VMLINUX_SYMBOL_STR(em28xx_uninit_usb_xfer) },
	{ 0x6d12cac8, __VMLINUX_SYMBOL_STR(vb2_ioctl_create_bufs) },
	{ 0xe63fafb2, __VMLINUX_SYMBOL_STR(vb2_ioctl_dqbuf) },
	{ 0x35fc4d7c, __VMLINUX_SYMBOL_STR(media_device_register_entity) },
	{ 0x123959a1, __VMLINUX_SYMBOL_STR(v4l2_type_names) },
	{ 0x9c376a92, __VMLINUX_SYMBOL_STR(v4l2_ctrl_find) },
	{ 0xf5ef842e, __VMLINUX_SYMBOL_STR(v4l_bound_align_image) },
	{ 0xd980d45d, __VMLINUX_SYMBOL_STR(vb2_fop_release) },
	{ 0xbaf60ce7, __VMLINUX_SYMBOL_STR(video_devdata) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x845f2ecb, __VMLINUX_SYMBOL_STR(em28xx_audio_setup) },
	{ 0xa8550649, __VMLINUX_SYMBOL_STR(v4l2_clk_unregister_fixed) },
	{ 0xd7a37482, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_setup) },
	{ 0x8fb8fd48, __VMLINUX_SYMBOL_STR(v4l2_i2c_subdev_addr) },
	{ 0x147fb690, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xb3fb06a2, __VMLINUX_SYMBOL_STR(v4l2_fh_open) },
	{ 0x961433e1, __VMLINUX_SYMBOL_STR(em28xx_set_mode) },
	{ 0x44058527, __VMLINUX_SYMBOL_STR(vb2_ioctl_querybuf) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x75d3affc, __VMLINUX_SYMBOL_STR(param_array_ops) },
	{ 0x5624c03d, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_init_class) },
	{ 0x81a200e0, __VMLINUX_SYMBOL_STR(vb2_ops_wait_finish) },
	{ 0x99d6691, __VMLINUX_SYMBOL_STR(em28xx_stop_urbs) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xd6b6a523, __VMLINUX_SYMBOL_STR(em28xx_write_reg) },
	{ 0x87dae2db, __VMLINUX_SYMBOL_STR(em28xx_audio_analog_set) },
	{ 0x29f4ece5, __VMLINUX_SYMBOL_STR(vb2_ioctl_streamoff) },
	{ 0x964deb5d, __VMLINUX_SYMBOL_STR(video_ioctl2) },
	{ 0x170b0a8e, __VMLINUX_SYMBOL_STR(em28xx_boards) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
	{ 0x57f10725, __VMLINUX_SYMBOL_STR(em28xx_init_camera) },
	{ 0x5b079986, __VMLINUX_SYMBOL_STR(vb2_queue_init) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=videobuf2-v4l2,em28xx,videobuf2-vmalloc,videobuf2-core";


MODULE_INFO(srcversion, "544E0738F74C3073B3CB409");
