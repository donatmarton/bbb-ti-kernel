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
	{ 0x7e42e836, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0xa57b02d8, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0xf6128e9c, __VMLINUX_SYMBOL_STR(ethtool_op_get_ts_info) },
	{ 0xbe4c8b3b, __VMLINUX_SYMBOL_STR(ethtool_op_get_link) },
	{ 0xb8ec1b03, __VMLINUX_SYMBOL_STR(eth_validate_addr) },
	{ 0xae64b44b, __VMLINUX_SYMBOL_STR(unregister_virtio_driver) },
	{ 0x703a13f8, __VMLINUX_SYMBOL_STR(register_virtio_driver) },
	{ 0xef1e4705, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x63fda361, __VMLINUX_SYMBOL_STR(register_netdev) },
	{ 0x50c89f23, __VMLINUX_SYMBOL_STR(__alloc_percpu) },
	{ 0x79aa04a2, __VMLINUX_SYMBOL_STR(get_random_bytes) },
	{ 0xfc642a79, __VMLINUX_SYMBOL_STR(alloc_etherdev_mqs) },
	{ 0xd8ea0b47, __VMLINUX_SYMBOL_STR(netif_device_attach) },
	{ 0xa9b8b0a1, __VMLINUX_SYMBOL_STR(virtqueue_poll) },
	{ 0x1b2df43, __VMLINUX_SYMBOL_STR(napi_complete_done) },
	{ 0x2c0b7560, __VMLINUX_SYMBOL_STR(virtqueue_enable_cb_prepare) },
	{ 0x8403bbe4, __VMLINUX_SYMBOL_STR(skb_coalesce_rx_frag) },
	{ 0xc2102972, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0x18cf6166, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0x53462309, __VMLINUX_SYMBOL_STR(napi_gro_receive) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x11064f33, __VMLINUX_SYMBOL_STR(eth_type_trans) },
	{ 0xe5b38f, __VMLINUX_SYMBOL_STR(skb_partial_csum_set) },
	{ 0x6ae0f10b, __VMLINUX_SYMBOL_STR(contig_page_data) },
	{ 0x3e061b94, __VMLINUX_SYMBOL_STR(__get_page_tail) },
	{ 0x492621b9, __VMLINUX_SYMBOL_STR(__alloc_pages_nodemask) },
	{ 0x4c6a1f7, __VMLINUX_SYMBOL_STR(skb_page_frag_refill) },
	{ 0xd8985491, __VMLINUX_SYMBOL_STR(virtqueue_add_inbuf) },
	{ 0xbe43413c, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0xc9ec4e21, __VMLINUX_SYMBOL_STR(free_percpu) },
	{ 0x95eef112, __VMLINUX_SYMBOL_STR(unregister_netdev) },
	{ 0x16784ae4, __VMLINUX_SYMBOL_STR(netif_device_detach) },
	{ 0x92b57248, __VMLINUX_SYMBOL_STR(flush_work) },
	{ 0x6be960f4, __VMLINUX_SYMBOL_STR(__free_pages) },
	{ 0x7c06921c, __VMLINUX_SYMBOL_STR(netif_set_real_num_rx_queues) },
	{ 0x3cf891ca, __VMLINUX_SYMBOL_STR(netif_set_real_num_tx_queues) },
	{ 0x3f616ce2, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0xaea93fc1, __VMLINUX_SYMBOL_STR(napi_hash_add) },
	{ 0x2635c0e7, __VMLINUX_SYMBOL_STR(netif_napi_add) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0x9580deb, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x4f92a38, __VMLINUX_SYMBOL_STR(skb_tstamp_tx) },
	{ 0x2a18c74, __VMLINUX_SYMBOL_STR(nf_conntrack_destroy) },
	{ 0xed560c48, __VMLINUX_SYMBOL_STR(virtqueue_enable_cb_delayed) },
	{ 0x6fd4f666, __VMLINUX_SYMBOL_STR(virtqueue_add_outbuf) },
	{ 0x45d14d36, __VMLINUX_SYMBOL_STR(skb_to_sgvec) },
	{ 0xa59a091d, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0xe5f1012e, __VMLINUX_SYMBOL_STR(eth_commit_mac_addr_change) },
	{ 0x14b941c5, __VMLINUX_SYMBOL_STR(eth_prepare_mac_addr_change) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x6e720ff2, __VMLINUX_SYMBOL_STR(rtnl_unlock) },
	{ 0xc7a4fbed, __VMLINUX_SYMBOL_STR(rtnl_lock) },
	{ 0xea88fa3b, __VMLINUX_SYMBOL_STR(netdev_notify_peers) },
	{ 0x88976fff, __VMLINUX_SYMBOL_STR(netif_tx_stop_all_queues) },
	{ 0x8ca73395, __VMLINUX_SYMBOL_STR(netif_carrier_off) },
	{ 0x55d2f2cd, __VMLINUX_SYMBOL_STR(netif_tx_wake_queue) },
	{ 0x38b6f297, __VMLINUX_SYMBOL_STR(netif_carrier_on) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x132ccb97, __VMLINUX_SYMBOL_STR(virtqueue_detach_unused_buf) },
	{ 0x5edffd32, __VMLINUX_SYMBOL_STR(napi_disable) },
	{ 0x4c29dcbf, __VMLINUX_SYMBOL_STR(cancel_delayed_work_sync) },
	{ 0x189c3a74, __VMLINUX_SYMBOL_STR(mem_map) },
	{ 0xd2a941d4, __VMLINUX_SYMBOL_STR(sg_init_table) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x2f0664db, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x8fbeb765, __VMLINUX_SYMBOL_STR(virtqueue_get_buf) },
	{ 0x7ba8f999, __VMLINUX_SYMBOL_STR(virtqueue_is_broken) },
	{ 0x7327ac5e, __VMLINUX_SYMBOL_STR(virtqueue_kick) },
	{ 0x79cf82fd, __VMLINUX_SYMBOL_STR(virtqueue_add_sgs) },
	{ 0x5c265cba, __VMLINUX_SYMBOL_STR(sg_init_one) },
	{ 0x5fb20428, __VMLINUX_SYMBOL_STR(virtio_check_driver_offered_feature) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x3c3fce39, __VMLINUX_SYMBOL_STR(__local_bh_enable_ip) },
	{ 0xf229424a, __VMLINUX_SYMBOL_STR(preempt_count_add) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x609f1c7e, __VMLINUX_SYMBOL_STR(synchronize_net) },
	{ 0x8d7c644e, __VMLINUX_SYMBOL_STR(netif_napi_del) },
	{ 0x281f920c, __VMLINUX_SYMBOL_STR(napi_hash_del) },
	{ 0x13078a7c, __VMLINUX_SYMBOL_STR(netif_wake_subqueue) },
	{ 0x44b1d426, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0xf6ebc03b, __VMLINUX_SYMBOL_STR(net_ratelimit) },
	{ 0x1d8f4c65, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0x27ca73dd, __VMLINUX_SYMBOL_STR(skb_add_rx_frag) },
	{ 0xfe8e1ccd, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xc84fc707, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0x89cf4c4a, __VMLINUX_SYMBOL_STR(page_address) },
	{ 0x4d265394, __VMLINUX_SYMBOL_STR(put_page) },
	{ 0x20060f72, __VMLINUX_SYMBOL_STR(virtqueue_get_vring_size) },
	{ 0xc7d30250, __VMLINUX_SYMBOL_STR(virtqueue_disable_cb) },
	{ 0x7f64a438, __VMLINUX_SYMBOL_STR(__napi_schedule) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("virtio:d00000001v*");
