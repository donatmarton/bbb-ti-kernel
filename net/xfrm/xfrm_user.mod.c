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
	{ 0x8502dc73, __VMLINUX_SYMBOL_STR(xfrm_unregister_km) },
	{ 0x95f58b2d, __VMLINUX_SYMBOL_STR(unregister_pernet_subsys) },
	{ 0x5f170afa, __VMLINUX_SYMBOL_STR(xfrm_register_km) },
	{ 0xb99f0242, __VMLINUX_SYMBOL_STR(register_pernet_subsys) },
	{ 0xd663ebd3, __VMLINUX_SYMBOL_STR(xfrm_audit_policy_add) },
	{ 0x27857038, __VMLINUX_SYMBOL_STR(xfrm_policy_insert) },
	{ 0x79325588, __VMLINUX_SYMBOL_STR(km_query) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xd85afdaf, __VMLINUX_SYMBOL_STR(xfrm_state_add) },
	{ 0x6c12e4de, __VMLINUX_SYMBOL_STR(xfrm_audit_state_add) },
	{ 0x8a34f9d3, __VMLINUX_SYMBOL_STR(xfrm_state_update) },
	{ 0x24e093bf, __VMLINUX_SYMBOL_STR(xfrm_init_replay) },
	{ 0x27866435, __VMLINUX_SYMBOL_STR(security_xfrm_state_alloc) },
	{ 0xb38ed6ef, __VMLINUX_SYMBOL_STR(__xfrm_init_state) },
	{ 0x3bf471d7, __VMLINUX_SYMBOL_STR(xfrm_calg_get_byname) },
	{ 0x47b34e60, __VMLINUX_SYMBOL_STR(xfrm_ealg_get_byname) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xa6e66685, __VMLINUX_SYMBOL_STR(xfrm_aalg_get_byname) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
	{ 0x60b73277, __VMLINUX_SYMBOL_STR(xfrm_aead_get_byname) },
	{ 0xd5fb323, __VMLINUX_SYMBOL_STR(xfrm_state_alloc) },
	{ 0xf23a6609, __VMLINUX_SYMBOL_STR(xfrm_state_delete) },
	{ 0xc599a772, __VMLINUX_SYMBOL_STR(security_xfrm_state_delete) },
	{ 0x2d5416e, __VMLINUX_SYMBOL_STR(xfrm_state_lookup_byaddr) },
	{ 0x257e60de, __VMLINUX_SYMBOL_STR(xfrm_sad_getinfo) },
	{ 0xbc3a9b7, __VMLINUX_SYMBOL_STR(xfrm_spd_getinfo) },
	{ 0xb01880b5, __VMLINUX_SYMBOL_STR(xfrm_find_acq_byseq) },
	{ 0x6def21d, __VMLINUX_SYMBOL_STR(xfrm_alloc_spi) },
	{ 0x324cb64a, __VMLINUX_SYMBOL_STR(xfrm_find_acq) },
	{ 0xf10526ac, __VMLINUX_SYMBOL_STR(verify_spi_info) },
	{ 0x328a05f1, __VMLINUX_SYMBOL_STR(strncpy) },
	{ 0xbb5d343d, __VMLINUX_SYMBOL_STR(xfrm_get_acqseq) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xccba1257, __VMLINUX_SYMBOL_STR(xfrm_garbage_collect) },
	{ 0x4a211dfd, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x5fb6a033, __VMLINUX_SYMBOL_STR(__netlink_kernel_create) },
	{ 0xb86c1fa8, __VMLINUX_SYMBOL_STR(xfrm_state_walk) },
	{ 0x83b009ea, __VMLINUX_SYMBOL_STR(xfrm_state_walk_init) },
	{ 0xe2fae716, __VMLINUX_SYMBOL_STR(kmemdup) },
	{ 0x4f391d0e, __VMLINUX_SYMBOL_STR(nla_parse) },
	{ 0xdc028f21, __VMLINUX_SYMBOL_STR(__netlink_dump_start) },
	{ 0x5351d0e5, __VMLINUX_SYMBOL_STR(netlink_net_capable) },
	{ 0x13eb09c2, __VMLINUX_SYMBOL_STR(xfrm_state_walk_done) },
	{ 0x69947618, __VMLINUX_SYMBOL_STR(xfrm_policy_walk) },
	{ 0xe5ed5467, __VMLINUX_SYMBOL_STR(xfrm_policy_walk_init) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x7045d3d8, __VMLINUX_SYMBOL_STR(xfrm_policy_walk_done) },
	{ 0x98b01788, __VMLINUX_SYMBOL_STR(xfrm_audit_state_delete) },
	{ 0xb3d04475, __VMLINUX_SYMBOL_STR(__xfrm_state_delete) },
	{ 0xb4ade72c, __VMLINUX_SYMBOL_STR(km_state_expired) },
	{ 0xb3dc5c77, __VMLINUX_SYMBOL_STR(xfrm_policy_destroy) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0x2167b724, __VMLINUX_SYMBOL_STR(xfrm_policy_byid) },
	{ 0x3bd3aa79, __VMLINUX_SYMBOL_STR(km_policy_expired) },
	{ 0x3ffa763d, __VMLINUX_SYMBOL_STR(xfrm_audit_policy_delete) },
	{ 0x59802097, __VMLINUX_SYMBOL_STR(xfrm_policy_delete) },
	{ 0xa9c63b69, __VMLINUX_SYMBOL_STR(security_xfrm_policy_free) },
	{ 0x1edce6bc, __VMLINUX_SYMBOL_STR(xfrm_policy_bysel_ctx) },
	{ 0xb15cb614, __VMLINUX_SYMBOL_STR(security_xfrm_policy_alloc) },
	{ 0xc56e2e77, __VMLINUX_SYMBOL_STR(xfrm_state_flush) },
	{ 0x2df48e39, __VMLINUX_SYMBOL_STR(km_policy_notify) },
	{ 0x284530b0, __VMLINUX_SYMBOL_STR(xfrm_policy_flush) },
	{ 0xd20a3730, __VMLINUX_SYMBOL_STR(km_state_notify) },
	{ 0xb2fb2ea5, __VMLINUX_SYMBOL_STR(__xfrm_state_destroy) },
	{ 0x3c3fce39, __VMLINUX_SYMBOL_STR(__local_bh_enable_ip) },
	{ 0xc9533946, __VMLINUX_SYMBOL_STR(netlink_unicast) },
	{ 0xdd0d5c7d, __VMLINUX_SYMBOL_STR(xfrm_state_lookup) },
	{ 0xf8fe3469, __VMLINUX_SYMBOL_STR(xfrm_migrate) },
	{ 0x43b0c9c3, __VMLINUX_SYMBOL_STR(preempt_schedule) },
	{ 0x83f371af, __VMLINUX_SYMBOL_STR(xfrm_policy_hash_rebuild) },
	{ 0x706c5a65, __VMLINUX_SYMBOL_STR(preempt_count_sub) },
	{ 0xf229424a, __VMLINUX_SYMBOL_STR(preempt_count_add) },
	{ 0x62b72b0d, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x45838400, __VMLINUX_SYMBOL_STR(netlink_rcv_skb) },
	{ 0xe16b893b, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xfabb2909, __VMLINUX_SYMBOL_STR(netlink_kernel_release) },
	{ 0x609f1c7e, __VMLINUX_SYMBOL_STR(synchronize_net) },
	{ 0x6f6ab0c2, __VMLINUX_SYMBOL_STR(xfrm_policy_alloc) },
	{ 0x2167db87, __VMLINUX_SYMBOL_STR(nla_reserve) },
	{ 0x58c9324e, __VMLINUX_SYMBOL_STR(netlink_broadcast) },
	{ 0xc00ce02, __VMLINUX_SYMBOL_STR(init_net) },
	{ 0xc2102972, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x18cf6166, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0xd845cf95, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0xcc72ede0, __VMLINUX_SYMBOL_STR(__nlmsg_put) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x2469810f, __VMLINUX_SYMBOL_STR(__rcu_read_unlock) },
	{ 0x29d60a9f, __VMLINUX_SYMBOL_STR(netlink_has_listeners) },
	{ 0x8d522714, __VMLINUX_SYMBOL_STR(__rcu_read_lock) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=xfrm_algo";

