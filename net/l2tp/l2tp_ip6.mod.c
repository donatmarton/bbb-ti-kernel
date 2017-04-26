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
	{ 0xccf945e0, __VMLINUX_SYMBOL_STR(inet_unhash) },
	{ 0xb89fcc4b, __VMLINUX_SYMBOL_STR(inet_hash) },
	{ 0xaaacc8e4, __VMLINUX_SYMBOL_STR(ipv6_getsockopt) },
	{ 0x738a4a34, __VMLINUX_SYMBOL_STR(ipv6_setsockopt) },
	{ 0x7e62f486, __VMLINUX_SYMBOL_STR(l2tp_ioctl) },
	{ 0xcd3deea0, __VMLINUX_SYMBOL_STR(sock_no_sendpage) },
	{ 0xf8c694e4, __VMLINUX_SYMBOL_STR(sock_no_mmap) },
	{ 0xc4178b3e, __VMLINUX_SYMBOL_STR(sock_common_recvmsg) },
	{ 0xe60c41fc, __VMLINUX_SYMBOL_STR(inet_sendmsg) },
	{ 0x8e23da49, __VMLINUX_SYMBOL_STR(sock_common_getsockopt) },
	{ 0xc54b8106, __VMLINUX_SYMBOL_STR(sock_common_setsockopt) },
	{ 0x51f9e87b, __VMLINUX_SYMBOL_STR(inet_shutdown) },
	{ 0x6be1e9c0, __VMLINUX_SYMBOL_STR(sock_no_listen) },
	{ 0x1dcb6871, __VMLINUX_SYMBOL_STR(inet6_ioctl) },
	{ 0xfd738978, __VMLINUX_SYMBOL_STR(datagram_poll) },
	{ 0xb23e692c, __VMLINUX_SYMBOL_STR(sock_no_accept) },
	{ 0xcf159dde, __VMLINUX_SYMBOL_STR(sock_no_socketpair) },
	{ 0xa335c057, __VMLINUX_SYMBOL_STR(inet_dgram_connect) },
	{ 0x98a2538, __VMLINUX_SYMBOL_STR(inet6_bind) },
	{ 0xf6ac9aec, __VMLINUX_SYMBOL_STR(inet6_release) },
	{ 0x2ab0a235, __VMLINUX_SYMBOL_STR(inet6_del_protocol) },
	{ 0x1ce3b1d0, __VMLINUX_SYMBOL_STR(inet6_unregister_protosw) },
	{ 0x448c5843, __VMLINUX_SYMBOL_STR(proto_unregister) },
	{ 0xb1151748, __VMLINUX_SYMBOL_STR(inet6_register_protosw) },
	{ 0xf3a2bad2, __VMLINUX_SYMBOL_STR(inet6_add_protocol) },
	{ 0xb931c958, __VMLINUX_SYMBOL_STR(proto_register) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x44b1d426, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0x4059792f, __VMLINUX_SYMBOL_STR(print_hex_dump) },
	{ 0x2a18c74, __VMLINUX_SYMBOL_STR(nf_conntrack_destroy) },
	{ 0xd9aa68c1, __VMLINUX_SYMBOL_STR(sk_receive_skb) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xeacf846a, __VMLINUX_SYMBOL_STR(__xfrm_policy_check) },
	{ 0xd69dc186, __VMLINUX_SYMBOL_STR(l2tp_tunnel_find) },
	{ 0x9047332b, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0xa7fbcf87, __VMLINUX_SYMBOL_STR(l2tp_recv_common) },
	{ 0xeeed5de0, __VMLINUX_SYMBOL_STR(l2tp_session_find) },
	{ 0x7fcd8600, __VMLINUX_SYMBOL_STR(ipv6_chk_addr) },
	{ 0x294401b2, __VMLINUX_SYMBOL_STR(dev_get_by_index_rcu) },
	{ 0xef26b035, __VMLINUX_SYMBOL_STR(ip6_datagram_connect) },
	{ 0x4a211dfd, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0xc00ce02, __VMLINUX_SYMBOL_STR(init_net) },
	{ 0xaf86a5a0, __VMLINUX_SYMBOL_STR(sock_queue_rcv_skb) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x225014be, __VMLINUX_SYMBOL_STR(sk_common_release) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x7cacf6e2, __VMLINUX_SYMBOL_STR(udp_disconnect) },
	{ 0xbd392c2a, __VMLINUX_SYMBOL_STR(sk_free) },
	{ 0x894353e7, __VMLINUX_SYMBOL_STR(inet6_destroy_sock) },
	{ 0x230cb08d, __VMLINUX_SYMBOL_STR(l2tp_tunnel_closeall) },
	{ 0x6c8f596, __VMLINUX_SYMBOL_STR(ip6_dst_hoplimit) },
	{ 0x726bcdab, __VMLINUX_SYMBOL_STR(ip6_push_pending_frames) },
	{ 0x19f462ab, __VMLINUX_SYMBOL_STR(kfree_call_rcu) },
	{ 0x73daa1ae, __VMLINUX_SYMBOL_STR(ip6_flush_pending_frames) },
	{ 0x2469810f, __VMLINUX_SYMBOL_STR(__rcu_read_unlock) },
	{ 0x8aa619e2, __VMLINUX_SYMBOL_STR(fl6_sock_lookup) },
	{ 0x86253b33, __VMLINUX_SYMBOL_STR(dst_release) },
	{ 0x7c522ad0, __VMLINUX_SYMBOL_STR(release_sock) },
	{ 0x240898ce, __VMLINUX_SYMBOL_STR(ip6_append_data) },
	{ 0xc9113a83, __VMLINUX_SYMBOL_STR(ip_generic_getfrag) },
	{ 0x365f26d2, __VMLINUX_SYMBOL_STR(lock_sock_nested) },
	{ 0x88d07c3e, __VMLINUX_SYMBOL_STR(ip6_dst_lookup_flow) },
	{ 0xc2a7502f, __VMLINUX_SYMBOL_STR(security_sk_classify_flow) },
	{ 0xffb74af4, __VMLINUX_SYMBOL_STR(fl6_update_dst) },
	{ 0x463d24ea, __VMLINUX_SYMBOL_STR(ipv6_fixup_options) },
	{ 0xb0f66941, __VMLINUX_SYMBOL_STR(fl6_merge_options) },
	{ 0xa0f07068, __VMLINUX_SYMBOL_STR(ip6_datagram_send_ctl) },
	{ 0x8d522714, __VMLINUX_SYMBOL_STR(__rcu_read_lock) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xca2e1f2b, __VMLINUX_SYMBOL_STR(ip6_datagram_recv_ctl) },
	{ 0x25e91772, __VMLINUX_SYMBOL_STR(__sock_recv_wifi_status) },
	{ 0x614785ed, __VMLINUX_SYMBOL_STR(__sock_recv_timestamp) },
	{ 0x5ccda107, __VMLINUX_SYMBOL_STR(ipv6_recv_error) },
	{ 0xa761cb95, __VMLINUX_SYMBOL_STR(skb_free_datagram) },
	{ 0xe059b9ed, __VMLINUX_SYMBOL_STR(skb_copy_datagram_iter) },
	{ 0x17202f10, __VMLINUX_SYMBOL_STR(skb_recv_datagram) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x3c3fce39, __VMLINUX_SYMBOL_STR(__local_bh_enable_ip) },
	{ 0xf229424a, __VMLINUX_SYMBOL_STR(preempt_count_add) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xd542439, __VMLINUX_SYMBOL_STR(__ipv6_addr_type) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=l2tp_ip,l2tp_core";


MODULE_INFO(srcversion, "705AA130140BF892ED5F209");
