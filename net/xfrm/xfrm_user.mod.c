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
	{ 0x9e83a6eb, __VMLINUX_SYMBOL_STR(xfrm_unregister_km) },
	{ 0x30821c64, __VMLINUX_SYMBOL_STR(unregister_pernet_subsys) },
	{ 0x13e39f3b, __VMLINUX_SYMBOL_STR(xfrm_register_km) },
	{ 0x93ee206, __VMLINUX_SYMBOL_STR(register_pernet_subsys) },
	{ 0x9fb020f7, __VMLINUX_SYMBOL_STR(xfrm_audit_policy_add) },
	{ 0x29cfb2bb, __VMLINUX_SYMBOL_STR(xfrm_policy_insert) },
	{ 0xa15a0dc6, __VMLINUX_SYMBOL_STR(km_query) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x2283c03f, __VMLINUX_SYMBOL_STR(xfrm_state_add) },
	{ 0xeb03537c, __VMLINUX_SYMBOL_STR(xfrm_audit_state_add) },
	{ 0xb70a1c6b, __VMLINUX_SYMBOL_STR(xfrm_state_update) },
	{ 0x1ed5fe51, __VMLINUX_SYMBOL_STR(xfrm_init_replay) },
	{ 0x27866435, __VMLINUX_SYMBOL_STR(security_xfrm_state_alloc) },
	{ 0xeb0d66e2, __VMLINUX_SYMBOL_STR(__xfrm_init_state) },
	{ 0x3bf471d7, __VMLINUX_SYMBOL_STR(xfrm_calg_get_byname) },
	{ 0x47b34e60, __VMLINUX_SYMBOL_STR(xfrm_ealg_get_byname) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xa6e66685, __VMLINUX_SYMBOL_STR(xfrm_aalg_get_byname) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
	{ 0x60b73277, __VMLINUX_SYMBOL_STR(xfrm_aead_get_byname) },
	{ 0x91b9caf3, __VMLINUX_SYMBOL_STR(xfrm_state_alloc) },
	{ 0xcc281103, __VMLINUX_SYMBOL_STR(xfrm_state_delete) },
	{ 0xc599a772, __VMLINUX_SYMBOL_STR(security_xfrm_state_delete) },
	{ 0xfd9df3af, __VMLINUX_SYMBOL_STR(xfrm_state_lookup_byaddr) },
	{ 0xad652629, __VMLINUX_SYMBOL_STR(xfrm_sad_getinfo) },
	{ 0x7e1a2814, __VMLINUX_SYMBOL_STR(xfrm_spd_getinfo) },
	{ 0x53963730, __VMLINUX_SYMBOL_STR(xfrm_find_acq_byseq) },
	{ 0xcee2291e, __VMLINUX_SYMBOL_STR(xfrm_alloc_spi) },
	{ 0x9cb6b3cb, __VMLINUX_SYMBOL_STR(xfrm_find_acq) },
	{ 0xf10526ac, __VMLINUX_SYMBOL_STR(verify_spi_info) },
	{ 0x328a05f1, __VMLINUX_SYMBOL_STR(strncpy) },
	{ 0xbb5d343d, __VMLINUX_SYMBOL_STR(xfrm_get_acqseq) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xa7c66f39, __VMLINUX_SYMBOL_STR(xfrm_garbage_collect) },
	{ 0x4a6761ad, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x645be291, __VMLINUX_SYMBOL_STR(__netlink_kernel_create) },
	{ 0xa59586d3, __VMLINUX_SYMBOL_STR(xfrm_state_walk) },
	{ 0x83b009ea, __VMLINUX_SYMBOL_STR(xfrm_state_walk_init) },
	{ 0xe2fae716, __VMLINUX_SYMBOL_STR(kmemdup) },
	{ 0x4f391d0e, __VMLINUX_SYMBOL_STR(nla_parse) },
	{ 0xd118f9e1, __VMLINUX_SYMBOL_STR(__netlink_dump_start) },
	{ 0x8d6ef9a9, __VMLINUX_SYMBOL_STR(netlink_net_capable) },
	{ 0xbdec59c6, __VMLINUX_SYMBOL_STR(xfrm_state_walk_done) },
	{ 0x4efdd553, __VMLINUX_SYMBOL_STR(xfrm_policy_walk) },
	{ 0xe5ed5467, __VMLINUX_SYMBOL_STR(xfrm_policy_walk_init) },
	{ 0x2c380050, __VMLINUX_SYMBOL_STR(xfrm_policy_walk_done) },
	{ 0xc9c9a36d, __VMLINUX_SYMBOL_STR(xfrm_audit_state_delete) },
	{ 0x28e1fabb, __VMLINUX_SYMBOL_STR(__xfrm_state_delete) },
	{ 0xfd32f201, __VMLINUX_SYMBOL_STR(km_state_expired) },
	{ 0xca6bbb26, __VMLINUX_SYMBOL_STR(xfrm_audit_policy_delete) },
	{ 0xfa68c301, __VMLINUX_SYMBOL_STR(xfrm_policy_delete) },
	{ 0xa4dbbe9f, __VMLINUX_SYMBOL_STR(xfrm_policy_destroy) },
	{ 0xaa42c587, __VMLINUX_SYMBOL_STR(xfrm_policy_byid) },
	{ 0x9f49039a, __VMLINUX_SYMBOL_STR(km_policy_expired) },
	{ 0xa9c63b69, __VMLINUX_SYMBOL_STR(security_xfrm_policy_free) },
	{ 0xfb9498db, __VMLINUX_SYMBOL_STR(xfrm_policy_bysel_ctx) },
	{ 0xb15cb614, __VMLINUX_SYMBOL_STR(security_xfrm_policy_alloc) },
	{ 0xe17b9879, __VMLINUX_SYMBOL_STR(xfrm_state_flush) },
	{ 0xfaafb36f, __VMLINUX_SYMBOL_STR(km_policy_notify) },
	{ 0xffb91c37, __VMLINUX_SYMBOL_STR(xfrm_policy_flush) },
	{ 0x354f882e, __VMLINUX_SYMBOL_STR(km_state_notify) },
	{ 0xddf26646, __VMLINUX_SYMBOL_STR(__xfrm_state_destroy) },
	{ 0xdd3916ac, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0xeaa0c4ba, __VMLINUX_SYMBOL_STR(netlink_unicast) },
	{ 0xa1d55e90, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0xc786b4f8, __VMLINUX_SYMBOL_STR(xfrm_state_lookup) },
	{ 0x41a72a5f, __VMLINUX_SYMBOL_STR(xfrm_migrate) },
	{ 0xa161bfd, __VMLINUX_SYMBOL_STR(xfrm_policy_hash_rebuild) },
	{ 0x5fc56a46, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0xdbe8baac, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x568a1ab, __VMLINUX_SYMBOL_STR(netlink_rcv_skb) },
	{ 0xfed0a669, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x8124ae9f, __VMLINUX_SYMBOL_STR(netlink_kernel_release) },
	{ 0x609f1c7e, __VMLINUX_SYMBOL_STR(synchronize_net) },
	{ 0x3e8ff8ef, __VMLINUX_SYMBOL_STR(nla_put_64bit) },
	{ 0xcc8f1bfd, __VMLINUX_SYMBOL_STR(xfrm_policy_alloc) },
	{ 0xf98c6368, __VMLINUX_SYMBOL_STR(nla_reserve) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xdea90712, __VMLINUX_SYMBOL_STR(netlink_broadcast) },
	{ 0xca3df0a2, __VMLINUX_SYMBOL_STR(init_net) },
	{ 0x71f7577d, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0x73ea6fe7, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0x91fb3536, __VMLINUX_SYMBOL_STR(__nlmsg_put) },
	{ 0x2005e93f, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x2469810f, __VMLINUX_SYMBOL_STR(__rcu_read_unlock) },
	{ 0xb80ea3cc, __VMLINUX_SYMBOL_STR(netlink_has_listeners) },
	{ 0x8d522714, __VMLINUX_SYMBOL_STR(__rcu_read_lock) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=xfrm_algo";

