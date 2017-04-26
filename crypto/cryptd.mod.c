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
	{ 0xd515b46d, __VMLINUX_SYMBOL_STR(crypto_attr_alg2) },
	{ 0x7b8c3a36, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xb247762, __VMLINUX_SYMBOL_STR(ahash_register_instance) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x71a92349, __VMLINUX_SYMBOL_STR(shash_attr_alg) },
	{ 0x7f5eb500, __VMLINUX_SYMBOL_STR(crypto_mod_put) },
	{ 0xdb3fa4c6, __VMLINUX_SYMBOL_STR(crypto_ablkcipher_type) },
	{ 0xadc537e1, __VMLINUX_SYMBOL_STR(crypto_dequeue_request) },
	{ 0x9a11a0fc, __VMLINUX_SYMBOL_STR(crypto_attr_alg_name) },
	{ 0x22b15c35, __VMLINUX_SYMBOL_STR(shash_ahash_digest) },
	{ 0x81b083c1, __VMLINUX_SYMBOL_STR(crypto_unregister_template) },
	{ 0x50c89f23, __VMLINUX_SYMBOL_STR(__alloc_percpu) },
	{ 0xbf6e016d, __VMLINUX_SYMBOL_STR(crypto_init_spawn) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x5445a52c, __VMLINUX_SYMBOL_STR(crypto_shash_final) },
	{ 0xa77c4738, __VMLINUX_SYMBOL_STR(crypto_spawn_tfm) },
	{ 0x2fa09214, __VMLINUX_SYMBOL_STR(shash_ahash_finup) },
	{ 0xc9ec4e21, __VMLINUX_SYMBOL_STR(free_percpu) },
	{ 0x5af645d0, __VMLINUX_SYMBOL_STR(crypto_grab_aead) },
	{ 0x706c5a65, __VMLINUX_SYMBOL_STR(preempt_count_sub) },
	{ 0x3c3fce39, __VMLINUX_SYMBOL_STR(__local_bh_enable_ip) },
	{ 0xc917e655, __VMLINUX_SYMBOL_STR(debug_smp_processor_id) },
	{ 0x19af2573, __VMLINUX_SYMBOL_STR(crypto_register_template) },
	{ 0x998b80f6, __VMLINUX_SYMBOL_STR(crypto_register_instance) },
	{ 0x43b0c9c3, __VMLINUX_SYMBOL_STR(preempt_schedule) },
	{ 0x1b7613a, __VMLINUX_SYMBOL_STR(crypto_shash_setkey) },
	{ 0x499043d3, __VMLINUX_SYMBOL_STR(crypto_init_queue) },
	{ 0xbb06b4e6, __VMLINUX_SYMBOL_STR(crypto_drop_spawn) },
	{ 0x530b2bf0, __VMLINUX_SYMBOL_STR(crypto_aead_setkey) },
	{ 0x124f2056, __VMLINUX_SYMBOL_STR(crypto_get_attr_type) },
	{ 0x16c24fa3, __VMLINUX_SYMBOL_STR(crypto_enqueue_request) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x6eafc117, __VMLINUX_SYMBOL_STR(crypto_destroy_tfm) },
	{ 0x2ce98559, __VMLINUX_SYMBOL_STR(kcrypto_wq) },
	{ 0xcaa1a2be, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x5b321723, __VMLINUX_SYMBOL_STR(crypto_aead_setauthsize) },
	{ 0x47007249, __VMLINUX_SYMBOL_STR(crypto_alloc_aead) },
	{ 0xadfb4f51, __VMLINUX_SYMBOL_STR(crypto_spawn_tfm2) },
	{ 0xc5c562b, __VMLINUX_SYMBOL_STR(crypto_init_shash_spawn) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x37ef1fcf, __VMLINUX_SYMBOL_STR(shash_ahash_update) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xf229424a, __VMLINUX_SYMBOL_STR(preempt_count_add) },
	{ 0x6489283d, __VMLINUX_SYMBOL_STR(crypto_alloc_base) },
	{ 0xab517f56, __VMLINUX_SYMBOL_STR(aead_register_instance) },
	{ 0x96de361d, __VMLINUX_SYMBOL_STR(crypto_alloc_ahash) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

