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
	{ 0x2c197ea3, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x7b8c3a36, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xa69c52b, __VMLINUX_SYMBOL_STR(vb2_core_streamoff) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xc6dc34f8, __VMLINUX_SYMBOL_STR(vb2_core_dqbuf) },
	{ 0xaa6c9c56, __VMLINUX_SYMBOL_STR(vb2_mmap) },
	{ 0x77026d23, __VMLINUX_SYMBOL_STR(vb2_core_qbuf) },
	{ 0x406e5886, __VMLINUX_SYMBOL_STR(vb2_core_querybuf) },
	{ 0x7ab88a45, __VMLINUX_SYMBOL_STR(system_freezing_cnt) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x28cc25db, __VMLINUX_SYMBOL_STR(arm_copy_from_user) },
	{ 0x2d328655, __VMLINUX_SYMBOL_STR(vb2_debug) },
	{ 0x62b72b0d, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xe564cc94, __VMLINUX_SYMBOL_STR(kthread_create_on_node) },
	{ 0xf4fa543b, __VMLINUX_SYMBOL_STR(arm_copy_to_user) },
	{ 0x676162c4, __VMLINUX_SYMBOL_STR(vb2_core_streamon) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x6d3d2eca, __VMLINUX_SYMBOL_STR(vb2_core_prepare_buf) },
	{ 0x706c5a65, __VMLINUX_SYMBOL_STR(preempt_count_sub) },
	{ 0x942c9222, __VMLINUX_SYMBOL_STR(freezing_slow_path) },
	{ 0x48a0f939, __VMLINUX_SYMBOL_STR(mutex_lock_interruptible) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xaf0d0b73, __VMLINUX_SYMBOL_STR(kthread_stop) },
	{ 0x60fe9ecf, __VMLINUX_SYMBOL_STR(v4l2_event_pending) },
	{ 0xecab6780, __VMLINUX_SYMBOL_STR(vb2_plane_vaddr) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xe16b893b, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x30cf8fd9, __VMLINUX_SYMBOL_STR(v4l2_fh_release) },
	{ 0x43b0c9c3, __VMLINUX_SYMBOL_STR(preempt_schedule) },
	{ 0xfdfd946e, __VMLINUX_SYMBOL_STR(vb2_core_queue_release) },
	{ 0xa2527312, __VMLINUX_SYMBOL_STR(vb2_queue_error) },
	{ 0xc6cab39f, __VMLINUX_SYMBOL_STR(video_devdata) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0x4482cdb, __VMLINUX_SYMBOL_STR(__refrigerator) },
	{ 0xd65172e, __VMLINUX_SYMBOL_STR(wake_up_process) },
	{ 0xcaa1a2be, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xb3f7646e, __VMLINUX_SYMBOL_STR(kthread_should_stop) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9e61bb05, __VMLINUX_SYMBOL_STR(set_freezable) },
	{ 0x1e0bf524, __VMLINUX_SYMBOL_STR(vb2_core_create_bufs) },
	{ 0xbed23e2b, __VMLINUX_SYMBOL_STR(vb2_core_expbuf) },
	{ 0x5addfaed, __VMLINUX_SYMBOL_STR(vb2_core_reqbufs) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x73adbffe, __VMLINUX_SYMBOL_STR(vb2_verify_memory_type) },
	{ 0xf55e203d, __VMLINUX_SYMBOL_STR(vb2_core_queue_init) },
	{ 0xf229424a, __VMLINUX_SYMBOL_STR(preempt_count_add) },
	{ 0x4f947888, __VMLINUX_SYMBOL_STR(vb2_buffer_in_use) },
	{ 0x1c483a9, __VMLINUX_SYMBOL_STR(v4l2_get_timestamp) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=videobuf2-core";

