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
	{ 0xf6789fdc, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xabb6669b, __VMLINUX_SYMBOL_STR(transport_deregister_session) },
	{ 0xefe21d65, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xc7b7a684, __VMLINUX_SYMBOL_STR(target_put_sess_cmd) },
	{ 0xe45ce71a, __VMLINUX_SYMBOL_STR(core_tpg_register) },
	{ 0x43a53735, __VMLINUX_SYMBOL_STR(__alloc_workqueue_key) },
	{ 0x811a7a55, __VMLINUX_SYMBOL_STR(fc_fc4_register_provider) },
	{ 0x8239a15b, __VMLINUX_SYMBOL_STR(fc_lport_iterate) },
	{ 0x235f39b4, __VMLINUX_SYMBOL_STR(transport_generic_free_cmd) },
	{ 0x19f462ab, __VMLINUX_SYMBOL_STR(kfree_call_rcu) },
	{ 0x1b3cc295, __VMLINUX_SYMBOL_STR(percpu_ida_free) },
	{ 0x46add53d, __VMLINUX_SYMBOL_STR(target_register_template) },
	{ 0x1f4cb475, __VMLINUX_SYMBOL_STR(target_sess_cmd_list_set_waiting) },
	{ 0x11f7ed4c, __VMLINUX_SYMBOL_STR(hex_to_bin) },
	{ 0xe5b05751, __VMLINUX_SYMBOL_STR(core_tpg_deregister) },
	{ 0x69c03fc5, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0xd5152710, __VMLINUX_SYMBOL_STR(sg_next) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xdbe8baac, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x9402a6a5, __VMLINUX_SYMBOL_STR(scsilun_to_int) },
	{ 0xaaea5f86, __VMLINUX_SYMBOL_STR(target_submit_cmd) },
	{ 0xb2c6092a, __VMLINUX_SYMBOL_STR(blocking_notifier_chain_unregister) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0x49163ab3, __VMLINUX_SYMBOL_STR(kmap_atomic) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x11089ac7, __VMLINUX_SYMBOL_STR(_ctype) },
	{ 0xf3d76145, __VMLINUX_SYMBOL_STR(_fc_frame_alloc) },
	{ 0xd2276c53, __VMLINUX_SYMBOL_STR(fc_fill_reply_hdr) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x50a7f5ba, __VMLINUX_SYMBOL_STR(core_tpg_set_initiator_node_tag) },
	{ 0x11faeec9, __VMLINUX_SYMBOL_STR(transport_deregister_session_configfs) },
	{ 0x5a099bd9, __VMLINUX_SYMBOL_STR(fc_fc4_deregister_provider) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xfed0a669, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xed93f29e, __VMLINUX_SYMBOL_STR(__kunmap_atomic) },
	{ 0x8c03d20c, __VMLINUX_SYMBOL_STR(destroy_workqueue) },
	{ 0x521445b, __VMLINUX_SYMBOL_STR(list_del) },
	{ 0x1e6d26a8, __VMLINUX_SYMBOL_STR(strstr) },
	{ 0x2469810f, __VMLINUX_SYMBOL_STR(__rcu_read_unlock) },
	{ 0x359dd783, __VMLINUX_SYMBOL_STR(fc_frame_alloc_fill) },
	{ 0x6091797f, __VMLINUX_SYMBOL_STR(synchronize_rcu) },
	{ 0xc3a20356, __VMLINUX_SYMBOL_STR(percpu_ida_alloc) },
	{ 0x45411897, __VMLINUX_SYMBOL_STR(target_unregister_template) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xba8bb333, __VMLINUX_SYMBOL_STR(___ratelimit) },
	{ 0x4a6761ad, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x996bdb64, __VMLINUX_SYMBOL_STR(_kstrtoul) },
	{ 0xccabb3a8, __VMLINUX_SYMBOL_STR(blocking_notifier_chain_register) },
	{ 0x147fb690, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xbbf6680d, __VMLINUX_SYMBOL_STR(fc_lport_notifier_head) },
	{ 0xcff65047, __VMLINUX_SYMBOL_STR(target_alloc_session) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x3270c16f, __VMLINUX_SYMBOL_STR(target_wait_for_sess_cmds) },
	{ 0x60539095, __VMLINUX_SYMBOL_STR(target_submit_tmr) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x7c9c915a, __VMLINUX_SYMBOL_STR(target_execute_cmd) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x8d522714, __VMLINUX_SYMBOL_STR(__rcu_read_lock) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=target_core_mod,libfc";

