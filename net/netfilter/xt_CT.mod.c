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
	{ 0x76fc5b4f, __VMLINUX_SYMBOL_STR(xt_unregister_targets) },
	{ 0x698fa4a1, __VMLINUX_SYMBOL_STR(xt_unregister_target) },
	{ 0x83895e05, __VMLINUX_SYMBOL_STR(xt_register_targets) },
	{ 0x8b835691, __VMLINUX_SYMBOL_STR(xt_register_target) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x59f8bf1e, __VMLINUX_SYMBOL_STR(__nf_ct_l4proto_find) },
	{ 0x1c2bbd2, __VMLINUX_SYMBOL_STR(nf_ct_timeout_find_get_hook) },
	{ 0x66fc9250, __VMLINUX_SYMBOL_STR(nf_ct_helper_ext_add) },
	{ 0xdf6cc674, __VMLINUX_SYMBOL_STR(nf_conntrack_helper_try_module_get) },
	{ 0xa41614d8, __VMLINUX_SYMBOL_STR(nf_ct_tmpl_free) },
	{ 0x6e006d73, __VMLINUX_SYMBOL_STR(__nf_ct_ext_add_length) },
	{ 0xe19fe445, __VMLINUX_SYMBOL_STR(nf_ct_tmpl_alloc) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x78f9b710, __VMLINUX_SYMBOL_STR(nf_ct_l3proto_try_module_get) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x2a18c74, __VMLINUX_SYMBOL_STR(nf_conntrack_destroy) },
	{ 0x2469810f, __VMLINUX_SYMBOL_STR(__rcu_read_unlock) },
	{ 0x9762db47, __VMLINUX_SYMBOL_STR(nf_ct_timeout_put_hook) },
	{ 0x8d522714, __VMLINUX_SYMBOL_STR(__rcu_read_lock) },
	{ 0xb602c57e, __VMLINUX_SYMBOL_STR(nf_ct_l3proto_module_put) },
	{ 0x14846fbb, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xae6d761d, __VMLINUX_SYMBOL_STR(nf_conntrack_untracked) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=x_tables,nf_conntrack";

