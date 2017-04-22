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
	{ 0x9c9ec2a0, __VMLINUX_SYMBOL_STR(proc_dointvec_minmax) },
	{ 0x9e16acb, __VMLINUX_SYMBOL_STR(skb_queue_head) },
	{ 0xaca68f10, __VMLINUX_SYMBOL_STR(release_sock) },
	{ 0xf6789fdc, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xda8a931e, __VMLINUX_SYMBOL_STR(sock_init_data) },
	{ 0x5fc56a46, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0xd0ed0b20, __VMLINUX_SYMBOL_STR(skb_append) },
	{ 0xefe21d65, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb8eec98b, __VMLINUX_SYMBOL_STR(del_timer) },
	{ 0x4502c65a, __VMLINUX_SYMBOL_STR(asc2ax) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x1e1a4e9e, __VMLINUX_SYMBOL_STR(seq_open) },
	{ 0xc8b57c27, __VMLINUX_SYMBOL_STR(autoremove_wake_function) },
	{ 0x93f90532, __VMLINUX_SYMBOL_STR(unregister_net_sysctl_table) },
	{ 0xfde7bfb5, __VMLINUX_SYMBOL_STR(send_sig) },
	{ 0x87eb09e3, __VMLINUX_SYMBOL_STR(seq_puts) },
	{ 0xa1d55e90, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0x3007ee30, __VMLINUX_SYMBOL_STR(skb_clone) },
	{ 0xdca611e8, __VMLINUX_SYMBOL_STR(copy_from_iter) },
	{ 0x40a9317a, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0xd2da1048, __VMLINUX_SYMBOL_STR(register_netdevice_notifier) },
	{ 0xa5a36a26, __VMLINUX_SYMBOL_STR(remove_proc_entry) },
	{ 0x353e3fa5, __VMLINUX_SYMBOL_STR(__get_user_4) },
	{ 0xcd64d37a, __VMLINUX_SYMBOL_STR(ax25_linkfail_release) },
	{ 0xd7c03a1b, __VMLINUX_SYMBOL_STR(skb_recv_datagram) },
	{ 0x75bda77a, __VMLINUX_SYMBOL_STR(seq_hlist_next) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x8fdf772a, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x28cc25db, __VMLINUX_SYMBOL_STR(arm_copy_from_user) },
	{ 0xd0f89c2c, __VMLINUX_SYMBOL_STR(skb_set_owner_w) },
	{ 0x3080ee9a, __VMLINUX_SYMBOL_STR(ax25_register_pid) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x69e412be, __VMLINUX_SYMBOL_STR(seq_read) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x9d0d6206, __VMLINUX_SYMBOL_STR(unregister_netdevice_notifier) },
	{ 0xf4fa543b, __VMLINUX_SYMBOL_STR(arm_copy_to_user) },
	{ 0xe557927a, __VMLINUX_SYMBOL_STR(sock_no_sendpage) },
	{ 0x21d45cdb, __VMLINUX_SYMBOL_STR(sock_get_timestamp) },
	{ 0x62177305, __VMLINUX_SYMBOL_STR(sock_no_mmap) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xc8b224e2, __VMLINUX_SYMBOL_STR(skb_queue_purge) },
	{ 0x5e916a2e, __VMLINUX_SYMBOL_STR(sock_no_socketpair) },
	{ 0xef0c126c, __VMLINUX_SYMBOL_STR(__sock_queue_rcv_skb) },
	{ 0xd978383c, __VMLINUX_SYMBOL_STR(sk_alloc) },
	{ 0xb2cf16a2, __VMLINUX_SYMBOL_STR(ax25_find_cb) },
	{ 0x217bdf80, __VMLINUX_SYMBOL_STR(skb_copy_datagram_iter) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x2bfa7f13, __VMLINUX_SYMBOL_STR(lock_sock_nested) },
	{ 0x5db70f35, __VMLINUX_SYMBOL_STR(ax25_listen_release) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x3dfc897c, __VMLINUX_SYMBOL_STR(seq_hlist_start_head) },
	{ 0x535890a0, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0xd43ecbf1, __VMLINUX_SYMBOL_STR(null_ax25_address) },
	{ 0x63eea3ef, __VMLINUX_SYMBOL_STR(register_netdev) },
	{ 0x84b183ae, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xfdf8f58f, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0x50a576c7, __VMLINUX_SYMBOL_STR(sk_free) },
	{ 0x242852b9, __VMLINUX_SYMBOL_STR(ax25_uid_policy) },
	{ 0x2469810f, __VMLINUX_SYMBOL_STR(__rcu_read_unlock) },
	{ 0x85825898, __VMLINUX_SYMBOL_STR(add_timer) },
	{ 0x9badcfb5, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0xca3df0a2, __VMLINUX_SYMBOL_STR(init_net) },
	{ 0xf3c9a145, __VMLINUX_SYMBOL_STR(sk_filter_trim_cap) },
	{ 0x8c5b4540, __VMLINUX_SYMBOL_STR(sock_no_shutdown) },
	{ 0x839a39ba, __VMLINUX_SYMBOL_STR(skb_queue_tail) },
	{ 0xc6cbbc89, __VMLINUX_SYMBOL_STR(capable) },
	{ 0xb375033c, __VMLINUX_SYMBOL_STR(ax25_send_frame) },
	{ 0xec9b0597, __VMLINUX_SYMBOL_STR(proto_register) },
	{ 0xbc10dd97, __VMLINUX_SYMBOL_STR(__put_user_4) },
	{ 0x2005e93f, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0xdd3916ac, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0xc10c469b, __VMLINUX_SYMBOL_STR(sock_get_timestampns) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xffbf4853, __VMLINUX_SYMBOL_STR(datagram_poll) },
	{ 0xf2b53a85, __VMLINUX_SYMBOL_STR(sock_register) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0x4a6761ad, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0xd0cc2cc5, __VMLINUX_SYMBOL_STR(proto_unregister) },
	{ 0x702291be, __VMLINUX_SYMBOL_STR(alloc_netdev_mqs) },
	{ 0x56e7aaea, __VMLINUX_SYMBOL_STR(sock_alloc_send_skb) },
	{ 0x10ce422c, __VMLINUX_SYMBOL_STR(__dev_get_by_name) },
	{ 0x147fb690, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0xc0056be5, __VMLINUX_SYMBOL_STR(_raw_write_unlock_bh) },
	{ 0xf2dc6de2, __VMLINUX_SYMBOL_STR(proc_create_data) },
	{ 0x99062aba, __VMLINUX_SYMBOL_STR(seq_lseek) },
	{ 0x8ede9e26, __VMLINUX_SYMBOL_STR(ax25_protocol_release) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x499cb58c, __VMLINUX_SYMBOL_STR(prepare_to_wait) },
	{ 0xda37d81d, __VMLINUX_SYMBOL_STR(ax25_listen_register) },
	{ 0x62737e1d, __VMLINUX_SYMBOL_STR(sock_unregister) },
	{ 0x6ec9ccdb, __VMLINUX_SYMBOL_STR(_raw_write_lock_bh) },
	{ 0x1cfb04fa, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0xd5a5640, __VMLINUX_SYMBOL_STR(skb_dequeue) },
	{ 0x3d8dc21b, __VMLINUX_SYMBOL_STR(unregister_netdev) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0x1cd4bc6d, __VMLINUX_SYMBOL_STR(seq_release) },
	{ 0xcb62ec7d, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0x7f02188f, __VMLINUX_SYMBOL_STR(__msecs_to_jiffies) },
	{ 0xe9aaf0a4, __VMLINUX_SYMBOL_STR(ax25_display_timer) },
	{ 0xc1444946, __VMLINUX_SYMBOL_STR(ax25cmp) },
	{ 0x8d522714, __VMLINUX_SYMBOL_STR(__rcu_read_lock) },
	{ 0x42b98b37, __VMLINUX_SYMBOL_STR(register_net_sysctl) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0x9cfd625d, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x3afee63e, __VMLINUX_SYMBOL_STR(ax25_findbyuid) },
	{ 0xec191a16, __VMLINUX_SYMBOL_STR(ax25_linkfail_register) },
	{ 0x53dea1ff, __VMLINUX_SYMBOL_STR(ax2asc) },
	{ 0xcd2487df, __VMLINUX_SYMBOL_STR(skb_free_datagram) },
	{ 0xda10ec3, __VMLINUX_SYMBOL_STR(security_sock_graft) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ax25";

