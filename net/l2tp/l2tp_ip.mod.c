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
	{ 0x7c522ad0, __VMLINUX_SYMBOL_STR(release_sock) },
	{ 0xd69dc186, __VMLINUX_SYMBOL_STR(l2tp_tunnel_find) },
	{ 0xb481b442, __VMLINUX_SYMBOL_STR(ip_getsockopt) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xccf945e0, __VMLINUX_SYMBOL_STR(inet_unhash) },
	{ 0xbc68cc0e, __VMLINUX_SYMBOL_STR(ip_setsockopt) },
	{ 0xe174fd04, __VMLINUX_SYMBOL_STR(sk_setup_caps) },
	{ 0x86253b33, __VMLINUX_SYMBOL_STR(dst_release) },
	{ 0xeeed5de0, __VMLINUX_SYMBOL_STR(l2tp_session_find) },
	{ 0xa7fbcf87, __VMLINUX_SYMBOL_STR(l2tp_recv_common) },
	{ 0x6cafaa20, __VMLINUX_SYMBOL_STR(copy_from_iter) },
	{ 0x44b1d426, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0xaf86a5a0, __VMLINUX_SYMBOL_STR(sock_queue_rcv_skb) },
	{ 0x17202f10, __VMLINUX_SYMBOL_STR(skb_recv_datagram) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xe60c41fc, __VMLINUX_SYMBOL_STR(inet_sendmsg) },
	{ 0x390fc179, __VMLINUX_SYMBOL_STR(inet_del_protocol) },
	{ 0x225014be, __VMLINUX_SYMBOL_STR(sk_common_release) },
	{ 0xa335c057, __VMLINUX_SYMBOL_STR(inet_dgram_connect) },
	{ 0xc4178b3e, __VMLINUX_SYMBOL_STR(sock_common_recvmsg) },
	{ 0xcd3deea0, __VMLINUX_SYMBOL_STR(sock_no_sendpage) },
	{ 0x9047332b, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0xf8c694e4, __VMLINUX_SYMBOL_STR(sock_no_mmap) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x7ff8a2b9, __VMLINUX_SYMBOL_STR(ip4_datagram_connect) },
	{ 0xcf159dde, __VMLINUX_SYMBOL_STR(sock_no_socketpair) },
	{ 0x25e91772, __VMLINUX_SYMBOL_STR(__sock_recv_wifi_status) },
	{ 0xe059b9ed, __VMLINUX_SYMBOL_STR(skb_copy_datagram_iter) },
	{ 0xc2a7502f, __VMLINUX_SYMBOL_STR(security_sk_classify_flow) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x3c3fce39, __VMLINUX_SYMBOL_STR(__local_bh_enable_ip) },
	{ 0x2b5c6ed6, __VMLINUX_SYMBOL_STR(inet_addr_type) },
	{ 0x365f26d2, __VMLINUX_SYMBOL_STR(lock_sock_nested) },
	{ 0x6be1e9c0, __VMLINUX_SYMBOL_STR(sock_no_listen) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xb23e692c, __VMLINUX_SYMBOL_STR(sock_no_accept) },
	{ 0xbd392c2a, __VMLINUX_SYMBOL_STR(sk_free) },
	{ 0x51f9e87b, __VMLINUX_SYMBOL_STR(inet_shutdown) },
	{ 0x52e2dcc8, __VMLINUX_SYMBOL_STR(inet_add_protocol) },
	{ 0x2469810f, __VMLINUX_SYMBOL_STR(__rcu_read_unlock) },
	{ 0x614785ed, __VMLINUX_SYMBOL_STR(__sock_recv_timestamp) },
	{ 0x267f413e, __VMLINUX_SYMBOL_STR(inet_ioctl) },
	{ 0x4059792f, __VMLINUX_SYMBOL_STR(print_hex_dump) },
	{ 0xb89fcc4b, __VMLINUX_SYMBOL_STR(inet_hash) },
	{ 0x6ed2af6f, __VMLINUX_SYMBOL_STR(ip_cmsg_recv_offset) },
	{ 0xb931c958, __VMLINUX_SYMBOL_STR(proto_register) },
	{ 0xcefc11c8, __VMLINUX_SYMBOL_STR(__sk_dst_check) },
	{ 0x85106c24, __VMLINUX_SYMBOL_STR(inet_release) },
	{ 0xbc10dd97, __VMLINUX_SYMBOL_STR(__put_user_4) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xfd738978, __VMLINUX_SYMBOL_STR(datagram_poll) },
	{ 0x4a211dfd, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x448c5843, __VMLINUX_SYMBOL_STR(proto_unregister) },
	{ 0xd9aa68c1, __VMLINUX_SYMBOL_STR(sk_receive_skb) },
	{ 0x2a18c74, __VMLINUX_SYMBOL_STR(nf_conntrack_destroy) },
	{ 0x6c3b0666, __VMLINUX_SYMBOL_STR(ip_route_output_flow) },
	{ 0xc54b8106, __VMLINUX_SYMBOL_STR(sock_common_setsockopt) },
	{ 0xeacf846a, __VMLINUX_SYMBOL_STR(__xfrm_policy_check) },
	{ 0x7cacf6e2, __VMLINUX_SYMBOL_STR(udp_disconnect) },
	{ 0x88f94ee4, __VMLINUX_SYMBOL_STR(inet_register_protosw) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x230cb08d, __VMLINUX_SYMBOL_STR(l2tp_tunnel_closeall) },
	{ 0x17e0f929, __VMLINUX_SYMBOL_STR(inet_bind) },
	{ 0x8e23da49, __VMLINUX_SYMBOL_STR(sock_common_getsockopt) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xaf9b0e10, __VMLINUX_SYMBOL_STR(sock_wmalloc) },
	{ 0x8d522714, __VMLINUX_SYMBOL_STR(__rcu_read_lock) },
	{ 0xf229424a, __VMLINUX_SYMBOL_STR(preempt_count_add) },
	{ 0xfe8e1ccd, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x20014154, __VMLINUX_SYMBOL_STR(ip_queue_xmit) },
	{ 0x1850c2ad, __VMLINUX_SYMBOL_STR(inet_unregister_protosw) },
	{ 0xa761cb95, __VMLINUX_SYMBOL_STR(skb_free_datagram) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=l2tp_core";


MODULE_INFO(srcversion, "8D9190E2018CE7DAC4F4076");
