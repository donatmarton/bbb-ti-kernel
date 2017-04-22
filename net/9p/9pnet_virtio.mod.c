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
	{ 0xd4eb2ecb, __VMLINUX_SYMBOL_STR(kmap_to_page) },
	{ 0xf6789fdc, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xf88c3301, __VMLINUX_SYMBOL_STR(sg_init_table) },
	{ 0x7b7bcfed, __VMLINUX_SYMBOL_STR(mem_map) },
	{ 0x7aa1756e, __VMLINUX_SYMBOL_STR(kvfree) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x1eb92f7b, __VMLINUX_SYMBOL_STR(p9_client_cb) },
	{ 0xcf8030cb, __VMLINUX_SYMBOL_STR(v9fs_unregister_trans) },
	{ 0x729ebd0f, __VMLINUX_SYMBOL_STR(iov_iter_get_pages_alloc) },
	{ 0x944a8362, __VMLINUX_SYMBOL_STR(kobject_uevent) },
	{ 0x18b20aeb, __VMLINUX_SYMBOL_STR(virtio_check_driver_offered_feature) },
	{ 0x934061a7, __VMLINUX_SYMBOL_STR(v9fs_register_trans) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xdbe8baac, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xcaf2f606, __VMLINUX_SYMBOL_STR(virtqueue_kick) },
	{ 0xe498586c, __VMLINUX_SYMBOL_STR(virtqueue_get_buf) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xdd9f3e5c, __VMLINUX_SYMBOL_STR(virtqueue_add_sgs) },
	{ 0x752aeb9e, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x84b183ae, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0xfed0a669, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x521445b, __VMLINUX_SYMBOL_STR(list_del) },
	{ 0xf4ed2176, __VMLINUX_SYMBOL_STR(p9_release_pages) },
	{ 0x622598b1, __VMLINUX_SYMBOL_STR(init_wait_entry) },
	{ 0xc7ad691f, __VMLINUX_SYMBOL_STR(unregister_virtio_driver) },
	{ 0xb375a104, __VMLINUX_SYMBOL_STR(sysfs_remove_file_ns) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0x8a7d1c31, __VMLINUX_SYMBOL_STR(high_memory) },
	{ 0x147fb690, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xd85cd67e, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x344b7739, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x817b3496, __VMLINUX_SYMBOL_STR(iov_iter_advance) },
	{ 0x1cfb04fa, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0xdb61bd27, __VMLINUX_SYMBOL_STR(iov_iter_single_seg_count) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x390a1e3e, __VMLINUX_SYMBOL_STR(vmalloc_to_page) },
	{ 0x7b5cc9d6, __VMLINUX_SYMBOL_STR(sysfs_create_file_ns) },
	{ 0x27fa66e1, __VMLINUX_SYMBOL_STR(nr_free_buffer_pages) },
	{ 0x99947931, __VMLINUX_SYMBOL_STR(dev_emerg) },
	{ 0x70ee0c0e, __VMLINUX_SYMBOL_STR(register_virtio_driver) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=9pnet";

MODULE_ALIAS("virtio:d00000009v*");
