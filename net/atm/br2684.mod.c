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
	{ 0x79087bfd, __VMLINUX_SYMBOL_STR(seq_release) },
	{ 0x2fefcfbf, __VMLINUX_SYMBOL_STR(seq_read) },
	{ 0x963de423, __VMLINUX_SYMBOL_STR(seq_lseek) },
	{ 0xb8ec1b03, __VMLINUX_SYMBOL_STR(eth_validate_addr) },
	{ 0x6756873d, __VMLINUX_SYMBOL_STR(eth_change_mtu) },
	{ 0xcfb6a3da, __VMLINUX_SYMBOL_STR(unregister_atmdevice_notifier) },
	{ 0x687f0fc2, __VMLINUX_SYMBOL_STR(remove_proc_entry) },
	{ 0xa01a0f58, __VMLINUX_SYMBOL_STR(deregister_atm_ioctl) },
	{ 0xb09faf79, __VMLINUX_SYMBOL_STR(register_atmdevice_notifier) },
	{ 0xfd523125, __VMLINUX_SYMBOL_STR(register_atm_ioctl) },
	{ 0xc9896c90, __VMLINUX_SYMBOL_STR(proc_create_data) },
	{ 0x4443d399, __VMLINUX_SYMBOL_STR(atm_proc_root) },
	{ 0xff1e9dd8, __VMLINUX_SYMBOL_STR(seq_list_start) },
	{ 0xe7d4daac, __VMLINUX_SYMBOL_STR(seq_list_next) },
	{ 0xe6657df, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0xfcf2e85d, __VMLINUX_SYMBOL_STR(seq_open) },
	{ 0x8286a48, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0x8b68dc5e, __VMLINUX_SYMBOL_STR(skb_realloc_headroom) },
	{ 0x18096457, __VMLINUX_SYMBOL_STR(eth_mac_addr) },
	{ 0xf24c3d4, __VMLINUX_SYMBOL_STR(ether_setup) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x81505d47, __VMLINUX_SYMBOL_STR(vcc_process_recv_queue) },
	{ 0xd74f9f2e, __VMLINUX_SYMBOL_STR(__module_get) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x84b183ae, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xcaa1a2be, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x7b8c3a36, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0x63fda361, __VMLINUX_SYMBOL_STR(register_netdev) },
	{ 0x3835e6a1, __VMLINUX_SYMBOL_STR(alloc_netdev_mqs) },
	{ 0x28cc25db, __VMLINUX_SYMBOL_STR(arm_copy_from_user) },
	{ 0xc6cbbc89, __VMLINUX_SYMBOL_STR(capable) },
	{ 0x95dbe078, __VMLINUX_SYMBOL_STR(__get_user_2) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xbe43413c, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0x95eef112, __VMLINUX_SYMBOL_STR(unregister_netdev) },
	{ 0x11064f33, __VMLINUX_SYMBOL_STR(eth_type_trans) },
	{ 0x43102a32, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x1030b539, __VMLINUX_SYMBOL_STR(netif_rx) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x1d8f4c65, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x2d9b9ea6, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0x521445b, __VMLINUX_SYMBOL_STR(list_del) },
	{ 0x55d2f2cd, __VMLINUX_SYMBOL_STR(netif_tx_wake_queue) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x43b0c9c3, __VMLINUX_SYMBOL_STR(preempt_schedule) },
	{ 0x44b1d426, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0x38b6f297, __VMLINUX_SYMBOL_STR(netif_carrier_on) },
	{ 0x706c5a65, __VMLINUX_SYMBOL_STR(preempt_count_sub) },
	{ 0x8ca73395, __VMLINUX_SYMBOL_STR(netif_carrier_off) },
	{ 0xf229424a, __VMLINUX_SYMBOL_STR(preempt_count_add) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=atm";

