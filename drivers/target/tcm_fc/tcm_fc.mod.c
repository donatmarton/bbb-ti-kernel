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
	{ 0x7b8c3a36, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x6a630897, __VMLINUX_SYMBOL_STR(transport_deregister_session) },
	{ 0x7e42e836, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x55051359, __VMLINUX_SYMBOL_STR(core_tpg_register) },
	{ 0x43a53735, __VMLINUX_SYMBOL_STR(__alloc_workqueue_key) },
	{ 0xd289ebb9, __VMLINUX_SYMBOL_STR(fc_fc4_register_provider) },
	{ 0x89761542, __VMLINUX_SYMBOL_STR(fc_lport_iterate) },
	{ 0xc003bdee, __VMLINUX_SYMBOL_STR(transport_generic_free_cmd) },
	{ 0x19f462ab, __VMLINUX_SYMBOL_STR(kfree_call_rcu) },
	{ 0xd81114aa, __VMLINUX_SYMBOL_STR(percpu_ida_free) },
	{ 0xa58d9fe2, __VMLINUX_SYMBOL_STR(target_register_template) },
	{ 0x11f7ed4c, __VMLINUX_SYMBOL_STR(hex_to_bin) },
	{ 0x98ff3d8f, __VMLINUX_SYMBOL_STR(core_tpg_deregister) },
	{ 0x44b1d426, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0xe094ef39, __VMLINUX_SYMBOL_STR(sg_next) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x62b72b0d, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x9402a6a5, __VMLINUX_SYMBOL_STR(scsilun_to_int) },
	{ 0xe2d97d8a, __VMLINUX_SYMBOL_STR(target_submit_cmd) },
	{ 0x1fde765f, __VMLINUX_SYMBOL_STR(blocking_notifier_chain_unregister) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0xd1a5deac, __VMLINUX_SYMBOL_STR(kmap_atomic) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x11089ac7, __VMLINUX_SYMBOL_STR(_ctype) },
	{ 0xb051d8a3, __VMLINUX_SYMBOL_STR(_fc_frame_alloc) },
	{ 0x6aac9ed2, __VMLINUX_SYMBOL_STR(fc_fill_reply_hdr) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xc9113437, __VMLINUX_SYMBOL_STR(transport_deregister_session_configfs) },
	{ 0xe205bf21, __VMLINUX_SYMBOL_STR(fc_fc4_deregister_provider) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xe16b893b, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xed93f29e, __VMLINUX_SYMBOL_STR(__kunmap_atomic) },
	{ 0x8c03d20c, __VMLINUX_SYMBOL_STR(destroy_workqueue) },
	{ 0x521445b, __VMLINUX_SYMBOL_STR(list_del) },
	{ 0x1e6d26a8, __VMLINUX_SYMBOL_STR(strstr) },
	{ 0x5472c59b, __VMLINUX_SYMBOL_STR(transport_init_session_tags) },
	{ 0x2469810f, __VMLINUX_SYMBOL_STR(__rcu_read_unlock) },
	{ 0xd107a0a9, __VMLINUX_SYMBOL_STR(fc_frame_alloc_fill) },
	{ 0x6091797f, __VMLINUX_SYMBOL_STR(synchronize_rcu) },
	{ 0x92ff36c3, __VMLINUX_SYMBOL_STR(percpu_ida_alloc) },
	{ 0x3e061b94, __VMLINUX_SYMBOL_STR(__get_page_tail) },
	{ 0xbea4899f, __VMLINUX_SYMBOL_STR(target_unregister_template) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x2fd85baf, __VMLINUX_SYMBOL_STR(___ratelimit) },
	{ 0x4a211dfd, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x9578a530, __VMLINUX_SYMBOL_STR(transport_register_session) },
	{ 0x996bdb64, __VMLINUX_SYMBOL_STR(_kstrtoul) },
	{ 0x7e35586b, __VMLINUX_SYMBOL_STR(blocking_notifier_chain_register) },
	{ 0xcaa1a2be, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xf04e50a3, __VMLINUX_SYMBOL_STR(fc_lport_notifier_head) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xf67dec78, __VMLINUX_SYMBOL_STR(target_submit_tmr) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xdfff8b93, __VMLINUX_SYMBOL_STR(target_execute_cmd) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x8d522714, __VMLINUX_SYMBOL_STR(__rcu_read_lock) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=target_core_mod,libfc";

