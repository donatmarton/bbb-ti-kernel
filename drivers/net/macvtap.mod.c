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
	{ 0x8a22159a, __VMLINUX_SYMBOL_STR(cdev_del) },
	{ 0x65e75cb6, __VMLINUX_SYMBOL_STR(__list_del_entry) },
	{ 0x928f39a5, __VMLINUX_SYMBOL_STR(sock_init_data) },
	{ 0x7589d363, __VMLINUX_SYMBOL_STR(cdev_init) },
	{ 0x2c675d9e, __VMLINUX_SYMBOL_STR(iov_iter_npages) },
	{ 0xf31b6da1, __VMLINUX_SYMBOL_STR(__skb_gso_segment) },
	{ 0x8ffc1b15, __VMLINUX_SYMBOL_STR(macvlan_dellink) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xc8b57c27, __VMLINUX_SYMBOL_STR(autoremove_wake_function) },
	{ 0x486973ce, __VMLINUX_SYMBOL_STR(__skb_flow_dissect) },
	{ 0xfdf893ec, __VMLINUX_SYMBOL_STR(skb_copy_datagram_from_iter) },
	{ 0xe05aa88f, __VMLINUX_SYMBOL_STR(netdev_rx_handler_register) },
	{ 0xc7a4fbed, __VMLINUX_SYMBOL_STR(rtnl_lock) },
	{ 0xb5a12ae1, __VMLINUX_SYMBOL_STR(no_llseek) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0x5e143f92, __VMLINUX_SYMBOL_STR(macvlan_common_newlink) },
	{ 0x6cafaa20, __VMLINUX_SYMBOL_STR(copy_from_iter) },
	{ 0xd2da1048, __VMLINUX_SYMBOL_STR(register_netdevice_notifier) },
	{ 0x1ddda5d2, __VMLINUX_SYMBOL_STR(device_destroy) },
	{ 0x353e3fa5, __VMLINUX_SYMBOL_STR(__get_user_4) },
	{ 0xa3c9d93e, __VMLINUX_SYMBOL_STR(sock_alloc_send_pskb) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xb0e9cc76, __VMLINUX_SYMBOL_STR(macvlan_link_register) },
	{ 0x28cc25db, __VMLINUX_SYMBOL_STR(arm_copy_from_user) },
	{ 0x62b72b0d, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x7485e15e, __VMLINUX_SYMBOL_STR(unregister_chrdev_region) },
	{ 0xe5b38f, __VMLINUX_SYMBOL_STR(skb_partial_csum_set) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0x9d0d6206, __VMLINUX_SYMBOL_STR(unregister_netdevice_notifier) },
	{ 0xf4fa543b, __VMLINUX_SYMBOL_STR(arm_copy_to_user) },
	{ 0x9047332b, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0x63b87fc5, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xfff7d0a3, __VMLINUX_SYMBOL_STR(skb_queue_purge) },
	{ 0xbcb93783, __VMLINUX_SYMBOL_STR(dev_set_mac_address) },
	{ 0x6756906f, __VMLINUX_SYMBOL_STR(idr_destroy) },
	{ 0xb044ec58, __VMLINUX_SYMBOL_STR(sk_alloc) },
	{ 0x6091644e, __VMLINUX_SYMBOL_STR(flow_keys_dissector) },
	{ 0xe059b9ed, __VMLINUX_SYMBOL_STR(skb_copy_datagram_iter) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xe70f5df4, __VMLINUX_SYMBOL_STR(class_unregister) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x8286a48, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0xe16b893b, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xbd392c2a, __VMLINUX_SYMBOL_STR(sk_free) },
	{ 0x9b8d5ba1, __VMLINUX_SYMBOL_STR(device_create) },
	{ 0x2469810f, __VMLINUX_SYMBOL_STR(__rcu_read_unlock) },
	{ 0x8bfd8946, __VMLINUX_SYMBOL_STR(idr_alloc) },
	{ 0x6091797f, __VMLINUX_SYMBOL_STR(synchronize_rcu) },
	{ 0x81992dc0, __VMLINUX_SYMBOL_STR(__skb_get_hash) },
	{ 0x3f1355d5, __VMLINUX_SYMBOL_STR(rtnl_link_unregister) },
	{ 0x4c0745bf, __VMLINUX_SYMBOL_STR(idr_remove) },
	{ 0x9864e30c, __VMLINUX_SYMBOL_STR(cdev_add) },
	{ 0x33c18c1e, __VMLINUX_SYMBOL_STR(skb_queue_tail) },
	{ 0x8fc796ea, __VMLINUX_SYMBOL_STR(idr_find_slowpath) },
	{ 0xbc10dd97, __VMLINUX_SYMBOL_STR(__put_user_4) },
	{ 0x1b605312, __VMLINUX_SYMBOL_STR(macvlan_common_setup) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xf2034f93, __VMLINUX_SYMBOL_STR(netdev_rx_handler_unregister) },
	{ 0x8d37f3ad, __VMLINUX_SYMBOL_STR(skb_checksum_help) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0x4a211dfd, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x6b2dc060, __VMLINUX_SYMBOL_STR(dump_stack) },
	{ 0xb9e52429, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x75a17bed, __VMLINUX_SYMBOL_STR(prepare_to_wait) },
	{ 0x7378222f, __VMLINUX_SYMBOL_STR(iov_iter_advance) },
	{ 0xb9acd3d9, __VMLINUX_SYMBOL_STR(__put_user_2) },
	{ 0x8893fa5d, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0xd2e78255, __VMLINUX_SYMBOL_STR(copy_to_iter) },
	{ 0xa045ff0b, __VMLINUX_SYMBOL_STR(skb_dequeue) },
	{ 0x95dbe078, __VMLINUX_SYMBOL_STR(__get_user_2) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x1d8f4c65, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0xae76e30d, __VMLINUX_SYMBOL_STR(netdev_update_features) },
	{ 0x85670f1d, __VMLINUX_SYMBOL_STR(rtnl_is_locked) },
	{ 0x58d260cf, __VMLINUX_SYMBOL_STR(dev_queue_xmit) },
	{ 0x8d522714, __VMLINUX_SYMBOL_STR(__rcu_read_lock) },
	{ 0xfe8e1ccd, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0xfd418fb8, __VMLINUX_SYMBOL_STR(__class_create) },
	{ 0x34bbda5d, __VMLINUX_SYMBOL_STR(zerocopy_sg_from_iter) },
	{ 0x6e720ff2, __VMLINUX_SYMBOL_STR(rtnl_unlock) },
	{ 0x29537c9e, __VMLINUX_SYMBOL_STR(alloc_chrdev_region) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=macvlan";

