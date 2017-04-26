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
	{ 0xd945909, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0x4a4a4bd, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0x7758b9de, __VMLINUX_SYMBOL_STR(crypto_alloc_shash) },
	{ 0x2f0664db, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x6eafc117, __VMLINUX_SYMBOL_STR(crypto_destroy_tfm) },
	{ 0x5624f5a4, __VMLINUX_SYMBOL_STR(__dma_request_channel) },
	{ 0x71026dc3, __VMLINUX_SYMBOL_STR(omap_dma_filter_fn) },
	{ 0x56eda3fe, __VMLINUX_SYMBOL_STR(crypto_register_ahash) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0xc9e4f0cb, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x1b94eb82, __VMLINUX_SYMBOL_STR(pm_runtime_irq_safe) },
	{ 0xca72012e, __VMLINUX_SYMBOL_STR(pm_runtime_enable) },
	{ 0x5682de26, __VMLINUX_SYMBOL_STR(dma_request_slave_channel) },
	{ 0xb62a6155, __VMLINUX_SYMBOL_STR(devm_request_threaded_irq) },
	{ 0xddb3e439, __VMLINUX_SYMBOL_STR(devm_ioremap_resource) },
	{ 0xec533192, __VMLINUX_SYMBOL_STR(platform_get_irq) },
	{ 0x2cf249c1, __VMLINUX_SYMBOL_STR(platform_get_resource) },
	{ 0x98a28081, __VMLINUX_SYMBOL_STR(irq_of_parse_and_map) },
	{ 0xa31e6915, __VMLINUX_SYMBOL_STR(of_address_to_resource) },
	{ 0x8b7245c2, __VMLINUX_SYMBOL_STR(of_match_device) },
	{ 0x499043d3, __VMLINUX_SYMBOL_STR(crypto_init_queue) },
	{ 0x9545af6d, __VMLINUX_SYMBOL_STR(tasklet_init) },
	{ 0x8caa767c, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x6923533, __VMLINUX_SYMBOL_STR(dma_release_channel) },
	{ 0xf3b12552, __VMLINUX_SYMBOL_STR(__pm_runtime_disable) },
	{ 0x82072614, __VMLINUX_SYMBOL_STR(tasklet_kill) },
	{ 0x2cbe8c07, __VMLINUX_SYMBOL_STR(crypto_unregister_ahash) },
	{ 0x521445b, __VMLINUX_SYMBOL_STR(list_del) },
	{ 0x43b0c9c3, __VMLINUX_SYMBOL_STR(preempt_schedule) },
	{ 0x706c5a65, __VMLINUX_SYMBOL_STR(preempt_count_sub) },
	{ 0xadc537e1, __VMLINUX_SYMBOL_STR(crypto_dequeue_request) },
	{ 0x16c24fa3, __VMLINUX_SYMBOL_STR(crypto_enqueue_request) },
	{ 0x13351c3f, __VMLINUX_SYMBOL_STR(crypto_shash_finup) },
	{ 0xa09ac110, __VMLINUX_SYMBOL_STR(crypto_shash_update) },
	{ 0x5838ff3a, __VMLINUX_SYMBOL_STR(__pm_runtime_idle) },
	{ 0x89cf4c4a, __VMLINUX_SYMBOL_STR(page_address) },
	{ 0x189c3a74, __VMLINUX_SYMBOL_STR(mem_map) },
	{ 0x6aa005e8, __VMLINUX_SYMBOL_STR(arm_dma_ops) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xd2a941d4, __VMLINUX_SYMBOL_STR(sg_init_table) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0xe094ef39, __VMLINUX_SYMBOL_STR(sg_next) },
	{ 0xed93f29e, __VMLINUX_SYMBOL_STR(__kunmap_atomic) },
	{ 0xd1a5deac, __VMLINUX_SYMBOL_STR(kmap_atomic) },
	{ 0xef1e4705, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x47249507, __VMLINUX_SYMBOL_STR(__pm_runtime_resume) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x6e64cd97, __VMLINUX_SYMBOL_STR(crypto_shash_digest) },
	{ 0x1b7613a, __VMLINUX_SYMBOL_STR(crypto_shash_setkey) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x3c3fce39, __VMLINUX_SYMBOL_STR(__local_bh_enable_ip) },
	{ 0xf229424a, __VMLINUX_SYMBOL_STR(preempt_count_add) },
	{ 0xc7da6011, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xfaef0ed, __VMLINUX_SYMBOL_STR(__tasklet_schedule) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("of:N*T*Cti,omap2-sham*");
MODULE_ALIAS("of:N*T*Cti,omap3-sham*");
MODULE_ALIAS("of:N*T*Cti,omap4-sham*");
MODULE_ALIAS("of:N*T*Cti,omap5-sham*");
