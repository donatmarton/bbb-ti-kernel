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
	{ 0x92b57248, __VMLINUX_SYMBOL_STR(flush_work) },
	{ 0x7c522ad0, __VMLINUX_SYMBOL_STR(release_sock) },
	{ 0xb5233f3e, __VMLINUX_SYMBOL_STR(kmem_cache_destroy) },
	{ 0x65e75cb6, __VMLINUX_SYMBOL_STR(__list_del_entry) },
	{ 0x958d13e0, __VMLINUX_SYMBOL_STR(rds_trans_register) },
	{ 0x4805e22, __VMLINUX_SYMBOL_STR(kernel_sendmsg) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb6e95e3, __VMLINUX_SYMBOL_STR(rds_connect_complete) },
	{ 0xa2f267b7, __VMLINUX_SYMBOL_STR(tcp_done) },
	{ 0x71997d11, __VMLINUX_SYMBOL_STR(sock_release) },
	{ 0xd1a46981, __VMLINUX_SYMBOL_STR(skb_clone) },
	{ 0x59d308dd, __VMLINUX_SYMBOL_STR(rds_stats) },
	{ 0xd2da1048, __VMLINUX_SYMBOL_STR(register_netdevice_notifier) },
	{ 0x954a897, __VMLINUX_SYMBOL_STR(rds_conn_create) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xef1d2a9c, __VMLINUX_SYMBOL_STR(sock_create_kern) },
	{ 0xb4e354f2, __VMLINUX_SYMBOL_STR(rds_recv_incoming) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0x9d0d6206, __VMLINUX_SYMBOL_STR(unregister_netdevice_notifier) },
	{ 0xd257077d, __VMLINUX_SYMBOL_STR(rds_inc_init) },
	{ 0x9047332b, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0x16601c2, __VMLINUX_SYMBOL_STR(kernel_setsockopt) },
	{ 0xfff7d0a3, __VMLINUX_SYMBOL_STR(skb_queue_purge) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x95f58b2d, __VMLINUX_SYMBOL_STR(unregister_pernet_subsys) },
	{ 0x706c5a65, __VMLINUX_SYMBOL_STR(preempt_count_sub) },
	{ 0xe059b9ed, __VMLINUX_SYMBOL_STR(skb_copy_datagram_iter) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x3c3fce39, __VMLINUX_SYMBOL_STR(__local_bh_enable_ip) },
	{ 0x2b5c6ed6, __VMLINUX_SYMBOL_STR(inet_addr_type) },
	{ 0x365f26d2, __VMLINUX_SYMBOL_STR(lock_sock_nested) },
	{ 0x95c865dd, __VMLINUX_SYMBOL_STR(rds_info_register_func) },
	{ 0xc917e655, __VMLINUX_SYMBOL_STR(debug_smp_processor_id) },
	{ 0xa1c76e0a, __VMLINUX_SYMBOL_STR(_cond_resched) },
	{ 0xf4b6cdae, __VMLINUX_SYMBOL_STR(kmem_cache_free) },
	{ 0x128e093e, __VMLINUX_SYMBOL_STR(rds_inc_put) },
	{ 0x96fafe85, __VMLINUX_SYMBOL_STR(rds_stats_info_copy) },
	{ 0xc2dab779, __VMLINUX_SYMBOL_STR(rds_info_copy) },
	{ 0x521445b, __VMLINUX_SYMBOL_STR(list_del) },
	{ 0x2469810f, __VMLINUX_SYMBOL_STR(__rcu_read_unlock) },
	{ 0x43b0c9c3, __VMLINUX_SYMBOL_STR(preempt_schedule) },
	{ 0xc883609e, __VMLINUX_SYMBOL_STR(rds_send_drop_acked) },
	{ 0x42160169, __VMLINUX_SYMBOL_STR(flush_workqueue) },
	{ 0x6b8d2b87, __VMLINUX_SYMBOL_STR(rds_conn_destroy) },
	{ 0x33c18c1e, __VMLINUX_SYMBOL_STR(skb_queue_tail) },
	{ 0x55184b5d, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x3f616ce2, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xa467af, __VMLINUX_SYMBOL_STR(rds_wq) },
	{ 0x4a211dfd, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0xb99f0242, __VMLINUX_SYMBOL_STR(register_pernet_subsys) },
	{ 0x71aa3ade, __VMLINUX_SYMBOL_STR(kmem_cache_create) },
	{ 0xfae4afc8, __VMLINUX_SYMBOL_STR(rds_info_deregister_func) },
	{ 0xa3ad16d2, __VMLINUX_SYMBOL_STR(___pskb_trim) },
	{ 0xd3afb647, __VMLINUX_SYMBOL_STR(rds_trans_unregister) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x8d522714, __VMLINUX_SYMBOL_STR(__rcu_read_lock) },
	{ 0xf229424a, __VMLINUX_SYMBOL_STR(preempt_count_add) },
	{ 0x372da3af, __VMLINUX_SYMBOL_STR(skb_copy_bits) },
	{ 0x89e2f2c9, __VMLINUX_SYMBOL_STR(tcp_read_sock) },
	{ 0x106aff75, __VMLINUX_SYMBOL_STR(rds_conn_drop) },
	{ 0xb5c386ed, __VMLINUX_SYMBOL_STR(rds_cong_map_updated) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=rds";

