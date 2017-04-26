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
	{ 0x7d63a635, __VMLINUX_SYMBOL_STR(register_netdevice) },
	{ 0xe6fbe96e, __VMLINUX_SYMBOL_STR(proc_dointvec_minmax) },
	{ 0x18e60984, __VMLINUX_SYMBOL_STR(__do_once_start) },
	{ 0x38749180, __VMLINUX_SYMBOL_STR(inet_frag_kill) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x446678a3, __VMLINUX_SYMBOL_STR(unregister_net_sysctl_table) },
	{ 0x79aa04a2, __VMLINUX_SYMBOL_STR(get_random_bytes) },
	{ 0xd1a46981, __VMLINUX_SYMBOL_STR(skb_clone) },
	{ 0xe094e336, __VMLINUX_SYMBOL_STR(skb_copy) },
	{ 0x98821820, __VMLINUX_SYMBOL_STR(lowpan_header_compress) },
	{ 0xd2da1048, __VMLINUX_SYMBOL_STR(register_netdevice_notifier) },
	{ 0x44b1d426, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0xe2fae716, __VMLINUX_SYMBOL_STR(kmemdup) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x55cf3589, __VMLINUX_SYMBOL_STR(init_user_ns) },
	{ 0x9d0d6206, __VMLINUX_SYMBOL_STR(unregister_netdevice_notifier) },
	{ 0xb5cb59f3, __VMLINUX_SYMBOL_STR(inet_frag_find) },
	{ 0x1030b539, __VMLINUX_SYMBOL_STR(netif_rx) },
	{ 0x9047332b, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0x409e21b2, __VMLINUX_SYMBOL_STR(lowpan_netdev_setup) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x8ded809f, __VMLINUX_SYMBOL_STR(kfree_skb_partial) },
	{ 0x95f58b2d, __VMLINUX_SYMBOL_STR(unregister_pernet_subsys) },
	{ 0x706c5a65, __VMLINUX_SYMBOL_STR(preempt_count_sub) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0xbe43413c, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0x202e36e8, __VMLINUX_SYMBOL_STR(inet_frags_fini) },
	{ 0x7c89a21, __VMLINUX_SYMBOL_STR(inet_frags_exit_net) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x122c4722, __VMLINUX_SYMBOL_STR(ieee802154_hdr_peek) },
	{ 0x1b06fe44, __VMLINUX_SYMBOL_STR(dev_get_by_index) },
	{ 0xc0cd8b3c, __VMLINUX_SYMBOL_STR(dev_remove_pack) },
	{ 0x43b0c9c3, __VMLINUX_SYMBOL_STR(preempt_schedule) },
	{ 0x43102a32, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0xc00ce02, __VMLINUX_SYMBOL_STR(init_net) },
	{ 0x3f1355d5, __VMLINUX_SYMBOL_STR(rtnl_link_unregister) },
	{ 0xac85e9f8, __VMLINUX_SYMBOL_STR(lowpan_header_decompress) },
	{ 0x145b3547, __VMLINUX_SYMBOL_STR(skb_try_coalesce) },
	{ 0xc2102972, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xbf8503c4, __VMLINUX_SYMBOL_STR(inet_frag_maybe_warn_overflow) },
	{ 0x4a211dfd, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x5e1bb7bc, __VMLINUX_SYMBOL_STR(inet_frag_destroy) },
	{ 0x6b2dc060, __VMLINUX_SYMBOL_STR(dump_stack) },
	{ 0xb99f0242, __VMLINUX_SYMBOL_STR(register_pernet_subsys) },
	{ 0x4c6348bb, __VMLINUX_SYMBOL_STR(pskb_expand_head) },
	{ 0xe4628663, __VMLINUX_SYMBOL_STR(ieee802154_hdr_peek_addrs) },
	{ 0x823882eb, __VMLINUX_SYMBOL_STR(unregister_netdevice_queue) },
	{ 0xf6ebc03b, __VMLINUX_SYMBOL_STR(net_ratelimit) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x985c2876, __VMLINUX_SYMBOL_STR(rtnl_link_register) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xc79fb8e5, __VMLINUX_SYMBOL_STR(inet_frags_init) },
	{ 0x86faf086, __VMLINUX_SYMBOL_STR(dev_add_pack) },
	{ 0x1d8f4c65, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0x85670f1d, __VMLINUX_SYMBOL_STR(rtnl_is_locked) },
	{ 0x58d260cf, __VMLINUX_SYMBOL_STR(dev_queue_xmit) },
	{ 0xf229424a, __VMLINUX_SYMBOL_STR(preempt_count_add) },
	{ 0x158cba60, __VMLINUX_SYMBOL_STR(register_net_sysctl) },
	{ 0xfe8e1ccd, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x701d2014, __VMLINUX_SYMBOL_STR(proc_dointvec_jiffies) },
	{ 0x6411e8b, __VMLINUX_SYMBOL_STR(skb_morph) },
	{ 0x4d7aef69, __VMLINUX_SYMBOL_STR(ieee802154_max_payload) },
	{ 0xd966ddc2, __VMLINUX_SYMBOL_STR(__do_once_done) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=6lowpan,ieee802154";

