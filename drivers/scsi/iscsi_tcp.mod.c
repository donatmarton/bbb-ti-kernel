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
	{ 0x23fa4443, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0xefe21d65, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0xecfc467c, __VMLINUX_SYMBOL_STR(iscsi_session_recovery_timedout) },
	{ 0x37152649, __VMLINUX_SYMBOL_STR(iscsi_tcp_cleanup_task) },
	{ 0x2a5c139e, __VMLINUX_SYMBOL_STR(iscsi_tcp_task_xmit) },
	{ 0x797046cd, __VMLINUX_SYMBOL_STR(iscsi_tcp_task_init) },
	{ 0x9e1bacbc, __VMLINUX_SYMBOL_STR(iscsi_conn_send_pdu) },
	{ 0x5499d483, __VMLINUX_SYMBOL_STR(iscsi_host_set_param) },
	{ 0x88cd3dd8, __VMLINUX_SYMBOL_STR(iscsi_session_get_param) },
	{ 0x16e6763d, __VMLINUX_SYMBOL_STR(iscsi_conn_start) },
	{ 0x23d32333, __VMLINUX_SYMBOL_STR(scsi_change_queue_depth) },
	{ 0xa1d999ef, __VMLINUX_SYMBOL_STR(iscsi_target_alloc) },
	{ 0x3728b9bd, __VMLINUX_SYMBOL_STR(iscsi_eh_recover_target) },
	{ 0xa058af66, __VMLINUX_SYMBOL_STR(iscsi_eh_device_reset) },
	{ 0xd172d426, __VMLINUX_SYMBOL_STR(iscsi_eh_abort) },
	{ 0xbb6b977e, __VMLINUX_SYMBOL_STR(iscsi_queuecommand) },
	{ 0xb9ec659b, __VMLINUX_SYMBOL_STR(iscsi_unregister_transport) },
	{ 0xb836687c, __VMLINUX_SYMBOL_STR(iscsi_register_transport) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xded3d062, __VMLINUX_SYMBOL_STR(blk_queue_dma_alignment) },
	{ 0x235aaf36, __VMLINUX_SYMBOL_STR(blk_queue_bounce_limit) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xf311f26c, __VMLINUX_SYMBOL_STR(iscsi_tcp_r2tpool_alloc) },
	{ 0x1d1fe901, __VMLINUX_SYMBOL_STR(iscsi_session_setup) },
	{ 0x335ecdd2, __VMLINUX_SYMBOL_STR(iscsi_host_add) },
	{ 0x85be9261, __VMLINUX_SYMBOL_STR(iscsi_host_alloc) },
	{ 0x4773b36a, __VMLINUX_SYMBOL_STR(iscsi_host_free) },
	{ 0xb52636e3, __VMLINUX_SYMBOL_STR(iscsi_host_remove) },
	{ 0x505a533e, __VMLINUX_SYMBOL_STR(iscsi_session_teardown) },
	{ 0xc47076ea, __VMLINUX_SYMBOL_STR(iscsi_tcp_r2tpool_free) },
	{ 0x80826694, __VMLINUX_SYMBOL_STR(scsi_is_host_device) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x35592c11, __VMLINUX_SYMBOL_STR(crypto_alloc_ahash) },
	{ 0xbe1b8995, __VMLINUX_SYMBOL_STR(iscsi_tcp_conn_setup) },
	{ 0xe409c890, __VMLINUX_SYMBOL_STR(iscsi_tcp_recv_skb) },
	{ 0x2d49d50a, __VMLINUX_SYMBOL_STR(tcp_read_sock) },
	{ 0xd3c52d5d, __VMLINUX_SYMBOL_STR(iscsi_conn_queue_work) },
	{ 0xa78f8648, __VMLINUX_SYMBOL_STR(iscsi_tcp_hdr_recv_prep) },
	{ 0x271f5d3b, __VMLINUX_SYMBOL_STR(sk_set_memalloc) },
	{ 0xf3305b4e, __VMLINUX_SYMBOL_STR(iscsi_conn_bind) },
	{ 0x98714d13, __VMLINUX_SYMBOL_STR(sockfd_lookup) },
	{ 0x82a9895b, __VMLINUX_SYMBOL_STR(iscsi_conn_stop) },
	{ 0x4870bf06, __VMLINUX_SYMBOL_STR(iscsi_suspend_tx) },
	{ 0xd85cd67e, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x52e76c92, __VMLINUX_SYMBOL_STR(iscsi_tcp_conn_teardown) },
	{ 0x397e25d8, __VMLINUX_SYMBOL_STR(crypto_destroy_tfm) },
	{ 0x7a4497db, __VMLINUX_SYMBOL_STR(kzfree) },
	{ 0x50a576c7, __VMLINUX_SYMBOL_STR(sk_free) },
	{ 0x33ff49a8, __VMLINUX_SYMBOL_STR(fput) },
	{ 0xc0056be5, __VMLINUX_SYMBOL_STR(_raw_write_unlock_bh) },
	{ 0x6ec9ccdb, __VMLINUX_SYMBOL_STR(_raw_write_lock_bh) },
	{ 0xe557927a, __VMLINUX_SYMBOL_STR(sock_no_sendpage) },
	{ 0x9fc24aba, __VMLINUX_SYMBOL_STR(iscsi_tcp_set_max_r2t) },
	{ 0xad6d42ba, __VMLINUX_SYMBOL_STR(iscsi_set_param) },
	{ 0xee669cc0, __VMLINUX_SYMBOL_STR(kernel_getpeername) },
	{ 0x40108dc1, __VMLINUX_SYMBOL_STR(iscsi_conn_get_param) },
	{ 0x30e26202, __VMLINUX_SYMBOL_STR(iscsi_host_get_param) },
	{ 0xbf8c9136, __VMLINUX_SYMBOL_STR(iscsi_conn_get_addr_param) },
	{ 0xdd3916ac, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0x3514cb52, __VMLINUX_SYMBOL_STR(kernel_getsockname) },
	{ 0xa1d55e90, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0xa0c78ef4, __VMLINUX_SYMBOL_STR(iscsi_tcp_conn_get_stats) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xf6212011, __VMLINUX_SYMBOL_STR(iscsi_tcp_segment_unmap) },
	{ 0x92f0af7, __VMLINUX_SYMBOL_STR(iscsi_tcp_segment_done) },
	{ 0x1dc738c1, __VMLINUX_SYMBOL_STR(kernel_sendmsg) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x8085336a, __VMLINUX_SYMBOL_STR(iscsi_conn_failure) },
	{ 0x4c233a44, __VMLINUX_SYMBOL_STR(_raw_read_unlock_bh) },
	{ 0x4c5fc58c, __VMLINUX_SYMBOL_STR(_raw_read_lock_bh) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xbc1346ef, __VMLINUX_SYMBOL_STR(iscsi_segment_seek_sg) },
	{ 0x9775b15a, __VMLINUX_SYMBOL_STR(iscsi_segment_init_linear) },
	{ 0xd3ad30f2, __VMLINUX_SYMBOL_STR(iscsi_tcp_dgst_header) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x1c1e6de, __VMLINUX_SYMBOL_STR(dev_printk) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libiscsi,libiscsi_tcp,scsi_transport_iscsi";

