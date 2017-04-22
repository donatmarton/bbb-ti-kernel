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
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0xf6789fdc, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x65e75cb6, __VMLINUX_SYMBOL_STR(__list_del_entry) },
	{ 0xfeda2479, __VMLINUX_SYMBOL_STR(l2cap_chan_set_defaults) },
	{ 0x5fc56a46, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0x1d810aa0, __VMLINUX_SYMBOL_STR(generic_file_llseek) },
	{ 0xc7fd8e9, __VMLINUX_SYMBOL_STR(single_open) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x19f462ab, __VMLINUX_SYMBOL_STR(kfree_call_rcu) },
	{ 0xbe2068f9, __VMLINUX_SYMBOL_STR(single_release) },
	{ 0x7d2fb7fb, __VMLINUX_SYMBOL_STR(l2cap_chan_del) },
	{ 0xc7a4fbed, __VMLINUX_SYMBOL_STR(rtnl_lock) },
	{ 0x3007ee30, __VMLINUX_SYMBOL_STR(skb_clone) },
	{ 0x21e66d84, __VMLINUX_SYMBOL_STR(skb_copy) },
	{ 0xa260a067, __VMLINUX_SYMBOL_STR(lowpan_header_compress) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0x40a9317a, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0xd2da1048, __VMLINUX_SYMBOL_STR(register_netdevice_notifier) },
	{ 0x69c03fc5, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0x85f8c4f, __VMLINUX_SYMBOL_STR(l2cap_chan_send) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x8fdf772a, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x28cc25db, __VMLINUX_SYMBOL_STR(arm_copy_from_user) },
	{ 0xa0744ea9, __VMLINUX_SYMBOL_STR(cancel_delayed_work_sync) },
	{ 0xdbe8baac, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xf40f9d87, __VMLINUX_SYMBOL_STR(l2cap_add_psm) },
	{ 0x40f24b28, __VMLINUX_SYMBOL_STR(debugfs_create_file) },
	{ 0x69e412be, __VMLINUX_SYMBOL_STR(seq_read) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0x9d0d6206, __VMLINUX_SYMBOL_STR(unregister_netdevice_notifier) },
	{ 0xb743dd09, __VMLINUX_SYMBOL_STR(simple_attr_read) },
	{ 0x47022514, __VMLINUX_SYMBOL_STR(bt_err) },
	{ 0x633eae3a, __VMLINUX_SYMBOL_STR(l2cap_chan_close) },
	{ 0xd7442057, __VMLINUX_SYMBOL_STR(bt_info) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x53d1863b, __VMLINUX_SYMBOL_STR(hci_get_route) },
	{ 0x49151079, __VMLINUX_SYMBOL_STR(netif_rx_ni) },
	{ 0xa61e23be, __VMLINUX_SYMBOL_STR(l2cap_chan_put) },
	{ 0x20c55ae0, __VMLINUX_SYMBOL_STR(sscanf) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x535890a0, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0xcc10a430, __VMLINUX_SYMBOL_STR(iov_iter_kvec) },
	{ 0xd2d3bc80, __VMLINUX_SYMBOL_STR(debugfs_remove) },
	{ 0xfed0a669, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xda331ba4, __VMLINUX_SYMBOL_STR(dev_close) },
	{ 0x521445b, __VMLINUX_SYMBOL_STR(list_del) },
	{ 0x2469810f, __VMLINUX_SYMBOL_STR(__rcu_read_unlock) },
	{ 0xcbc15637, __VMLINUX_SYMBOL_STR(simple_attr_release) },
	{ 0x9badcfb5, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x9556c3, __VMLINUX_SYMBOL_STR(dev_open) },
	{ 0xbc742b2a, __VMLINUX_SYMBOL_STR(lowpan_header_decompress) },
	{ 0x14846fbb, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0x1f19afd4, __VMLINUX_SYMBOL_STR(skb_copy_expand) },
	{ 0x4317b5e1, __VMLINUX_SYMBOL_STR(lowpan_unregister_netdev) },
	{ 0xd231a1c2, __VMLINUX_SYMBOL_STR(bt_debugfs) },
	{ 0x2005e93f, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0x85d472aa, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x4a6761ad, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x702291be, __VMLINUX_SYMBOL_STR(alloc_netdev_mqs) },
	{ 0x1e579dc5, __VMLINUX_SYMBOL_STR(__list_add_rcu) },
	{ 0x256f720e, __VMLINUX_SYMBOL_STR(l2cap_chan_connect) },
	{ 0x37351678, __VMLINUX_SYMBOL_STR(netdev_notify_peers) },
	{ 0xd8a93e1b, __VMLINUX_SYMBOL_STR(lowpan_register_netdev) },
	{ 0x147fb690, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x645c4840, __VMLINUX_SYMBOL_STR(l2cap_chan_create) },
	{ 0x99062aba, __VMLINUX_SYMBOL_STR(seq_lseek) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xcb62ec7d, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0x8d522714, __VMLINUX_SYMBOL_STR(__rcu_read_lock) },
	{ 0x325a7389, __VMLINUX_SYMBOL_STR(simple_attr_open) },
	{ 0x6e720ff2, __VMLINUX_SYMBOL_STR(rtnl_unlock) },
	{ 0xb8e4fba7, __VMLINUX_SYMBOL_STR(try_module_get) },
	{ 0x689a8ed3, __VMLINUX_SYMBOL_STR(simple_attr_write) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=bluetooth,6lowpan";


MODULE_INFO(srcversion, "D2F3DF807A543ADB44C44DA");
