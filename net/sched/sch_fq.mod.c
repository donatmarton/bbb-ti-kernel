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
	{ 0x835ce72c, __VMLINUX_SYMBOL_STR(unregister_qdisc) },
	{ 0xb5233f3e, __VMLINUX_SYMBOL_STR(kmem_cache_destroy) },
	{ 0x5f51b09, __VMLINUX_SYMBOL_STR(register_qdisc) },
	{ 0x71aa3ade, __VMLINUX_SYMBOL_STR(kmem_cache_create) },
	{ 0x64e2031e, __VMLINUX_SYMBOL_STR(qdisc_watchdog_init) },
	{ 0x866a4018, __VMLINUX_SYMBOL_STR(qdisc_tree_reduce_backlog) },
	{ 0xf1969a8e, __VMLINUX_SYMBOL_STR(__usecs_to_jiffies) },
	{ 0x2fd85baf, __VMLINUX_SYMBOL_STR(___ratelimit) },
	{ 0x4f391d0e, __VMLINUX_SYMBOL_STR(nla_parse) },
	{ 0x6b2dc060, __VMLINUX_SYMBOL_STR(dump_stack) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x23fd3028, __VMLINUX_SYMBOL_STR(vmalloc_node) },
	{ 0x3c3fce39, __VMLINUX_SYMBOL_STR(__local_bh_enable_ip) },
	{ 0xf229424a, __VMLINUX_SYMBOL_STR(preempt_count_add) },
	{ 0x85670f1d, __VMLINUX_SYMBOL_STR(rtnl_is_locked) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x81992dc0, __VMLINUX_SYMBOL_STR(__skb_get_hash) },
	{ 0x55184b5d, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0xa5526619, __VMLINUX_SYMBOL_STR(rb_insert_color) },
	{ 0x59e5070d, __VMLINUX_SYMBOL_STR(__do_div64) },
	{ 0xaf238246, __VMLINUX_SYMBOL_STR(qdisc_watchdog_schedule_ns) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x94b5ce11, __VMLINUX_SYMBOL_STR(qdisc_watchdog_cancel) },
	{ 0x7aa1756e, __VMLINUX_SYMBOL_STR(kvfree) },
	{ 0xf4b6cdae, __VMLINUX_SYMBOL_STR(kmem_cache_free) },
	{ 0x4d9b652b, __VMLINUX_SYMBOL_STR(rb_erase) },
	{ 0xece784c2, __VMLINUX_SYMBOL_STR(rb_first) },
	{ 0x4a211dfd, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x7f24de73, __VMLINUX_SYMBOL_STR(jiffies_to_usecs) },
	{ 0xd845cf95, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xd0697c19, __VMLINUX_SYMBOL_STR(gnet_stats_copy_app) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xc87c1f84, __VMLINUX_SYMBOL_STR(ktime_get) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

