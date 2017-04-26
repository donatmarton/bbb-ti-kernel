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
	{ 0x605ba260, __VMLINUX_SYMBOL_STR(kmap_to_page) },
	{ 0x7b8c3a36, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xd2a941d4, __VMLINUX_SYMBOL_STR(sg_init_table) },
	{ 0x189c3a74, __VMLINUX_SYMBOL_STR(mem_map) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x481eb820, __VMLINUX_SYMBOL_STR(p9_client_cb) },
	{ 0x7ac72600, __VMLINUX_SYMBOL_STR(v9fs_unregister_trans) },
	{ 0xc385ad28, __VMLINUX_SYMBOL_STR(iov_iter_get_pages_alloc) },
	{ 0xda97e5a5, __VMLINUX_SYMBOL_STR(kobject_uevent) },
	{ 0x5fb20428, __VMLINUX_SYMBOL_STR(virtio_check_driver_offered_feature) },
	{ 0x23e26767, __VMLINUX_SYMBOL_STR(v9fs_register_trans) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x62b72b0d, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x7327ac5e, __VMLINUX_SYMBOL_STR(virtqueue_kick) },
	{ 0x8fbeb765, __VMLINUX_SYMBOL_STR(virtqueue_get_buf) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0xfa749a5e, __VMLINUX_SYMBOL_STR(p9_tag_lookup) },
	{ 0x63b87fc5, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x706c5a65, __VMLINUX_SYMBOL_STR(preempt_count_sub) },
	{ 0x79cf82fd, __VMLINUX_SYMBOL_STR(virtqueue_add_sgs) },
	{ 0xef1e4705, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x84b183ae, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0xe16b893b, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x521445b, __VMLINUX_SYMBOL_STR(list_del) },
	{ 0x69d7ab51, __VMLINUX_SYMBOL_STR(p9_release_pages) },
	{ 0x43b0c9c3, __VMLINUX_SYMBOL_STR(preempt_schedule) },
	{ 0xae64b44b, __VMLINUX_SYMBOL_STR(unregister_virtio_driver) },
	{ 0xe8ff5119, __VMLINUX_SYMBOL_STR(sysfs_remove_file_ns) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0x8a7d1c31, __VMLINUX_SYMBOL_STR(high_memory) },
	{ 0xcaa1a2be, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xb9e52429, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x158f2f00, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x7378222f, __VMLINUX_SYMBOL_STR(iov_iter_advance) },
	{ 0x8893fa5d, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x1942d11, __VMLINUX_SYMBOL_STR(iov_iter_single_seg_count) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x1029e48c, __VMLINUX_SYMBOL_STR(vmalloc_to_page) },
	{ 0x69e04462, __VMLINUX_SYMBOL_STR(sysfs_create_file_ns) },
	{ 0xf229424a, __VMLINUX_SYMBOL_STR(preempt_count_add) },
	{ 0x27fa66e1, __VMLINUX_SYMBOL_STR(nr_free_buffer_pages) },
	{ 0xa1c6a6a4, __VMLINUX_SYMBOL_STR(dev_emerg) },
	{ 0x703a13f8, __VMLINUX_SYMBOL_STR(register_virtio_driver) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=9pnet";

MODULE_ALIAS("virtio:d00000009v*");
