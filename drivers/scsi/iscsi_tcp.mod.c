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
	{ 0xd109e4f8, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0x7e42e836, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x7ef25702, __VMLINUX_SYMBOL_STR(iscsi_session_recovery_timedout) },
	{ 0xb97f1984, __VMLINUX_SYMBOL_STR(iscsi_tcp_cleanup_task) },
	{ 0xbcd478ab, __VMLINUX_SYMBOL_STR(iscsi_tcp_task_xmit) },
	{ 0x1b4f7221, __VMLINUX_SYMBOL_STR(iscsi_tcp_task_init) },
	{ 0xb78ad49a, __VMLINUX_SYMBOL_STR(iscsi_conn_send_pdu) },
	{ 0xe897462f, __VMLINUX_SYMBOL_STR(iscsi_host_set_param) },
	{ 0x68abc3ef, __VMLINUX_SYMBOL_STR(iscsi_session_get_param) },
	{ 0x1ca91ace, __VMLINUX_SYMBOL_STR(iscsi_conn_start) },
	{ 0xa2b43768, __VMLINUX_SYMBOL_STR(scsi_change_queue_depth) },
	{ 0x630eb675, __VMLINUX_SYMBOL_STR(iscsi_target_alloc) },
	{ 0xaab41ad3, __VMLINUX_SYMBOL_STR(iscsi_eh_recover_target) },
	{ 0x96815dcb, __VMLINUX_SYMBOL_STR(iscsi_eh_device_reset) },
	{ 0xc59161d4, __VMLINUX_SYMBOL_STR(iscsi_eh_abort) },
	{ 0xe88a676b, __VMLINUX_SYMBOL_STR(iscsi_queuecommand) },
	{ 0x91aef920, __VMLINUX_SYMBOL_STR(iscsi_unregister_transport) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x6cf79e87, __VMLINUX_SYMBOL_STR(iscsi_register_transport) },
	{ 0x75252899, __VMLINUX_SYMBOL_STR(iscsi_conn_queue_work) },
	{ 0x7e89f97b, __VMLINUX_SYMBOL_STR(blk_queue_dma_alignment) },
	{ 0x7620ef27, __VMLINUX_SYMBOL_STR(blk_queue_bounce_limit) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x8af44bdb, __VMLINUX_SYMBOL_STR(iscsi_tcp_r2tpool_alloc) },
	{ 0xcb7c03ac, __VMLINUX_SYMBOL_STR(iscsi_session_setup) },
	{ 0x144e8ff, __VMLINUX_SYMBOL_STR(iscsi_host_add) },
	{ 0xabb383ae, __VMLINUX_SYMBOL_STR(iscsi_host_alloc) },
	{ 0x3b09d2e8, __VMLINUX_SYMBOL_STR(iscsi_host_free) },
	{ 0x9f4ecffa, __VMLINUX_SYMBOL_STR(iscsi_host_remove) },
	{ 0x4ea3ec87, __VMLINUX_SYMBOL_STR(iscsi_session_teardown) },
	{ 0x90547875, __VMLINUX_SYMBOL_STR(iscsi_tcp_r2tpool_free) },
	{ 0xbb152ef3, __VMLINUX_SYMBOL_STR(scsi_is_host_device) },
	{ 0x6489283d, __VMLINUX_SYMBOL_STR(crypto_alloc_base) },
	{ 0x2fced68b, __VMLINUX_SYMBOL_STR(iscsi_tcp_conn_setup) },
	{ 0xdb921fcf, __VMLINUX_SYMBOL_STR(iscsi_tcp_recv_skb) },
	{ 0x89e2f2c9, __VMLINUX_SYMBOL_STR(tcp_read_sock) },
	{ 0x43b0c9c3, __VMLINUX_SYMBOL_STR(preempt_schedule) },
	{ 0x706c5a65, __VMLINUX_SYMBOL_STR(preempt_count_sub) },
	{ 0x3ef71c3f, __VMLINUX_SYMBOL_STR(iscsi_tcp_hdr_recv_prep) },
	{ 0x87f12024, __VMLINUX_SYMBOL_STR(sk_set_memalloc) },
	{ 0x19195c8e, __VMLINUX_SYMBOL_STR(iscsi_conn_bind) },
	{ 0xa88ba6f2, __VMLINUX_SYMBOL_STR(sockfd_lookup) },
	{ 0xecf44414, __VMLINUX_SYMBOL_STR(iscsi_conn_stop) },
	{ 0xa782582e, __VMLINUX_SYMBOL_STR(iscsi_suspend_tx) },
	{ 0xb9e52429, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x37057b17, __VMLINUX_SYMBOL_STR(iscsi_tcp_conn_teardown) },
	{ 0x6eafc117, __VMLINUX_SYMBOL_STR(crypto_destroy_tfm) },
	{ 0xbd392c2a, __VMLINUX_SYMBOL_STR(sk_free) },
	{ 0x394fd24c, __VMLINUX_SYMBOL_STR(fput) },
	{ 0xcd3deea0, __VMLINUX_SYMBOL_STR(sock_no_sendpage) },
	{ 0x742a32c2, __VMLINUX_SYMBOL_STR(iscsi_tcp_set_max_r2t) },
	{ 0x3d080650, __VMLINUX_SYMBOL_STR(iscsi_set_param) },
	{ 0x6255a7ba, __VMLINUX_SYMBOL_STR(kernel_getpeername) },
	{ 0xa6defb53, __VMLINUX_SYMBOL_STR(iscsi_conn_get_param) },
	{ 0x9098a03c, __VMLINUX_SYMBOL_STR(iscsi_host_get_param) },
	{ 0xbf8c9136, __VMLINUX_SYMBOL_STR(iscsi_conn_get_addr_param) },
	{ 0x3c3fce39, __VMLINUX_SYMBOL_STR(__local_bh_enable_ip) },
	{ 0x87751677, __VMLINUX_SYMBOL_STR(kernel_getsockname) },
	{ 0xf229424a, __VMLINUX_SYMBOL_STR(preempt_count_add) },
	{ 0xd76519bc, __VMLINUX_SYMBOL_STR(iscsi_tcp_conn_get_stats) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xbf67add7, __VMLINUX_SYMBOL_STR(iscsi_conn_failure) },
	{ 0xb92c4b37, __VMLINUX_SYMBOL_STR(iscsi_tcp_segment_unmap) },
	{ 0xfd1089ba, __VMLINUX_SYMBOL_STR(iscsi_tcp_segment_done) },
	{ 0x4805e22, __VMLINUX_SYMBOL_STR(kernel_sendmsg) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xcecac778, __VMLINUX_SYMBOL_STR(iscsi_segment_seek_sg) },
	{ 0xfabfaf96, __VMLINUX_SYMBOL_STR(iscsi_segment_init_linear) },
	{ 0x649bd7a, __VMLINUX_SYMBOL_STR(iscsi_tcp_dgst_header) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xd8bdde0b, __VMLINUX_SYMBOL_STR(dev_printk) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libiscsi,libiscsi_tcp,scsi_transport_iscsi";

