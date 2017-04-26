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
	{ 0xd16712f3, __VMLINUX_SYMBOL_STR(crypto_check_attr_type) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x7f5eb500, __VMLINUX_SYMBOL_STR(crypto_mod_put) },
	{ 0x3755f990, __VMLINUX_SYMBOL_STR(gf128mul_init_64k_bbe) },
	{ 0x81b083c1, __VMLINUX_SYMBOL_STR(crypto_unregister_template) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xd36da707, __VMLINUX_SYMBOL_STR(crypto_blkcipher_type) },
	{ 0xa77c4738, __VMLINUX_SYMBOL_STR(crypto_spawn_tfm) },
	{ 0x384ef9ce, __VMLINUX_SYMBOL_STR(gf128mul_64k_bbe) },
	{ 0xd60736ec, __VMLINUX_SYMBOL_STR(gf128mul_free_64k) },
	{ 0x19af2573, __VMLINUX_SYMBOL_STR(crypto_register_template) },
	{ 0xbb06b4e6, __VMLINUX_SYMBOL_STR(crypto_drop_spawn) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x427707f9, __VMLINUX_SYMBOL_STR(crypto_alloc_instance) },
	{ 0x6eafc117, __VMLINUX_SYMBOL_STR(crypto_destroy_tfm) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xbd9ed7dc, __VMLINUX_SYMBOL_STR(blkcipher_walk_virt) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x45bd4f09, __VMLINUX_SYMBOL_STR(blkcipher_walk_done) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

