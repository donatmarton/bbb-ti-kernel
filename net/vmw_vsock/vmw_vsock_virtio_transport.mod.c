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
	{ 0x92b57248, __VMLINUX_SYMBOL_STR(flush_work) },
	{ 0xaca68f10, __VMLINUX_SYMBOL_STR(release_sock) },
	{ 0xf6789fdc, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x65e75cb6, __VMLINUX_SYMBOL_STR(__list_del_entry) },
	{ 0x2be6aa6b, __VMLINUX_SYMBOL_STR(virtio_transport_recv_pkt) },
	{ 0x8ae05f4a, __VMLINUX_SYMBOL_STR(virtio_transport_set_buffer_size) },
	{ 0x7cbb0f83, __VMLINUX_SYMBOL_STR(virtio_transport_destruct) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x43a53735, __VMLINUX_SYMBOL_STR(__alloc_workqueue_key) },
	{ 0x46b94e26, __VMLINUX_SYMBOL_STR(virtio_transport_get_max_buffer_size) },
	{ 0xde1af556, __VMLINUX_SYMBOL_STR(virtio_transport_notify_send_pre_block) },
	{ 0x3dae0c61, __VMLINUX_SYMBOL_STR(virtio_transport_stream_has_space) },
	{ 0xa1d55e90, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0x74ebd4c6, __VMLINUX_SYMBOL_STR(virtio_transport_notify_poll_in) },
	{ 0xf8321caa, __VMLINUX_SYMBOL_STR(virtio_transport_do_socket_init) },
	{ 0x1c5c235a, __VMLINUX_SYMBOL_STR(virtqueue_add_inbuf) },
	{ 0x47ed40d4, __VMLINUX_SYMBOL_STR(virtio_transport_stream_is_active) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xdbe8baac, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xcaf2f606, __VMLINUX_SYMBOL_STR(virtqueue_kick) },
	{ 0xe5d4f50, __VMLINUX_SYMBOL_STR(__vsock_core_init) },
	{ 0x85b0f97e, __VMLINUX_SYMBOL_STR(virtio_transport_set_min_buffer_size) },
	{ 0xe498586c, __VMLINUX_SYMBOL_STR(virtqueue_get_buf) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0x98d42558, __VMLINUX_SYMBOL_STR(virtio_transport_dgram_allow) },
	{ 0x73a2de8b, __VMLINUX_SYMBOL_STR(virtio_transport_notify_recv_post_dequeue) },
	{ 0x1a4a6db9, __VMLINUX_SYMBOL_STR(virtio_transport_notify_poll_out) },
	{ 0x7f730c80, __VMLINUX_SYMBOL_STR(vsock_core_exit) },
	{ 0xdd9f3e5c, __VMLINUX_SYMBOL_STR(virtqueue_add_sgs) },
	{ 0xbe2b4186, __VMLINUX_SYMBOL_STR(mutex_lock_interruptible) },
	{ 0x5a32f871, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x2bfa7f13, __VMLINUX_SYMBOL_STR(lock_sock_nested) },
	{ 0x14d36c57, __VMLINUX_SYMBOL_STR(virtio_transport_stream_dequeue) },
	{ 0x3f5047c3, __VMLINUX_SYMBOL_STR(virtqueue_disable_cb) },
	{ 0x8e3495c9, __VMLINUX_SYMBOL_STR(virtio_transport_stream_enqueue) },
	{ 0xc0c5b7eb, __VMLINUX_SYMBOL_STR(virtio_transport_notify_recv_pre_dequeue) },
	{ 0xfed0a669, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x8c03d20c, __VMLINUX_SYMBOL_STR(destroy_workqueue) },
	{ 0xaa8a86a1, __VMLINUX_SYMBOL_STR(virtio_transport_notify_send_pre_enqueue) },
	{ 0x521445b, __VMLINUX_SYMBOL_STR(list_del) },
	{ 0x3bebf89, __VMLINUX_SYMBOL_STR(virtio_transport_notify_send_init) },
	{ 0x51876cce, __VMLINUX_SYMBOL_STR(virtqueue_get_vring_size) },
	{ 0xe16ca3f8, __VMLINUX_SYMBOL_STR(virtio_transport_stream_allow) },
	{ 0xf8812a35, __VMLINUX_SYMBOL_STR(virtio_transport_get_buffer_size) },
	{ 0xc7ad691f, __VMLINUX_SYMBOL_STR(unregister_virtio_driver) },
	{ 0x37966d88, __VMLINUX_SYMBOL_STR(virtio_transport_dgram_dequeue) },
	{ 0x8b211163, __VMLINUX_SYMBOL_STR(virtio_transport_notify_send_post_enqueue) },
	{ 0xdd3916ac, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x2898e627, __VMLINUX_SYMBOL_STR(virtio_transport_shutdown) },
	{ 0x3273e832, __VMLINUX_SYMBOL_STR(virtio_transport_dgram_enqueue) },
	{ 0xe537a763, __VMLINUX_SYMBOL_STR(virtio_transport_notify_recv_pre_block) },
	{ 0x147fb690, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x1e9e00e, __VMLINUX_SYMBOL_STR(virtio_transport_free_pkt) },
	{ 0xb158a243, __VMLINUX_SYMBOL_STR(virtio_transport_dgram_bind) },
	{ 0xefdd2345, __VMLINUX_SYMBOL_STR(sg_init_one) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x3a61119a, __VMLINUX_SYMBOL_STR(virtio_transport_stream_rcvhiwat) },
	{ 0x5a2fc859, __VMLINUX_SYMBOL_STR(virtio_transport_set_max_buffer_size) },
	{ 0x97436749, __VMLINUX_SYMBOL_STR(virtio_transport_stream_has_data) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x425443b4, __VMLINUX_SYMBOL_STR(virtio_transport_connect) },
	{ 0x6d3ea162, __VMLINUX_SYMBOL_STR(virtqueue_detach_unused_buf) },
	{ 0x11b88cb9, __VMLINUX_SYMBOL_STR(vsock_for_each_connected_socket) },
	{ 0xef003ddf, __VMLINUX_SYMBOL_STR(virtqueue_enable_cb) },
	{ 0xc9de5242, __VMLINUX_SYMBOL_STR(virtio_transport_release) },
	{ 0x5407f44, __VMLINUX_SYMBOL_STR(virtio_transport_get_min_buffer_size) },
	{ 0x9b0767b5, __VMLINUX_SYMBOL_STR(virtio_transport_notify_recv_init) },
	{ 0x70ee0c0e, __VMLINUX_SYMBOL_STR(register_virtio_driver) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=vmw_vsock_virtio_transport_common,vsock";

MODULE_ALIAS("virtio:d00000013v*");
