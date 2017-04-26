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
	{ 0x615ee1ed, __VMLINUX_SYMBOL_STR(kobject_put) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0xb5233f3e, __VMLINUX_SYMBOL_STR(kmem_cache_destroy) },
	{ 0x7b8c3a36, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x65e75cb6, __VMLINUX_SYMBOL_STR(__list_del_entry) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x26c06d6c, __VMLINUX_SYMBOL_STR(up_read) },
	{ 0xdccbc6b9, __VMLINUX_SYMBOL_STR(register_sysctl_table) },
	{ 0xf4cf9543, __VMLINUX_SYMBOL_STR(single_open) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xa0fbac79, __VMLINUX_SYMBOL_STR(wake_up_bit) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x43a53735, __VMLINUX_SYMBOL_STR(__alloc_workqueue_key) },
	{ 0xc8b57c27, __VMLINUX_SYMBOL_STR(autoremove_wake_function) },
	{ 0x56878201, __VMLINUX_SYMBOL_STR(single_release) },
	{ 0x95db5ba0, __VMLINUX_SYMBOL_STR(seq_puts) },
	{ 0x1851151c, __VMLINUX_SYMBOL_STR(proc_dointvec) },
	{ 0xda97e5a5, __VMLINUX_SYMBOL_STR(kobject_uevent) },
	{ 0xe6657df, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0x687f0fc2, __VMLINUX_SYMBOL_STR(remove_proc_entry) },
	{ 0xa26d9b4f, __VMLINUX_SYMBOL_STR(workqueue_congested) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xe29e1d0e, __VMLINUX_SYMBOL_STR(out_of_line_wait_on_atomic_t) },
	{ 0x960dfaf5, __VMLINUX_SYMBOL_STR(radix_tree_tag_get) },
	{ 0x2fefcfbf, __VMLINUX_SYMBOL_STR(seq_read) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x9101360b, __VMLINUX_SYMBOL_STR(down_read) },
	{ 0x329a3aca, __VMLINUX_SYMBOL_STR(kobject_create_and_add) },
	{ 0xd3bc530e, __VMLINUX_SYMBOL_STR(out_of_line_wait_on_bit_lock) },
	{ 0x63b87fc5, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xd8ded085, __VMLINUX_SYMBOL_STR(radix_tree_maybe_preload) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x8850f548, __VMLINUX_SYMBOL_STR(proc_mkdir) },
	{ 0x706c5a65, __VMLINUX_SYMBOL_STR(preempt_count_sub) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xf31b3fd1, __VMLINUX_SYMBOL_STR(workqueue_set_max_active) },
	{ 0xa1c76e0a, __VMLINUX_SYMBOL_STR(_cond_resched) },
	{ 0xf4b6cdae, __VMLINUX_SYMBOL_STR(kmem_cache_free) },
	{ 0x8c03d20c, __VMLINUX_SYMBOL_STR(destroy_workqueue) },
	{ 0x521445b, __VMLINUX_SYMBOL_STR(list_del) },
	{ 0xaba3ad0c, __VMLINUX_SYMBOL_STR(radix_tree_gang_lookup_tag) },
	{ 0x2469810f, __VMLINUX_SYMBOL_STR(__rcu_read_unlock) },
	{ 0x43b0c9c3, __VMLINUX_SYMBOL_STR(preempt_schedule) },
	{ 0x6f3db115, __VMLINUX_SYMBOL_STR(up_write) },
	{ 0xbc5c84b5, __VMLINUX_SYMBOL_STR(down_write) },
	{ 0x3e061b94, __VMLINUX_SYMBOL_STR(__get_page_tail) },
	{ 0x1683a50b, __VMLINUX_SYMBOL_STR(radix_tree_delete) },
	{ 0xcd4b732f, __VMLINUX_SYMBOL_STR(bit_waitqueue) },
	{ 0x783b3563, __VMLINUX_SYMBOL_STR(wake_up_atomic_t) },
	{ 0x483ec199, __VMLINUX_SYMBOL_STR(__cond_resched_lock) },
	{ 0x3dd8aa5e, __VMLINUX_SYMBOL_STR(radix_tree_preload_end) },
	{ 0x16e297c3, __VMLINUX_SYMBOL_STR(bit_wait) },
	{ 0x55184b5d, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x22dfdd06, __VMLINUX_SYMBOL_STR(radix_tree_tag_set) },
	{ 0xa1d61e01, __VMLINUX_SYMBOL_STR(unregister_sysctl_table) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0x6b2dc060, __VMLINUX_SYMBOL_STR(dump_stack) },
	{ 0xcaa1a2be, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x4bcf03a4, __VMLINUX_SYMBOL_STR(radix_tree_tag_clear) },
	{ 0x71aa3ade, __VMLINUX_SYMBOL_STR(kmem_cache_create) },
	{ 0x7afa89fc, __VMLINUX_SYMBOL_STR(vsnprintf) },
	{ 0xb9e52429, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x1c9e4c36, __VMLINUX_SYMBOL_STR(__pagevec_release) },
	{ 0xe8a73aaf, __VMLINUX_SYMBOL_STR(out_of_line_wait_on_bit) },
	{ 0x158f2f00, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0xc9896c90, __VMLINUX_SYMBOL_STR(proc_create_data) },
	{ 0x76e7469e, __VMLINUX_SYMBOL_STR(kernel_kobj) },
	{ 0x963de423, __VMLINUX_SYMBOL_STR(seq_lseek) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x32633347, __VMLINUX_SYMBOL_STR(pagevec_lookup) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xabfcfac5, __VMLINUX_SYMBOL_STR(add_wait_queue_exclusive) },
	{ 0x4d265394, __VMLINUX_SYMBOL_STR(put_page) },
	{ 0x8893fa5d, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0xae85a27e, __VMLINUX_SYMBOL_STR(radix_tree_lookup) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xca54fee, __VMLINUX_SYMBOL_STR(_test_and_set_bit) },
	{ 0x8d522714, __VMLINUX_SYMBOL_STR(__rcu_read_lock) },
	{ 0xf229424a, __VMLINUX_SYMBOL_STR(preempt_count_add) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0x6e6514ed, __VMLINUX_SYMBOL_STR(radix_tree_insert) },
	{ 0xd109e4f8, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

