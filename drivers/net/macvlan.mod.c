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
	{ 0x7efb4de6, __VMLINUX_SYMBOL_STR(register_netdevice) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0xf6789fdc, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xd6e6f05a, __VMLINUX_SYMBOL_STR(dev_forward_skb) },
	{ 0x65e75cb6, __VMLINUX_SYMBOL_STR(__list_del_entry) },
	{ 0x5fc56a46, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0x732b8a82, __VMLINUX_SYMBOL_STR(dev_mc_unsync) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x6311da71, __VMLINUX_SYMBOL_STR(dev_get_nest_level) },
	{ 0x19f462ab, __VMLINUX_SYMBOL_STR(kfree_call_rcu) },
	{ 0x79aa04a2, __VMLINUX_SYMBOL_STR(get_random_bytes) },
	{ 0x9970441d, __VMLINUX_SYMBOL_STR(dev_uc_add) },
	{ 0x980eace2, __VMLINUX_SYMBOL_STR(__dev_forward_skb) },
	{ 0xe986c0c2, __VMLINUX_SYMBOL_STR(dev_mc_add_excl) },
	{ 0x190d088, __VMLINUX_SYMBOL_STR(netdev_rx_handler_register) },
	{ 0xc985b07f, __VMLINUX_SYMBOL_STR(dev_uc_add_excl) },
	{ 0xa1d55e90, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0x3007ee30, __VMLINUX_SYMBOL_STR(skb_clone) },
	{ 0xd3f57a2, __VMLINUX_SYMBOL_STR(_find_next_bit_le) },
	{ 0xd2da1048, __VMLINUX_SYMBOL_STR(register_netdevice_notifier) },
	{ 0x4205ad24, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0xb224b3ec, __VMLINUX_SYMBOL_STR(dev_set_allmulti) },
	{ 0xe3c161d5, __VMLINUX_SYMBOL_STR(vlan_vid_del) },
	{ 0x987344be, __VMLINUX_SYMBOL_STR(call_netdevice_notifiers) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xd330e639, __VMLINUX_SYMBOL_STR(linkwatch_fire_event) },
	{ 0x4a59f15e, __VMLINUX_SYMBOL_STR(vlan_vid_add) },
	{ 0x3a7f9fcd, __VMLINUX_SYMBOL_STR(__netpoll_setup) },
	{ 0xc9ec4e21, __VMLINUX_SYMBOL_STR(free_percpu) },
	{ 0x9d0d6206, __VMLINUX_SYMBOL_STR(unregister_netdevice_notifier) },
	{ 0x143a1e84, __VMLINUX_SYMBOL_STR(netif_rx) },
	{ 0xe4ca266e, __VMLINUX_SYMBOL_STR(netpoll_send_skb_on_dev) },
	{ 0xfe7c4287, __VMLINUX_SYMBOL_STR(nr_cpu_ids) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x49151079, __VMLINUX_SYMBOL_STR(netif_rx_ni) },
	{ 0x659caf78, __VMLINUX_SYMBOL_STR(dev_set_mac_address) },
	{ 0x2cc44b15, __VMLINUX_SYMBOL_STR(__cpu_possible_mask) },
	{ 0xcbc821ed, __VMLINUX_SYMBOL_STR(ip_check_defrag) },
	{ 0x9fdecc31, __VMLINUX_SYMBOL_STR(unregister_netdevice_many) },
	{ 0xf5eebf14, __VMLINUX_SYMBOL_STR(__ethtool_get_link_ksettings) },
	{ 0x75d494e0, __VMLINUX_SYMBOL_STR(ethtool_op_get_link) },
	{ 0xc917e655, __VMLINUX_SYMBOL_STR(debug_smp_processor_id) },
	{ 0xb5bcd784, __VMLINUX_SYMBOL_STR(__netpoll_free_async) },
	{ 0x535890a0, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0xb9442bf2, __VMLINUX_SYMBOL_STR(dev_mc_del) },
	{ 0x73ea6fe7, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0x5caebafe, __VMLINUX_SYMBOL_STR(netdev_upper_dev_unlink) },
	{ 0xa1c4b578, __VMLINUX_SYMBOL_STR(ndo_dflt_fdb_dump) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0xb1be9c30, __VMLINUX_SYMBOL_STR(netif_stacked_transfer_operstate) },
	{ 0x2469810f, __VMLINUX_SYMBOL_STR(__rcu_read_unlock) },
	{ 0x6091797f, __VMLINUX_SYMBOL_STR(synchronize_rcu) },
	{ 0x41370414, __VMLINUX_SYMBOL_STR(rtnl_link_unregister) },
	{ 0x91a6cb5, __VMLINUX_SYMBOL_STR(__dev_get_by_index) },
	{ 0x6c209eab, __VMLINUX_SYMBOL_STR(__alloc_percpu_gfp) },
	{ 0xcb9f4b92, __VMLINUX_SYMBOL_STR(eth_header_cache_update) },
	{ 0xdd3916ac, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x5170cd3c, __VMLINUX_SYMBOL_STR(netdev_rx_handler_unregister) },
	{ 0x5686f76e, __VMLINUX_SYMBOL_STR(eth_header_parse) },
	{ 0x4a6761ad, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x12d315b7, __VMLINUX_SYMBOL_STR(passthru_features_check) },
	{ 0x1e579dc5, __VMLINUX_SYMBOL_STR(__list_add_rcu) },
	{ 0x569de689, __VMLINUX_SYMBOL_STR(netdev_upper_dev_link) },
	{ 0xe61bcaa3, __VMLINUX_SYMBOL_STR(ether_setup) },
	{ 0x98212134, __VMLINUX_SYMBOL_STR(dev_uc_unsync) },
	{ 0x147fb690, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x1176e07f, __VMLINUX_SYMBOL_STR(__per_cpu_offset) },
	{ 0x4c0e357a, __VMLINUX_SYMBOL_STR(unregister_netdevice_queue) },
	{ 0x8441c6d0, __VMLINUX_SYMBOL_STR(eth_validate_addr) },
	{ 0xf1fab087, __VMLINUX_SYMBOL_STR(dev_set_promiscuity) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x2effbb98, __VMLINUX_SYMBOL_STR(eth_header_cache) },
	{ 0x1baff60f, __VMLINUX_SYMBOL_STR(rtnl_link_register) },
	{ 0xbdd9a237, __VMLINUX_SYMBOL_STR(dev_uc_del) },
	{ 0x4d73c532, __VMLINUX_SYMBOL_STR(dev_uc_sync) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xcb62ec7d, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0x2bf597f9, __VMLINUX_SYMBOL_STR(netdev_update_features) },
	{ 0x42b0fd30, __VMLINUX_SYMBOL_STR(dev_queue_xmit_accel) },
	{ 0x5b344826, __VMLINUX_SYMBOL_STR(dev_queue_xmit) },
	{ 0x8d522714, __VMLINUX_SYMBOL_STR(__rcu_read_lock) },
	{ 0xbdc15b4, __VMLINUX_SYMBOL_STR(dev_mc_sync) },
	{ 0xc58a8cd, __VMLINUX_SYMBOL_STR(netdev_increment_features) },
	{ 0x6dde7a60, __VMLINUX_SYMBOL_STR(dev_set_mtu) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

