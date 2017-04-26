#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x2c197ea3, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0xd2a941d4, __VMLINUX_SYMBOL_STR(sg_init_table) },
	{ 0x75d67208, __VMLINUX_SYMBOL_STR(skb_seq_read) },
	{ 0x13d0adf7, __VMLINUX_SYMBOL_STR(__kfifo_out) },
	{ 0x7e42e836, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xc068440e, __VMLINUX_SYMBOL_STR(__kfifo_alloc) },
	{ 0xd8bdde0b, __VMLINUX_SYMBOL_STR(dev_printk) },
	{ 0xe094ef39, __VMLINUX_SYMBOL_STR(sg_next) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x4c69a998, __VMLINUX_SYMBOL_STR(iscsi_requeue_task) },
	{ 0x3bef2f73, __VMLINUX_SYMBOL_STR(iscsi_pool_init) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x1ff03a70, __VMLINUX_SYMBOL_STR(iscsi_itt_to_ctask) },
	{ 0xd1a5deac, __VMLINUX_SYMBOL_STR(kmap_atomic) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x706c5a65, __VMLINUX_SYMBOL_STR(preempt_count_sub) },
	{ 0x5161ca4b, __VMLINUX_SYMBOL_STR(skb_abort_seq_read) },
	{ 0x20c55ae0, __VMLINUX_SYMBOL_STR(sscanf) },
	{ 0x3c3fce39, __VMLINUX_SYMBOL_STR(__local_bh_enable_ip) },
	{ 0xf617011e, __VMLINUX_SYMBOL_STR(skb_prepare_seq_read) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x82bf6794, __VMLINUX_SYMBOL_STR(kunmap) },
	{ 0x90b25290, __VMLINUX_SYMBOL_STR(iscsi_conn_teardown) },
	{ 0xaaca9502, __VMLINUX_SYMBOL_STR(iscsi_put_task) },
	{ 0xed93f29e, __VMLINUX_SYMBOL_STR(__kunmap_atomic) },
	{ 0x43b0c9c3, __VMLINUX_SYMBOL_STR(preempt_schedule) },
	{ 0xd50d26aa, __VMLINUX_SYMBOL_STR(kmap) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xa99974d, __VMLINUX_SYMBOL_STR(iscsi_prep_data_out_pdu) },
	{ 0xd9da8ff, __VMLINUX_SYMBOL_STR(iscsi_complete_pdu) },
	{ 0xbf67add7, __VMLINUX_SYMBOL_STR(iscsi_conn_failure) },
	{ 0xdb760f52, __VMLINUX_SYMBOL_STR(__kfifo_free) },
	{ 0x5c265cba, __VMLINUX_SYMBOL_STR(sg_init_one) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xcb617c67, __VMLINUX_SYMBOL_STR(__iscsi_complete_pdu) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xf23fcb99, __VMLINUX_SYMBOL_STR(__kfifo_in) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xf229424a, __VMLINUX_SYMBOL_STR(preempt_count_add) },
	{ 0x8d303b1b, __VMLINUX_SYMBOL_STR(iscsi_pool_free) },
	{ 0x1e3d493e, __VMLINUX_SYMBOL_STR(iscsi_verify_itt) },
	{ 0x6ddc3f59, __VMLINUX_SYMBOL_STR(iscsi_conn_setup) },
	{ 0xeecc1b2b, __VMLINUX_SYMBOL_STR(iscsi_update_cmdsn) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libiscsi";

