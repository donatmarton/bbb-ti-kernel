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
	{ 0x84d15154, __VMLINUX_SYMBOL_STR(unregister_qdisc) },
	{ 0x68ae2662, __VMLINUX_SYMBOL_STR(register_qdisc) },
	{ 0xcb62ec7d, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0xc3f462c, __VMLINUX_SYMBOL_STR(__skb_gso_segment) },
	{ 0x931fdd57, __VMLINUX_SYMBOL_STR(netif_skb_features) },
	{ 0x518af5e5, __VMLINUX_SYMBOL_STR(skb_gso_transport_seglen) },
	{ 0x4cb65d54, __VMLINUX_SYMBOL_STR(__qdisc_calculate_pkt_len) },
	{ 0xae3d5387, __VMLINUX_SYMBOL_STR(qdisc_watchdog_schedule_ns) },
	{ 0xd9c8e516, __VMLINUX_SYMBOL_STR(qdisc_watchdog_init) },
	{ 0xc87c1f84, __VMLINUX_SYMBOL_STR(ktime_get) },
	{ 0xa627b740, __VMLINUX_SYMBOL_STR(qdisc_reset) },
	{ 0x1922b085, __VMLINUX_SYMBOL_STR(qdisc_watchdog_cancel) },
	{ 0xf4b56bd3, __VMLINUX_SYMBOL_STR(fifo_create_dflt) },
	{ 0x7c019f22, __VMLINUX_SYMBOL_STR(bfifo_qdisc_ops) },
	{ 0xba8bb333, __VMLINUX_SYMBOL_STR(___ratelimit) },
	{ 0x521b36b5, __VMLINUX_SYMBOL_STR(qdisc_put_rtab) },
	{ 0xed597524, __VMLINUX_SYMBOL_STR(qdisc_get_rtab) },
	{ 0xdd3916ac, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0x6a7be7cd, __VMLINUX_SYMBOL_STR(qdisc_destroy) },
	{ 0xe1dcec3, __VMLINUX_SYMBOL_STR(qdisc_tree_reduce_backlog) },
	{ 0xa1d55e90, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0x6b2dc060, __VMLINUX_SYMBOL_STR(dump_stack) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x85670f1d, __VMLINUX_SYMBOL_STR(rtnl_is_locked) },
	{ 0x4c4a5286, __VMLINUX_SYMBOL_STR(fifo_set_limit) },
	{ 0x419434ad, __VMLINUX_SYMBOL_STR(noop_qdisc) },
	{ 0xb77131b1, __VMLINUX_SYMBOL_STR(psched_ratecfg_precompute) },
	{ 0xf1db1704, __VMLINUX_SYMBOL_STR(nla_memcpy) },
	{ 0x4f391d0e, __VMLINUX_SYMBOL_STR(nla_parse) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x71f7577d, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0x3e8ff8ef, __VMLINUX_SYMBOL_STR(nla_put_64bit) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x73ea6fe7, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

