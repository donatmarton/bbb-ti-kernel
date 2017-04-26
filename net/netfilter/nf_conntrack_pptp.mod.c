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
	{ 0xe0b469c5, __VMLINUX_SYMBOL_STR(nf_ct_unexpect_related) },
	{ 0x9358f1fc, __VMLINUX_SYMBOL_STR(nf_conntrack_helper_register) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x6c09c2a4, __VMLINUX_SYMBOL_STR(del_timer) },
	{ 0xef4a643, __VMLINUX_SYMBOL_STR(nf_ct_gre_keymap_add) },
	{ 0x99bab161, __VMLINUX_SYMBOL_STR(nf_ct_zone_dflt) },
	{ 0x644e3ba5, __VMLINUX_SYMBOL_STR(nf_conntrack_helper_unregister) },
	{ 0x44b1d426, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0xed97177a, __VMLINUX_SYMBOL_STR(nf_ct_expect_init) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xcc614bf1, __VMLINUX_SYMBOL_STR(nf_ct_expect_find_get) },
	{ 0x3c3fce39, __VMLINUX_SYMBOL_STR(__local_bh_enable_ip) },
	{ 0x7a919ccc, __VMLINUX_SYMBOL_STR(nf_ct_expect_put) },
	{ 0x77feacf9, __VMLINUX_SYMBOL_STR(nf_ct_expect_alloc) },
	{ 0x24f09db9, __VMLINUX_SYMBOL_STR(nf_ct_expect_related_report) },
	{ 0x2469810f, __VMLINUX_SYMBOL_STR(__rcu_read_unlock) },
	{ 0x4934abe2, __VMLINUX_SYMBOL_STR(nf_ct_gre_keymap_destroy) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x2a18c74, __VMLINUX_SYMBOL_STR(nf_conntrack_destroy) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x8d522714, __VMLINUX_SYMBOL_STR(__rcu_read_lock) },
	{ 0xf229424a, __VMLINUX_SYMBOL_STR(preempt_count_add) },
	{ 0x372da3af, __VMLINUX_SYMBOL_STR(skb_copy_bits) },
	{ 0xae180683, __VMLINUX_SYMBOL_STR(nf_conntrack_find_get) },
	{ 0x90ff6c9f, __VMLINUX_SYMBOL_STR(nf_ct_invert_tuplepr) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nf_conntrack,nf_conntrack_proto_gre";

