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
	{ 0xdf7e38c4, __VMLINUX_SYMBOL_STR(l2tp_session_delete) },
	{ 0x568a1f51, __VMLINUX_SYMBOL_STR(seq_release_net) },
	{ 0x2fefcfbf, __VMLINUX_SYMBOL_STR(seq_read) },
	{ 0x963de423, __VMLINUX_SYMBOL_STR(seq_lseek) },
	{ 0xf8c694e4, __VMLINUX_SYMBOL_STR(sock_no_mmap) },
	{ 0x5177f913, __VMLINUX_SYMBOL_STR(sock_no_shutdown) },
	{ 0x6be1e9c0, __VMLINUX_SYMBOL_STR(sock_no_listen) },
	{ 0xc726126e, __VMLINUX_SYMBOL_STR(pppox_ioctl) },
	{ 0xfd738978, __VMLINUX_SYMBOL_STR(datagram_poll) },
	{ 0xb23e692c, __VMLINUX_SYMBOL_STR(sock_no_accept) },
	{ 0xcf159dde, __VMLINUX_SYMBOL_STR(sock_no_socketpair) },
	{ 0x2f6625be, __VMLINUX_SYMBOL_STR(sock_no_bind) },
	{ 0x337f2432, __VMLINUX_SYMBOL_STR(l2tp_nl_unregister_ops) },
	{ 0xe24b0875, __VMLINUX_SYMBOL_STR(unregister_pernet_device) },
	{ 0x448c5843, __VMLINUX_SYMBOL_STR(proto_unregister) },
	{ 0xe0ff7a18, __VMLINUX_SYMBOL_STR(unregister_pppox_proto) },
	{ 0x55649633, __VMLINUX_SYMBOL_STR(l2tp_nl_register_ops) },
	{ 0x7fdad0b0, __VMLINUX_SYMBOL_STR(register_pppox_proto) },
	{ 0xb931c958, __VMLINUX_SYMBOL_STR(proto_register) },
	{ 0xce21811a, __VMLINUX_SYMBOL_STR(register_pernet_device) },
	{ 0x8ac80891, __VMLINUX_SYMBOL_STR(l2tp_session_find_nth) },
	{ 0x95db5ba0, __VMLINUX_SYMBOL_STR(seq_puts) },
	{ 0x9047332b, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0x43102a32, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x51f9e87b, __VMLINUX_SYMBOL_STR(inet_shutdown) },
	{ 0x6f611beb, __VMLINUX_SYMBOL_STR(l2tp_session_free) },
	{ 0xc9896c90, __VMLINUX_SYMBOL_STR(proc_create_data) },
	{ 0x59263c8b, __VMLINUX_SYMBOL_STR(l2tp_tunnel_find_nth) },
	{ 0xc1fbfc0f, __VMLINUX_SYMBOL_STR(seq_open_net) },
	{ 0x687f0fc2, __VMLINUX_SYMBOL_STR(remove_proc_entry) },
	{ 0xfff7d0a3, __VMLINUX_SYMBOL_STR(skb_queue_purge) },
	{ 0x2c15dfa8, __VMLINUX_SYMBOL_STR(l2tp_session_queue_purge) },
	{ 0x84bd8dc4, __VMLINUX_SYMBOL_STR(__l2tp_session_unhash) },
	{ 0xe27c85f9, __VMLINUX_SYMBOL_STR(pppox_unbind_sock) },
	{ 0x1a46f3f3, __VMLINUX_SYMBOL_STR(l2tp_tunnel_create) },
	{ 0x29a860b, __VMLINUX_SYMBOL_STR(ppp_register_net_channel) },
	{ 0x7c522ad0, __VMLINUX_SYMBOL_STR(release_sock) },
	{ 0x2469810f, __VMLINUX_SYMBOL_STR(__rcu_read_unlock) },
	{ 0x8d522714, __VMLINUX_SYMBOL_STR(__rcu_read_lock) },
	{ 0x365f26d2, __VMLINUX_SYMBOL_STR(lock_sock_nested) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x2a18c74, __VMLINUX_SYMBOL_STR(nf_conntrack_destroy) },
	{ 0x17f5127d, __VMLINUX_SYMBOL_STR(__secpath_destroy) },
	{ 0x86253b33, __VMLINUX_SYMBOL_STR(dst_release) },
	{ 0xaf86a5a0, __VMLINUX_SYMBOL_STR(sock_queue_rcv_skb) },
	{ 0x1536fdf2, __VMLINUX_SYMBOL_STR(ppp_input) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xe6657df, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0x56c099f8, __VMLINUX_SYMBOL_STR(ppp_dev_name) },
	{ 0x4c6348bb, __VMLINUX_SYMBOL_STR(pskb_expand_head) },
	{ 0x7f02188f, __VMLINUX_SYMBOL_STR(__msecs_to_jiffies) },
	{ 0x4f222197, __VMLINUX_SYMBOL_STR(l2tp_session_set_header_len) },
	{ 0x37befc70, __VMLINUX_SYMBOL_STR(jiffies_to_msecs) },
	{ 0x3c3fce39, __VMLINUX_SYMBOL_STR(__local_bh_enable_ip) },
	{ 0xb6fd6e94, __VMLINUX_SYMBOL_STR(l2tp_xmit_skb) },
	{ 0xf229424a, __VMLINUX_SYMBOL_STR(preempt_count_add) },
	{ 0x6cafaa20, __VMLINUX_SYMBOL_STR(copy_from_iter) },
	{ 0xfe8e1ccd, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0xaf9b0e10, __VMLINUX_SYMBOL_STR(sock_wmalloc) },
	{ 0xe059b9ed, __VMLINUX_SYMBOL_STR(skb_copy_datagram_iter) },
	{ 0x17202f10, __VMLINUX_SYMBOL_STR(skb_recv_datagram) },
	{ 0x4a211dfd, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x39f05f3f, __VMLINUX_SYMBOL_STR(l2tp_udp_encap_recv) },
	{ 0x928f39a5, __VMLINUX_SYMBOL_STR(sock_init_data) },
	{ 0xb044ec58, __VMLINUX_SYMBOL_STR(sk_alloc) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xf4fa543b, __VMLINUX_SYMBOL_STR(arm_copy_to_user) },
	{ 0xbc10dd97, __VMLINUX_SYMBOL_STR(__put_user_4) },
	{ 0x44b1d426, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0x353e3fa5, __VMLINUX_SYMBOL_STR(__get_user_4) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x28cc25db, __VMLINUX_SYMBOL_STR(arm_copy_from_user) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xbd392c2a, __VMLINUX_SYMBOL_STR(sk_free) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x7563c5f2, __VMLINUX_SYMBOL_STR(l2tp_session_create) },
	{ 0xeeed5de0, __VMLINUX_SYMBOL_STR(l2tp_session_find) },
	{ 0xd69dc186, __VMLINUX_SYMBOL_STR(l2tp_tunnel_find) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=l2tp_core,pppox,l2tp_netlink,ppp_generic";


MODULE_INFO(srcversion, "74ACE6A67B1D323D097EDC3");
