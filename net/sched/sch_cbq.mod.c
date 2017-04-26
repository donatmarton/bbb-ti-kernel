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
	{ 0x835ce72c, __VMLINUX_SYMBOL_STR(unregister_qdisc) },
	{ 0x5f51b09, __VMLINUX_SYMBOL_STR(register_qdisc) },
	{ 0x6bdcfd99, __VMLINUX_SYMBOL_STR(qdisc_class_hash_remove) },
	{ 0xa5027c07, __VMLINUX_SYMBOL_STR(qdisc_class_hash_grow) },
	{ 0x102b65bf, __VMLINUX_SYMBOL_STR(gen_new_estimator) },
	{ 0xcaa1a2be, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x7b8c3a36, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xfca001c3, __VMLINUX_SYMBOL_STR(gen_replace_estimator) },
	{ 0x5ea8a8f6, __VMLINUX_SYMBOL_STR(noop_qdisc) },
	{ 0x3eb7a160, __VMLINUX_SYMBOL_STR(hrtimer_init) },
	{ 0x64e2031e, __VMLINUX_SYMBOL_STR(qdisc_watchdog_init) },
	{ 0x117093be, __VMLINUX_SYMBOL_STR(qdisc_class_hash_init) },
	{ 0xed597524, __VMLINUX_SYMBOL_STR(qdisc_get_rtab) },
	{ 0x4f391d0e, __VMLINUX_SYMBOL_STR(nla_parse) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0x82c639dd, __VMLINUX_SYMBOL_STR(hrtimer_try_to_cancel) },
	{ 0xd84484e8, __VMLINUX_SYMBOL_STR(qdisc_create_dflt) },
	{ 0x3e70cecf, __VMLINUX_SYMBOL_STR(pfifo_qdisc_ops) },
	{ 0x866a4018, __VMLINUX_SYMBOL_STR(qdisc_tree_reduce_backlog) },
	{ 0x6b2dc060, __VMLINUX_SYMBOL_STR(dump_stack) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x3c3fce39, __VMLINUX_SYMBOL_STR(__local_bh_enable_ip) },
	{ 0xf229424a, __VMLINUX_SYMBOL_STR(preempt_count_add) },
	{ 0x85670f1d, __VMLINUX_SYMBOL_STR(rtnl_is_locked) },
	{ 0x82dbeb55, __VMLINUX_SYMBOL_STR(gnet_stats_copy_queue) },
	{ 0x188f4c9a, __VMLINUX_SYMBOL_STR(gnet_stats_copy_rate_est) },
	{ 0x3ee4070c, __VMLINUX_SYMBOL_STR(gnet_stats_copy_basic) },
	{ 0x4a211dfd, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x5a84b78d, __VMLINUX_SYMBOL_STR(tc_classify) },
	{ 0x703c7f43, __VMLINUX_SYMBOL_STR(__qdisc_calculate_pkt_len) },
	{ 0xaf238246, __VMLINUX_SYMBOL_STR(qdisc_watchdog_schedule_ns) },
	{ 0xa04a01bd, __VMLINUX_SYMBOL_STR(qdisc_class_hash_insert) },
	{ 0x4a37b6d5, __VMLINUX_SYMBOL_STR(__netif_schedule) },
	{ 0x6a1b7fe9, __VMLINUX_SYMBOL_STR(hrtimer_start_range_ns) },
	{ 0xb9093c, __VMLINUX_SYMBOL_STR(qdisc_reset) },
	{ 0x9e14108e, __VMLINUX_SYMBOL_STR(hrtimer_cancel) },
	{ 0x94b5ce11, __VMLINUX_SYMBOL_STR(qdisc_watchdog_cancel) },
	{ 0xc87c1f84, __VMLINUX_SYMBOL_STR(ktime_get) },
	{ 0xf53d4c26, __VMLINUX_SYMBOL_STR(qdisc_class_hash_destroy) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x17b1125d, __VMLINUX_SYMBOL_STR(gen_kill_estimator) },
	{ 0x521b36b5, __VMLINUX_SYMBOL_STR(qdisc_put_rtab) },
	{ 0xdd9bdc62, __VMLINUX_SYMBOL_STR(qdisc_destroy) },
	{ 0xed45a549, __VMLINUX_SYMBOL_STR(tcf_destroy_chain) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x18cf6166, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0xd845cf95, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xd0697c19, __VMLINUX_SYMBOL_STR(gnet_stats_copy_app) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

