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
	{ 0x80b8c198, __VMLINUX_SYMBOL_STR(nft_unregister_set) },
	{ 0x991e46c3, __VMLINUX_SYMBOL_STR(nft_register_set) },
	{ 0x65c4db7b, __VMLINUX_SYMBOL_STR(nft_set_gc_batch_alloc) },
	{ 0x28aa6a67, __VMLINUX_SYMBOL_STR(call_rcu) },
	{ 0xbf63bb61, __VMLINUX_SYMBOL_STR(nft_set_gc_batch_release) },
	{ 0xcea0e908, __VMLINUX_SYMBOL_STR(rhashtable_insert_slow) },
	{ 0x1801ff94, __VMLINUX_SYMBOL_STR(rhashtable_insert_rehash) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x2469810f, __VMLINUX_SYMBOL_STR(__rcu_read_unlock) },
	{ 0x3c3fce39, __VMLINUX_SYMBOL_STR(__local_bh_enable_ip) },
	{ 0xf229424a, __VMLINUX_SYMBOL_STR(preempt_count_add) },
	{ 0x8d522714, __VMLINUX_SYMBOL_STR(__rcu_read_lock) },
	{ 0x35744920, __VMLINUX_SYMBOL_STR(rhashtable_init) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x7f02188f, __VMLINUX_SYMBOL_STR(__msecs_to_jiffies) },
	{ 0x3f616ce2, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0x47884890, __VMLINUX_SYMBOL_STR(system_power_efficient_wq) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0x9580deb, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x58bf90a2, __VMLINUX_SYMBOL_STR(rhashtable_walk_exit) },
	{ 0x939ea116, __VMLINUX_SYMBOL_STR(rhashtable_walk_stop) },
	{ 0x2943c009, __VMLINUX_SYMBOL_STR(rhashtable_walk_next) },
	{ 0x463788ac, __VMLINUX_SYMBOL_STR(rhashtable_walk_start) },
	{ 0x22ccd060, __VMLINUX_SYMBOL_STR(rhashtable_walk_init) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xce1de6b, __VMLINUX_SYMBOL_STR(nft_set_elem_destroy) },
	{ 0x315979e4, __VMLINUX_SYMBOL_STR(rhashtable_free_and_destroy) },
	{ 0x4c29dcbf, __VMLINUX_SYMBOL_STR(cancel_delayed_work_sync) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nf_tables";

