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
	{ 0x134666f0, __VMLINUX_SYMBOL_STR(unregister_tcf_proto_ops) },
	{ 0x1becc708, __VMLINUX_SYMBOL_STR(register_tcf_proto_ops) },
	{ 0xa3a633c3, __VMLINUX_SYMBOL_STR(__skb_flow_dissect) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xcc71f6cf, __VMLINUX_SYMBOL_STR(__tcf_em_tree_match) },
	{ 0xbddbd222, __VMLINUX_SYMBOL_STR(from_kuid) },
	{ 0xcef801f7, __VMLINUX_SYMBOL_STR(from_kgid) },
	{ 0xf371b6f6, __VMLINUX_SYMBOL_STR(__skb_get_hash) },
	{ 0xd437c286, __VMLINUX_SYMBOL_STR(flow_get_u32_src) },
	{ 0x12d603f9, __VMLINUX_SYMBOL_STR(tcf_action_exec) },
	{ 0x6091644e, __VMLINUX_SYMBOL_STR(flow_keys_dissector) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0xad94cdc6, __VMLINUX_SYMBOL_STR(flow_get_u32_dst) },
	{ 0x19f462ab, __VMLINUX_SYMBOL_STR(kfree_call_rcu) },
	{ 0x6b2dc060, __VMLINUX_SYMBOL_STR(dump_stack) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x1e579dc5, __VMLINUX_SYMBOL_STR(__list_add_rcu) },
	{ 0xdd3916ac, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0xa1d55e90, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0x85670f1d, __VMLINUX_SYMBOL_STR(rtnl_is_locked) },
	{ 0xf1eb931e, __VMLINUX_SYMBOL_STR(tcf_exts_change) },
	{ 0x8fdf772a, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x6e3e437e, __VMLINUX_SYMBOL_STR(init_user_ns) },
	{ 0x7f1a815a, __VMLINUX_SYMBOL_STR(tcf_em_tree_validate) },
	{ 0xcd88709d, __VMLINUX_SYMBOL_STR(tcf_exts_validate) },
	{ 0x74c134b9, __VMLINUX_SYMBOL_STR(__sw_hweight32) },
	{ 0x4f391d0e, __VMLINUX_SYMBOL_STR(nla_parse) },
	{ 0x147fb690, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xf6789fdc, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xfa5bcf35, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x79aa04a2, __VMLINUX_SYMBOL_STR(get_random_bytes) },
	{ 0x28aa6a67, __VMLINUX_SYMBOL_STR(call_rcu) },
	{ 0x65e75cb6, __VMLINUX_SYMBOL_STR(__list_del_entry) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xb17482f5, __VMLINUX_SYMBOL_STR(tcf_em_tree_destroy) },
	{ 0xb9270e8a, __VMLINUX_SYMBOL_STR(tcf_exts_destroy) },
	{ 0x3f5c6471, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x9c5102ac, __VMLINUX_SYMBOL_STR(tcf_exts_dump_stats) },
	{ 0x831ba65e, __VMLINUX_SYMBOL_STR(tcf_em_tree_dump) },
	{ 0x7f5f113f, __VMLINUX_SYMBOL_STR(tcf_exts_dump) },
	{ 0x71f7577d, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0x73ea6fe7, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

