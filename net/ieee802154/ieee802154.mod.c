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
	{ 0x64e15f03, __VMLINUX_SYMBOL_STR(class_find_device) },
	{ 0x7b8c3a36, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x65e75cb6, __VMLINUX_SYMBOL_STR(__list_del_entry) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xce264ecd, __VMLINUX_SYMBOL_STR(perf_tp_event) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0xc2c01528, __VMLINUX_SYMBOL_STR(genl_unregister_family) },
	{ 0xc7a4fbed, __VMLINUX_SYMBOL_STR(rtnl_lock) },
	{ 0x356c37ef, __VMLINUX_SYMBOL_STR(dev_get_by_name) },
	{ 0xd2da1048, __VMLINUX_SYMBOL_STR(register_netdevice_notifier) },
	{ 0x44b1d426, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x86734dc1, __VMLINUX_SYMBOL_STR(__genl_register_family) },
	{ 0xc4170d75, __VMLINUX_SYMBOL_STR(trace_event_buffer_reserve) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x9d0d6206, __VMLINUX_SYMBOL_STR(unregister_netdevice_notifier) },
	{ 0x18cf6166, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x9047332b, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0x63b87fc5, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xf1db1704, __VMLINUX_SYMBOL_STR(nla_memcpy) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xa347d50f, __VMLINUX_SYMBOL_STR(trace_define_field) },
	{ 0xbcb93783, __VMLINUX_SYMBOL_STR(dev_set_mac_address) },
	{ 0x706c5a65, __VMLINUX_SYMBOL_STR(preempt_count_sub) },
	{ 0xe8f0c061, __VMLINUX_SYMBOL_STR(device_del) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xe70f5df4, __VMLINUX_SYMBOL_STR(class_unregister) },
	{ 0x1d693da5, __VMLINUX_SYMBOL_STR(trace_event_reg) },
	{ 0xd845cf95, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x8286a48, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0x1b06fe44, __VMLINUX_SYMBOL_STR(dev_get_by_index) },
	{ 0xc9533946, __VMLINUX_SYMBOL_STR(netlink_unicast) },
	{ 0xf080ed1a, __VMLINUX_SYMBOL_STR(device_add) },
	{ 0x6091797f, __VMLINUX_SYMBOL_STR(synchronize_rcu) },
	{ 0x43b0c9c3, __VMLINUX_SYMBOL_STR(preempt_schedule) },
	{ 0x43102a32, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0xf70e4a4d, __VMLINUX_SYMBOL_STR(preempt_schedule_notrace) },
	{ 0xc00ce02, __VMLINUX_SYMBOL_STR(init_net) },
	{ 0xdae9baa6, __VMLINUX_SYMBOL_STR(__class_register) },
	{ 0xdb70ffac, __VMLINUX_SYMBOL_STR(__dev_get_by_index) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0x7b58be5, __VMLINUX_SYMBOL_STR(class_for_each_device) },
	{ 0xc2102972, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0x58c9324e, __VMLINUX_SYMBOL_STR(netlink_broadcast) },
	{ 0xea8184e, __VMLINUX_SYMBOL_STR(trace_event_ignore_this_pid) },
	{ 0x7c8e67a0, __VMLINUX_SYMBOL_STR(put_device) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x4f391d0e, __VMLINUX_SYMBOL_STR(nla_parse) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0x4a211dfd, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x6b2dc060, __VMLINUX_SYMBOL_STR(dump_stack) },
	{ 0x53adf70b, __VMLINUX_SYMBOL_STR(trace_event_buffer_commit) },
	{ 0x1e579dc5, __VMLINUX_SYMBOL_STR(__list_add_rcu) },
	{ 0xcaa1a2be, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xd9ff3ac3, __VMLINUX_SYMBOL_STR(get_device) },
	{ 0xb9e52429, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x6a9ae4fd, __VMLINUX_SYMBOL_STR(event_triggers_call) },
	{ 0x158f2f00, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x1e236e68, __VMLINUX_SYMBOL_STR(trace_event_raw_init) },
	{ 0x7b9701b7, __VMLINUX_SYMBOL_STR(genlmsg_put) },
	{ 0x6cdc5c6b, __VMLINUX_SYMBOL_STR(nla_strlcpy) },
	{ 0xff58b518, __VMLINUX_SYMBOL_STR(device_initialize) },
	{ 0x1ff6c8b8, __VMLINUX_SYMBOL_STR(perf_trace_buf_prepare) },
	{ 0x8893fa5d, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x3139b15e, __VMLINUX_SYMBOL_STR(trace_raw_output_prep) },
	{ 0x3c93ea25, __VMLINUX_SYMBOL_STR(trace_seq_printf) },
	{ 0xf0341762, __VMLINUX_SYMBOL_STR(trace_output_call) },
	{ 0xd035cb86, __VMLINUX_SYMBOL_STR(dev_set_name) },
	{ 0x85670f1d, __VMLINUX_SYMBOL_STR(rtnl_is_locked) },
	{ 0xf229424a, __VMLINUX_SYMBOL_STR(preempt_count_add) },
	{ 0x6e720ff2, __VMLINUX_SYMBOL_STR(rtnl_unlock) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

