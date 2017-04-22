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
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0xf6789fdc, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x45fdb10c, __VMLINUX_SYMBOL_STR(lwtunnel_encap_del_ops) },
	{ 0xeab94ccc, __VMLINUX_SYMBOL_STR(rhashtable_walk_exit) },
	{ 0x5537670c, __VMLINUX_SYMBOL_STR(register_pernet_device) },
	{ 0x5fc56a46, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0x6a49a240, __VMLINUX_SYMBOL_STR(lwtunnel_encap_add_ops) },
	{ 0x7aa1756e, __VMLINUX_SYMBOL_STR(kvfree) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xaea45550, __VMLINUX_SYMBOL_STR(genl_unregister_family) },
	{ 0x19f462ab, __VMLINUX_SYMBOL_STR(kfree_call_rcu) },
	{ 0xfba0e1e6, __VMLINUX_SYMBOL_STR(rhashtable_walk_next) },
	{ 0xa1d55e90, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xcc747815, __VMLINUX_SYMBOL_STR(__genl_register_family) },
	{ 0xabe000bd, __VMLINUX_SYMBOL_STR(rhashtable_insert_slow) },
	{ 0x542eef40, __VMLINUX_SYMBOL_STR(lwtunnel_state_alloc) },
	{ 0x71f7577d, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0xec82b576, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0xd82f0b9a, __VMLINUX_SYMBOL_STR(rhashtable_walk_start) },
	{ 0xf1db1704, __VMLINUX_SYMBOL_STR(nla_memcpy) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xfaf50efc, __VMLINUX_SYMBOL_STR(rhashtable_free_and_destroy) },
	{ 0x2cc44b15, __VMLINUX_SYMBOL_STR(__cpu_possible_mask) },
	{ 0x215ba2bb, __VMLINUX_SYMBOL_STR(rhashtable_walk_stop) },
	{ 0x6c8b996e, __VMLINUX_SYMBOL_STR(unregister_pernet_device) },
	{ 0x6189c34, __VMLINUX_SYMBOL_STR(nf_unregister_net_hooks) },
	{ 0x73ea6fe7, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xeaa0c4ba, __VMLINUX_SYMBOL_STR(netlink_unicast) },
	{ 0x2469810f, __VMLINUX_SYMBOL_STR(__rcu_read_unlock) },
	{ 0x2005e93f, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0xe6cb88db, __VMLINUX_SYMBOL_STR(nf_register_net_hooks) },
	{ 0xdd3916ac, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x4f391d0e, __VMLINUX_SYMBOL_STR(nla_parse) },
	{ 0x4a6761ad, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x147fb690, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x1b8c2a80, __VMLINUX_SYMBOL_STR(rhashtable_walk_enter) },
	{ 0x493f2d8, __VMLINUX_SYMBOL_STR(rhashtable_init) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x59a64ca6, __VMLINUX_SYMBOL_STR(genlmsg_put) },
	{ 0x84b9910e, __VMLINUX_SYMBOL_STR(inet_proto_csum_replace_by_diff) },
	{ 0x74c134b9, __VMLINUX_SYMBOL_STR(__sw_hweight32) },
	{ 0x3e8ff8ef, __VMLINUX_SYMBOL_STR(nla_put_64bit) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xe113bbbc, __VMLINUX_SYMBOL_STR(csum_partial) },
	{ 0x8d522714, __VMLINUX_SYMBOL_STR(__rcu_read_lock) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

