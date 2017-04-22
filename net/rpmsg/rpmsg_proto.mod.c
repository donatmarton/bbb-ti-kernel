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
	{ 0xcaea7a8e, __VMLINUX_SYMBOL_STR(sock_no_accept) },
	{ 0x5e916a2e, __VMLINUX_SYMBOL_STR(sock_no_socketpair) },
	{ 0xdf284822, __VMLINUX_SYMBOL_STR(unregister_rpmsg_driver) },
	{ 0xd0cc2cc5, __VMLINUX_SYMBOL_STR(proto_unregister) },
	{ 0x62737e1d, __VMLINUX_SYMBOL_STR(sock_unregister) },
	{ 0xa09a2483, __VMLINUX_SYMBOL_STR(__register_rpmsg_driver) },
	{ 0xf2b53a85, __VMLINUX_SYMBOL_STR(sock_register) },
	{ 0xec9b0597, __VMLINUX_SYMBOL_STR(proto_register) },
	{ 0x147fb690, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xf6789fdc, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x643fa6d0, __VMLINUX_SYMBOL_STR(__radix_tree_insert) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xc71b5890, __VMLINUX_SYMBOL_STR(radix_tree_delete) },
	{ 0x4059792f, __VMLINUX_SYMBOL_STR(print_hex_dump) },
	{ 0x4a6761ad, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x752aeb9e, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x5cc3142c, __VMLINUX_SYMBOL_STR(sock_queue_rcv_skb) },
	{ 0x9cfd625d, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x56e7aaea, __VMLINUX_SYMBOL_STR(sock_alloc_send_skb) },
	{ 0xaa7d42d1, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x8c96fc4a, __VMLINUX_SYMBOL_STR(rproc_get_alias_id) },
	{ 0x30e63fd5, __VMLINUX_SYMBOL_STR(rproc_vdev_to_rproc_safe) },
	{ 0x9c1d0fb4, __VMLINUX_SYMBOL_STR(virtio_rpmsg_get_vdev) },
	{ 0x50a576c7, __VMLINUX_SYMBOL_STR(sk_free) },
	{ 0x29f48d23, __VMLINUX_SYMBOL_STR(rpmsg_destroy_ept) },
	{ 0x521445b, __VMLINUX_SYMBOL_STR(list_del) },
	{ 0xc85bfc77, __VMLINUX_SYMBOL_STR(rpmsg_create_ept) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xdbe8baac, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0x3303c161, __VMLINUX_SYMBOL_STR(radix_tree_lookup) },
	{ 0xfed0a669, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x65e49ea8, __VMLINUX_SYMBOL_STR(rpmsg_send) },
	{ 0xdca611e8, __VMLINUX_SYMBOL_STR(copy_from_iter) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xcd2487df, __VMLINUX_SYMBOL_STR(skb_free_datagram) },
	{ 0x217bdf80, __VMLINUX_SYMBOL_STR(skb_copy_datagram_iter) },
	{ 0xd7c03a1b, __VMLINUX_SYMBOL_STR(skb_recv_datagram) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xda8a931e, __VMLINUX_SYMBOL_STR(sock_init_data) },
	{ 0xd978383c, __VMLINUX_SYMBOL_STR(sk_alloc) },
	{ 0xaca68f10, __VMLINUX_SYMBOL_STR(release_sock) },
	{ 0x2bfa7f13, __VMLINUX_SYMBOL_STR(lock_sock_nested) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=rpmsg_core,virtio_rpmsg_bus";

