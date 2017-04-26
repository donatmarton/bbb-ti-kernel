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
	{ 0x54884034, __VMLINUX_SYMBOL_STR(iget_failed) },
	{ 0x7b8c3a36, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xa84dd30f, __VMLINUX_SYMBOL_STR(sb_min_blocksize) },
	{ 0xff178f6, __VMLINUX_SYMBOL_STR(__aeabi_idivmod) },
	{ 0xaa9b222f, __VMLINUX_SYMBOL_STR(generic_getxattr) },
	{ 0x107e5878, __VMLINUX_SYMBOL_STR(zlib_inflateEnd) },
	{ 0xa88eda77, __VMLINUX_SYMBOL_STR(make_bad_inode) },
	{ 0xd6ee688f, __VMLINUX_SYMBOL_STR(vmalloc) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x60a13e90, __VMLINUX_SYMBOL_STR(rcu_barrier) },
	{ 0xe88aed1e, __VMLINUX_SYMBOL_STR(pagecache_get_page) },
	{ 0x9b0b9e40, __VMLINUX_SYMBOL_STR(ll_rw_block) },
	{ 0x44b1d426, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x55cf3589, __VMLINUX_SYMBOL_STR(init_user_ns) },
	{ 0x62b72b0d, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x8048a07, __VMLINUX_SYMBOL_STR(mount_bdev) },
	{ 0xdc76b57f, __VMLINUX_SYMBOL_STR(generic_read_dir) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0x9dfe7307, __VMLINUX_SYMBOL_STR(lz4_decompress_unknownoutputsize) },
	{ 0xa97508b6, __VMLINUX_SYMBOL_STR(__getblk_gfp) },
	{ 0x28aa6a67, __VMLINUX_SYMBOL_STR(call_rcu) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x64c5538b, __VMLINUX_SYMBOL_STR(make_kgid) },
	{ 0x63b87fc5, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0x52e07b4f, __VMLINUX_SYMBOL_STR(__insert_inode_hash) },
	{ 0xd1a5deac, __VMLINUX_SYMBOL_STR(kmap_atomic) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x706c5a65, __VMLINUX_SYMBOL_STR(preempt_count_sub) },
	{ 0x1460dfc0, __VMLINUX_SYMBOL_STR(default_llseek) },
	{ 0xe9890e3f, __VMLINUX_SYMBOL_STR(__bread_gfp) },
	{ 0xdc798d37, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x3a87fec2, __VMLINUX_SYMBOL_STR(d_obtain_alias) },
	{ 0x328a05f1, __VMLINUX_SYMBOL_STR(strncpy) },
	{ 0xce5ac24f, __VMLINUX_SYMBOL_STR(zlib_inflate_workspacesize) },
	{ 0x84b183ae, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0xf4b6cdae, __VMLINUX_SYMBOL_STR(kmem_cache_free) },
	{ 0xe16b893b, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x76478707, __VMLINUX_SYMBOL_STR(set_nlink) },
	{ 0xaff659b5, __VMLINUX_SYMBOL_STR(__wait_on_buffer) },
	{ 0xed93f29e, __VMLINUX_SYMBOL_STR(__kunmap_atomic) },
	{ 0x65dccf13, __VMLINUX_SYMBOL_STR(xz_dec_end) },
	{ 0xf77c1a38, __VMLINUX_SYMBOL_STR(generic_ro_fops) },
	{ 0x43b0c9c3, __VMLINUX_SYMBOL_STR(preempt_schedule) },
	{ 0x9c318af3, __VMLINUX_SYMBOL_STR(unlock_page) },
	{ 0x581f98da, __VMLINUX_SYMBOL_STR(zlib_inflate) },
	{ 0x520e923b, __VMLINUX_SYMBOL_STR(inode_init_once) },
	{ 0x37ed3114, __VMLINUX_SYMBOL_STR(page_follow_link_light) },
	{ 0xc6cbbc89, __VMLINUX_SYMBOL_STR(capable) },
	{ 0xf9348cbc, __VMLINUX_SYMBOL_STR(xz_dec_run) },
	{ 0x55184b5d, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x9c09faeb, __VMLINUX_SYMBOL_STR(bdevname) },
	{ 0xca65c2f4, __VMLINUX_SYMBOL_STR(make_kuid) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0x22feb4ba, __VMLINUX_SYMBOL_STR(unlock_new_inode) },
	{ 0x912cc17, __VMLINUX_SYMBOL_STR(kill_block_super) },
	{ 0xcaa1a2be, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x71aa3ade, __VMLINUX_SYMBOL_STR(kmem_cache_create) },
	{ 0x46701a7, __VMLINUX_SYMBOL_STR(register_filesystem) },
	{ 0x35a88f28, __VMLINUX_SYMBOL_STR(zlib_inflateInit2) },
	{ 0xb9e52429, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x158f2f00, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0xa07ed110, __VMLINUX_SYMBOL_STR(xz_dec_init) },
	{ 0xde158532, __VMLINUX_SYMBOL_STR(iput) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xb086b7e5, __VMLINUX_SYMBOL_STR(d_splice_alias) },
	{ 0xdccedf00, __VMLINUX_SYMBOL_STR(sync_filesystem) },
	{ 0x26e80c00, __VMLINUX_SYMBOL_STR(generic_readlink) },
	{ 0x4d265394, __VMLINUX_SYMBOL_STR(put_page) },
	{ 0xeef79882, __VMLINUX_SYMBOL_STR(d_make_root) },
	{ 0xf30fda27, __VMLINUX_SYMBOL_STR(lzo1x_decompress_safe) },
	{ 0x8893fa5d, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x81db6ebb, __VMLINUX_SYMBOL_STR(xz_dec_reset) },
	{ 0x2aadd6e5, __VMLINUX_SYMBOL_STR(unregister_filesystem) },
	{ 0x714b2312, __VMLINUX_SYMBOL_STR(init_special_inode) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x7fc085f3, __VMLINUX_SYMBOL_STR(new_inode) },
	{ 0xf229424a, __VMLINUX_SYMBOL_STR(preempt_count_add) },
	{ 0x1489cc07, __VMLINUX_SYMBOL_STR(page_put_link) },
	{ 0xb9a1aebe, __VMLINUX_SYMBOL_STR(flush_dcache_page) },
	{ 0x5916d7fb, __VMLINUX_SYMBOL_STR(iget_locked) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

