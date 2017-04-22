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
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x528c709d, __VMLINUX_SYMBOL_STR(simple_read_from_buffer) },
	{ 0x5fc56a46, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0x1d810aa0, __VMLINUX_SYMBOL_STR(generic_file_llseek) },
	{ 0x5d443c09, __VMLINUX_SYMBOL_STR(debugfs_create_dir) },
	{ 0x3e95f6d, __VMLINUX_SYMBOL_STR(wimax_dev_init) },
	{ 0x349cba85, __VMLINUX_SYMBOL_STR(strchr) },
	{ 0x8265a18d, __VMLINUX_SYMBOL_STR(debugfs_create_u8) },
	{ 0xefe21d65, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x77464dd9, __VMLINUX_SYMBOL_STR(wimax_report_rfkill_sw) },
	{ 0x43a53735, __VMLINUX_SYMBOL_STR(__alloc_workqueue_key) },
	{ 0x79aa04a2, __VMLINUX_SYMBOL_STR(get_random_bytes) },
	{ 0xe9a8f7eb, __VMLINUX_SYMBOL_STR(wimax_msg_data) },
	{ 0x6d4e025a, __VMLINUX_SYMBOL_STR(netif_carrier_on) },
	{ 0x3007ee30, __VMLINUX_SYMBOL_STR(skb_clone) },
	{ 0xd7dd8451, __VMLINUX_SYMBOL_STR(netif_carrier_off) },
	{ 0x27094409, __VMLINUX_SYMBOL_STR(wimax_state_change) },
	{ 0x4205ad24, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xdbe8baac, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x85df9b6c, __VMLINUX_SYMBOL_STR(strsep) },
	{ 0x40f24b28, __VMLINUX_SYMBOL_STR(debugfs_create_file) },
	{ 0xa23f1c57, __VMLINUX_SYMBOL_STR(debugfs_remove_recursive) },
	{ 0xb1ea493e, __VMLINUX_SYMBOL_STR(sysfs_remove_group) },
	{ 0xc499ae1e, __VMLINUX_SYMBOL_STR(kstrdup) },
	{ 0x6b16945, __VMLINUX_SYMBOL_STR(wimax_msg_send) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0x51b652f, __VMLINUX_SYMBOL_STR(mutex_trylock) },
	{ 0x71f7577d, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0xb743dd09, __VMLINUX_SYMBOL_STR(simple_attr_read) },
	{ 0x5b110496, __VMLINUX_SYMBOL_STR(param_ops_string) },
	{ 0x6c119f4d, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x342bcc54, __VMLINUX_SYMBOL_STR(debugfs_create_u32) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x49151079, __VMLINUX_SYMBOL_STR(netif_rx_ni) },
	{ 0x4b204e74, __VMLINUX_SYMBOL_STR(default_llseek) },
	{ 0x69329b6c, __VMLINUX_SYMBOL_STR(netif_tx_wake_queue) },
	{ 0x54d8d6ef, __VMLINUX_SYMBOL_STR(wimax_msg_data_len) },
	{ 0x752aeb9e, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x5a32f871, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x75d494e0, __VMLINUX_SYMBOL_STR(ethtool_op_get_link) },
	{ 0x20c55ae0, __VMLINUX_SYMBOL_STR(sscanf) },
	{ 0x3c3fce39, __VMLINUX_SYMBOL_STR(__local_bh_enable_ip) },
	{ 0x19d3b7d8, __VMLINUX_SYMBOL_STR(sysfs_create_group) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0xc917e655, __VMLINUX_SYMBOL_STR(debug_smp_processor_id) },
	{ 0x37d0e1df, __VMLINUX_SYMBOL_STR(debugfs_create_size_t) },
	{ 0x63eea3ef, __VMLINUX_SYMBOL_STR(register_netdev) },
	{ 0xd146eba5, __VMLINUX_SYMBOL_STR(wimax_state_get) },
	{ 0x9cc4f70a, __VMLINUX_SYMBOL_STR(register_pm_notifier) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xfdf8f58f, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0xfed0a669, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x8c03d20c, __VMLINUX_SYMBOL_STR(destroy_workqueue) },
	{ 0x521445b, __VMLINUX_SYMBOL_STR(list_del) },
	{ 0xcbc15637, __VMLINUX_SYMBOL_STR(simple_attr_release) },
	{ 0x9badcfb5, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0xc4b244af, __VMLINUX_SYMBOL_STR(simple_open) },
	{ 0x42160169, __VMLINUX_SYMBOL_STR(flush_workqueue) },
	{ 0x622598b1, __VMLINUX_SYMBOL_STR(init_wait_entry) },
	{ 0xae39fe56, __VMLINUX_SYMBOL_STR(wimax_report_rfkill_hw) },
	{ 0x4059792f, __VMLINUX_SYMBOL_STR(print_hex_dump) },
	{ 0x857b0b4c, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x19ae5009, __VMLINUX_SYMBOL_STR(wimax_msg_alloc) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x2a0a7ee7, __VMLINUX_SYMBOL_STR(wimax_dev_add) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0x4a6761ad, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x6c6cdd4d, __VMLINUX_SYMBOL_STR(wait_for_completion_interruptible_timeout) },
	{ 0xe974e838, __VMLINUX_SYMBOL_STR(dev_driver_string) },
	{ 0xe41b0acf, __VMLINUX_SYMBOL_STR(pskb_expand_head) },
	{ 0xe61bcaa3, __VMLINUX_SYMBOL_STR(ether_setup) },
	{ 0x147fb690, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xd85cd67e, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0xf6ebc03b, __VMLINUX_SYMBOL_STR(net_ratelimit) },
	{ 0x4c5b7d56, __VMLINUX_SYMBOL_STR(wimax_dev_rm) },
	{ 0x344b7739, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x822137e2, __VMLINUX_SYMBOL_STR(arm_heavy_mb) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x2e7287a7, __VMLINUX_SYMBOL_STR(wimax_msg) },
	{ 0x6128b5fc, __VMLINUX_SYMBOL_STR(__printk_ratelimit) },
	{ 0x7681946c, __VMLINUX_SYMBOL_STR(unregister_pm_notifier) },
	{ 0xde0aeb10, __VMLINUX_SYMBOL_STR(request_firmware) },
	{ 0x1cfb04fa, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0xaa7d42d1, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x3d8dc21b, __VMLINUX_SYMBOL_STR(unregister_netdev) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xd4669fad, __VMLINUX_SYMBOL_STR(complete) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x99bb8806, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0xcb62ec7d, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0xf229424a, __VMLINUX_SYMBOL_STR(preempt_count_add) },
	{ 0x9cfd625d, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x7cf9099, __VMLINUX_SYMBOL_STR(wait_for_completion_timeout) },
	{ 0x325a7389, __VMLINUX_SYMBOL_STR(simple_attr_open) },
	{ 0x3743de2b, __VMLINUX_SYMBOL_STR(release_firmware) },
	{ 0x689a8ed3, __VMLINUX_SYMBOL_STR(simple_attr_write) },
	{ 0xb859f38b, __VMLINUX_SYMBOL_STR(krealloc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=wimax";

