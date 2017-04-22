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
	{ 0x150c85ce, __VMLINUX_SYMBOL_STR(dm_tm_open_with_sm) },
	{ 0x40f7bd91, __VMLINUX_SYMBOL_STR(dm_tm_inc) },
	{ 0xf6789fdc, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x48e323be, __VMLINUX_SYMBOL_STR(dm_bm_unlock) },
	{ 0xed1e1f96, __VMLINUX_SYMBOL_STR(dm_btree_remove) },
	{ 0x5fc56a46, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x920cfd7f, __VMLINUX_SYMBOL_STR(dm_get_device) },
	{ 0x43a53735, __VMLINUX_SYMBOL_STR(__alloc_workqueue_key) },
	{ 0x24fa6664, __VMLINUX_SYMBOL_STR(dm_bitset_set_bit) },
	{ 0x8e74e192, __VMLINUX_SYMBOL_STR(blk_limits_io_opt) },
	{ 0x688d422d, __VMLINUX_SYMBOL_STR(dm_bm_block_size) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x88295b96, __VMLINUX_SYMBOL_STR(dm_tm_unlock) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0xcbd6f3e3, __VMLINUX_SYMBOL_STR(dm_register_target) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xe3baeb78, __VMLINUX_SYMBOL_STR(blk_limits_io_min) },
	{ 0xd163cade, __VMLINUX_SYMBOL_STR(dm_tm_commit) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0x5aed1dd7, __VMLINUX_SYMBOL_STR(dm_bitset_flush) },
	{ 0xaee02382, __VMLINUX_SYMBOL_STR(dm_btree_empty) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0x1fab5905, __VMLINUX_SYMBOL_STR(wait_for_completion) },
	{ 0xffff2ac3, __VMLINUX_SYMBOL_STR(dm_bitset_resize) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x832bf228, __VMLINUX_SYMBOL_STR(dm_array_del) },
	{ 0x4df6a20d, __VMLINUX_SYMBOL_STR(dm_set_target_max_io_len) },
	{ 0x2e730a21, __VMLINUX_SYMBOL_STR(dm_bm_checksum) },
	{ 0xba47c03a, __VMLINUX_SYMBOL_STR(dm_bitset_del) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x20c55ae0, __VMLINUX_SYMBOL_STR(sscanf) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x72289260, __VMLINUX_SYMBOL_STR(dm_block_manager_destroy) },
	{ 0xed58cfa1, __VMLINUX_SYMBOL_STR(dm_bitset_empty) },
	{ 0x243cc87b, __VMLINUX_SYMBOL_STR(dm_unregister_target) },
	{ 0xaafdc258, __VMLINUX_SYMBOL_STR(strcasecmp) },
	{ 0x4360913e, __VMLINUX_SYMBOL_STR(dm_btree_find_lowest_key) },
	{ 0x32b5f546, __VMLINUX_SYMBOL_STR(dm_array_empty) },
	{ 0x9b4b5b29, __VMLINUX_SYMBOL_STR(dm_bm_write_lock) },
	{ 0x8c03d20c, __VMLINUX_SYMBOL_STR(destroy_workqueue) },
	{ 0x2469810f, __VMLINUX_SYMBOL_STR(__rcu_read_unlock) },
	{ 0x3c161b96, __VMLINUX_SYMBOL_STR(generic_make_request) },
	{ 0x6091797f, __VMLINUX_SYMBOL_STR(synchronize_rcu) },
	{ 0xab96bd2d, __VMLINUX_SYMBOL_STR(dm_bitset_test_bit) },
	{ 0x42160169, __VMLINUX_SYMBOL_STR(flush_workqueue) },
	{ 0x858c8d94, __VMLINUX_SYMBOL_STR(dm_array_set_value) },
	{ 0xafa0c984, __VMLINUX_SYMBOL_STR(bio_endio) },
	{ 0x59e5070d, __VMLINUX_SYMBOL_STR(__do_div64) },
	{ 0x7ade1071, __VMLINUX_SYMBOL_STR(dm_tm_destroy) },
	{ 0x966a8838, __VMLINUX_SYMBOL_STR(dm_btree_lookup) },
	{ 0xf12ec3cd, __VMLINUX_SYMBOL_STR(dm_disk_bitset_init) },
	{ 0xead1e727, __VMLINUX_SYMBOL_STR(dm_bm_write_lock_zero) },
	{ 0x40a9b349, __VMLINUX_SYMBOL_STR(vzalloc) },
	{ 0xa87c5b4d, __VMLINUX_SYMBOL_STR(dm_array_resize) },
	{ 0xbe0497aa, __VMLINUX_SYMBOL_STR(dm_tm_create_with_sm) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x11eab9fe, __VMLINUX_SYMBOL_STR(dm_bm_read_lock) },
	{ 0x147fb690, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x54f69d, __VMLINUX_SYMBOL_STR(dm_tm_pre_commit) },
	{ 0x2c112836, __VMLINUX_SYMBOL_STR(dm_block_location) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xa2507774, __VMLINUX_SYMBOL_STR(dm_tm_shadow_block) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xbd50ebbb, __VMLINUX_SYMBOL_STR(dm_btree_del) },
	{ 0xf9e73082, __VMLINUX_SYMBOL_STR(scnprintf) },
	{ 0x533da962, __VMLINUX_SYMBOL_STR(dm_block_manager_create) },
	{ 0x6db7252d, __VMLINUX_SYMBOL_STR(dm_put_device) },
	{ 0x1e3f728d, __VMLINUX_SYMBOL_STR(dm_block_data) },
	{ 0xbcfdc290, __VMLINUX_SYMBOL_STR(dm_tm_read_lock) },
	{ 0x2025e954, __VMLINUX_SYMBOL_STR(dm_array_info_init) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xd4669fad, __VMLINUX_SYMBOL_STR(complete) },
	{ 0xca54fee, __VMLINUX_SYMBOL_STR(_test_and_set_bit) },
	{ 0xca40abd5, __VMLINUX_SYMBOL_STR(dm_btree_insert) },
	{ 0xb1425b32, __VMLINUX_SYMBOL_STR(dm_table_add_target_callbacks) },
	{ 0x8d522714, __VMLINUX_SYMBOL_STR(__rcu_read_lock) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=dm-persistent-data,dm-mod";

