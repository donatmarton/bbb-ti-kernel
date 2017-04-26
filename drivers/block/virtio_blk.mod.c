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
	{ 0xd109e4f8, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0x97c99553, __VMLINUX_SYMBOL_STR(blk_mq_map_queue) },
	{ 0xae64b44b, __VMLINUX_SYMBOL_STR(unregister_virtio_driver) },
	{ 0x8c03d20c, __VMLINUX_SYMBOL_STR(destroy_workqueue) },
	{ 0xb5a459dc, __VMLINUX_SYMBOL_STR(unregister_blkdev) },
	{ 0x703a13f8, __VMLINUX_SYMBOL_STR(register_virtio_driver) },
	{ 0x71a50dbc, __VMLINUX_SYMBOL_STR(register_blkdev) },
	{ 0x43a53735, __VMLINUX_SYMBOL_STR(__alloc_workqueue_key) },
	{ 0xef1e4705, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x8800bc09, __VMLINUX_SYMBOL_STR(blk_queue_logical_block_size) },
	{ 0xb68c967f, __VMLINUX_SYMBOL_STR(set_disk_ro) },
	{ 0x99bb8806, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0x630da999, __VMLINUX_SYMBOL_STR(blk_queue_physical_block_size) },
	{ 0x206b1270, __VMLINUX_SYMBOL_STR(blk_queue_alignment_offset) },
	{ 0x8d08ac64, __VMLINUX_SYMBOL_STR(blk_queue_io_min) },
	{ 0x447d9618, __VMLINUX_SYMBOL_STR(blk_queue_io_opt) },
	{ 0xb65a5213, __VMLINUX_SYMBOL_STR(device_create_file) },
	{ 0x6a3868ff, __VMLINUX_SYMBOL_STR(add_disk) },
	{ 0xa3975616, __VMLINUX_SYMBOL_STR(blk_queue_max_segment_size) },
	{ 0x288bd629, __VMLINUX_SYMBOL_STR(blk_queue_max_hw_sectors) },
	{ 0x7620ef27, __VMLINUX_SYMBOL_STR(blk_queue_bounce_limit) },
	{ 0x4812a5fe, __VMLINUX_SYMBOL_STR(blk_queue_max_segments) },
	{ 0x31bf9fbc, __VMLINUX_SYMBOL_STR(blk_mq_init_queue) },
	{ 0xfbe39272, __VMLINUX_SYMBOL_STR(blk_mq_alloc_tag_set) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x550fdba2, __VMLINUX_SYMBOL_STR(alloc_disk) },
	{ 0xcaa1a2be, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x7b8c3a36, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xcc7508db, __VMLINUX_SYMBOL_STR(ida_simple_get) },
	{ 0x222e7ce2, __VMLINUX_SYMBOL_STR(sysfs_streq) },
	{ 0xaf0f167f, __VMLINUX_SYMBOL_STR(blk_queue_flush) },
	{ 0x88418a62, __VMLINUX_SYMBOL_STR(kobject_uevent_env) },
	{ 0x5ebc344b, __VMLINUX_SYMBOL_STR(revalidate_disk) },
	{ 0x6cfda908, __VMLINUX_SYMBOL_STR(dev_notice) },
	{ 0xf6a3b5c, __VMLINUX_SYMBOL_STR(string_get_size) },
	{ 0x87da446c, __VMLINUX_SYMBOL_STR(virtqueue_kick_prepare) },
	{ 0x7aa53b61, __VMLINUX_SYMBOL_STR(blk_mq_stop_hw_queue) },
	{ 0x7327ac5e, __VMLINUX_SYMBOL_STR(virtqueue_kick) },
	{ 0x8b5cf2a4, __VMLINUX_SYMBOL_STR(virtqueue_notify) },
	{ 0x2870bb87, __VMLINUX_SYMBOL_STR(blk_rq_map_sg) },
	{ 0x67f1d6ab, __VMLINUX_SYMBOL_STR(blk_mq_start_request) },
	{ 0x79cf82fd, __VMLINUX_SYMBOL_STR(virtqueue_add_sgs) },
	{ 0x5c265cba, __VMLINUX_SYMBOL_STR(sg_init_one) },
	{ 0xd2a941d4, __VMLINUX_SYMBOL_STR(sg_init_table) },
	{ 0xbd6d3428, __VMLINUX_SYMBOL_STR(scsi_cmd_blk_ioctl) },
	{ 0xbd73db98, __VMLINUX_SYMBOL_STR(bio_put) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x16188c6b, __VMLINUX_SYMBOL_STR(blk_put_request) },
	{ 0x33b6f9e1, __VMLINUX_SYMBOL_STR(blk_execute_rq) },
	{ 0x6a2b7e3a, __VMLINUX_SYMBOL_STR(blk_make_request) },
	{ 0xf5b075c7, __VMLINUX_SYMBOL_STR(bio_map_kern) },
	{ 0xf2c482be, __VMLINUX_SYMBOL_STR(ida_simple_remove) },
	{ 0xdb6afd09, __VMLINUX_SYMBOL_STR(put_disk) },
	{ 0xd4628b98, __VMLINUX_SYMBOL_STR(blk_mq_free_tag_set) },
	{ 0x8dc00423, __VMLINUX_SYMBOL_STR(blk_cleanup_queue) },
	{ 0x251b483d, __VMLINUX_SYMBOL_STR(del_gendisk) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x4d9a7983, __VMLINUX_SYMBOL_STR(blk_mq_stop_hw_queues) },
	{ 0x92b57248, __VMLINUX_SYMBOL_STR(flush_work) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x5fb20428, __VMLINUX_SYMBOL_STR(virtio_check_driver_offered_feature) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x43b0c9c3, __VMLINUX_SYMBOL_STR(preempt_schedule) },
	{ 0xd250f12c, __VMLINUX_SYMBOL_STR(blk_mq_start_stopped_hw_queues) },
	{ 0x706c5a65, __VMLINUX_SYMBOL_STR(preempt_count_sub) },
	{ 0x7de37172, __VMLINUX_SYMBOL_STR(virtqueue_enable_cb) },
	{ 0x7ba8f999, __VMLINUX_SYMBOL_STR(virtqueue_is_broken) },
	{ 0x8fbeb765, __VMLINUX_SYMBOL_STR(virtqueue_get_buf) },
	{ 0xad61a4d4, __VMLINUX_SYMBOL_STR(blk_mq_complete_request) },
	{ 0xc7d30250, __VMLINUX_SYMBOL_STR(virtqueue_disable_cb) },
	{ 0xf229424a, __VMLINUX_SYMBOL_STR(preempt_count_add) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xd0b692d2, __VMLINUX_SYMBOL_STR(blk_mq_end_request) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("virtio:d00000002v*");
