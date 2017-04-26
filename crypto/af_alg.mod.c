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
	{ 0x7c522ad0, __VMLINUX_SYMBOL_STR(release_sock) },
	{ 0x402b8281, __VMLINUX_SYMBOL_STR(__request_module) },
	{ 0x7b8c3a36, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x928f39a5, __VMLINUX_SYMBOL_STR(sock_init_data) },
	{ 0xd2a941d4, __VMLINUX_SYMBOL_STR(sg_init_table) },
	{ 0x26c06d6c, __VMLINUX_SYMBOL_STR(up_read) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xc8297d5b, __VMLINUX_SYMBOL_STR(sock_no_getsockopt) },
	{ 0xb1e39a7a, __VMLINUX_SYMBOL_STR(sock_no_ioctl) },
	{ 0x17266c23, __VMLINUX_SYMBOL_STR(sock_no_getname) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x28cc25db, __VMLINUX_SYMBOL_STR(arm_copy_from_user) },
	{ 0xfa2a647f, __VMLINUX_SYMBOL_STR(sock_no_poll) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x9101360b, __VMLINUX_SYMBOL_STR(down_read) },
	{ 0xcd3deea0, __VMLINUX_SYMBOL_STR(sock_no_sendpage) },
	{ 0xe06141e9, __VMLINUX_SYMBOL_STR(security_sk_clone) },
	{ 0xf8c694e4, __VMLINUX_SYMBOL_STR(sock_no_mmap) },
	{ 0x37e8f0d1, __VMLINUX_SYMBOL_STR(sock_no_recvmsg) },
	{ 0xd49bd803, __VMLINUX_SYMBOL_STR(wait_for_completion) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xcf159dde, __VMLINUX_SYMBOL_STR(sock_no_socketpair) },
	{ 0xb044ec58, __VMLINUX_SYMBOL_STR(sk_alloc) },
	{ 0x3c3fce39, __VMLINUX_SYMBOL_STR(__local_bh_enable_ip) },
	{ 0x365f26d2, __VMLINUX_SYMBOL_STR(lock_sock_nested) },
	{ 0xf9956397, __VMLINUX_SYMBOL_STR(iov_iter_get_pages) },
	{ 0x6be1e9c0, __VMLINUX_SYMBOL_STR(sock_no_listen) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x521445b, __VMLINUX_SYMBOL_STR(list_del) },
	{ 0xbd392c2a, __VMLINUX_SYMBOL_STR(sk_free) },
	{ 0x6f3db115, __VMLINUX_SYMBOL_STR(up_write) },
	{ 0xbc5c84b5, __VMLINUX_SYMBOL_STR(down_write) },
	{ 0x5177f913, __VMLINUX_SYMBOL_STR(sock_no_shutdown) },
	{ 0x2d9b9ea6, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0xb931c958, __VMLINUX_SYMBOL_STR(proto_register) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x7965cefd, __VMLINUX_SYMBOL_STR(sock_register) },
	{ 0x448c5843, __VMLINUX_SYMBOL_STR(proto_unregister) },
	{ 0xb362f175, __VMLINUX_SYMBOL_STR(sock_kmalloc) },
	{ 0xcaa1a2be, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xdee8d3d9, __VMLINUX_SYMBOL_STR(sock_no_connect) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x62737e1d, __VMLINUX_SYMBOL_STR(sock_unregister) },
	{ 0xf79d95ba, __VMLINUX_SYMBOL_STR(sock_no_sendmsg) },
	{ 0x4d265394, __VMLINUX_SYMBOL_STR(put_page) },
	{ 0x1f9ce223, __VMLINUX_SYMBOL_STR(sock_kzfree_s) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x9cbcaf26, __VMLINUX_SYMBOL_STR(complete) },
	{ 0xf229424a, __VMLINUX_SYMBOL_STR(preempt_count_add) },
	{ 0x9e931cfd, __VMLINUX_SYMBOL_STR(try_module_get) },
	{ 0xda10ec3, __VMLINUX_SYMBOL_STR(security_sock_graft) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

