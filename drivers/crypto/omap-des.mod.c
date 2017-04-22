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
	{ 0xf90b1be1, __VMLINUX_SYMBOL_STR(crypto_ablkcipher_type) },
	{ 0x36cf4f03, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0x837bc10d, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0xf88c3301, __VMLINUX_SYMBOL_STR(sg_init_table) },
	{ 0x7b7bcfed, __VMLINUX_SYMBOL_STR(mem_map) },
	{ 0x93fca811, __VMLINUX_SYMBOL_STR(__get_free_pages) },
	{ 0xef813311, __VMLINUX_SYMBOL_STR(sg_nents_for_len) },
	{ 0x521445b, __VMLINUX_SYMBOL_STR(list_del) },
	{ 0xe9785bb8, __VMLINUX_SYMBOL_STR(flush_dcache_page) },
	{ 0xeda63db3, __VMLINUX_SYMBOL_STR(scatterwalk_copychunks) },
	{ 0x4302d0eb, __VMLINUX_SYMBOL_STR(free_pages) },
	{ 0x1e934338, __VMLINUX_SYMBOL_STR(crypto_finalize_cipher_request) },
	{ 0x9776d7e2, __VMLINUX_SYMBOL_STR(devm_request_threaded_irq) },
	{ 0x21cfb03e, __VMLINUX_SYMBOL_STR(platform_get_irq) },
	{ 0x9c2faee7, __VMLINUX_SYMBOL_STR(dma_release_channel) },
	{ 0x82072614, __VMLINUX_SYMBOL_STR(tasklet_kill) },
	{ 0x72296d05, __VMLINUX_SYMBOL_STR(crypto_engine_exit) },
	{ 0x1c87ee07, __VMLINUX_SYMBOL_STR(__pm_runtime_disable) },
	{ 0x9191644c, __VMLINUX_SYMBOL_STR(crypto_unregister_alg) },
	{ 0xabd14088, __VMLINUX_SYMBOL_STR(crypto_register_alg) },
	{ 0xd5e3a407, __VMLINUX_SYMBOL_STR(crypto_engine_start) },
	{ 0xc6d78e64, __VMLINUX_SYMBOL_STR(crypto_engine_alloc_init) },
	{ 0x5fc56a46, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x53662a62, __VMLINUX_SYMBOL_STR(dma_request_chan) },
	{ 0x9545af6d, __VMLINUX_SYMBOL_STR(tasklet_init) },
	{ 0x857b0b4c, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x2a247292, __VMLINUX_SYMBOL_STR(pm_runtime_irq_safe) },
	{ 0xa1a69463, __VMLINUX_SYMBOL_STR(pm_runtime_enable) },
	{ 0xa7d99be2, __VMLINUX_SYMBOL_STR(devm_ioremap_resource) },
	{ 0x131152af, __VMLINUX_SYMBOL_STR(of_match_device) },
	{ 0x35dd5ad6, __VMLINUX_SYMBOL_STR(platform_get_resource) },
	{ 0xc43902e8, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0xfaef0ed, __VMLINUX_SYMBOL_STR(__tasklet_schedule) },
	{ 0xca54fee, __VMLINUX_SYMBOL_STR(_test_and_set_bit) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xd5152710, __VMLINUX_SYMBOL_STR(sg_next) },
	{ 0x292db41e, __VMLINUX_SYMBOL_STR(page_address) },
	{ 0xbdb5f786, __VMLINUX_SYMBOL_STR(arm_dma_ops) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x7cefdeff, __VMLINUX_SYMBOL_STR(__pm_runtime_idle) },
	{ 0x752aeb9e, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x72662feb, __VMLINUX_SYMBOL_STR(__pm_runtime_resume) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x83db0b11, __VMLINUX_SYMBOL_STR(crypto_transfer_cipher_request_to_engine) },
	{ 0x69c03fc5, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0xdd3916ac, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0xa1d55e90, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=crypto_engine";

MODULE_ALIAS("of:N*T*Cti,omap4-des");
MODULE_ALIAS("of:N*T*Cti,omap4-desC*");
