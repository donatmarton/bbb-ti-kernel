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
	{ 0x3a2dea0c, __VMLINUX_SYMBOL_STR(inet_unhash) },
	{ 0x658208b7, __VMLINUX_SYMBOL_STR(inet6_hash) },
	{ 0x5ca38f33, __VMLINUX_SYMBOL_STR(ipv6_getsockopt) },
	{ 0x988db20b, __VMLINUX_SYMBOL_STR(ipv6_setsockopt) },
	{ 0x31857877, __VMLINUX_SYMBOL_STR(l2tp_ioctl) },
	{ 0xe557927a, __VMLINUX_SYMBOL_STR(sock_no_sendpage) },
	{ 0x62177305, __VMLINUX_SYMBOL_STR(sock_no_mmap) },
	{ 0xa3c69cb8, __VMLINUX_SYMBOL_STR(sock_common_recvmsg) },
	{ 0xa7a70f66, __VMLINUX_SYMBOL_STR(inet_sendmsg) },
	{ 0x5e30c166, __VMLINUX_SYMBOL_STR(sock_common_getsockopt) },
	{ 0x339d2d51, __VMLINUX_SYMBOL_STR(sock_common_setsockopt) },
	{ 0x839b94ec, __VMLINUX_SYMBOL_STR(inet_shutdown) },
	{ 0x43efa892, __VMLINUX_SYMBOL_STR(sock_no_listen) },
	{ 0xe2438593, __VMLINUX_SYMBOL_STR(inet6_ioctl) },
	{ 0xffbf4853, __VMLINUX_SYMBOL_STR(datagram_poll) },
	{ 0xcaea7a8e, __VMLINUX_SYMBOL_STR(sock_no_accept) },
	{ 0x5e916a2e, __VMLINUX_SYMBOL_STR(sock_no_socketpair) },
	{ 0x8c54e6ad, __VMLINUX_SYMBOL_STR(inet_dgram_connect) },
	{ 0x8ff18c73, __VMLINUX_SYMBOL_STR(inet6_bind) },
	{ 0x7846e39d, __VMLINUX_SYMBOL_STR(inet6_release) },
	{ 0x4fda0b95, __VMLINUX_SYMBOL_STR(inet6_del_protocol) },
	{ 0xb4ee8a56, __VMLINUX_SYMBOL_STR(inet6_unregister_protosw) },
	{ 0xd0cc2cc5, __VMLINUX_SYMBOL_STR(proto_unregister) },
	{ 0x78bfe8ff, __VMLINUX_SYMBOL_STR(inet6_register_protosw) },
	{ 0xf965b4c1, __VMLINUX_SYMBOL_STR(inet6_add_protocol) },
	{ 0xec9b0597, __VMLINUX_SYMBOL_STR(proto_register) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x3c3fce39, __VMLINUX_SYMBOL_STR(__local_bh_enable_ip) },
	{ 0xf229424a, __VMLINUX_SYMBOL_STR(preempt_count_add) },
	{ 0x5cc3142c, __VMLINUX_SYMBOL_STR(sock_queue_rcv_skb) },
	{ 0x926160cc, __VMLINUX_SYMBOL_STR(sk_common_release) },
	{ 0x5de3871d, __VMLINUX_SYMBOL_STR(__ip6_datagram_connect) },
	{ 0x2e332b23, __VMLINUX_SYMBOL_STR(__udp_disconnect) },
	{ 0xaaa016d0, __VMLINUX_SYMBOL_STR(inet6_destroy_sock) },
	{ 0x4aeb8e96, __VMLINUX_SYMBOL_STR(l2tp_tunnel_closeall) },
	{ 0x2abe8a25, __VMLINUX_SYMBOL_STR(ip6_dst_hoplimit) },
	{ 0x3b52f878, __VMLINUX_SYMBOL_STR(ip6_push_pending_frames) },
	{ 0xb0a2f62b, __VMLINUX_SYMBOL_STR(ip6_flush_pending_frames) },
	{ 0x19f462ab, __VMLINUX_SYMBOL_STR(kfree_call_rcu) },
	{ 0xf2f91462, __VMLINUX_SYMBOL_STR(dst_release) },
	{ 0x78be5116, __VMLINUX_SYMBOL_STR(ip6_append_data) },
	{ 0xdbc8ce7a, __VMLINUX_SYMBOL_STR(ip_generic_getfrag) },
	{ 0x7fdb751d, __VMLINUX_SYMBOL_STR(ip6_dst_lookup_flow) },
	{ 0xc2a7502f, __VMLINUX_SYMBOL_STR(security_sk_classify_flow) },
	{ 0xffb74af4, __VMLINUX_SYMBOL_STR(fl6_update_dst) },
	{ 0x463d24ea, __VMLINUX_SYMBOL_STR(ipv6_fixup_options) },
	{ 0xd93ffa45, __VMLINUX_SYMBOL_STR(fl6_merge_options) },
	{ 0x94413d5a, __VMLINUX_SYMBOL_STR(ip6_datagram_send_ctl) },
	{ 0x423336ce, __VMLINUX_SYMBOL_STR(fl6_sock_lookup) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x5c096910, __VMLINUX_SYMBOL_STR(ip6_datagram_recv_ctl) },
	{ 0x7db21660, __VMLINUX_SYMBOL_STR(__sock_recv_wifi_status) },
	{ 0x31739d07, __VMLINUX_SYMBOL_STR(__sock_recv_timestamp) },
	{ 0x71f4a26a, __VMLINUX_SYMBOL_STR(ipv6_recv_error) },
	{ 0xcd2487df, __VMLINUX_SYMBOL_STR(skb_free_datagram) },
	{ 0x217bdf80, __VMLINUX_SYMBOL_STR(skb_copy_datagram_iter) },
	{ 0xd7c03a1b, __VMLINUX_SYMBOL_STR(skb_recv_datagram) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x2469810f, __VMLINUX_SYMBOL_STR(__rcu_read_unlock) },
	{ 0x5912d783, __VMLINUX_SYMBOL_STR(ipv6_chk_addr) },
	{ 0xdb42b83e, __VMLINUX_SYMBOL_STR(dev_get_by_index_rcu) },
	{ 0x8d522714, __VMLINUX_SYMBOL_STR(__rcu_read_lock) },
	{ 0xaca68f10, __VMLINUX_SYMBOL_STR(release_sock) },
	{ 0x2bfa7f13, __VMLINUX_SYMBOL_STR(lock_sock_nested) },
	{ 0x4c233a44, __VMLINUX_SYMBOL_STR(_raw_read_unlock_bh) },
	{ 0x4c5fc58c, __VMLINUX_SYMBOL_STR(_raw_read_lock_bh) },
	{ 0x2a18c74, __VMLINUX_SYMBOL_STR(nf_conntrack_destroy) },
	{ 0x93d99d9, __VMLINUX_SYMBOL_STR(__sk_receive_skb) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x69c03fc5, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0x4059792f, __VMLINUX_SYMBOL_STR(print_hex_dump) },
	{ 0x50a576c7, __VMLINUX_SYMBOL_STR(sk_free) },
	{ 0x8af9ae47, __VMLINUX_SYMBOL_STR(__xfrm_policy_check) },
	{ 0xea00241a, __VMLINUX_SYMBOL_STR(l2tp_tunnel_find) },
	{ 0xec82b576, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0x8b753502, __VMLINUX_SYMBOL_STR(l2tp_recv_common) },
	{ 0x42f62bc4, __VMLINUX_SYMBOL_STR(l2tp_session_find) },
	{ 0x4a6761ad, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0xd542439, __VMLINUX_SYMBOL_STR(__ipv6_addr_type) },
	{ 0xc0056be5, __VMLINUX_SYMBOL_STR(_raw_write_unlock_bh) },
	{ 0x6ec9ccdb, __VMLINUX_SYMBOL_STR(_raw_write_lock_bh) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=l2tp_ip,l2tp_core";


MODULE_INFO(srcversion, "A7C1252B6A52CA204A97C3E");
