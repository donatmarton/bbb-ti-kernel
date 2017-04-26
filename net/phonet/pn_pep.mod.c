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
	{ 0x2cfc6659, __VMLINUX_SYMBOL_STR(skb_queue_head) },
	{ 0x7c522ad0, __VMLINUX_SYMBOL_STR(release_sock) },
	{ 0x928f39a5, __VMLINUX_SYMBOL_STR(sock_init_data) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xc8b57c27, __VMLINUX_SYMBOL_STR(autoremove_wake_function) },
	{ 0x4fb557bc, __VMLINUX_SYMBOL_STR(pn_sock_unhash) },
	{ 0x18665403, __VMLINUX_SYMBOL_STR(sk_stream_wait_connect) },
	{ 0x6cafaa20, __VMLINUX_SYMBOL_STR(copy_from_iter) },
	{ 0x8ca73395, __VMLINUX_SYMBOL_STR(netif_carrier_off) },
	{ 0x44b1d426, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0xaf86a5a0, __VMLINUX_SYMBOL_STR(sock_queue_rcv_skb) },
	{ 0x353e3fa5, __VMLINUX_SYMBOL_STR(__get_user_4) },
	{ 0x17202f10, __VMLINUX_SYMBOL_STR(skb_recv_datagram) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x2c3cd85d, __VMLINUX_SYMBOL_STR(skb_set_owner_w) },
	{ 0x12b723a5, __VMLINUX_SYMBOL_STR(pn_sock_hash) },
	{ 0xd8860a29, __VMLINUX_SYMBOL_STR(phonet_proto_register) },
	{ 0x406d9bd, __VMLINUX_SYMBOL_STR(sock_rfree) },
	{ 0x225014be, __VMLINUX_SYMBOL_STR(sk_common_release) },
	{ 0xc84fc707, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0x1030b539, __VMLINUX_SYMBOL_STR(netif_rx) },
	{ 0x4ebd0edd, __VMLINUX_SYMBOL_STR(pn_sock_get_port) },
	{ 0x9047332b, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xfff7d0a3, __VMLINUX_SYMBOL_STR(skb_queue_purge) },
	{ 0x55d2f2cd, __VMLINUX_SYMBOL_STR(netif_tx_wake_queue) },
	{ 0xb044ec58, __VMLINUX_SYMBOL_STR(sk_alloc) },
	{ 0xe059b9ed, __VMLINUX_SYMBOL_STR(skb_copy_datagram_iter) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x365f26d2, __VMLINUX_SYMBOL_STR(lock_sock_nested) },
	{ 0xbe43413c, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0x63fda361, __VMLINUX_SYMBOL_STR(register_netdev) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x8286a48, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0xbd392c2a, __VMLINUX_SYMBOL_STR(sk_free) },
	{ 0x33c18c1e, __VMLINUX_SYMBOL_STR(skb_queue_tail) },
	{ 0xc6cbbc89, __VMLINUX_SYMBOL_STR(capable) },
	{ 0xbc10dd97, __VMLINUX_SYMBOL_STR(__put_user_4) },
	{ 0xc2102972, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0x4a211dfd, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x3835e6a1, __VMLINUX_SYMBOL_STR(alloc_netdev_mqs) },
	{ 0x11aebc95, __VMLINUX_SYMBOL_STR(sock_alloc_send_skb) },
	{ 0xd4b04f58, __VMLINUX_SYMBOL_STR(phonet_proto_unregister) },
	{ 0xd9aa68c1, __VMLINUX_SYMBOL_STR(sk_receive_skb) },
	{ 0xf6ebc03b, __VMLINUX_SYMBOL_STR(net_ratelimit) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x75a17bed, __VMLINUX_SYMBOL_STR(prepare_to_wait) },
	{ 0x40d72f08, __VMLINUX_SYMBOL_STR(pn_skb_send) },
	{ 0x8893fa5d, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0xa045ff0b, __VMLINUX_SYMBOL_STR(skb_dequeue) },
	{ 0x95eef112, __VMLINUX_SYMBOL_STR(unregister_netdev) },
	{ 0x6d85a192, __VMLINUX_SYMBOL_STR(phonet_stream_ops) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x1d8f4c65, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0xfe8e1ccd, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x372da3af, __VMLINUX_SYMBOL_STR(skb_copy_bits) },
	{ 0xa761cb95, __VMLINUX_SYMBOL_STR(skb_free_datagram) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=phonet";

