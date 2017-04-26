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
	{ 0x18096457, __VMLINUX_SYMBOL_STR(eth_mac_addr) },
	{ 0xe24b0875, __VMLINUX_SYMBOL_STR(unregister_pernet_device) },
	{ 0x337f2432, __VMLINUX_SYMBOL_STR(l2tp_nl_unregister_ops) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xce21811a, __VMLINUX_SYMBOL_STR(register_pernet_device) },
	{ 0x55649633, __VMLINUX_SYMBOL_STR(l2tp_nl_register_ops) },
	{ 0xb6fd6e94, __VMLINUX_SYMBOL_STR(l2tp_xmit_skb) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xdf7e38c4, __VMLINUX_SYMBOL_STR(l2tp_session_delete) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0xd74f9f2e, __VMLINUX_SYMBOL_STR(__module_get) },
	{ 0x63fda361, __VMLINUX_SYMBOL_STR(register_netdev) },
	{ 0x3835e6a1, __VMLINUX_SYMBOL_STR(alloc_netdev_mqs) },
	{ 0x7563c5f2, __VMLINUX_SYMBOL_STR(l2tp_session_create) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x356c37ef, __VMLINUX_SYMBOL_STR(dev_get_by_name) },
	{ 0xeeed5de0, __VMLINUX_SYMBOL_STR(l2tp_session_find) },
	{ 0xd69dc186, __VMLINUX_SYMBOL_STR(l2tp_tunnel_find) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x43b0c9c3, __VMLINUX_SYMBOL_STR(preempt_schedule) },
	{ 0x706c5a65, __VMLINUX_SYMBOL_STR(preempt_count_sub) },
	{ 0x65e75cb6, __VMLINUX_SYMBOL_STR(__list_del_entry) },
	{ 0xf229424a, __VMLINUX_SYMBOL_STR(preempt_count_add) },
	{ 0x79aa04a2, __VMLINUX_SYMBOL_STR(get_random_bytes) },
	{ 0xbe43413c, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0xf24c3d4, __VMLINUX_SYMBOL_STR(ether_setup) },
	{ 0x44b1d426, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0x4059792f, __VMLINUX_SYMBOL_STR(print_hex_dump) },
	{ 0x86253b33, __VMLINUX_SYMBOL_STR(dst_release) },
	{ 0x4a211dfd, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x9047332b, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0x17f5127d, __VMLINUX_SYMBOL_STR(__secpath_destroy) },
	{ 0x2a18c74, __VMLINUX_SYMBOL_STR(nf_conntrack_destroy) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xcae75a4c, __VMLINUX_SYMBOL_STR(dev_forward_skb) },
	{ 0x2d9b9ea6, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0x95eef112, __VMLINUX_SYMBOL_STR(unregister_netdev) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xe6657df, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0x2469810f, __VMLINUX_SYMBOL_STR(__rcu_read_unlock) },
	{ 0x8d522714, __VMLINUX_SYMBOL_STR(__rcu_read_lock) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=l2tp_netlink,l2tp_core";


MODULE_INFO(srcversion, "CEC8C430EAC355F57639AFC");
