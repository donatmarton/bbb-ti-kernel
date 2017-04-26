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
	{ 0x2dfa331b, __VMLINUX_SYMBOL_STR(video_device_release_empty) },
	{ 0x787c75c1, __VMLINUX_SYMBOL_STR(video_ioctl2) },
	{ 0xd945909, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0x4a4a4bd, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0xd9967fe7, __VMLINUX_SYMBOL_STR(vb2_queue_init) },
	{ 0xe48e06cf, __VMLINUX_SYMBOL_STR(vb2_dma_contig_memops) },
	{ 0x7f9be462, __VMLINUX_SYMBOL_STR(v4l2_m2m_get_vq) },
	{ 0x730160d3, __VMLINUX_SYMBOL_STR(v4l2_m2m_ctx_init) },
	{ 0xcaa1a2be, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x7b8c3a36, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x17eb0eee, __VMLINUX_SYMBOL_STR(v4l2_m2m_init) },
	{ 0x766d8276, __VMLINUX_SYMBOL_STR(vb2_dma_contig_init_ctx) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xeae67959, __VMLINUX_SYMBOL_STR(__video_register_device) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xdc798d37, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0xf58ce3c6, __VMLINUX_SYMBOL_STR(v4l2_device_register) },
	{ 0x5624f5a4, __VMLINUX_SYMBOL_STR(__dma_request_channel) },
	{ 0x8caa767c, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x3376e2be, __VMLINUX_SYMBOL_STR(v4l2_m2m_poll) },
	{ 0x3aef71f7, __VMLINUX_SYMBOL_STR(v4l2_m2m_mmap) },
	{ 0x6d37356, __VMLINUX_SYMBOL_STR(v4l2_m2m_buf_queue) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x90613d71, __VMLINUX_SYMBOL_STR(v4l2_m2m_ctx_release) },
	{ 0xc6cab39f, __VMLINUX_SYMBOL_STR(video_devdata) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x972d9457, __VMLINUX_SYMBOL_STR(v4l2_m2m_reqbufs) },
	{ 0xf85f0fc0, __VMLINUX_SYMBOL_STR(v4l2_m2m_querybuf) },
	{ 0x4b6f9f6, __VMLINUX_SYMBOL_STR(v4l2_m2m_qbuf) },
	{ 0xce1129b, __VMLINUX_SYMBOL_STR(v4l2_m2m_dqbuf) },
	{ 0x84b1f65b, __VMLINUX_SYMBOL_STR(v4l2_m2m_streamon) },
	{ 0xd014b19e, __VMLINUX_SYMBOL_STR(v4l2_m2m_streamoff) },
	{ 0xae4473ed, __VMLINUX_SYMBOL_STR(vb2_plane_cookie) },
	{ 0xd1af80e, __VMLINUX_SYMBOL_STR(v4l2_m2m_next_buf) },
	{ 0x32cdd22a, __VMLINUX_SYMBOL_STR(vb2_buffer_done) },
	{ 0xc1c1c5f1, __VMLINUX_SYMBOL_STR(v4l2_m2m_buf_remove) },
	{ 0x314f500a, __VMLINUX_SYMBOL_STR(v4l2_m2m_job_finish) },
	{ 0xe16b893b, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x62b72b0d, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x6923533, __VMLINUX_SYMBOL_STR(dma_release_channel) },
	{ 0xe57f0426, __VMLINUX_SYMBOL_STR(vb2_dma_contig_cleanup_ctx) },
	{ 0x6c2e3c61, __VMLINUX_SYMBOL_STR(v4l2_device_unregister) },
	{ 0x6e59c2b6, __VMLINUX_SYMBOL_STR(video_unregister_device) },
	{ 0xc6fca5ad, __VMLINUX_SYMBOL_STR(v4l2_m2m_release) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=videobuf2-v4l2,videobuf2-dma-contig,v4l2-mem2mem,videobuf2-core";


MODULE_INFO(srcversion, "00D5D541B7BC87753FA98C7");
