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
	{ 0x928f39a5, __VMLINUX_SYMBOL_STR(sock_init_data) },
	{ 0x26c06d6c, __VMLINUX_SYMBOL_STR(up_read) },
	{ 0x4805e22, __VMLINUX_SYMBOL_STR(kernel_sendmsg) },
	{ 0xa88ba6f2, __VMLINUX_SYMBOL_STR(sockfd_lookup) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xc5dc32f7, __VMLINUX_SYMBOL_STR(sock_no_setsockopt) },
	{ 0xc8297d5b, __VMLINUX_SYMBOL_STR(sock_no_getsockopt) },
	{ 0xa8cde9a7, __VMLINUX_SYMBOL_STR(remove_wait_queue) },
	{ 0x6756873d, __VMLINUX_SYMBOL_STR(eth_change_mtu) },
	{ 0x17266c23, __VMLINUX_SYMBOL_STR(sock_no_getname) },
	{ 0x44b1d426, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xa57b02d8, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x28cc25db, __VMLINUX_SYMBOL_STR(arm_copy_from_user) },
	{ 0xc8f6a46e, __VMLINUX_SYMBOL_STR(bt_sock_register) },
	{ 0xe564cc94, __VMLINUX_SYMBOL_STR(kthread_create_on_node) },
	{ 0xfa2a647f, __VMLINUX_SYMBOL_STR(sock_no_poll) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0xf4fa543b, __VMLINUX_SYMBOL_STR(arm_copy_to_user) },
	{ 0x9101360b, __VMLINUX_SYMBOL_STR(down_read) },
	{ 0x47022514, __VMLINUX_SYMBOL_STR(bt_err) },
	{ 0xd7442057, __VMLINUX_SYMBOL_STR(bt_info) },
	{ 0x9047332b, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0xf8c694e4, __VMLINUX_SYMBOL_STR(sock_no_mmap) },
	{ 0xffd5a395, __VMLINUX_SYMBOL_STR(default_wake_function) },
	{ 0x37e8f0d1, __VMLINUX_SYMBOL_STR(sock_no_recvmsg) },
	{ 0x6be4d9c8, __VMLINUX_SYMBOL_STR(bt_sock_unlink) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xa61858d9, __VMLINUX_SYMBOL_STR(netif_rx_ni) },
	{ 0xcf159dde, __VMLINUX_SYMBOL_STR(sock_no_socketpair) },
	{ 0x55d2f2cd, __VMLINUX_SYMBOL_STR(netif_tx_wake_queue) },
	{ 0xb044ec58, __VMLINUX_SYMBOL_STR(sk_alloc) },
	{ 0xdbb50903, __VMLINUX_SYMBOL_STR(l2cap_is_socket) },
	{ 0x2f6625be, __VMLINUX_SYMBOL_STR(sock_no_bind) },
	{ 0x3c3fce39, __VMLINUX_SYMBOL_STR(__local_bh_enable_ip) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0xcc1fb551, __VMLINUX_SYMBOL_STR(baswap) },
	{ 0xbe43413c, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0x63fda361, __VMLINUX_SYMBOL_STR(register_netdev) },
	{ 0x6be1e9c0, __VMLINUX_SYMBOL_STR(sock_no_listen) },
	{ 0xb23e692c, __VMLINUX_SYMBOL_STR(sock_no_accept) },
	{ 0x521445b, __VMLINUX_SYMBOL_STR(list_del) },
	{ 0xbd392c2a, __VMLINUX_SYMBOL_STR(sk_free) },
	{ 0x8fea24bd, __VMLINUX_SYMBOL_STR(bt_sock_unregister) },
	{ 0x43102a32, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x6f3db115, __VMLINUX_SYMBOL_STR(up_write) },
	{ 0xc00ce02, __VMLINUX_SYMBOL_STR(init_net) },
	{ 0xbc5c84b5, __VMLINUX_SYMBOL_STR(down_write) },
	{ 0x394fd24c, __VMLINUX_SYMBOL_STR(fput) },
	{ 0x5177f913, __VMLINUX_SYMBOL_STR(sock_no_shutdown) },
	{ 0x8b61cd55, __VMLINUX_SYMBOL_STR(bt_sock_link) },
	{ 0x2d9b9ea6, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0x33c18c1e, __VMLINUX_SYMBOL_STR(skb_queue_tail) },
	{ 0xc6cbbc89, __VMLINUX_SYMBOL_STR(capable) },
	{ 0xb931c958, __VMLINUX_SYMBOL_STR(proto_register) },
	{ 0xc2102972, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0x4a211dfd, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x448c5843, __VMLINUX_SYMBOL_STR(proto_unregister) },
	{ 0x3835e6a1, __VMLINUX_SYMBOL_STR(alloc_netdev_mqs) },
	{ 0x11064f33, __VMLINUX_SYMBOL_STR(eth_type_trans) },
	{ 0x6f20f9a0, __VMLINUX_SYMBOL_STR(__module_put_and_exit) },
	{ 0xd65172e, __VMLINUX_SYMBOL_STR(wake_up_process) },
	{ 0xf24c3d4, __VMLINUX_SYMBOL_STR(ether_setup) },
	{ 0xd74f9f2e, __VMLINUX_SYMBOL_STR(__module_get) },
	{ 0xb9e52429, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0xdee8d3d9, __VMLINUX_SYMBOL_STR(sock_no_connect) },
	{ 0xb8ec1b03, __VMLINUX_SYMBOL_STR(eth_validate_addr) },
	{ 0xfe634f58, __VMLINUX_SYMBOL_STR(add_wait_queue) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x76d9bf11, __VMLINUX_SYMBOL_STR(crc32_be) },
	{ 0xf79d95ba, __VMLINUX_SYMBOL_STR(sock_no_sendmsg) },
	{ 0x9fdc6284, __VMLINUX_SYMBOL_STR(set_user_nice) },
	{ 0x6be92e0c, __VMLINUX_SYMBOL_STR(bt_procfs_init) },
	{ 0xa045ff0b, __VMLINUX_SYMBOL_STR(skb_dequeue) },
	{ 0x95eef112, __VMLINUX_SYMBOL_STR(unregister_netdev) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xf229424a, __VMLINUX_SYMBOL_STR(preempt_count_add) },
	{ 0xcdd90a37, __VMLINUX_SYMBOL_STR(bt_procfs_cleanup) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=bluetooth";


MODULE_INFO(srcversion, "0F9B34AADD98BAE8DD70EB1");
