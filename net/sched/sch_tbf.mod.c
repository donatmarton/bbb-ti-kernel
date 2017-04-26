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
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x5f51b09, __VMLINUX_SYMBOL_STR(register_qdisc) },
	{ 0x1d8f4c65, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0xf31b6da1, __VMLINUX_SYMBOL_STR(__skb_gso_segment) },
	{ 0x9707bc81, __VMLINUX_SYMBOL_STR(netif_skb_features) },
	{ 0x9fe9c6f7, __VMLINUX_SYMBOL_STR(skb_gso_transport_seglen) },
	{ 0x703c7f43, __VMLINUX_SYMBOL_STR(__qdisc_calculate_pkt_len) },
	{ 0x4a211dfd, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0xaf238246, __VMLINUX_SYMBOL_STR(qdisc_watchdog_schedule_ns) },
	{ 0x64e2031e, __VMLINUX_SYMBOL_STR(qdisc_watchdog_init) },
	{ 0xc87c1f84, __VMLINUX_SYMBOL_STR(ktime_get) },
	{ 0xb9093c, __VMLINUX_SYMBOL_STR(qdisc_reset) },
	{ 0x94b5ce11, __VMLINUX_SYMBOL_STR(qdisc_watchdog_cancel) },
	{ 0x6b2dc060, __VMLINUX_SYMBOL_STR(dump_stack) },
	{ 0xaf0720f6, __VMLINUX_SYMBOL_STR(fifo_create_dflt) },
	{ 0x5ff7d532, __VMLINUX_SYMBOL_STR(bfifo_qdisc_ops) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x2fd85baf, __VMLINUX_SYMBOL_STR(___ratelimit) },
	{ 0x521b36b5, __VMLINUX_SYMBOL_STR(qdisc_put_rtab) },
	{ 0xed597524, __VMLINUX_SYMBOL_STR(qdisc_get_rtab) },
	{ 0x3c3fce39, __VMLINUX_SYMBOL_STR(__local_bh_enable_ip) },
	{ 0xdd9bdc62, __VMLINUX_SYMBOL_STR(qdisc_destroy) },
	{ 0x866a4018, __VMLINUX_SYMBOL_STR(qdisc_tree_reduce_backlog) },
	{ 0xf229424a, __VMLINUX_SYMBOL_STR(preempt_count_add) },
	{ 0x85670f1d, __VMLINUX_SYMBOL_STR(rtnl_is_locked) },
	{ 0xbd503232, __VMLINUX_SYMBOL_STR(fifo_set_limit) },
	{ 0x5ea8a8f6, __VMLINUX_SYMBOL_STR(noop_qdisc) },
	{ 0xb77131b1, __VMLINUX_SYMBOL_STR(psched_ratecfg_precompute) },
	{ 0xf1db1704, __VMLINUX_SYMBOL_STR(nla_memcpy) },
	{ 0x4f391d0e, __VMLINUX_SYMBOL_STR(nla_parse) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x18cf6166, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xd845cf95, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

