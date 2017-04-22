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
	{ 0x62177305, __VMLINUX_SYMBOL_STR(sock_no_mmap) },
	{ 0x28384edf, __VMLINUX_SYMBOL_STR(sock_no_getsockopt) },
	{ 0x17b235ae, __VMLINUX_SYMBOL_STR(sock_no_setsockopt) },
	{ 0x8c5b4540, __VMLINUX_SYMBOL_STR(sock_no_shutdown) },
	{ 0x43efa892, __VMLINUX_SYMBOL_STR(sock_no_listen) },
	{ 0xd59a6b24, __VMLINUX_SYMBOL_STR(sock_no_ioctl) },
	{ 0x7a9c0776, __VMLINUX_SYMBOL_STR(sock_no_poll) },
	{ 0x76c8e776, __VMLINUX_SYMBOL_STR(sock_no_getname) },
	{ 0x5e916a2e, __VMLINUX_SYMBOL_STR(sock_no_socketpair) },
	{ 0x79b583e7, __VMLINUX_SYMBOL_STR(sock_no_connect) },
	{ 0x1e1f01f3, __VMLINUX_SYMBOL_STR(sock_no_bind) },
	{ 0xcd68c623, __VMLINUX_SYMBOL_STR(af_alg_release) },
	{ 0x7f7a42ac, __VMLINUX_SYMBOL_STR(af_alg_unregister_type) },
	{ 0x45ae9e2d, __VMLINUX_SYMBOL_STR(af_alg_register_type) },
	{ 0x919f1145, __VMLINUX_SYMBOL_STR(af_alg_make_sg) },
	{ 0x817b3496, __VMLINUX_SYMBOL_STR(iov_iter_advance) },
	{ 0x2673d4de, __VMLINUX_SYMBOL_STR(af_alg_free_sg) },
	{ 0x22c9f0b0, __VMLINUX_SYMBOL_STR(crypto_ahash_final) },
	{ 0xd421396e, __VMLINUX_SYMBOL_STR(copy_to_iter) },
	{ 0xbc1b0ff8, __VMLINUX_SYMBOL_STR(crypto_ahash_digest) },
	{ 0xd954ef95, __VMLINUX_SYMBOL_STR(af_alg_wait_for_completion) },
	{ 0x18b5540f, __VMLINUX_SYMBOL_STR(crypto_ahash_finup) },
	{ 0xf88c3301, __VMLINUX_SYMBOL_STR(sg_init_table) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x35592c11, __VMLINUX_SYMBOL_STR(crypto_alloc_ahash) },
	{ 0x147fb690, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xf6789fdc, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x397e25d8, __VMLINUX_SYMBOL_STR(crypto_destroy_tfm) },
	{ 0x46c2152a, __VMLINUX_SYMBOL_STR(crypto_ahash_setkey) },
	{ 0x9677c57e, __VMLINUX_SYMBOL_STR(af_alg_complete) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xdc94046a, __VMLINUX_SYMBOL_STR(sock_kmalloc) },
	{ 0xb8570ee4, __VMLINUX_SYMBOL_STR(af_alg_release_parent) },
	{ 0xa96ab910, __VMLINUX_SYMBOL_STR(sock_kfree_s) },
	{ 0x67745900, __VMLINUX_SYMBOL_STR(sock_kzfree_s) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xc0056be5, __VMLINUX_SYMBOL_STR(_raw_write_unlock_bh) },
	{ 0x6ec9ccdb, __VMLINUX_SYMBOL_STR(_raw_write_lock_bh) },
	{ 0xacd7b45a, __VMLINUX_SYMBOL_STR(af_alg_accept) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x50a576c7, __VMLINUX_SYMBOL_STR(sk_free) },
	{ 0xaca68f10, __VMLINUX_SYMBOL_STR(release_sock) },
	{ 0x2bfa7f13, __VMLINUX_SYMBOL_STR(lock_sock_nested) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=af_alg";

