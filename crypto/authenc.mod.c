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
	{ 0x7b8c3a36, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xd2a941d4, __VMLINUX_SYMBOL_STR(sg_init_table) },
	{ 0x6210299e, __VMLINUX_SYMBOL_STR(scatterwalk_ffwd) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x55243eb7, __VMLINUX_SYMBOL_STR(crypto_init_ahash_spawn) },
	{ 0x7f5eb500, __VMLINUX_SYMBOL_STR(crypto_mod_put) },
	{ 0x938f0bc5, __VMLINUX_SYMBOL_STR(ahash_attr_alg) },
	{ 0x9a11a0fc, __VMLINUX_SYMBOL_STR(crypto_attr_alg_name) },
	{ 0xaee6a088, __VMLINUX_SYMBOL_STR(crypto_grab_skcipher) },
	{ 0x81b083c1, __VMLINUX_SYMBOL_STR(crypto_unregister_template) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xa77c4738, __VMLINUX_SYMBOL_STR(crypto_spawn_tfm) },
	{ 0x908668af, __VMLINUX_SYMBOL_STR(crypto_get_default_null_skcipher) },
	{ 0x13354608, __VMLINUX_SYMBOL_STR(scatterwalk_map_and_copy) },
	{ 0x21cd536a, __VMLINUX_SYMBOL_STR(crypto_put_default_null_skcipher) },
	{ 0xf40b2297, __VMLINUX_SYMBOL_STR(__crypto_memneq) },
	{ 0x6c9af8af, __VMLINUX_SYMBOL_STR(crypto_ahash_digest) },
	{ 0x19af2573, __VMLINUX_SYMBOL_STR(crypto_register_template) },
	{ 0xbb06b4e6, __VMLINUX_SYMBOL_STR(crypto_drop_spawn) },
	{ 0x124f2056, __VMLINUX_SYMBOL_STR(crypto_get_attr_type) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x6eafc117, __VMLINUX_SYMBOL_STR(crypto_destroy_tfm) },
	{ 0xcaa1a2be, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xadfb4f51, __VMLINUX_SYMBOL_STR(crypto_spawn_tfm2) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xb588fb09, __VMLINUX_SYMBOL_STR(crypto_ahash_setkey) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xab517f56, __VMLINUX_SYMBOL_STR(aead_register_instance) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

