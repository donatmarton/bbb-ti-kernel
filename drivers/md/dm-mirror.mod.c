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
	{ 0x92b57248, __VMLINUX_SYMBOL_STR(flush_work) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0xa83588eb, __VMLINUX_SYMBOL_STR(dm_rh_recovery_end) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xc66ce277, __VMLINUX_SYMBOL_STR(dm_rh_get_region_size) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xcab63c3d, __VMLINUX_SYMBOL_STR(dm_rh_get_state) },
	{ 0x920cfd7f, __VMLINUX_SYMBOL_STR(dm_get_device) },
	{ 0x4660791d, __VMLINUX_SYMBOL_STR(dm_io) },
	{ 0x43a53735, __VMLINUX_SYMBOL_STR(__alloc_workqueue_key) },
	{ 0x2fadbb2e, __VMLINUX_SYMBOL_STR(dm_rh_inc_pending) },
	{ 0x6d0f1f89, __VMLINUX_SYMBOL_STR(dm_table_get_mode) },
	{ 0xf37a3cfe, __VMLINUX_SYMBOL_STR(dm_rh_get_region_key) },
	{ 0x154c6338, __VMLINUX_SYMBOL_STR(dm_kcopyd_client_destroy) },
	{ 0xed2d3084, __VMLINUX_SYMBOL_STR(dm_region_hash_create) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x8fdf772a, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0xcbd6f3e3, __VMLINUX_SYMBOL_STR(dm_register_target) },
	{ 0x21980c49, __VMLINUX_SYMBOL_STR(dm_kcopyd_copy) },
	{ 0xd8aa4284, __VMLINUX_SYMBOL_STR(dm_rh_region_context) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xa53387c7, __VMLINUX_SYMBOL_STR(dm_rh_flush) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x9e4faeef, __VMLINUX_SYMBOL_STR(dm_io_client_destroy) },
	{ 0x1d2f9ac, __VMLINUX_SYMBOL_STR(dm_rh_recovery_start) },
	{ 0xbe38a431, __VMLINUX_SYMBOL_STR(dm_rh_recovery_prepare) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0x439a1367, __VMLINUX_SYMBOL_STR(dm_rh_bio_to_region) },
	{ 0x3f5c6471, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0xad84bef8, __VMLINUX_SYMBOL_STR(dm_table_event) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x4df6a20d, __VMLINUX_SYMBOL_STR(dm_set_target_max_io_len) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x20c55ae0, __VMLINUX_SYMBOL_STR(sscanf) },
	{ 0xaec0c15e, __VMLINUX_SYMBOL_STR(dm_ratelimit_state) },
	{ 0x243cc87b, __VMLINUX_SYMBOL_STR(dm_unregister_target) },
	{ 0x1a1431fd, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irq) },
	{ 0x8c03d20c, __VMLINUX_SYMBOL_STR(destroy_workqueue) },
	{ 0x85825898, __VMLINUX_SYMBOL_STR(add_timer) },
	{ 0x3c161b96, __VMLINUX_SYMBOL_STR(generic_make_request) },
	{ 0x42160169, __VMLINUX_SYMBOL_STR(flush_workqueue) },
	{ 0x622598b1, __VMLINUX_SYMBOL_STR(init_wait_entry) },
	{ 0x7774620f, __VMLINUX_SYMBOL_STR(dm_rh_stop_recovery) },
	{ 0xafa0c984, __VMLINUX_SYMBOL_STR(bio_endio) },
	{ 0x59e5070d, __VMLINUX_SYMBOL_STR(__do_div64) },
	{ 0x120381af, __VMLINUX_SYMBOL_STR(dm_rh_dirty_log) },
	{ 0xa8813ad6, __VMLINUX_SYMBOL_STR(dm_rh_region_to_sector) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0xba8bb333, __VMLINUX_SYMBOL_STR(___ratelimit) },
	{ 0xd688716b, __VMLINUX_SYMBOL_STR(dm_kcopyd_client_create) },
	{ 0x3507a132, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x38efaf5a, __VMLINUX_SYMBOL_STR(dm_region_hash_destroy) },
	{ 0xd85cd67e, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x344b7739, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x601f665f, __VMLINUX_SYMBOL_STR(dm_io_client_create) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xd0b68734, __VMLINUX_SYMBOL_STR(dm_rh_mark_nosync) },
	{ 0x40693171, __VMLINUX_SYMBOL_STR(dm_dirty_log_destroy) },
	{ 0xf9e73082, __VMLINUX_SYMBOL_STR(scnprintf) },
	{ 0x7d053fc5, __VMLINUX_SYMBOL_STR(dm_rh_start_recovery) },
	{ 0x1cfb04fa, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x3a18389a, __VMLINUX_SYMBOL_STR(dm_rh_update_states) },
	{ 0x6db7252d, __VMLINUX_SYMBOL_STR(dm_put_device) },
	{ 0x31e5caf0, __VMLINUX_SYMBOL_STR(dm_noflush_suspending) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xfd93482e, __VMLINUX_SYMBOL_STR(dm_rh_recovery_in_flight) },
	{ 0x281c8f77, __VMLINUX_SYMBOL_STR(dm_rh_delay) },
	{ 0xca54fee, __VMLINUX_SYMBOL_STR(_test_and_set_bit) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0x23fa4443, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0xa33e0fd3, __VMLINUX_SYMBOL_STR(dm_dirty_log_create) },
	{ 0x9472122, __VMLINUX_SYMBOL_STR(dm_rh_dec) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=dm-region-hash,dm-mod,dm-log";

