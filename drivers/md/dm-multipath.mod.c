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
	{ 0x92b57248, __VMLINUX_SYMBOL_STR(flush_work) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x43b086f9, __VMLINUX_SYMBOL_STR(scsi_dh_set_params) },
	{ 0xb5233f3e, __VMLINUX_SYMBOL_STR(kmem_cache_destroy) },
	{ 0x402b8281, __VMLINUX_SYMBOL_STR(__request_module) },
	{ 0x7b8c3a36, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x7deff673, __VMLINUX_SYMBOL_STR(dm_consume_args) },
	{ 0x26c06d6c, __VMLINUX_SYMBOL_STR(up_read) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0xc1ccfa7a, __VMLINUX_SYMBOL_STR(dm_get_device) },
	{ 0x43a53735, __VMLINUX_SYMBOL_STR(__alloc_workqueue_key) },
	{ 0x1f57f18f, __VMLINUX_SYMBOL_STR(dm_path_uevent) },
	{ 0xa8cde9a7, __VMLINUX_SYMBOL_STR(remove_wait_queue) },
	{ 0x16188c6b, __VMLINUX_SYMBOL_STR(blk_put_request) },
	{ 0x6d0f1f89, __VMLINUX_SYMBOL_STR(dm_table_get_mode) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0x815131ba, __VMLINUX_SYMBOL_STR(mempool_destroy) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x9580deb, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x62b72b0d, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x54ca458c, __VMLINUX_SYMBOL_STR(dm_register_target) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xc499ae1e, __VMLINUX_SYMBOL_STR(kstrdup) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0x765e48a2, __VMLINUX_SYMBOL_STR(scsi_dh_attached_handler_name) },
	{ 0x9101360b, __VMLINUX_SYMBOL_STR(down_read) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x63b87fc5, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xffd5a395, __VMLINUX_SYMBOL_STR(default_wake_function) },
	{ 0x183fa88b, __VMLINUX_SYMBOL_STR(mempool_alloc_slab) },
	{ 0xe04f7caa, __VMLINUX_SYMBOL_STR(dm_read_arg_group) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xad84bef8, __VMLINUX_SYMBOL_STR(dm_table_event) },
	{ 0x706c5a65, __VMLINUX_SYMBOL_STR(preempt_count_sub) },
	{ 0xdc798d37, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x20c55ae0, __VMLINUX_SYMBOL_STR(sscanf) },
	{ 0xeddf0edb, __VMLINUX_SYMBOL_STR(blk_lld_busy) },
	{ 0x32baaa18, __VMLINUX_SYMBOL_STR(scsi_dh_activate) },
	{ 0x98fa1e20, __VMLINUX_SYMBOL_STR(dm_get_reserved_rq_based_ios) },
	{ 0x33af8021, __VMLINUX_SYMBOL_STR(dm_unregister_target) },
	{ 0x7e121e25, __VMLINUX_SYMBOL_STR(scsi_dh_attach) },
	{ 0xaafdc258, __VMLINUX_SYMBOL_STR(strcasecmp) },
	{ 0x5eb24829, __VMLINUX_SYMBOL_STR(dm_shift_arg) },
	{ 0xe16b893b, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x8c03d20c, __VMLINUX_SYMBOL_STR(destroy_workqueue) },
	{ 0x521445b, __VMLINUX_SYMBOL_STR(list_del) },
	{ 0x46feb099, __VMLINUX_SYMBOL_STR(dm_read_arg) },
	{ 0xdf499aba, __VMLINUX_SYMBOL_STR(dm_suspended) },
	{ 0x8a99a016, __VMLINUX_SYMBOL_STR(mempool_free_slab) },
	{ 0x43b0c9c3, __VMLINUX_SYMBOL_STR(preempt_schedule) },
	{ 0x6f3db115, __VMLINUX_SYMBOL_STR(up_write) },
	{ 0xbc5c84b5, __VMLINUX_SYMBOL_STR(down_write) },
	{ 0x42160169, __VMLINUX_SYMBOL_STR(flush_workqueue) },
	{ 0x2d9b9ea6, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0x1cd0f6c0, __VMLINUX_SYMBOL_STR(mempool_alloc) },
	{ 0x9c09faeb, __VMLINUX_SYMBOL_STR(bdevname) },
	{ 0x3f616ce2, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x2b90cdaa, __VMLINUX_SYMBOL_STR(mempool_create) },
	{ 0xcaa1a2be, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x920664c8, __VMLINUX_SYMBOL_STR(mempool_free) },
	{ 0x71aa3ade, __VMLINUX_SYMBOL_STR(kmem_cache_create) },
	{ 0xb9e52429, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0xfe634f58, __VMLINUX_SYMBOL_STR(add_wait_queue) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xf9e73082, __VMLINUX_SYMBOL_STR(scnprintf) },
	{ 0x63ba3cc2, __VMLINUX_SYMBOL_STR(dm_put_device) },
	{ 0xe4c932e5, __VMLINUX_SYMBOL_STR(dm_noflush_suspending) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x37af3190, __VMLINUX_SYMBOL_STR(dm_table_run_md_queue_async) },
	{ 0x7f02188f, __VMLINUX_SYMBOL_STR(__msecs_to_jiffies) },
	{ 0xfbc4f89e, __VMLINUX_SYMBOL_STR(io_schedule_timeout) },
	{ 0xf229424a, __VMLINUX_SYMBOL_STR(preempt_count_add) },
	{ 0x98ddc519, __VMLINUX_SYMBOL_STR(blk_get_request) },
	{ 0x9e931cfd, __VMLINUX_SYMBOL_STR(try_module_get) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=dm-mod";

