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
	{ 0x6c62e582, __VMLINUX_SYMBOL_STR(AES_decrypt) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xc1b9f90e, __VMLINUX_SYMBOL_STR(crypto_unregister_algs) },
	{ 0xdb3fa4c6, __VMLINUX_SYMBOL_STR(crypto_ablkcipher_type) },
	{ 0xf6a20f6f, __VMLINUX_SYMBOL_STR(blkcipher_walk_virt_block) },
	{ 0xa8a8110c, __VMLINUX_SYMBOL_STR(kernel_neon_end) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xd36da707, __VMLINUX_SYMBOL_STR(crypto_blkcipher_type) },
	{ 0xc30fcbed, __VMLINUX_SYMBOL_STR(AES_encrypt) },
	{ 0x8810ad5e, __VMLINUX_SYMBOL_STR(crypto_xor) },
	{ 0x932accd3, __VMLINUX_SYMBOL_STR(__ablk_encrypt) },
	{ 0x7969d91a, __VMLINUX_SYMBOL_STR(ablk_exit) },
	{ 0xcf024ae9, __VMLINUX_SYMBOL_STR(private_AES_set_decrypt_key) },
	{ 0xdace9b35, __VMLINUX_SYMBOL_STR(ablk_encrypt) },
	{ 0x6c670d22, __VMLINUX_SYMBOL_STR(ablk_init) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x8ad0db27, __VMLINUX_SYMBOL_STR(ablk_set_key) },
	{ 0x3d3c540f, __VMLINUX_SYMBOL_STR(elf_hwcap) },
	{ 0x90f3613, __VMLINUX_SYMBOL_STR(crypto_register_algs) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x276b2f72, __VMLINUX_SYMBOL_STR(private_AES_set_encrypt_key) },
	{ 0xbd9ed7dc, __VMLINUX_SYMBOL_STR(blkcipher_walk_virt) },
	{ 0x8fd180e7, __VMLINUX_SYMBOL_STR(kernel_neon_begin) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x45bd4f09, __VMLINUX_SYMBOL_STR(blkcipher_walk_done) },
	{ 0x2fa9eadd, __VMLINUX_SYMBOL_STR(ablk_decrypt) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=aes-arm,ablk_helper";

