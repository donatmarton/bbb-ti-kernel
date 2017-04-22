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
	{ 0x3b90dfca, __VMLINUX_SYMBOL_STR(xfrm_input) },
	{ 0xb80e739b, __VMLINUX_SYMBOL_STR(xfrm4_rcv) },
	{ 0xb20e92bf, __VMLINUX_SYMBOL_STR(xfrm4_protocol_deregister) },
	{ 0xd2a0788d, __VMLINUX_SYMBOL_STR(xfrm_unregister_type) },
	{ 0x7e7ede69, __VMLINUX_SYMBOL_STR(xfrm4_protocol_register) },
	{ 0xf241df7b, __VMLINUX_SYMBOL_STR(xfrm_register_type) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xa6e66685, __VMLINUX_SYMBOL_STR(xfrm_aalg_get_byname) },
	{ 0xb39ea4d6, __VMLINUX_SYMBOL_STR(crypto_aead_setauthsize) },
	{ 0xfb03db17, __VMLINUX_SYMBOL_STR(crypto_aead_setkey) },
	{ 0x76ed0997, __VMLINUX_SYMBOL_STR(crypto_alloc_aead) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xdd3916ac, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0xa1d55e90, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0x6ba3f108, __VMLINUX_SYMBOL_STR(pskb_put) },
	{ 0xfdf8f58f, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0xec82b576, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0x3dd49b8f, __VMLINUX_SYMBOL_STR(skb_to_sgvec) },
	{ 0xf88c3301, __VMLINUX_SYMBOL_STR(sg_init_table) },
	{ 0xd269abc2, __VMLINUX_SYMBOL_STR(skb_cow_data) },
	{ 0x397e25d8, __VMLINUX_SYMBOL_STR(crypto_destroy_tfm) },
	{ 0x51eea2ee, __VMLINUX_SYMBOL_STR(xfrm_input_resume) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xccef93e1, __VMLINUX_SYMBOL_STR(___pskb_trim) },
	{ 0x7f83636, __VMLINUX_SYMBOL_STR(km_new_mapping) },
	{ 0x3f0b7517, __VMLINUX_SYMBOL_STR(skb_copy_bits) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x4b458b00, __VMLINUX_SYMBOL_STR(xfrm_output_resume) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xea9066df, __VMLINUX_SYMBOL_STR(ipv4_update_pmtu) },
	{ 0xddf26646, __VMLINUX_SYMBOL_STR(__xfrm_state_destroy) },
	{ 0xd6fb8b5d, __VMLINUX_SYMBOL_STR(ipv4_redirect) },
	{ 0xc786b4f8, __VMLINUX_SYMBOL_STR(xfrm_state_lookup) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=xfrm_algo";

