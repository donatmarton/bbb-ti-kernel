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
	{ 0xb5233f3e, __VMLINUX_SYMBOL_STR(kmem_cache_destroy) },
	{ 0x7b8c3a36, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x60a13e90, __VMLINUX_SYMBOL_STR(rcu_barrier) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x8048a07, __VMLINUX_SYMBOL_STR(mount_bdev) },
	{ 0x17c466cb, __VMLINUX_SYMBOL_STR(page_symlink_inode_operations) },
	{ 0xdc76b57f, __VMLINUX_SYMBOL_STR(generic_read_dir) },
	{ 0x28aa6a67, __VMLINUX_SYMBOL_STR(call_rcu) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x706c5a65, __VMLINUX_SYMBOL_STR(preempt_count_sub) },
	{ 0x1460dfc0, __VMLINUX_SYMBOL_STR(default_llseek) },
	{ 0xe9890e3f, __VMLINUX_SYMBOL_STR(__bread_gfp) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x2249ac2, __VMLINUX_SYMBOL_STR(d_rehash) },
	{ 0x9bc5cdf, __VMLINUX_SYMBOL_STR(mtd_read) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x82bf6794, __VMLINUX_SYMBOL_STR(kunmap) },
	{ 0xf4b6cdae, __VMLINUX_SYMBOL_STR(kmem_cache_free) },
	{ 0x76478707, __VMLINUX_SYMBOL_STR(set_nlink) },
	{ 0xdd27fa87, __VMLINUX_SYMBOL_STR(memchr) },
	{ 0xf77c1a38, __VMLINUX_SYMBOL_STR(generic_ro_fops) },
	{ 0x43b0c9c3, __VMLINUX_SYMBOL_STR(preempt_schedule) },
	{ 0x9c318af3, __VMLINUX_SYMBOL_STR(unlock_page) },
	{ 0x9b5c6825, __VMLINUX_SYMBOL_STR(__brelse) },
	{ 0x520e923b, __VMLINUX_SYMBOL_STR(inode_init_once) },
	{ 0x55184b5d, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0xd9ce8f0c, __VMLINUX_SYMBOL_STR(strnlen) },
	{ 0xd50d26aa, __VMLINUX_SYMBOL_STR(kmap) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xdfc6837, __VMLINUX_SYMBOL_STR(kill_mtd_super) },
	{ 0x22feb4ba, __VMLINUX_SYMBOL_STR(unlock_new_inode) },
	{ 0x912cc17, __VMLINUX_SYMBOL_STR(kill_block_super) },
	{ 0xe2c50cee, __VMLINUX_SYMBOL_STR(mount_mtd) },
	{ 0xcaa1a2be, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x71aa3ade, __VMLINUX_SYMBOL_STR(kmem_cache_create) },
	{ 0x46701a7, __VMLINUX_SYMBOL_STR(register_filesystem) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xdccedf00, __VMLINUX_SYMBOL_STR(sync_filesystem) },
	{ 0x521852b4, __VMLINUX_SYMBOL_STR(sb_set_blocksize) },
	{ 0xeef79882, __VMLINUX_SYMBOL_STR(d_make_root) },
	{ 0x2aadd6e5, __VMLINUX_SYMBOL_STR(unregister_filesystem) },
	{ 0x714b2312, __VMLINUX_SYMBOL_STR(init_special_inode) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xf229424a, __VMLINUX_SYMBOL_STR(preempt_count_add) },
	{ 0xceaa752d, __VMLINUX_SYMBOL_STR(d_instantiate) },
	{ 0xb9a1aebe, __VMLINUX_SYMBOL_STR(flush_dcache_page) },
	{ 0x5916d7fb, __VMLINUX_SYMBOL_STR(iget_locked) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

