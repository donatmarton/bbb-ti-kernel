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
	{ 0xf6789fdc, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x65e75cb6, __VMLINUX_SYMBOL_STR(__list_del_entry) },
	{ 0x8b971b8b, __VMLINUX_SYMBOL_STR(gro_find_receive_by_type) },
	{ 0x3add09c0, __VMLINUX_SYMBOL_STR(mrp_uninit_applicant) },
	{ 0x64cab7f7, __VMLINUX_SYMBOL_STR(dev_change_flags) },
	{ 0x732b8a82, __VMLINUX_SYMBOL_STR(dev_mc_unsync) },
	{ 0x6066ef46, __VMLINUX_SYMBOL_STR(mrp_request_leave) },
	{ 0xc7fd8e9, __VMLINUX_SYMBOL_STR(single_open) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x829394b9, __VMLINUX_SYMBOL_STR(dev_get_flags) },
	{ 0x60a13e90, __VMLINUX_SYMBOL_STR(rcu_barrier) },
	{ 0x6311da71, __VMLINUX_SYMBOL_STR(dev_get_nest_level) },
	{ 0x3639bcef, __VMLINUX_SYMBOL_STR(garp_uninit_applicant) },
	{ 0x6ec13da9, __VMLINUX_SYMBOL_STR(vlan_dev_vlan_id) },
	{ 0x9970441d, __VMLINUX_SYMBOL_STR(dev_uc_add) },
	{ 0xbe2068f9, __VMLINUX_SYMBOL_STR(single_release) },
	{ 0x87eb09e3, __VMLINUX_SYMBOL_STR(seq_puts) },
	{ 0x8476f3f, __VMLINUX_SYMBOL_STR(garp_request_join) },
	{ 0xc7a4fbed, __VMLINUX_SYMBOL_STR(rtnl_lock) },
	{ 0xd962fbea, __VMLINUX_SYMBOL_STR(vlan_uses_dev) },
	{ 0x16789d50, __VMLINUX_SYMBOL_STR(switchdev_port_bridge_setlink) },
	{ 0x4a0796f, __VMLINUX_SYMBOL_STR(switchdev_port_fdb_dump) },
	{ 0x6d4e025a, __VMLINUX_SYMBOL_STR(netif_carrier_on) },
	{ 0xd3f57a2, __VMLINUX_SYMBOL_STR(_find_next_bit_le) },
	{ 0x40a9317a, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0xd2da1048, __VMLINUX_SYMBOL_STR(register_netdevice_notifier) },
	{ 0xd7dd8451, __VMLINUX_SYMBOL_STR(netif_carrier_off) },
	{ 0xa5a36a26, __VMLINUX_SYMBOL_STR(remove_proc_entry) },
	{ 0xb224b3ec, __VMLINUX_SYMBOL_STR(dev_set_allmulti) },
	{ 0xe3c161d5, __VMLINUX_SYMBOL_STR(vlan_vid_del) },
	{ 0x987344be, __VMLINUX_SYMBOL_STR(call_netdevice_notifiers) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xd330e639, __VMLINUX_SYMBOL_STR(linkwatch_fire_event) },
	{ 0xad68c59b, __VMLINUX_SYMBOL_STR(dev_add_offload) },
	{ 0x28cc25db, __VMLINUX_SYMBOL_STR(arm_copy_from_user) },
	{ 0x4a59f15e, __VMLINUX_SYMBOL_STR(vlan_vid_add) },
	{ 0x3a7f9fcd, __VMLINUX_SYMBOL_STR(__netpoll_setup) },
	{ 0x7926459b, __VMLINUX_SYMBOL_STR(switchdev_port_fdb_del) },
	{ 0x969a152b, __VMLINUX_SYMBOL_STR(garp_init_applicant) },
	{ 0x3bf894da, __VMLINUX_SYMBOL_STR(switchdev_port_bridge_getlink) },
	{ 0x69e412be, __VMLINUX_SYMBOL_STR(seq_read) },
	{ 0xc9ec4e21, __VMLINUX_SYMBOL_STR(free_percpu) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0x9d0d6206, __VMLINUX_SYMBOL_STR(unregister_netdevice_notifier) },
	{ 0xf4fa543b, __VMLINUX_SYMBOL_STR(arm_copy_to_user) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0xd5b8c614, __VMLINUX_SYMBOL_STR(proc_remove) },
	{ 0x67d8398d, __VMLINUX_SYMBOL_STR(vlan_ioctl_set) },
	{ 0xec82b576, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0xe4ca266e, __VMLINUX_SYMBOL_STR(netpoll_send_skb_on_dev) },
	{ 0x52beb314, __VMLINUX_SYMBOL_STR(PDE_DATA) },
	{ 0xfe7c4287, __VMLINUX_SYMBOL_STR(nr_cpu_ids) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x2cc44b15, __VMLINUX_SYMBOL_STR(__cpu_possible_mask) },
	{ 0x30821c64, __VMLINUX_SYMBOL_STR(unregister_pernet_subsys) },
	{ 0x9fdecc31, __VMLINUX_SYMBOL_STR(unregister_netdevice_many) },
	{ 0xf5eebf14, __VMLINUX_SYMBOL_STR(__ethtool_get_link_ksettings) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x75d494e0, __VMLINUX_SYMBOL_STR(ethtool_op_get_link) },
	{ 0x5280b7ab, __VMLINUX_SYMBOL_STR(ns_capable) },
	{ 0xc917e655, __VMLINUX_SYMBOL_STR(debug_smp_processor_id) },
	{ 0xb5bcd784, __VMLINUX_SYMBOL_STR(__netpoll_free_async) },
	{ 0x535890a0, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0x328a05f1, __VMLINUX_SYMBOL_STR(strncpy) },
	{ 0x6dca317a, __VMLINUX_SYMBOL_STR(garp_register_application) },
	{ 0x73ea6fe7, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0x5caebafe, __VMLINUX_SYMBOL_STR(netdev_upper_dev_unlink) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0xfc00d1af, __VMLINUX_SYMBOL_STR(dev_remove_offload) },
	{ 0xfdf8f58f, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0x75820bcd, __VMLINUX_SYMBOL_STR(proc_mkdir_data) },
	{ 0x521445b, __VMLINUX_SYMBOL_STR(list_del) },
	{ 0x7a5321c1, __VMLINUX_SYMBOL_STR(seq_release_net) },
	{ 0xb1be9c30, __VMLINUX_SYMBOL_STR(netif_stacked_transfer_operstate) },
	{ 0x2469810f, __VMLINUX_SYMBOL_STR(__rcu_read_unlock) },
	{ 0x28a0e395, __VMLINUX_SYMBOL_STR(gro_find_complete_by_type) },
	{ 0x41370414, __VMLINUX_SYMBOL_STR(rtnl_link_unregister) },
	{ 0x91a6cb5, __VMLINUX_SYMBOL_STR(__dev_get_by_index) },
	{ 0xcbda11b4, __VMLINUX_SYMBOL_STR(garp_request_leave) },
	{ 0x6c209eab, __VMLINUX_SYMBOL_STR(__alloc_percpu_gfp) },
	{ 0x347013de, __VMLINUX_SYMBOL_STR(nla_validate) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x5686f76e, __VMLINUX_SYMBOL_STR(eth_header_parse) },
	{ 0x6b2dc060, __VMLINUX_SYMBOL_STR(dump_stack) },
	{ 0x702291be, __VMLINUX_SYMBOL_STR(alloc_netdev_mqs) },
	{ 0x93ee206, __VMLINUX_SYMBOL_STR(register_pernet_subsys) },
	{ 0xe3c68d85, __VMLINUX_SYMBOL_STR(mrp_init_applicant) },
	{ 0x569de689, __VMLINUX_SYMBOL_STR(netdev_upper_dev_link) },
	{ 0xe61bcaa3, __VMLINUX_SYMBOL_STR(ether_setup) },
	{ 0x98212134, __VMLINUX_SYMBOL_STR(dev_uc_unsync) },
	{ 0x10ce422c, __VMLINUX_SYMBOL_STR(__dev_get_by_name) },
	{ 0x147fb690, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xd7a5c0a6, __VMLINUX_SYMBOL_STR(switchdev_port_fdb_add) },
	{ 0x7e9c47b4, __VMLINUX_SYMBOL_STR(garp_unregister_application) },
	{ 0x1176e07f, __VMLINUX_SYMBOL_STR(__per_cpu_offset) },
	{ 0x4c0e357a, __VMLINUX_SYMBOL_STR(unregister_netdevice_queue) },
	{ 0x464b5e08, __VMLINUX_SYMBOL_STR(netdev_warn) },
	{ 0xf2dc6de2, __VMLINUX_SYMBOL_STR(proc_create_data) },
	{ 0x8441c6d0, __VMLINUX_SYMBOL_STR(eth_validate_addr) },
	{ 0x99062aba, __VMLINUX_SYMBOL_STR(seq_lseek) },
	{ 0xf1fab087, __VMLINUX_SYMBOL_STR(dev_set_promiscuity) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xcf8a5b1, __VMLINUX_SYMBOL_STR(seq_open_net) },
	{ 0x6673f176, __VMLINUX_SYMBOL_STR(mrp_register_application) },
	{ 0x49f71442, __VMLINUX_SYMBOL_STR(dev_close_many) },
	{ 0x1baff60f, __VMLINUX_SYMBOL_STR(rtnl_link_register) },
	{ 0xbdd9a237, __VMLINUX_SYMBOL_STR(dev_uc_del) },
	{ 0x4d73c532, __VMLINUX_SYMBOL_STR(dev_uc_sync) },
	{ 0x5e020f28, __VMLINUX_SYMBOL_STR(switchdev_port_bridge_dellink) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xe113bbbc, __VMLINUX_SYMBOL_STR(csum_partial) },
	{ 0x2bf597f9, __VMLINUX_SYMBOL_STR(netdev_update_features) },
	{ 0x85670f1d, __VMLINUX_SYMBOL_STR(rtnl_is_locked) },
	{ 0xec6ab376, __VMLINUX_SYMBOL_STR(netdev_default_l2upper_neigh_construct) },
	{ 0x5b344826, __VMLINUX_SYMBOL_STR(dev_queue_xmit) },
	{ 0x8d522714, __VMLINUX_SYMBOL_STR(__rcu_read_lock) },
	{ 0x397631cd, __VMLINUX_SYMBOL_STR(mrp_unregister_application) },
	{ 0xf3fa622c, __VMLINUX_SYMBOL_STR(mrp_request_join) },
	{ 0xbdc15b4, __VMLINUX_SYMBOL_STR(dev_mc_sync) },
	{ 0x5bc29bd9, __VMLINUX_SYMBOL_STR(netdev_default_l2upper_neigh_destroy) },
	{ 0x6e720ff2, __VMLINUX_SYMBOL_STR(rtnl_unlock) },
	{ 0x697d0759, __VMLINUX_SYMBOL_STR(dev_get_stats) },
	{ 0x6dde7a60, __VMLINUX_SYMBOL_STR(dev_set_mtu) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mrp,garp";


MODULE_INFO(srcversion, "4EB55796B54F8ED00625C88");
