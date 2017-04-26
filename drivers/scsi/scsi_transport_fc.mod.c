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
	{ 0x2a978004, __VMLINUX_SYMBOL_STR(transport_class_register) },
	{ 0x7b8c3a36, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x65e75cb6, __VMLINUX_SYMBOL_STR(__list_del_entry) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xecba9025, __VMLINUX_SYMBOL_STR(scsi_remove_target) },
	{ 0xb502f2e1, __VMLINUX_SYMBOL_STR(blk_queue_rq_timeout) },
	{ 0x405c1144, __VMLINUX_SYMBOL_STR(get_seconds) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xd2a941d4, __VMLINUX_SYMBOL_STR(sg_init_table) },
	{ 0xc8451e35, __VMLINUX_SYMBOL_STR(scsi_flush_work) },
	{ 0x8dc00423, __VMLINUX_SYMBOL_STR(blk_cleanup_queue) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x43a53735, __VMLINUX_SYMBOL_STR(__alloc_workqueue_key) },
	{ 0xd8bdde0b, __VMLINUX_SYMBOL_STR(dev_printk) },
	{ 0x20000329, __VMLINUX_SYMBOL_STR(simple_strtoul) },
	{ 0x11f7ed4c, __VMLINUX_SYMBOL_STR(hex_to_bin) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0x4205ad24, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0x8b6a5465, __VMLINUX_SYMBOL_STR(transport_destroy_device) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x9580deb, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x8ab884b0, __VMLINUX_SYMBOL_STR(attribute_container_unregister) },
	{ 0x5b652af9, __VMLINUX_SYMBOL_STR(scsi_scan_target) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0xbb152ef3, __VMLINUX_SYMBOL_STR(scsi_is_host_device) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x98e68eca, __VMLINUX_SYMBOL_STR(cancel_delayed_work) },
	{ 0x706c5a65, __VMLINUX_SYMBOL_STR(preempt_count_sub) },
	{ 0xe8f0c061, __VMLINUX_SYMBOL_STR(device_del) },
	{ 0x1a3c31ac, __VMLINUX_SYMBOL_STR(scsi_queue_work) },
	{ 0xed517e43, __VMLINUX_SYMBOL_STR(transport_add_device) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xb583d23f, __VMLINUX_SYMBOL_STR(bsg_register_queue) },
	{ 0x80c055b1, __VMLINUX_SYMBOL_STR(transport_configure_device) },
	{ 0x84b183ae, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x16e7918, __VMLINUX_SYMBOL_STR(attribute_container_register) },
	{ 0x8c03d20c, __VMLINUX_SYMBOL_STR(destroy_workqueue) },
	{ 0x521445b, __VMLINUX_SYMBOL_STR(list_del) },
	{ 0x974093a, __VMLINUX_SYMBOL_STR(sysfs_remove_link) },
	{ 0xf080ed1a, __VMLINUX_SYMBOL_STR(device_add) },
	{ 0x43b0c9c3, __VMLINUX_SYMBOL_STR(preempt_schedule) },
	{ 0x15297f57, __VMLINUX_SYMBOL_STR(transport_class_unregister) },
	{ 0x42160169, __VMLINUX_SYMBOL_STR(flush_workqueue) },
	{ 0xb2e39368, __VMLINUX_SYMBOL_STR(sysfs_create_link) },
	{ 0xb5ecc08d, __VMLINUX_SYMBOL_STR(scsi_target_unblock) },
	{ 0xc2102972, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0x58c9324e, __VMLINUX_SYMBOL_STR(netlink_broadcast) },
	{ 0x7c8e67a0, __VMLINUX_SYMBOL_STR(put_device) },
	{ 0x8dc8c6dc, __VMLINUX_SYMBOL_STR(blk_queue_softirq_done) },
	{ 0x3f616ce2, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x4a211dfd, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x6b2dc060, __VMLINUX_SYMBOL_STR(dump_stack) },
	{ 0xa0463b8a, __VMLINUX_SYMBOL_STR(transport_setup_device) },
	{ 0x5a338c81, __VMLINUX_SYMBOL_STR(bsg_unregister_queue) },
	{ 0x2870bb87, __VMLINUX_SYMBOL_STR(blk_rq_map_sg) },
	{ 0x2c158f66, __VMLINUX_SYMBOL_STR(blk_fetch_request) },
	{ 0xcaa1a2be, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xd9ff3ac3, __VMLINUX_SYMBOL_STR(get_device) },
	{ 0x8f62ea04, __VMLINUX_SYMBOL_STR(blk_run_queue_async) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x24e7efb3, __VMLINUX_SYMBOL_STR(blk_end_request_all) },
	{ 0xff58b518, __VMLINUX_SYMBOL_STR(device_initialize) },
	{ 0xd7bf7ca8, __VMLINUX_SYMBOL_STR(blk_complete_request) },
	{ 0xfbf0b162, __VMLINUX_SYMBOL_STR(scsi_is_target_device) },
	{ 0x360784b5, __VMLINUX_SYMBOL_STR(scsi_nl_sock) },
	{ 0x6c6a56ce, __VMLINUX_SYMBOL_STR(transport_remove_device) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x9c3e5bd4, __VMLINUX_SYMBOL_STR(scsi_target_block) },
	{ 0xd035cb86, __VMLINUX_SYMBOL_STR(dev_set_name) },
	{ 0xf229424a, __VMLINUX_SYMBOL_STR(preempt_count_add) },
	{ 0xd109e4f8, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0xcc72ede0, __VMLINUX_SYMBOL_STR(__nlmsg_put) },
	{ 0x69ba3da6, __VMLINUX_SYMBOL_STR(__scsi_alloc_queue) },
	{ 0x75db098, __VMLINUX_SYMBOL_STR(blk_queue_rq_timed_out) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

