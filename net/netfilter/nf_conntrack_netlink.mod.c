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
	{ 0x30821c64, __VMLINUX_SYMBOL_STR(unregister_pernet_subsys) },
	{ 0xec888d2e, __VMLINUX_SYMBOL_STR(nfnl_ct_hook) },
	{ 0xb36be3d2, __VMLINUX_SYMBOL_STR(nfnetlink_subsys_unregister) },
	{ 0x93ee206, __VMLINUX_SYMBOL_STR(register_pernet_subsys) },
	{ 0x4e02815c, __VMLINUX_SYMBOL_STR(nfnetlink_subsys_register) },
	{ 0x86827df0, __VMLINUX_SYMBOL_STR(nf_conntrack_eventmask_report) },
	{ 0x69c03fc5, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0x326a2792, __VMLINUX_SYMBOL_STR(nf_conntrack_free) },
	{ 0xf945257b, __VMLINUX_SYMBOL_STR(__nf_ct_try_assign_helper) },
	{ 0xc4231a8d, __VMLINUX_SYMBOL_STR(nf_conntrack_hash_check_insert) },
	{ 0xe4689576, __VMLINUX_SYMBOL_STR(ktime_get_with_offset) },
	{ 0x6e006d73, __VMLINUX_SYMBOL_STR(__nf_ct_ext_add_length) },
	{ 0x66fc9250, __VMLINUX_SYMBOL_STR(nf_ct_helper_ext_add) },
	{ 0xd8b144a6, __VMLINUX_SYMBOL_STR(nf_conntrack_alloc) },
	{ 0x5ce3b588, __VMLINUX_SYMBOL_STR(nfnl_lock) },
	{ 0xdb065657, __VMLINUX_SYMBOL_STR(nfnl_unlock) },
	{ 0x2b9a0e85, __VMLINUX_SYMBOL_STR(nfnetlink_parse_nat_setup_hook) },
	{ 0x3c3fce39, __VMLINUX_SYMBOL_STR(__local_bh_enable_ip) },
	{ 0x5fc56a46, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0x4b4b24db, __VMLINUX_SYMBOL_STR(nf_conntrack_lock) },
	{ 0x28eff409, __VMLINUX_SYMBOL_STR(nf_conntrack_hash) },
	{ 0x7cfd8c0, __VMLINUX_SYMBOL_STR(nf_conntrack_locks) },
	{ 0x8ffe7e89, __VMLINUX_SYMBOL_STR(nf_conntrack_htable_size) },
	{ 0xf229424a, __VMLINUX_SYMBOL_STR(preempt_count_add) },
	{ 0xeaa0c4ba, __VMLINUX_SYMBOL_STR(netlink_unicast) },
	{ 0x13566d6f, __VMLINUX_SYMBOL_STR(nf_ct_iterate_cleanup) },
	{ 0x795915da, __VMLINUX_SYMBOL_STR(nf_ct_delete) },
	{ 0x147fb690, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xf6789fdc, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x85825898, __VMLINUX_SYMBOL_STR(add_timer) },
	{ 0x53611c1c, __VMLINUX_SYMBOL_STR(__nf_ct_expect_find) },
	{ 0x94b59202, __VMLINUX_SYMBOL_STR(nf_conntrack_find_get) },
	{ 0x2a18c74, __VMLINUX_SYMBOL_STR(nf_conntrack_destroy) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0xec8beba6, __VMLINUX_SYMBOL_STR(nf_ct_expect_hash) },
	{ 0xc18ac88d, __VMLINUX_SYMBOL_STR(nf_ct_expect_hsize) },
	{ 0xa07b08c5, __VMLINUX_SYMBOL_STR(nf_ct_unlink_expect_report) },
	{ 0xb8eec98b, __VMLINUX_SYMBOL_STR(del_timer) },
	{ 0xa29bb601, __VMLINUX_SYMBOL_STR(nf_ct_expect_find_get) },
	{ 0xd118f9e1, __VMLINUX_SYMBOL_STR(__netlink_dump_start) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x48567b0, __VMLINUX_SYMBOL_STR(nf_ct_expect_register_notifier) },
	{ 0xa0e725b3, __VMLINUX_SYMBOL_STR(nf_conntrack_register_notifier) },
	{ 0xc52b13bc, __VMLINUX_SYMBOL_STR(nfnetlink_set_err) },
	{ 0x4a6761ad, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0xf7a40fa0, __VMLINUX_SYMBOL_STR(nfnetlink_send) },
	{ 0x2005e93f, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0x2cf77054, __VMLINUX_SYMBOL_STR(nfnetlink_has_listeners) },
	{ 0xe77b2b24, __VMLINUX_SYMBOL_STR(nf_ct_helper_expectfn_find_by_symbol) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x71f7577d, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0x91fb3536, __VMLINUX_SYMBOL_STR(__nlmsg_put) },
	{ 0x2cc44b15, __VMLINUX_SYMBOL_STR(__cpu_possible_mask) },
	{ 0x1176e07f, __VMLINUX_SYMBOL_STR(__per_cpu_offset) },
	{ 0xfe7c4287, __VMLINUX_SYMBOL_STR(nr_cpu_ids) },
	{ 0x3e8ff8ef, __VMLINUX_SYMBOL_STR(nla_put_64bit) },
	{ 0xcffaf734, __VMLINUX_SYMBOL_STR(nf_conntrack_unregister_notifier) },
	{ 0xc030af9, __VMLINUX_SYMBOL_STR(nf_ct_expect_unregister_notifier) },
	{ 0x67d8d35, __VMLINUX_SYMBOL_STR(security_release_secctx) },
	{ 0xefdd70ce, __VMLINUX_SYMBOL_STR(security_secid_to_secctx) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x73ea6fe7, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0x9cd52614, __VMLINUX_SYMBOL_STR(nf_connlabels_replace) },
	{ 0xa1d55e90, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0x402b8281, __VMLINUX_SYMBOL_STR(__request_module) },
	{ 0xdd3916ac, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0xc2abd2fd, __VMLINUX_SYMBOL_STR(nf_conntrack_expect_lock) },
	{ 0xd039771, __VMLINUX_SYMBOL_STR(nf_ct_remove_expectations) },
	{ 0xe7f50803, __VMLINUX_SYMBOL_STR(nf_ct_expect_related_report) },
	{ 0xaa1f5d11, __VMLINUX_SYMBOL_STR(__nf_conntrack_helper_find) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xb6c8c4b, __VMLINUX_SYMBOL_STR(nf_ct_helper_expectfn_find_by_name) },
	{ 0xf28b0078, __VMLINUX_SYMBOL_STR(nf_ct_expect_alloc) },
	{ 0x347013de, __VMLINUX_SYMBOL_STR(nla_validate) },
	{ 0xc9f72b8f, __VMLINUX_SYMBOL_STR(nf_conntrack_l3proto_generic) },
	{ 0xe9d380b8, __VMLINUX_SYMBOL_STR(nf_ct_l3protos) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x2469810f, __VMLINUX_SYMBOL_STR(__rcu_read_unlock) },
	{ 0x59f8bf1e, __VMLINUX_SYMBOL_STR(__nf_ct_l4proto_find) },
	{ 0x8d522714, __VMLINUX_SYMBOL_STR(__rcu_read_lock) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x4f391d0e, __VMLINUX_SYMBOL_STR(nla_parse) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xd97c066d, __VMLINUX_SYMBOL_STR(nf_ct_expect_put) },
	{ 0xa0cd0508, __VMLINUX_SYMBOL_STR(nf_ct_tcp_seqadj_set) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nfnetlink,nf_conntrack";

