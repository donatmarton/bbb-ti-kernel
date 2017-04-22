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
	{ 0xea635dfd, __VMLINUX_SYMBOL_STR(unregister_quota_format) },
	{ 0x65dfb167, __VMLINUX_SYMBOL_STR(register_quota_format) },
	{ 0x37d79ccd, __VMLINUX_SYMBOL_STR(make_kuid) },
	{ 0x70733fd1, __VMLINUX_SYMBOL_STR(make_kgid) },
	{ 0x8d55bb8a, __VMLINUX_SYMBOL_STR(qid_eq) },
	{ 0x158222e1, __VMLINUX_SYMBOL_STR(make_kprojid) },
	{ 0x5fc56a46, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0xedc7f4ec, __VMLINUX_SYMBOL_STR(dq_data_lock) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x147fb690, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xf6789fdc, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x89d1c07d, __VMLINUX_SYMBOL_STR(qtree_entry_unused) },
	{ 0x7ce18c9f, __VMLINUX_SYMBOL_STR(from_kqid) },
	{ 0x6e3e437e, __VMLINUX_SYMBOL_STR(init_user_ns) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x326de96c, __VMLINUX_SYMBOL_STR(__quota_error) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x1e798e3e, __VMLINUX_SYMBOL_STR(qtree_read_dquot) },
	{ 0xac238060, __VMLINUX_SYMBOL_STR(qtree_write_dquot) },
	{ 0x3c20a008, __VMLINUX_SYMBOL_STR(qtree_release_dquot) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xddd5b9fc, __VMLINUX_SYMBOL_STR(qtree_get_next_id) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=quota_tree";

