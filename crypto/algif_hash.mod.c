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
	{ 0xf8c694e4, __VMLINUX_SYMBOL_STR(sock_no_mmap) },
	{ 0xc8297d5b, __VMLINUX_SYMBOL_STR(sock_no_getsockopt) },
	{ 0xc5dc32f7, __VMLINUX_SYMBOL_STR(sock_no_setsockopt) },
	{ 0x5177f913, __VMLINUX_SYMBOL_STR(sock_no_shutdown) },
	{ 0x6be1e9c0, __VMLINUX_SYMBOL_STR(sock_no_listen) },
	{ 0xb1e39a7a, __VMLINUX_SYMBOL_STR(sock_no_ioctl) },
	{ 0xfa2a647f, __VMLINUX_SYMBOL_STR(sock_no_poll) },
	{ 0x17266c23, __VMLINUX_SYMBOL_STR(sock_no_getname) },
	{ 0xcf159dde, __VMLINUX_SYMBOL_STR(sock_no_socketpair) },
	{ 0xdee8d3d9, __VMLINUX_SYMBOL_STR(sock_no_connect) },
	{ 0x2f6625be, __VMLINUX_SYMBOL_STR(sock_no_bind) },
	{ 0x5c78ba1b, __VMLINUX_SYMBOL_STR(af_alg_release) },
	{ 0xfb528581, __VMLINUX_SYMBOL_STR(af_alg_unregister_type) },
	{ 0xf9aa847e, __VMLINUX_SYMBOL_STR(af_alg_register_type) },
	{ 0x96de361d, __VMLINUX_SYMBOL_STR(crypto_alloc_ahash) },
	{ 0xcaa1a2be, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x7b8c3a36, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x6eafc117, __VMLINUX_SYMBOL_STR(crypto_destroy_tfm) },
	{ 0xb588fb09, __VMLINUX_SYMBOL_STR(crypto_ahash_setkey) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x21459fa5, __VMLINUX_SYMBOL_STR(af_alg_complete) },
	{ 0xf9dd9922, __VMLINUX_SYMBOL_STR(__init_swait_queue_head) },
	{ 0xb362f175, __VMLINUX_SYMBOL_STR(sock_kmalloc) },
	{ 0x723e030e, __VMLINUX_SYMBOL_STR(af_alg_release_parent) },
	{ 0x2a575b03, __VMLINUX_SYMBOL_STR(sock_kfree_s) },
	{ 0x1f9ce223, __VMLINUX_SYMBOL_STR(sock_kzfree_s) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x3c3fce39, __VMLINUX_SYMBOL_STR(__local_bh_enable_ip) },
	{ 0xf229424a, __VMLINUX_SYMBOL_STR(preempt_count_add) },
	{ 0x420d03a2, __VMLINUX_SYMBOL_STR(af_alg_accept) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x6a6b11e8, __VMLINUX_SYMBOL_STR(af_alg_make_sg) },
	{ 0x7378222f, __VMLINUX_SYMBOL_STR(iov_iter_advance) },
	{ 0xffa6a3b3, __VMLINUX_SYMBOL_STR(af_alg_free_sg) },
	{ 0xd2e78255, __VMLINUX_SYMBOL_STR(copy_to_iter) },
	{ 0x6afa525b, __VMLINUX_SYMBOL_STR(crypto_ahash_final) },
	{ 0x6c9af8af, __VMLINUX_SYMBOL_STR(crypto_ahash_digest) },
	{ 0x58a3ac70, __VMLINUX_SYMBOL_STR(af_alg_wait_for_completion) },
	{ 0x3a52023, __VMLINUX_SYMBOL_STR(crypto_ahash_finup) },
	{ 0xd2a941d4, __VMLINUX_SYMBOL_STR(sg_init_table) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xbd392c2a, __VMLINUX_SYMBOL_STR(sk_free) },
	{ 0x7c522ad0, __VMLINUX_SYMBOL_STR(release_sock) },
	{ 0x365f26d2, __VMLINUX_SYMBOL_STR(lock_sock_nested) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=af_alg";

