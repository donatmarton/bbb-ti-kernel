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
	{ 0xe6fbe96e, __VMLINUX_SYMBOL_STR(proc_dointvec_minmax) },
	{ 0x18e60984, __VMLINUX_SYMBOL_STR(__do_once_start) },
	{ 0x38749180, __VMLINUX_SYMBOL_STR(inet_frag_kill) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x99f43b44, __VMLINUX_SYMBOL_STR(ip6_expire_frag_queue) },
	{ 0x446678a3, __VMLINUX_SYMBOL_STR(unregister_net_sysctl_table) },
	{ 0x99bab161, __VMLINUX_SYMBOL_STR(nf_ct_zone_dflt) },
	{ 0x79aa04a2, __VMLINUX_SYMBOL_STR(get_random_bytes) },
	{ 0xfd99623a, __VMLINUX_SYMBOL_STR(ip_frag_ecn_table) },
	{ 0xd1a46981, __VMLINUX_SYMBOL_STR(skb_clone) },
	{ 0x44b1d426, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0xe2fae716, __VMLINUX_SYMBOL_STR(kmemdup) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x986f12a6, __VMLINUX_SYMBOL_STR(nf_hook_slow) },
	{ 0xb5cb59f3, __VMLINUX_SYMBOL_STR(inet_frag_find) },
	{ 0x9047332b, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0x95f58b2d, __VMLINUX_SYMBOL_STR(unregister_pernet_subsys) },
	{ 0x706c5a65, __VMLINUX_SYMBOL_STR(preempt_count_sub) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x3c3fce39, __VMLINUX_SYMBOL_STR(__local_bh_enable_ip) },
	{ 0x99591a7a, __VMLINUX_SYMBOL_STR(ipv6_ext_hdr) },
	{ 0x202e36e8, __VMLINUX_SYMBOL_STR(inet_frags_fini) },
	{ 0x7c89a21, __VMLINUX_SYMBOL_STR(inet_frags_exit_net) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x8286a48, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0x43b0c9c3, __VMLINUX_SYMBOL_STR(preempt_schedule) },
	{ 0xc00ce02, __VMLINUX_SYMBOL_STR(init_net) },
	{ 0xe0ed6ff, __VMLINUX_SYMBOL_STR(nf_unregister_hooks) },
	{ 0xc2102972, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xbf8503c4, __VMLINUX_SYMBOL_STR(inet_frag_maybe_warn_overflow) },
	{ 0x4a211dfd, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x5e1bb7bc, __VMLINUX_SYMBOL_STR(inet_frag_destroy) },
	{ 0xb99f0242, __VMLINUX_SYMBOL_STR(register_pernet_subsys) },
	{ 0x4c6348bb, __VMLINUX_SYMBOL_STR(pskb_expand_head) },
	{ 0xd9749335, __VMLINUX_SYMBOL_STR(ip6_frag_init) },
	{ 0xf6ebc03b, __VMLINUX_SYMBOL_STR(net_ratelimit) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xa3ad16d2, __VMLINUX_SYMBOL_STR(___pskb_trim) },
	{ 0x98c74f45, __VMLINUX_SYMBOL_STR(nf_register_hooks) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xc79fb8e5, __VMLINUX_SYMBOL_STR(inet_frags_init) },
	{ 0x99bb8806, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0xe113bbbc, __VMLINUX_SYMBOL_STR(csum_partial) },
	{ 0x1d8f4c65, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0xf229424a, __VMLINUX_SYMBOL_STR(preempt_count_add) },
	{ 0x158cba60, __VMLINUX_SYMBOL_STR(register_net_sysctl) },
	{ 0x701d2014, __VMLINUX_SYMBOL_STR(proc_dointvec_jiffies) },
	{ 0x372da3af, __VMLINUX_SYMBOL_STR(skb_copy_bits) },
	{ 0x1d2e3145, __VMLINUX_SYMBOL_STR(ip6_frag_match) },
	{ 0xd966ddc2, __VMLINUX_SYMBOL_STR(__do_once_done) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

