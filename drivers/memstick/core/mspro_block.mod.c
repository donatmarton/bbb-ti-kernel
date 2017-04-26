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
	{ 0x7e42e836, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x6756906f, __VMLINUX_SYMBOL_STR(idr_destroy) },
	{ 0x19dd6ab6, __VMLINUX_SYMBOL_STR(memstick_unregister_driver) },
	{ 0xb5a459dc, __VMLINUX_SYMBOL_STR(unregister_blkdev) },
	{ 0x52d520a3, __VMLINUX_SYMBOL_STR(memstick_register_driver) },
	{ 0x71a50dbc, __VMLINUX_SYMBOL_STR(register_blkdev) },
	{ 0xd2df4266, __VMLINUX_SYMBOL_STR(__blk_end_request_all) },
	{ 0xa6dc5a9b, __VMLINUX_SYMBOL_STR(blk_dump_rq_flags) },
	{ 0x6a3868ff, __VMLINUX_SYMBOL_STR(add_disk) },
	{ 0x8800bc09, __VMLINUX_SYMBOL_STR(blk_queue_logical_block_size) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xa3975616, __VMLINUX_SYMBOL_STR(blk_queue_max_segment_size) },
	{ 0x4812a5fe, __VMLINUX_SYMBOL_STR(blk_queue_max_segments) },
	{ 0x288bd629, __VMLINUX_SYMBOL_STR(blk_queue_max_hw_sectors) },
	{ 0x7620ef27, __VMLINUX_SYMBOL_STR(blk_queue_bounce_limit) },
	{ 0x7a29d1da, __VMLINUX_SYMBOL_STR(blk_queue_prep_rq) },
	{ 0xee0443a7, __VMLINUX_SYMBOL_STR(blk_init_queue) },
	{ 0x550fdba2, __VMLINUX_SYMBOL_STR(alloc_disk) },
	{ 0x8bfd8946, __VMLINUX_SYMBOL_STR(idr_alloc) },
	{ 0x1163f0a7, __VMLINUX_SYMBOL_STR(blk_max_low_pfn) },
	{ 0x8f7a5832, __VMLINUX_SYMBOL_STR(sysfs_create_group) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x5c265cba, __VMLINUX_SYMBOL_STR(sg_init_one) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x220ba6eb, __VMLINUX_SYMBOL_STR(memstick_set_rw_addr) },
	{ 0xcaa1a2be, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x7b8c3a36, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0xf9e73082, __VMLINUX_SYMBOL_STR(scnprintf) },
	{ 0x59e5070d, __VMLINUX_SYMBOL_STR(__do_div64) },
	{ 0x5b5c17c8, __VMLINUX_SYMBOL_STR(memstick_init_req_sg) },
	{ 0x189c3a74, __VMLINUX_SYMBOL_STR(mem_map) },
	{ 0xdf98c806, __VMLINUX_SYMBOL_STR(complete_all) },
	{ 0x4fa0984, __VMLINUX_SYMBOL_STR(__blk_end_request) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0x25499f29, __VMLINUX_SYMBOL_STR(__blk_end_request_cur) },
	{ 0x2870bb87, __VMLINUX_SYMBOL_STR(blk_rq_map_sg) },
	{ 0x2c158f66, __VMLINUX_SYMBOL_STR(blk_fetch_request) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x1825dfee, __VMLINUX_SYMBOL_STR(memstick_new_req) },
	{ 0x8c9b5da4, __VMLINUX_SYMBOL_STR(memstick_init_req) },
	{ 0xd49bd803, __VMLINUX_SYMBOL_STR(wait_for_completion) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xc7da6011, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x906099bd, __VMLINUX_SYMBOL_STR(sysfs_remove_group) },
	{ 0x8dc00423, __VMLINUX_SYMBOL_STR(blk_cleanup_queue) },
	{ 0x251b483d, __VMLINUX_SYMBOL_STR(del_gendisk) },
	{ 0xdb6afd09, __VMLINUX_SYMBOL_STR(put_disk) },
	{ 0x4c0745bf, __VMLINUX_SYMBOL_STR(idr_remove) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x62b72b0d, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xe16b893b, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x9a40de07, __VMLINUX_SYMBOL_STR(blk_stop_queue) },
	{ 0x43b0c9c3, __VMLINUX_SYMBOL_STR(preempt_schedule) },
	{ 0x706c5a65, __VMLINUX_SYMBOL_STR(preempt_count_sub) },
	{ 0x188d5fd9, __VMLINUX_SYMBOL_STR(blk_start_queue) },
	{ 0xf229424a, __VMLINUX_SYMBOL_STR(preempt_count_add) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=memstick";

