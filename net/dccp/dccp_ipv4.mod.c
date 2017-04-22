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
	{ 0x4012635e, __VMLINUX_SYMBOL_STR(inet_csk_reqsk_queue_drop) },
	{ 0x59814a84, __VMLINUX_SYMBOL_STR(dccp_statistics) },
	{ 0x49045426, __VMLINUX_SYMBOL_STR(icmp_err_convert) },
	{ 0xad9d3d11, __VMLINUX_SYMBOL_STR(dccp_init_sock) },
	{ 0x5fc56a46, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0xe9a88bee, __VMLINUX_SYMBOL_STR(__ip_route_output_key_hash) },
	{ 0xcfb4e18f, __VMLINUX_SYMBOL_STR(dccp_set_state) },
	{ 0x19fe6687, __VMLINUX_SYMBOL_STR(ip_getsockopt) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x3a2dea0c, __VMLINUX_SYMBOL_STR(inet_unhash) },
	{ 0x80a74ac0, __VMLINUX_SYMBOL_STR(inet_twsk_put) },
	{ 0x425f948f, __VMLINUX_SYMBOL_STR(dccp_hashinfo) },
	{ 0x7a23ad5c, __VMLINUX_SYMBOL_STR(ip_setsockopt) },
	{ 0xfcd25622, __VMLINUX_SYMBOL_STR(dccp_sendmsg) },
	{ 0x81f86fdf, __VMLINUX_SYMBOL_STR(ip_build_and_send_pkt) },
	{ 0x48230a87, __VMLINUX_SYMBOL_STR(sk_setup_caps) },
	{ 0x83a81b54, __VMLINUX_SYMBOL_STR(dccp_ctl_make_reset) },
	{ 0x74980a94, __VMLINUX_SYMBOL_STR(dccp_destroy_sock) },
	{ 0xf186c3b6, __VMLINUX_SYMBOL_STR(dccp_make_response) },
	{ 0xb45d09ba, __VMLINUX_SYMBOL_STR(sock_release) },
	{ 0xf2f91462, __VMLINUX_SYMBOL_STR(dst_release) },
	{ 0x6d48b7e6, __VMLINUX_SYMBOL_STR(dccp_send_sync) },
	{ 0xe891d317, __VMLINUX_SYMBOL_STR(dccp_rcv_established) },
	{ 0xb0b4d158, __VMLINUX_SYMBOL_STR(security_skb_classify_flow) },
	{ 0x55605fd3, __VMLINUX_SYMBOL_STR(inet_csk_prepare_forced_close) },
	{ 0xa31a3d40, __VMLINUX_SYMBOL_STR(dccp_create_openreq_child) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xbf05b97d, __VMLINUX_SYMBOL_STR(dccp_check_req) },
	{ 0xa7a70f66, __VMLINUX_SYMBOL_STR(inet_sendmsg) },
	{ 0xf68d0285, __VMLINUX_SYMBOL_STR(dccp_recvmsg) },
	{ 0x402b5439, __VMLINUX_SYMBOL_STR(inet_del_protocol) },
	{ 0x5e0f3aa2, __VMLINUX_SYMBOL_STR(inet_sk_rebuild_header) },
	{ 0xc38259af, __VMLINUX_SYMBOL_STR(__this_cpu_preempt_check) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x841e9fd9, __VMLINUX_SYMBOL_STR(dccp_ioctl) },
	{ 0x4423cb21, __VMLINUX_SYMBOL_STR(dccp_setsockopt) },
	{ 0xa3c69cb8, __VMLINUX_SYMBOL_STR(sock_common_recvmsg) },
	{ 0xe557927a, __VMLINUX_SYMBOL_STR(sock_no_sendpage) },
	{ 0x7385aaf0, __VMLINUX_SYMBOL_STR(dccp_child_process) },
	{ 0xec82b576, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0x62177305, __VMLINUX_SYMBOL_STR(sock_no_mmap) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x5e916a2e, __VMLINUX_SYMBOL_STR(sock_no_socketpair) },
	{ 0xd29cf52e, __VMLINUX_SYMBOL_STR(skb_checksum) },
	{ 0x30821c64, __VMLINUX_SYMBOL_STR(unregister_pernet_subsys) },
	{ 0xcc751d59, __VMLINUX_SYMBOL_STR(dccp_parse_options) },
	{ 0xe8b0588, __VMLINUX_SYMBOL_STR(dccp_getsockopt) },
	{ 0x58efaf27, __VMLINUX_SYMBOL_STR(inet_csk_update_pmtu) },
	{ 0xc2a7502f, __VMLINUX_SYMBOL_STR(security_sk_classify_flow) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x3c3fce39, __VMLINUX_SYMBOL_STR(__local_bh_enable_ip) },
	{ 0xed1f4714, __VMLINUX_SYMBOL_STR(inet_csk_route_req) },
	{ 0xa8dd96a, __VMLINUX_SYMBOL_STR(inet_csk_route_child_sock) },
	{ 0xd26e0e90, __VMLINUX_SYMBOL_STR(kmem_cache_free) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xaf37e9ff, __VMLINUX_SYMBOL_STR(inet_hash_connect) },
	{ 0x749d6f39, __VMLINUX_SYMBOL_STR(dccp_reqsk_init) },
	{ 0x3da4ae88, __VMLINUX_SYMBOL_STR(dccp_close) },
	{ 0x50a576c7, __VMLINUX_SYMBOL_STR(sk_free) },
	{ 0x839b94ec, __VMLINUX_SYMBOL_STR(inet_shutdown) },
	{ 0x35ab15d8, __VMLINUX_SYMBOL_STR(inet_add_protocol) },
	{ 0x9a123b7, __VMLINUX_SYMBOL_STR(dccp_orphan_count) },
	{ 0xedc02060, __VMLINUX_SYMBOL_STR(dccp_sync_mss) },
	{ 0x9acb36f3, __VMLINUX_SYMBOL_STR(inet_accept) },
	{ 0x7db322d5, __VMLINUX_SYMBOL_STR(inet_csk_reqsk_queue_drop_and_put) },
	{ 0x5118c382, __VMLINUX_SYMBOL_STR(secure_dccp_sequence_number) },
	{ 0x25301cf7, __VMLINUX_SYMBOL_STR(inet_ioctl) },
	{ 0xf2394416, __VMLINUX_SYMBOL_STR(inet_csk_get_port) },
	{ 0xe68b3cda, __VMLINUX_SYMBOL_STR(dccp_death_row) },
	{ 0x1a5c298c, __VMLINUX_SYMBOL_STR(inet_ctl_sock_create) },
	{ 0x34c57a3b, __VMLINUX_SYMBOL_STR(dccp_poll) },
	{ 0x93d99d9, __VMLINUX_SYMBOL_STR(__sk_receive_skb) },
	{ 0x8ca2f439, __VMLINUX_SYMBOL_STR(inet_hash) },
	{ 0xec9b0597, __VMLINUX_SYMBOL_STR(proto_register) },
	{ 0xf36e8514, __VMLINUX_SYMBOL_STR(dccp_disconnect) },
	{ 0x7b52f4eb, __VMLINUX_SYMBOL_STR(__sk_dst_check) },
	{ 0xda72c091, __VMLINUX_SYMBOL_STR(inet_release) },
	{ 0x4e8931b9, __VMLINUX_SYMBOL_STR(dccp_done) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x8780e1ef, __VMLINUX_SYMBOL_STR(inet_reqsk_alloc) },
	{ 0x4a6761ad, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0xd0cc2cc5, __VMLINUX_SYMBOL_STR(proto_unregister) },
	{ 0xc1a1d4ba, __VMLINUX_SYMBOL_STR(inet_stream_connect) },
	{ 0x7702fc63, __VMLINUX_SYMBOL_STR(inet_getname) },
	{ 0xa0c795c1, __VMLINUX_SYMBOL_STR(inet_ehash_nolisten) },
	{ 0x93ee206, __VMLINUX_SYMBOL_STR(register_pernet_subsys) },
	{ 0xde7f101f, __VMLINUX_SYMBOL_STR(inet_csk_bind_conflict) },
	{ 0x4cdd391d, __VMLINUX_SYMBOL_STR(dccp_feat_list_purge) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0xe6df195, __VMLINUX_SYMBOL_STR(inet_csk_reqsk_queue_hash_add) },
	{ 0x2a18c74, __VMLINUX_SYMBOL_STR(nf_conntrack_destroy) },
	{ 0x58af3674, __VMLINUX_SYMBOL_STR(ip_route_output_flow) },
	{ 0xf6ebc03b, __VMLINUX_SYMBOL_STR(net_ratelimit) },
	{ 0x339d2d51, __VMLINUX_SYMBOL_STR(sock_common_setsockopt) },
	{ 0x8af9ae47, __VMLINUX_SYMBOL_STR(__xfrm_policy_check) },
	{ 0x6cfe5ed5, __VMLINUX_SYMBOL_STR(inet_register_protosw) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xe1761617, __VMLINUX_SYMBOL_STR(security_inet_conn_request) },
	{ 0x465adc17, __VMLINUX_SYMBOL_STR(inet_dccp_listen) },
	{ 0xc00e11e5, __VMLINUX_SYMBOL_STR(__inet_inherit_port) },
	{ 0xe699b3c8, __VMLINUX_SYMBOL_STR(inet_bind) },
	{ 0x5e30c166, __VMLINUX_SYMBOL_STR(sock_common_getsockopt) },
	{ 0x86be7924, __VMLINUX_SYMBOL_STR(dccp_packet_name) },
	{ 0x10d020e8, __VMLINUX_SYMBOL_STR(inet_csk_accept) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xddefc3da, __VMLINUX_SYMBOL_STR(__inet_lookup_listener) },
	{ 0xd78746c3, __VMLINUX_SYMBOL_STR(dccp_reqsk_send_ack) },
	{ 0xe22afabe, __VMLINUX_SYMBOL_STR(dccp_rcv_state_process) },
	{ 0x6b0e55ea, __VMLINUX_SYMBOL_STR(dccp_connect) },
	{ 0xa8bc5dde, __VMLINUX_SYMBOL_STR(dccp_shutdown) },
	{ 0xf229424a, __VMLINUX_SYMBOL_STR(preempt_count_add) },
	{ 0x338174ce, __VMLINUX_SYMBOL_STR(ip_queue_xmit) },
	{ 0x9dcd85c3, __VMLINUX_SYMBOL_STR(inet_unregister_protosw) },
	{ 0xd66cef15, __VMLINUX_SYMBOL_STR(inet_csk_addr2sockaddr) },
	{ 0x605e949b, __VMLINUX_SYMBOL_STR(__inet_lookup_established) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=dccp";

