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
	{ 0x5788a263, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x1f155200, __VMLINUX_SYMBOL_STR(video_device_release_empty) },
	{ 0x964deb5d, __VMLINUX_SYMBOL_STR(video_ioctl2) },
	{ 0x36cf4f03, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0x837bc10d, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0x5b079986, __VMLINUX_SYMBOL_STR(vb2_queue_init) },
	{ 0x82797b91, __VMLINUX_SYMBOL_STR(vb2_dma_contig_memops) },
	{ 0x5b651cac, __VMLINUX_SYMBOL_STR(v4l2_m2m_get_vq) },
	{ 0xcc7ef8f9, __VMLINUX_SYMBOL_STR(v4l2_m2m_ctx_init) },
	{ 0x147fb690, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xf6789fdc, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x17eb0eee, __VMLINUX_SYMBOL_STR(v4l2_m2m_init) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xbe661254, __VMLINUX_SYMBOL_STR(__video_register_device) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x5a32f871, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x752aeb9e, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xb1d8c290, __VMLINUX_SYMBOL_STR(v4l2_device_register) },
	{ 0x9847af9, __VMLINUX_SYMBOL_STR(__dma_request_channel) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xc43902e8, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x9691850c, __VMLINUX_SYMBOL_STR(v4l2_m2m_poll) },
	{ 0xf0a4afc4, __VMLINUX_SYMBOL_STR(v4l2_m2m_mmap) },
	{ 0x47bfd095, __VMLINUX_SYMBOL_STR(v4l2_m2m_buf_queue) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x4ae3fa07, __VMLINUX_SYMBOL_STR(v4l2_m2m_ctx_release) },
	{ 0xbaf60ce7, __VMLINUX_SYMBOL_STR(video_devdata) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x9e176bde, __VMLINUX_SYMBOL_STR(v4l2_m2m_reqbufs) },
	{ 0x3e0b4d08, __VMLINUX_SYMBOL_STR(v4l2_m2m_querybuf) },
	{ 0xed5f1ae2, __VMLINUX_SYMBOL_STR(v4l2_m2m_qbuf) },
	{ 0x50bdf735, __VMLINUX_SYMBOL_STR(v4l2_m2m_dqbuf) },
	{ 0x564874dd, __VMLINUX_SYMBOL_STR(v4l2_m2m_streamon) },
	{ 0x1a875ad9, __VMLINUX_SYMBOL_STR(v4l2_m2m_streamoff) },
	{ 0x621edfd6, __VMLINUX_SYMBOL_STR(vb2_plane_cookie) },
	{ 0x485f4e3c, __VMLINUX_SYMBOL_STR(v4l2_m2m_next_buf) },
	{ 0x56a638bb, __VMLINUX_SYMBOL_STR(vb2_buffer_done) },
	{ 0x99feb589, __VMLINUX_SYMBOL_STR(v4l2_m2m_buf_remove) },
	{ 0x549cb4ec, __VMLINUX_SYMBOL_STR(v4l2_m2m_job_finish) },
	{ 0xfed0a669, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xdbe8baac, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x9c2faee7, __VMLINUX_SYMBOL_STR(dma_release_channel) },
	{ 0x953be438, __VMLINUX_SYMBOL_STR(v4l2_device_unregister) },
	{ 0x837dcec3, __VMLINUX_SYMBOL_STR(video_unregister_device) },
	{ 0xc6fca5ad, __VMLINUX_SYMBOL_STR(v4l2_m2m_release) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=videobuf2-v4l2,videobuf2-dma-contig,v4l2-mem2mem,videobuf2-core";


MODULE_INFO(srcversion, "34500E32B1334F7438E43E2");
