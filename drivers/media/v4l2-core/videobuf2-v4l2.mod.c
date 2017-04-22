#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x9cef51a8, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x2bc33839, __VMLINUX_SYMBOL_STR(vb2_core_streamoff) },
	{ 0xefe21d65, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x1bd4e2ca, __VMLINUX_SYMBOL_STR(vb2_core_dqbuf) },
	{ 0xf3eb42e3, __VMLINUX_SYMBOL_STR(vb2_mmap) },
	{ 0x75d5289c, __VMLINUX_SYMBOL_STR(vb2_core_qbuf) },
	{ 0x5f8cd6dc, __VMLINUX_SYMBOL_STR(vb2_core_querybuf) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xdbe8baac, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x2a160ff1, __VMLINUX_SYMBOL_STR(vb2_core_streamon) },
	{ 0x58ed8d5, __VMLINUX_SYMBOL_STR(vb2_core_poll) },
	{ 0xdbe81ad2, __VMLINUX_SYMBOL_STR(vb2_read) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xf52bbf48, __VMLINUX_SYMBOL_STR(vb2_core_prepare_buf) },
	{ 0xbe2b4186, __VMLINUX_SYMBOL_STR(mutex_lock_interruptible) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x54632a57, __VMLINUX_SYMBOL_STR(v4l2_event_pending) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xfed0a669, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x58474f12, __VMLINUX_SYMBOL_STR(v4l2_fh_release) },
	{ 0xdcff62a5, __VMLINUX_SYMBOL_STR(vb2_core_queue_release) },
	{ 0xd8f40309, __VMLINUX_SYMBOL_STR(vb2_write) },
	{ 0xbaf60ce7, __VMLINUX_SYMBOL_STR(video_devdata) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xa0c6f9fd, __VMLINUX_SYMBOL_STR(vb2_core_create_bufs) },
	{ 0x46116f76, __VMLINUX_SYMBOL_STR(vb2_core_expbuf) },
	{ 0xed00a5c7, __VMLINUX_SYMBOL_STR(vb2_core_reqbufs) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xca36226a, __VMLINUX_SYMBOL_STR(vb2_verify_memory_type) },
	{ 0x66ba718d, __VMLINUX_SYMBOL_STR(vb2_core_queue_init) },
	{ 0xc7512a61, __VMLINUX_SYMBOL_STR(vb2_buffer_in_use) },
	{ 0x4cdb3178, __VMLINUX_SYMBOL_STR(ns_to_timeval) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=videobuf2-core";

