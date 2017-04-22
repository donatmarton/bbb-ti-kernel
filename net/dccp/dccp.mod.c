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
	{ 0x318e8984, __VMLINUX_SYMBOL_STR(__inet_twsk_schedule) },
	{ 0x4012635e, __VMLINUX_SYMBOL_STR(inet_csk_reqsk_queue_drop) },
	{ 0xaca68f10, __VMLINUX_SYMBOL_STR(release_sock) },
	{ 0xdb9587b8, __VMLINUX_SYMBOL_STR(inet_csk_complete_hashdance) },
	{ 0x10ab577b, __VMLINUX_SYMBOL_STR(kmem_cache_destroy) },
	{ 0xf6789fdc, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xe4689576, __VMLINUX_SYMBOL_STR(ktime_get_with_offset) },
	{ 0xa8076afd, __VMLINUX_SYMBOL_STR(__kfree_skb) },
	{ 0x37da3f6d, __VMLINUX_SYMBOL_STR(inet_csk_listen_stop) },
	{ 0x5fc56a46, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0xd74289f9, __VMLINUX_SYMBOL_STR(__percpu_counter_add) },
	{ 0x7aa1756e, __VMLINUX_SYMBOL_STR(kvfree) },
	{ 0xcfefe1e, __VMLINUX_SYMBOL_STR(percpu_counter_destroy) },
	{ 0xefe21d65, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x80a74ac0, __VMLINUX_SYMBOL_STR(inet_twsk_put) },
	{ 0xc8b57c27, __VMLINUX_SYMBOL_STR(autoremove_wake_function) },
	{ 0x5488c6ec, __VMLINUX_SYMBOL_STR(inet_rtx_syn_ack) },
	{ 0x93f90532, __VMLINUX_SYMBOL_STR(unregister_net_sysctl_table) },
	{ 0x53b8ab24, __VMLINUX_SYMBOL_STR(sk_stop_timer) },
	{ 0xf1deabf2, __VMLINUX_SYMBOL_STR(div64_u64) },
	{ 0x369ee394, __VMLINUX_SYMBOL_STR(inet_csk_destroy_sock) },
	{ 0xe33ad947, __VMLINUX_SYMBOL_STR(sk_stream_wait_connect) },
	{ 0xf2f91462, __VMLINUX_SYMBOL_STR(dst_release) },
	{ 0xa1d55e90, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0x3007ee30, __VMLINUX_SYMBOL_STR(skb_clone) },
	{ 0xdca611e8, __VMLINUX_SYMBOL_STR(copy_from_iter) },
	{ 0x69c03fc5, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0x353e3fa5, __VMLINUX_SYMBOL_STR(__get_user_4) },
	{ 0xe2fae716, __VMLINUX_SYMBOL_STR(kmemdup) },
	{ 0x50c89f23, __VMLINUX_SYMBOL_STR(__alloc_percpu) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x5788a263, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x8fdf772a, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x28cc25db, __VMLINUX_SYMBOL_STR(arm_copy_from_user) },
	{ 0xd0f89c2c, __VMLINUX_SYMBOL_STR(skb_set_owner_w) },
	{ 0xc38259af, __VMLINUX_SYMBOL_STR(__this_cpu_preempt_check) },
	{ 0x3c8bbd33, __VMLINUX_SYMBOL_STR(sock_rfree) },
	{ 0x64b884fc, __VMLINUX_SYMBOL_STR(inet_csk_listen_start) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xc9ec4e21, __VMLINUX_SYMBOL_STR(free_percpu) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0xc3b06f1b, __VMLINUX_SYMBOL_STR(skb_unlink) },
	{ 0xf4fa543b, __VMLINUX_SYMBOL_STR(arm_copy_to_user) },
	{ 0xde9360ba, __VMLINUX_SYMBOL_STR(totalram_pages) },
	{ 0x9d952b89, __VMLINUX_SYMBOL_STR(__inet_twsk_hashdance) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0xa48e8de1, __VMLINUX_SYMBOL_STR(inet_csk_clone_lock) },
	{ 0x3f9c29d8, __VMLINUX_SYMBOL_STR(sk_wait_data) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xd29cf52e, __VMLINUX_SYMBOL_STR(skb_checksum) },
	{ 0x217bdf80, __VMLINUX_SYMBOL_STR(skb_copy_datagram_iter) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x3c3fce39, __VMLINUX_SYMBOL_STR(__local_bh_enable_ip) },
	{ 0x2bfa7f13, __VMLINUX_SYMBOL_STR(lock_sock_nested) },
	{ 0xfaef0ed, __VMLINUX_SYMBOL_STR(__tasklet_schedule) },
	{ 0x7dccc294, __VMLINUX_SYMBOL_STR(proc_doulongvec_minmax) },
	{ 0xd26e0e90, __VMLINUX_SYMBOL_STR(kmem_cache_free) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xfdf8f58f, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0x521445b, __VMLINUX_SYMBOL_STR(list_del) },
	{ 0xf1969a8e, __VMLINUX_SYMBOL_STR(__usecs_to_jiffies) },
	{ 0xc42a3480, __VMLINUX_SYMBOL_STR(sock_wake_async) },
	{ 0x50a576c7, __VMLINUX_SYMBOL_STR(sk_free) },
	{ 0x9545af6d, __VMLINUX_SYMBOL_STR(tasklet_init) },
	{ 0x2469810f, __VMLINUX_SYMBOL_STR(__rcu_read_unlock) },
	{ 0xa735db59, __VMLINUX_SYMBOL_STR(prandom_u32) },
	{ 0x5240ee7, __VMLINUX_SYMBOL_STR(percpu_counter_batch) },
	{ 0xca3df0a2, __VMLINUX_SYMBOL_STR(init_net) },
	{ 0x2134b73a, __VMLINUX_SYMBOL_STR(sk_stream_wait_close) },
	{ 0x839a39ba, __VMLINUX_SYMBOL_STR(skb_queue_tail) },
	{ 0x666774aa, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0xaf146a6c, __VMLINUX_SYMBOL_STR(sk_reset_timer) },
	{ 0xbc10dd97, __VMLINUX_SYMBOL_STR(__put_user_4) },
	{ 0x2005e93f, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0x93fca811, __VMLINUX_SYMBOL_STR(__get_free_pages) },
	{ 0xdd3916ac, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0x4a6761ad, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0xfe90c641, __VMLINUX_SYMBOL_STR(inet_csk_init_xmit_timers) },
	{ 0x6b2dc060, __VMLINUX_SYMBOL_STR(dump_stack) },
	{ 0x312ecf5f, __VMLINUX_SYMBOL_STR(inet_put_port) },
	{ 0x56e7aaea, __VMLINUX_SYMBOL_STR(sock_alloc_send_skb) },
	{ 0x7f24de73, __VMLINUX_SYMBOL_STR(jiffies_to_usecs) },
	{ 0xef2fdc4f, __VMLINUX_SYMBOL_STR(__percpu_counter_init) },
	{ 0xb8e23ef7, __VMLINUX_SYMBOL_STR(inet_hashinfo_init) },
	{ 0x147fb690, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0xce21ab04, __VMLINUX_SYMBOL_STR(inet_twsk_alloc) },
	{ 0xedf65a89, __VMLINUX_SYMBOL_STR(kmem_cache_create) },
	{ 0x7afa89fc, __VMLINUX_SYMBOL_STR(vsnprintf) },
	{ 0xa739f58b, __VMLINUX_SYMBOL_STR(inet_csk_clear_xmit_timers) },
	{ 0x4302d0eb, __VMLINUX_SYMBOL_STR(free_pages) },
	{ 0xd85cd67e, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0xf6ebc03b, __VMLINUX_SYMBOL_STR(net_ratelimit) },
	{ 0xc0056be5, __VMLINUX_SYMBOL_STR(_raw_write_unlock_bh) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x996c4d30, __VMLINUX_SYMBOL_STR(proc_dointvec_ms_jiffies) },
	{ 0x499cb58c, __VMLINUX_SYMBOL_STR(prepare_to_wait) },
	{ 0x6ec9ccdb, __VMLINUX_SYMBOL_STR(_raw_write_lock_bh) },
	{ 0x1cfb04fa, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0xd5a5640, __VMLINUX_SYMBOL_STR(skb_dequeue) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xe2e8065e, __VMLINUX_SYMBOL_STR(memdup_user) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xca54fee, __VMLINUX_SYMBOL_STR(_test_and_set_bit) },
	{ 0x15ea66b5, __VMLINUX_SYMBOL_STR(sock_wmalloc) },
	{ 0xcb62ec7d, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0x7f02188f, __VMLINUX_SYMBOL_STR(__msecs_to_jiffies) },
	{ 0x8d522714, __VMLINUX_SYMBOL_STR(__rcu_read_lock) },
	{ 0xf229424a, __VMLINUX_SYMBOL_STR(preempt_count_add) },
	{ 0x42b98b37, __VMLINUX_SYMBOL_STR(register_net_sysctl) },
	{ 0x9cfd625d, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x65a5b51d, __VMLINUX_SYMBOL_STR(inet_ehash_locks_alloc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

