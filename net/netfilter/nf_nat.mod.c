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
	{ 0x609f1c7e, __VMLINUX_SYMBOL_STR(synchronize_net) },
	{ 0x7b8c3a36, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x6c09c2a4, __VMLINUX_SYMBOL_STR(del_timer) },
	{ 0x99bab161, __VMLINUX_SYMBOL_STR(nf_ct_zone_dflt) },
	{ 0x289c3714, __VMLINUX_SYMBOL_STR(nf_ct_alloc_hashtable) },
	{ 0xc7a4fbed, __VMLINUX_SYMBOL_STR(rtnl_lock) },
	{ 0x78f9b710, __VMLINUX_SYMBOL_STR(nf_ct_l3proto_try_module_get) },
	{ 0x37386cac, __VMLINUX_SYMBOL_STR(nf_conntrack_hash_rnd) },
	{ 0x86253b33, __VMLINUX_SYMBOL_STR(dst_release) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0x2124474, __VMLINUX_SYMBOL_STR(ip_send_check) },
	{ 0x44b1d426, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x128c16ca, __VMLINUX_SYMBOL_STR(inet_proto_csum_replace4) },
	{ 0x62b72b0d, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xab3d1f95, __VMLINUX_SYMBOL_STR(nf_ct_untracked_status_or) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x4058ef5b, __VMLINUX_SYMBOL_STR(__nf_ct_ext_add_length) },
	{ 0x6d2fc5a6, __VMLINUX_SYMBOL_STR(net_namespace_list) },
	{ 0x95f58b2d, __VMLINUX_SYMBOL_STR(unregister_pernet_subsys) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x3c3fce39, __VMLINUX_SYMBOL_STR(__local_bh_enable_ip) },
	{ 0xad1bb027, __VMLINUX_SYMBOL_STR(nf_ct_free_hashtable) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xe16b893b, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xc7cf13e9, __VMLINUX_SYMBOL_STR(nf_conntrack_alter_reply) },
	{ 0xda000f82, __VMLINUX_SYMBOL_STR(nf_ct_iterate_cleanup) },
	{ 0x2469810f, __VMLINUX_SYMBOL_STR(__rcu_read_unlock) },
	{ 0x1bb31047, __VMLINUX_SYMBOL_STR(add_timer) },
	{ 0xa735db59, __VMLINUX_SYMBOL_STR(prandom_u32) },
	{ 0x6091797f, __VMLINUX_SYMBOL_STR(synchronize_rcu) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x4f391d0e, __VMLINUX_SYMBOL_STR(nla_parse) },
	{ 0x6bdb608d, __VMLINUX_SYMBOL_STR(nf_conntrack_tuple_taken) },
	{ 0xb99f0242, __VMLINUX_SYMBOL_STR(register_pernet_subsys) },
	{ 0x4c6348bb, __VMLINUX_SYMBOL_STR(pskb_expand_head) },
	{ 0xcaa1a2be, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xb602c57e, __VMLINUX_SYMBOL_STR(nf_ct_l3proto_module_put) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xafc8ee01, __VMLINUX_SYMBOL_STR(nf_ct_extend_unregister) },
	{ 0x6a5d8cd0, __VMLINUX_SYMBOL_STR(nf_ct_helper_expectfn_register) },
	{ 0x3a27f0a9, __VMLINUX_SYMBOL_STR(skb_make_writable) },
	{ 0xee906c24, __VMLINUX_SYMBOL_STR(nf_ct_extend_register) },
	{ 0xf0d1142b, __VMLINUX_SYMBOL_STR(__xfrm_decode_session) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x3513f572, __VMLINUX_SYMBOL_STR(nfnetlink_parse_nat_setup_hook) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x365e9475, __VMLINUX_SYMBOL_STR(nf_ct_helper_expectfn_unregister) },
	{ 0x99bb8806, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0x8d522714, __VMLINUX_SYMBOL_STR(__rcu_read_lock) },
	{ 0xf229424a, __VMLINUX_SYMBOL_STR(preempt_count_add) },
	{ 0xfe8e1ccd, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x7edfd7dd, __VMLINUX_SYMBOL_STR(nf_ct_seqadj_set) },
	{ 0x7f843085, __VMLINUX_SYMBOL_STR(xfrm_lookup) },
	{ 0xa0c1ecf2, __VMLINUX_SYMBOL_STR(nf_nat_decode_session_hook) },
	{ 0x6e720ff2, __VMLINUX_SYMBOL_STR(rtnl_unlock) },
	{ 0x90ff6c9f, __VMLINUX_SYMBOL_STR(nf_ct_invert_tuplepr) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nf_conntrack";

