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
	{ 0x951e9022, __VMLINUX_SYMBOL_STR(xfrm_input) },
	{ 0xe4c9af9c, __VMLINUX_SYMBOL_STR(xfrm4_rcv) },
	{ 0xabfcc0a2, __VMLINUX_SYMBOL_STR(xfrm4_protocol_deregister) },
	{ 0x7442b8a2, __VMLINUX_SYMBOL_STR(xfrm_unregister_type) },
	{ 0x6e0ef87f, __VMLINUX_SYMBOL_STR(xfrm4_protocol_register) },
	{ 0x7ba54b9e, __VMLINUX_SYMBOL_STR(xfrm_register_type) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xa6e66685, __VMLINUX_SYMBOL_STR(xfrm_aalg_get_byname) },
	{ 0x5b321723, __VMLINUX_SYMBOL_STR(crypto_aead_setauthsize) },
	{ 0x530b2bf0, __VMLINUX_SYMBOL_STR(crypto_aead_setkey) },
	{ 0x47007249, __VMLINUX_SYMBOL_STR(crypto_alloc_aead) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x3c3fce39, __VMLINUX_SYMBOL_STR(__local_bh_enable_ip) },
	{ 0xf229424a, __VMLINUX_SYMBOL_STR(preempt_count_add) },
	{ 0x6d05ab2a, __VMLINUX_SYMBOL_STR(pskb_put) },
	{ 0x8286a48, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0x9047332b, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0x45d14d36, __VMLINUX_SYMBOL_STR(skb_to_sgvec) },
	{ 0xd2a941d4, __VMLINUX_SYMBOL_STR(sg_init_table) },
	{ 0x8c573f1e, __VMLINUX_SYMBOL_STR(skb_cow_data) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x6eafc117, __VMLINUX_SYMBOL_STR(crypto_destroy_tfm) },
	{ 0xd38bfaae, __VMLINUX_SYMBOL_STR(xfrm_input_resume) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xa3ad16d2, __VMLINUX_SYMBOL_STR(___pskb_trim) },
	{ 0x5caaa1d3, __VMLINUX_SYMBOL_STR(km_new_mapping) },
	{ 0x372da3af, __VMLINUX_SYMBOL_STR(skb_copy_bits) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xb2e779b, __VMLINUX_SYMBOL_STR(xfrm_output_resume) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x8122d0da, __VMLINUX_SYMBOL_STR(ipv4_update_pmtu) },
	{ 0xb2fb2ea5, __VMLINUX_SYMBOL_STR(__xfrm_state_destroy) },
	{ 0xbe326c92, __VMLINUX_SYMBOL_STR(ipv4_redirect) },
	{ 0xdd0d5c7d, __VMLINUX_SYMBOL_STR(xfrm_state_lookup) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=xfrm_algo";

