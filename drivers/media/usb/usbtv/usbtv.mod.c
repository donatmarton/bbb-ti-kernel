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
	{ 0x7b8c3a36, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x2dfa331b, __VMLINUX_SYMBOL_STR(video_device_release_empty) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x80a5c992, __VMLINUX_SYMBOL_STR(snd_pcm_period_elapsed) },
	{ 0x6c2e3c61, __VMLINUX_SYMBOL_STR(v4l2_device_unregister) },
	{ 0xfd2d27f4, __VMLINUX_SYMBOL_STR(vb2_fop_poll) },
	{ 0xecdbf0c1, __VMLINUX_SYMBOL_STR(vb2_ioctl_streamon) },
	{ 0x4205ad24, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0x16b7c05d, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xeae67959, __VMLINUX_SYMBOL_STR(__video_register_device) },
	{ 0x62b72b0d, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xcb4ce909, __VMLINUX_SYMBOL_STR(snd_pcm_stream_lock) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0xf58ce3c6, __VMLINUX_SYMBOL_STR(v4l2_device_register) },
	{ 0xdfcd0d3e, __VMLINUX_SYMBOL_STR(vb2_fop_read) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0xe0831637, __VMLINUX_SYMBOL_STR(v4l2_device_disconnect) },
	{ 0xea177cae, __VMLINUX_SYMBOL_STR(vb2_vmalloc_memops) },
	{ 0x706c5a65, __VMLINUX_SYMBOL_STR(preempt_count_sub) },
	{ 0xdca73e2d, __VMLINUX_SYMBOL_STR(vb2_fop_mmap) },
	{ 0x8cbcab60, __VMLINUX_SYMBOL_STR(vb2_ioctl_qbuf) },
	{ 0x76d817, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0xdc798d37, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x6e59c2b6, __VMLINUX_SYMBOL_STR(video_unregister_device) },
	{ 0x4d2651fd, __VMLINUX_SYMBOL_STR(snd_pcm_set_ops) },
	{ 0xfea687c8, __VMLINUX_SYMBOL_STR(usb_set_interface) },
	{ 0xecab6780, __VMLINUX_SYMBOL_STR(vb2_plane_vaddr) },
	{ 0x32cdd22a, __VMLINUX_SYMBOL_STR(vb2_buffer_done) },
	{ 0x94e8602, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xe16b893b, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x521445b, __VMLINUX_SYMBOL_STR(list_del) },
	{ 0x2ac6de76, __VMLINUX_SYMBOL_STR(vb2_ioctl_prepare_buf) },
	{ 0xed7838b7, __VMLINUX_SYMBOL_STR(snd_pcm_lib_free_pages) },
	{ 0xc097332e, __VMLINUX_SYMBOL_STR(snd_pcm_lib_ioctl) },
	{ 0x3f0bdd35, __VMLINUX_SYMBOL_STR(vb2_ioctl_create_bufs) },
	{ 0x43b0c9c3, __VMLINUX_SYMBOL_STR(preempt_schedule) },
	{ 0xc8c583, __VMLINUX_SYMBOL_STR(vb2_ioctl_dqbuf) },
	{ 0x7aa3c373, __VMLINUX_SYMBOL_STR(snd_pcm_lib_malloc_pages) },
	{ 0xade0767b, __VMLINUX_SYMBOL_STR(snd_card_new) },
	{ 0xc9e4f0cb, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xc4ad22c6, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0xd6efd600, __VMLINUX_SYMBOL_STR(usb_get_dev) },
	{ 0x6f2df140, __VMLINUX_SYMBOL_STR(vb2_fop_release) },
	{ 0xc6cab39f, __VMLINUX_SYMBOL_STR(video_devdata) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x1a4ddac1, __VMLINUX_SYMBOL_STR(snd_pcm_stream_unlock) },
	{ 0x92d08eb8, __VMLINUX_SYMBOL_STR(usb_put_dev) },
	{ 0x46f344d6, __VMLINUX_SYMBOL_STR(usb_clear_halt) },
	{ 0xcaa1a2be, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x36286b89, __VMLINUX_SYMBOL_STR(v4l2_fh_open) },
	{ 0x2366bad1, __VMLINUX_SYMBOL_STR(vb2_ioctl_querybuf) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x1cd1a26f, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0xbc199f80, __VMLINUX_SYMBOL_STR(snd_pcm_lib_preallocate_pages_for_all) },
	{ 0x810754b4, __VMLINUX_SYMBOL_STR(snd_card_free) },
	{ 0x2f0664db, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x76fa03cc, __VMLINUX_SYMBOL_STR(snd_card_register) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xc43b7e70, __VMLINUX_SYMBOL_STR(snd_pcm_new) },
	{ 0x583b5249, __VMLINUX_SYMBOL_STR(vb2_ioctl_streamoff) },
	{ 0xf229424a, __VMLINUX_SYMBOL_STR(preempt_count_add) },
	{ 0x280e4834, __VMLINUX_SYMBOL_STR(vb2_queue_release) },
	{ 0x4e50231d, __VMLINUX_SYMBOL_STR(v4l2_device_put) },
	{ 0x900f303a, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0x1c483a9, __VMLINUX_SYMBOL_STR(v4l2_get_timestamp) },
	{ 0x787c75c1, __VMLINUX_SYMBOL_STR(video_ioctl2) },
	{ 0x55da3d4e, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
	{ 0xd9967fe7, __VMLINUX_SYMBOL_STR(vb2_queue_init) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=videobuf2-v4l2,snd-pcm,videobuf2-vmalloc,videobuf2-core,snd";

MODULE_ALIAS("usb:v1B71p3002d*dc*dsc*dp*ic*isc*ip*in*");
