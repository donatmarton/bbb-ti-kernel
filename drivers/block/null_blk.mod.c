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
	{ 0x840eabfe, __VMLINUX_SYMBOL_STR(param_ops_ulong) },
	{ 0x7e42e836, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0xa57b02d8, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x97c99553, __VMLINUX_SYMBOL_STR(blk_mq_map_queue) },
	{ 0x63f21d84, __VMLINUX_SYMBOL_STR(param_get_int) },
	{ 0xb5a459dc, __VMLINUX_SYMBOL_STR(unregister_blkdev) },
	{ 0xb5233f3e, __VMLINUX_SYMBOL_STR(kmem_cache_destroy) },
	{ 0x6a3868ff, __VMLINUX_SYMBOL_STR(add_disk) },
	{ 0x328a05f1, __VMLINUX_SYMBOL_STR(strncpy) },
	{ 0x69b1718f, __VMLINUX_SYMBOL_STR(alloc_disk_node) },
	{ 0x8dc8c6dc, __VMLINUX_SYMBOL_STR(blk_queue_softirq_done) },
	{ 0x7a29d1da, __VMLINUX_SYMBOL_STR(blk_queue_prep_rq) },
	{ 0x2f3a470, __VMLINUX_SYMBOL_STR(blk_init_queue_node) },
	{ 0x5a6ba175, __VMLINUX_SYMBOL_STR(blk_queue_make_request) },
	{ 0x73ba5990, __VMLINUX_SYMBOL_STR(blk_alloc_queue_node) },
	{ 0x47c2dce8, __VMLINUX_SYMBOL_STR(nvm_register) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x630da999, __VMLINUX_SYMBOL_STR(blk_queue_physical_block_size) },
	{ 0x8800bc09, __VMLINUX_SYMBOL_STR(blk_queue_logical_block_size) },
	{ 0x62b72b0d, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0xe16b893b, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x31bf9fbc, __VMLINUX_SYMBOL_STR(blk_mq_init_queue) },
	{ 0xfbe39272, __VMLINUX_SYMBOL_STR(blk_mq_alloc_tag_set) },
	{ 0xcaa1a2be, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x71aa3ade, __VMLINUX_SYMBOL_STR(kmem_cache_create) },
	{ 0x7b8c3a36, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x71a50dbc, __VMLINUX_SYMBOL_STR(register_blkdev) },
	{ 0xdc798d37, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x63b87fc5, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xdb6afd09, __VMLINUX_SYMBOL_STR(put_disk) },
	{ 0xd4628b98, __VMLINUX_SYMBOL_STR(blk_mq_free_tag_set) },
	{ 0x8dc00423, __VMLINUX_SYMBOL_STR(blk_cleanup_queue) },
	{ 0x251b483d, __VMLINUX_SYMBOL_STR(del_gendisk) },
	{ 0xb5f198f, __VMLINUX_SYMBOL_STR(nvm_unregister) },
	{ 0x65e75cb6, __VMLINUX_SYMBOL_STR(__list_del_entry) },
	{ 0x67f1d6ab, __VMLINUX_SYMBOL_STR(blk_mq_start_request) },
	{ 0x2c158f66, __VMLINUX_SYMBOL_STR(blk_fetch_request) },
	{ 0xad61a4d4, __VMLINUX_SYMBOL_STR(blk_mq_complete_request) },
	{ 0xd7bf7ca8, __VMLINUX_SYMBOL_STR(blk_complete_request) },
	{ 0x6a1b7fe9, __VMLINUX_SYMBOL_STR(hrtimer_start_range_ns) },
	{ 0x9a40de07, __VMLINUX_SYMBOL_STR(blk_stop_queue) },
	{ 0x8893fa5d, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x75a17bed, __VMLINUX_SYMBOL_STR(prepare_to_wait) },
	{ 0xfbc4f89e, __VMLINUX_SYMBOL_STR(io_schedule_timeout) },
	{ 0xc8b57c27, __VMLINUX_SYMBOL_STR(autoremove_wake_function) },
	{ 0x3eb7a160, __VMLINUX_SYMBOL_STR(hrtimer_init) },
	{ 0xd3dbfbc4, __VMLINUX_SYMBOL_STR(_find_first_zero_bit_le) },
	{ 0xca54fee, __VMLINUX_SYMBOL_STR(_test_and_set_bit) },
	{ 0x24e7efb3, __VMLINUX_SYMBOL_STR(blk_end_request_all) },
	{ 0xd0b692d2, __VMLINUX_SYMBOL_STR(blk_mq_end_request) },
	{ 0xad14fc55, __VMLINUX_SYMBOL_STR(bio_endio) },
	{ 0x43b0c9c3, __VMLINUX_SYMBOL_STR(preempt_schedule) },
	{ 0x706c5a65, __VMLINUX_SYMBOL_STR(preempt_count_sub) },
	{ 0x34d69ce0, __VMLINUX_SYMBOL_STR(blk_start_queue_async) },
	{ 0xf229424a, __VMLINUX_SYMBOL_STR(preempt_count_add) },
	{ 0xb9e52429, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0x19949319, __VMLINUX_SYMBOL_STR(bio_phys_segments) },
	{ 0x48e89e2e, __VMLINUX_SYMBOL_STR(blk_execute_rq_nowait) },
	{ 0x3b06601e, __VMLINUX_SYMBOL_STR(blk_mq_alloc_request) },
	{ 0x59e5070d, __VMLINUX_SYMBOL_STR(__do_div64) },
	{ 0x16188c6b, __VMLINUX_SYMBOL_STR(blk_put_request) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x2b90cdaa, __VMLINUX_SYMBOL_STR(mempool_create) },
	{ 0x183fa88b, __VMLINUX_SYMBOL_STR(mempool_alloc_slab) },
	{ 0x8a99a016, __VMLINUX_SYMBOL_STR(mempool_free_slab) },
	{ 0x815131ba, __VMLINUX_SYMBOL_STR(mempool_destroy) },
	{ 0x1cd0f6c0, __VMLINUX_SYMBOL_STR(mempool_alloc) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x920664c8, __VMLINUX_SYMBOL_STR(mempool_free) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x373db350, __VMLINUX_SYMBOL_STR(kstrtoint) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

