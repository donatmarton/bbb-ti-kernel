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
	{ 0x7b8c3a36, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x446678a3, __VMLINUX_SYMBOL_STR(unregister_net_sysctl_table) },
	{ 0x5a6de56f, __VMLINUX_SYMBOL_STR(ip_do_fragment) },
	{ 0x1851151c, __VMLINUX_SYMBOL_STR(proc_dointvec) },
	{ 0x86253b33, __VMLINUX_SYMBOL_STR(dst_release) },
	{ 0x3a43976a, __VMLINUX_SYMBOL_STR(__vlan_find_dev_deep_rcu) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x4e5b6322, __VMLINUX_SYMBOL_STR(neigh_destroy) },
	{ 0xc8276a79, __VMLINUX_SYMBOL_STR(nf_hooks_needed) },
	{ 0x986f12a6, __VMLINUX_SYMBOL_STR(nf_hook_slow) },
	{ 0x9047332b, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x4784d311, __VMLINUX_SYMBOL_STR(br_dev_queue_push_xmit) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x3c3fce39, __VMLINUX_SYMBOL_STR(__local_bh_enable_ip) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x8286a48, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0x2469810f, __VMLINUX_SYMBOL_STR(__rcu_read_unlock) },
	{ 0x43102a32, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0xc00ce02, __VMLINUX_SYMBOL_STR(init_net) },
	{ 0xe0ed6ff, __VMLINUX_SYMBOL_STR(nf_unregister_hooks) },
	{ 0xdf2ac698, __VMLINUX_SYMBOL_STR(br_forward_finish) },
	{ 0xe57a5790, __VMLINUX_SYMBOL_STR(ip_route_input_noref) },
	{ 0xe137ad5b, __VMLINUX_SYMBOL_STR(nf_ipv6_ops) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x4a211dfd, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x4c6348bb, __VMLINUX_SYMBOL_STR(pskb_expand_head) },
	{ 0xcaa1a2be, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x7d0a4d53, __VMLINUX_SYMBOL_STR(skb_pull_rcsum) },
	{ 0x6c3b0666, __VMLINUX_SYMBOL_STR(ip_route_output_flow) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xa3ad16d2, __VMLINUX_SYMBOL_STR(___pskb_trim) },
	{ 0xd304c3dd, __VMLINUX_SYMBOL_STR(nf_br_ops) },
	{ 0x98c74f45, __VMLINUX_SYMBOL_STR(nf_register_hooks) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x6c8cee5d, __VMLINUX_SYMBOL_STR(br_handle_frame_finish) },
	{ 0x8d522714, __VMLINUX_SYMBOL_STR(__rcu_read_lock) },
	{ 0xf229424a, __VMLINUX_SYMBOL_STR(preempt_count_add) },
	{ 0x158cba60, __VMLINUX_SYMBOL_STR(register_net_sysctl) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=bridge";

