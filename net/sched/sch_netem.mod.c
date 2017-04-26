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
	{ 0x64e2031e, __VMLINUX_SYMBOL_STR(qdisc_watchdog_init) },
	{ 0xd6ee688f, __VMLINUX_SYMBOL_STR(vmalloc) },
	{ 0x9e763530, __VMLINUX_SYMBOL_STR(reciprocal_value) },
	{ 0x4f391d0e, __VMLINUX_SYMBOL_STR(nla_parse) },
	{ 0xf1db1704, __VMLINUX_SYMBOL_STR(nla_memcpy) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xaf238246, __VMLINUX_SYMBOL_STR(qdisc_watchdog_schedule_ns) },
	{ 0xdf2c2742, __VMLINUX_SYMBOL_STR(rb_last) },
	{ 0x8d37f3ad, __VMLINUX_SYMBOL_STR(skb_checksum_help) },
	{ 0xf31b6da1, __VMLINUX_SYMBOL_STR(__skb_gso_segment) },
	{ 0x9707bc81, __VMLINUX_SYMBOL_STR(netif_skb_features) },
	{ 0x1d8f4c65, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0xe094e336, __VMLINUX_SYMBOL_STR(skb_copy) },
	{ 0x7a663697, __VMLINUX_SYMBOL_STR(skb_orphan_partial) },
	{ 0x703c7f43, __VMLINUX_SYMBOL_STR(__qdisc_calculate_pkt_len) },
	{ 0xa5526619, __VMLINUX_SYMBOL_STR(rb_insert_color) },
	{ 0x59e5070d, __VMLINUX_SYMBOL_STR(__do_div64) },
	{ 0xc87c1f84, __VMLINUX_SYMBOL_STR(ktime_get) },
	{ 0xd1a46981, __VMLINUX_SYMBOL_STR(skb_clone) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0xa735db59, __VMLINUX_SYMBOL_STR(prandom_u32) },
	{ 0x6b2dc060, __VMLINUX_SYMBOL_STR(dump_stack) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x3c3fce39, __VMLINUX_SYMBOL_STR(__local_bh_enable_ip) },
	{ 0x866a4018, __VMLINUX_SYMBOL_STR(qdisc_tree_reduce_backlog) },
	{ 0xf229424a, __VMLINUX_SYMBOL_STR(preempt_count_add) },
	{ 0x85670f1d, __VMLINUX_SYMBOL_STR(rtnl_is_locked) },
	{ 0xb9093c, __VMLINUX_SYMBOL_STR(qdisc_reset) },
	{ 0xece784c2, __VMLINUX_SYMBOL_STR(rb_first) },
	{ 0x4d9b652b, __VMLINUX_SYMBOL_STR(rb_erase) },
	{ 0x4a211dfd, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x7aa1756e, __VMLINUX_SYMBOL_STR(kvfree) },
	{ 0xdd9bdc62, __VMLINUX_SYMBOL_STR(qdisc_destroy) },
	{ 0x94b5ce11, __VMLINUX_SYMBOL_STR(qdisc_watchdog_cancel) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x18cf6166, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0xd845cf95, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

