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
	{ 0x31411f9a, __VMLINUX_SYMBOL_STR(crypto_attr_alg2) },
	{ 0xf6789fdc, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x90cb205a, __VMLINUX_SYMBOL_STR(ahash_register_instance) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x551cef29, __VMLINUX_SYMBOL_STR(shash_attr_alg) },
	{ 0xb8c3f9b7, __VMLINUX_SYMBOL_STR(crypto_mod_put) },
	{ 0xf90b1be1, __VMLINUX_SYMBOL_STR(crypto_ablkcipher_type) },
	{ 0xbd8647a5, __VMLINUX_SYMBOL_STR(crypto_dequeue_request) },
	{ 0x9a11a0fc, __VMLINUX_SYMBOL_STR(crypto_attr_alg_name) },
	{ 0x5ed70c17, __VMLINUX_SYMBOL_STR(shash_ahash_digest) },
	{ 0xc546eb0, __VMLINUX_SYMBOL_STR(crypto_unregister_template) },
	{ 0xd3f57a2, __VMLINUX_SYMBOL_STR(_find_next_bit_le) },
	{ 0x50c89f23, __VMLINUX_SYMBOL_STR(__alloc_percpu) },
	{ 0x1103bc51, __VMLINUX_SYMBOL_STR(crypto_init_spawn) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xdc39c681, __VMLINUX_SYMBOL_STR(crypto_shash_final) },
	{ 0xce95ca58, __VMLINUX_SYMBOL_STR(crypto_spawn_tfm) },
	{ 0xb81b1859, __VMLINUX_SYMBOL_STR(shash_ahash_finup) },
	{ 0xc9ec4e21, __VMLINUX_SYMBOL_STR(free_percpu) },
	{ 0xfe7c4287, __VMLINUX_SYMBOL_STR(nr_cpu_ids) },
	{ 0x3a98af71, __VMLINUX_SYMBOL_STR(crypto_grab_aead) },
	{ 0x2cc44b15, __VMLINUX_SYMBOL_STR(__cpu_possible_mask) },
	{ 0x706c5a65, __VMLINUX_SYMBOL_STR(preempt_count_sub) },
	{ 0x3c3fce39, __VMLINUX_SYMBOL_STR(__local_bh_enable_ip) },
	{ 0xc917e655, __VMLINUX_SYMBOL_STR(debug_smp_processor_id) },
	{ 0x5467e6fc, __VMLINUX_SYMBOL_STR(crypto_register_template) },
	{ 0x78b4817, __VMLINUX_SYMBOL_STR(crypto_register_instance) },
	{ 0x43b0c9c3, __VMLINUX_SYMBOL_STR(preempt_schedule) },
	{ 0x7c4b7b63, __VMLINUX_SYMBOL_STR(crypto_shash_setkey) },
	{ 0x499043d3, __VMLINUX_SYMBOL_STR(crypto_init_queue) },
	{ 0x4dc9cd6f, __VMLINUX_SYMBOL_STR(crypto_drop_spawn) },
	{ 0xfb03db17, __VMLINUX_SYMBOL_STR(crypto_aead_setkey) },
	{ 0x124f2056, __VMLINUX_SYMBOL_STR(crypto_get_attr_type) },
	{ 0xb921b672, __VMLINUX_SYMBOL_STR(crypto_enqueue_request) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x397e25d8, __VMLINUX_SYMBOL_STR(crypto_destroy_tfm) },
	{ 0x2ce98559, __VMLINUX_SYMBOL_STR(kcrypto_wq) },
	{ 0x147fb690, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x1176e07f, __VMLINUX_SYMBOL_STR(__per_cpu_offset) },
	{ 0xb39ea4d6, __VMLINUX_SYMBOL_STR(crypto_aead_setauthsize) },
	{ 0x76ed0997, __VMLINUX_SYMBOL_STR(crypto_alloc_aead) },
	{ 0xe9f80277, __VMLINUX_SYMBOL_STR(crypto_spawn_tfm2) },
	{ 0x5a57756c, __VMLINUX_SYMBOL_STR(crypto_init_shash_spawn) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x117b67c3, __VMLINUX_SYMBOL_STR(shash_ahash_update) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xf229424a, __VMLINUX_SYMBOL_STR(preempt_count_add) },
	{ 0x4837e8d6, __VMLINUX_SYMBOL_STR(crypto_alloc_base) },
	{ 0xa58be001, __VMLINUX_SYMBOL_STR(aead_register_instance) },
	{ 0x35592c11, __VMLINUX_SYMBOL_STR(crypto_alloc_ahash) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

