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
	{ 0x23fa4443, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0xc7ad691f, __VMLINUX_SYMBOL_STR(unregister_virtio_driver) },
	{ 0x8c03d20c, __VMLINUX_SYMBOL_STR(destroy_workqueue) },
	{ 0xb5a459dc, __VMLINUX_SYMBOL_STR(unregister_blkdev) },
	{ 0x70ee0c0e, __VMLINUX_SYMBOL_STR(register_virtio_driver) },
	{ 0x71a50dbc, __VMLINUX_SYMBOL_STR(register_blkdev) },
	{ 0x43a53735, __VMLINUX_SYMBOL_STR(__alloc_workqueue_key) },
	{ 0x752aeb9e, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xcf78e92, __VMLINUX_SYMBOL_STR(blk_queue_logical_block_size) },
	{ 0x23b0db80, __VMLINUX_SYMBOL_STR(set_disk_ro) },
	{ 0x99bb8806, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0xfafcd99, __VMLINUX_SYMBOL_STR(blk_queue_physical_block_size) },
	{ 0xb2cf93da, __VMLINUX_SYMBOL_STR(blk_queue_alignment_offset) },
	{ 0x73e26f50, __VMLINUX_SYMBOL_STR(blk_queue_io_min) },
	{ 0x8d82c2fb, __VMLINUX_SYMBOL_STR(blk_queue_io_opt) },
	{ 0x9347e40, __VMLINUX_SYMBOL_STR(device_create_file) },
	{ 0x767a75ff, __VMLINUX_SYMBOL_STR(device_add_disk) },
	{ 0x29ba16dc, __VMLINUX_SYMBOL_STR(blk_queue_max_segment_size) },
	{ 0xd086d411, __VMLINUX_SYMBOL_STR(blk_queue_max_hw_sectors) },
	{ 0x235aaf36, __VMLINUX_SYMBOL_STR(blk_queue_bounce_limit) },
	{ 0x8aec2e1, __VMLINUX_SYMBOL_STR(blk_queue_max_segments) },
	{ 0x60cdc00a, __VMLINUX_SYMBOL_STR(blk_mq_init_queue) },
	{ 0x3dcc8f63, __VMLINUX_SYMBOL_STR(blk_mq_alloc_tag_set) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x4b2dcc2b, __VMLINUX_SYMBOL_STR(alloc_disk) },
	{ 0x147fb690, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xf6789fdc, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xcbee6439, __VMLINUX_SYMBOL_STR(ida_simple_get) },
	{ 0x222e7ce2, __VMLINUX_SYMBOL_STR(sysfs_streq) },
	{ 0xb745a827, __VMLINUX_SYMBOL_STR(blk_queue_write_cache) },
	{ 0xd232e50c, __VMLINUX_SYMBOL_STR(kobject_uevent_env) },
	{ 0xcb4020cf, __VMLINUX_SYMBOL_STR(revalidate_disk) },
	{ 0xb32b80cf, __VMLINUX_SYMBOL_STR(dev_notice) },
	{ 0xf6a3b5c, __VMLINUX_SYMBOL_STR(string_get_size) },
	{ 0x4d6d1369, __VMLINUX_SYMBOL_STR(virtqueue_notify) },
	{ 0x113c1711, __VMLINUX_SYMBOL_STR(virtqueue_kick_prepare) },
	{ 0xdc3f1ff, __VMLINUX_SYMBOL_STR(blk_mq_stop_hw_queue) },
	{ 0xcaf2f606, __VMLINUX_SYMBOL_STR(virtqueue_kick) },
	{ 0xac48ed38, __VMLINUX_SYMBOL_STR(blk_rq_map_sg) },
	{ 0xc1d9d2e4, __VMLINUX_SYMBOL_STR(blk_mq_start_request) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xdd9f3e5c, __VMLINUX_SYMBOL_STR(virtqueue_add_sgs) },
	{ 0xefdd2345, __VMLINUX_SYMBOL_STR(sg_init_one) },
	{ 0xf88c3301, __VMLINUX_SYMBOL_STR(sg_init_table) },
	{ 0x48523d09, __VMLINUX_SYMBOL_STR(scsi_cmd_blk_ioctl) },
	{ 0x6ca446de, __VMLINUX_SYMBOL_STR(blk_execute_rq) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0xb2f83fd3, __VMLINUX_SYMBOL_STR(blk_put_request) },
	{ 0xad6970da, __VMLINUX_SYMBOL_STR(blk_rq_map_kern) },
	{ 0x4522cfde, __VMLINUX_SYMBOL_STR(blk_get_request) },
	{ 0x29e1b020, __VMLINUX_SYMBOL_STR(ida_simple_remove) },
	{ 0xbf4c34d6, __VMLINUX_SYMBOL_STR(put_disk) },
	{ 0x6e4d862d, __VMLINUX_SYMBOL_STR(blk_mq_free_tag_set) },
	{ 0xf6140fe2, __VMLINUX_SYMBOL_STR(blk_cleanup_queue) },
	{ 0x115c2e99, __VMLINUX_SYMBOL_STR(del_gendisk) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x173215d8, __VMLINUX_SYMBOL_STR(blk_mq_stop_hw_queues) },
	{ 0x92b57248, __VMLINUX_SYMBOL_STR(flush_work) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x18b20aeb, __VMLINUX_SYMBOL_STR(virtio_check_driver_offered_feature) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x45ca8264, __VMLINUX_SYMBOL_STR(blk_mq_start_stopped_hw_queues) },
	{ 0xef003ddf, __VMLINUX_SYMBOL_STR(virtqueue_enable_cb) },
	{ 0x70a251b9, __VMLINUX_SYMBOL_STR(virtqueue_is_broken) },
	{ 0xe498586c, __VMLINUX_SYMBOL_STR(virtqueue_get_buf) },
	{ 0xf160812d, __VMLINUX_SYMBOL_STR(blk_mq_complete_request) },
	{ 0x3f5047c3, __VMLINUX_SYMBOL_STR(virtqueue_disable_cb) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xf3a4eb81, __VMLINUX_SYMBOL_STR(blk_mq_end_request) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("virtio:d00000002v*");
