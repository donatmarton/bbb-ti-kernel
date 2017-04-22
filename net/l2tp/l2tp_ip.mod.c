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
	{ 0xaca68f10, __VMLINUX_SYMBOL_STR(release_sock) },
	{ 0xea00241a, __VMLINUX_SYMBOL_STR(l2tp_tunnel_find) },
	{ 0x19fe6687, __VMLINUX_SYMBOL_STR(ip_getsockopt) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x3a2dea0c, __VMLINUX_SYMBOL_STR(inet_unhash) },
	{ 0x7a23ad5c, __VMLINUX_SYMBOL_STR(ip_setsockopt) },
	{ 0x48230a87, __VMLINUX_SYMBOL_STR(sk_setup_caps) },
	{ 0xf2f91462, __VMLINUX_SYMBOL_STR(dst_release) },
	{ 0xa1d55e90, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0x42f62bc4, __VMLINUX_SYMBOL_STR(l2tp_session_find) },
	{ 0x8b753502, __VMLINUX_SYMBOL_STR(l2tp_recv_common) },
	{ 0xdca611e8, __VMLINUX_SYMBOL_STR(copy_from_iter) },
	{ 0x69c03fc5, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0x5cc3142c, __VMLINUX_SYMBOL_STR(sock_queue_rcv_skb) },
	{ 0xd7c03a1b, __VMLINUX_SYMBOL_STR(skb_recv_datagram) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xa7a70f66, __VMLINUX_SYMBOL_STR(inet_sendmsg) },
	{ 0x402b5439, __VMLINUX_SYMBOL_STR(inet_del_protocol) },
	{ 0x926160cc, __VMLINUX_SYMBOL_STR(sk_common_release) },
	{ 0x8c54e6ad, __VMLINUX_SYMBOL_STR(inet_dgram_connect) },
	{ 0xa3c69cb8, __VMLINUX_SYMBOL_STR(sock_common_recvmsg) },
	{ 0xe557927a, __VMLINUX_SYMBOL_STR(sock_no_sendpage) },
	{ 0xec82b576, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0x62177305, __VMLINUX_SYMBOL_STR(sock_no_mmap) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x5e916a2e, __VMLINUX_SYMBOL_STR(sock_no_socketpair) },
	{ 0x7db21660, __VMLINUX_SYMBOL_STR(__sock_recv_wifi_status) },
	{ 0x217bdf80, __VMLINUX_SYMBOL_STR(skb_copy_datagram_iter) },
	{ 0xc2a7502f, __VMLINUX_SYMBOL_STR(security_sk_classify_flow) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x3c3fce39, __VMLINUX_SYMBOL_STR(__local_bh_enable_ip) },
	{ 0xbacfd292, __VMLINUX_SYMBOL_STR(inet_addr_type) },
	{ 0x2bfa7f13, __VMLINUX_SYMBOL_STR(lock_sock_nested) },
	{ 0x43efa892, __VMLINUX_SYMBOL_STR(sock_no_listen) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xcaea7a8e, __VMLINUX_SYMBOL_STR(sock_no_accept) },
	{ 0x50a576c7, __VMLINUX_SYMBOL_STR(sk_free) },
	{ 0x839b94ec, __VMLINUX_SYMBOL_STR(inet_shutdown) },
	{ 0x35ab15d8, __VMLINUX_SYMBOL_STR(inet_add_protocol) },
	{ 0x2469810f, __VMLINUX_SYMBOL_STR(__rcu_read_unlock) },
	{ 0x31739d07, __VMLINUX_SYMBOL_STR(__sock_recv_timestamp) },
	{ 0x25301cf7, __VMLINUX_SYMBOL_STR(inet_ioctl) },
	{ 0x4059792f, __VMLINUX_SYMBOL_STR(print_hex_dump) },
	{ 0x93d99d9, __VMLINUX_SYMBOL_STR(__sk_receive_skb) },
	{ 0x8ca2f439, __VMLINUX_SYMBOL_STR(inet_hash) },
	{ 0x8a13ecbc, __VMLINUX_SYMBOL_STR(ip_cmsg_recv_offset) },
	{ 0xec9b0597, __VMLINUX_SYMBOL_STR(proto_register) },
	{ 0x7b52f4eb, __VMLINUX_SYMBOL_STR(__sk_dst_check) },
	{ 0xda72c091, __VMLINUX_SYMBOL_STR(inet_release) },
	{ 0xbc10dd97, __VMLINUX_SYMBOL_STR(__put_user_4) },
	{ 0xdd3916ac, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xffbf4853, __VMLINUX_SYMBOL_STR(datagram_poll) },
	{ 0x4a6761ad, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0xd0cc2cc5, __VMLINUX_SYMBOL_STR(proto_unregister) },
	{ 0x2a18c74, __VMLINUX_SYMBOL_STR(nf_conntrack_destroy) },
	{ 0x58af3674, __VMLINUX_SYMBOL_STR(ip_route_output_flow) },
	{ 0x339d2d51, __VMLINUX_SYMBOL_STR(sock_common_setsockopt) },
	{ 0xc0056be5, __VMLINUX_SYMBOL_STR(_raw_write_unlock_bh) },
	{ 0x8af9ae47, __VMLINUX_SYMBOL_STR(__xfrm_policy_check) },
	{ 0x4c5fc58c, __VMLINUX_SYMBOL_STR(_raw_read_lock_bh) },
	{ 0x4c233a44, __VMLINUX_SYMBOL_STR(_raw_read_unlock_bh) },
	{ 0x6cfe5ed5, __VMLINUX_SYMBOL_STR(inet_register_protosw) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x4aeb8e96, __VMLINUX_SYMBOL_STR(l2tp_tunnel_closeall) },
	{ 0x2e332b23, __VMLINUX_SYMBOL_STR(__udp_disconnect) },
	{ 0xe699b3c8, __VMLINUX_SYMBOL_STR(inet_bind) },
	{ 0x5e30c166, __VMLINUX_SYMBOL_STR(sock_common_getsockopt) },
	{ 0x6ec9ccdb, __VMLINUX_SYMBOL_STR(_raw_write_lock_bh) },
	{ 0xb70b974, __VMLINUX_SYMBOL_STR(__ip4_datagram_connect) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x15ea66b5, __VMLINUX_SYMBOL_STR(sock_wmalloc) },
	{ 0x8d522714, __VMLINUX_SYMBOL_STR(__rcu_read_lock) },
	{ 0xf229424a, __VMLINUX_SYMBOL_STR(preempt_count_add) },
	{ 0x9cfd625d, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x338174ce, __VMLINUX_SYMBOL_STR(ip_queue_xmit) },
	{ 0x9dcd85c3, __VMLINUX_SYMBOL_STR(inet_unregister_protosw) },
	{ 0xcd2487df, __VMLINUX_SYMBOL_STR(skb_free_datagram) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=l2tp_core";


MODULE_INFO(srcversion, "DAFA491F4E6D30E4FA36AE3");
