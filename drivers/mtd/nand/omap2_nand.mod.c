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
	{ 0xdd226fa9, __VMLINUX_SYMBOL_STR(__raw_readsw) },
	{ 0xff178f6, __VMLINUX_SYMBOL_STR(__aeabi_idivmod) },
	{ 0xf7163ec9, __VMLINUX_SYMBOL_STR(__raw_readsb) },
	{ 0xeb03b389, __VMLINUX_SYMBOL_STR(__raw_readsl) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x89cf4c4a, __VMLINUX_SYMBOL_STR(page_address) },
	{ 0x27bbf221, __VMLINUX_SYMBOL_STR(disable_irq_nosync) },
	{ 0x620ec0d7, __VMLINUX_SYMBOL_STR(nand_bch_init) },
	{ 0x6aa005e8, __VMLINUX_SYMBOL_STR(arm_dma_ops) },
	{ 0x70097aa0, __VMLINUX_SYMBOL_STR(nand_bch_free) },
	{ 0x44b1d426, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0xe094ef39, __VMLINUX_SYMBOL_STR(sg_next) },
	{ 0xddb3e439, __VMLINUX_SYMBOL_STR(devm_ioremap_resource) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x960f5546, __VMLINUX_SYMBOL_STR(nand_release) },
	{ 0x4a4a4bd, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xd49bd803, __VMLINUX_SYMBOL_STR(wait_for_completion) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x915168f1, __VMLINUX_SYMBOL_STR(nand_scan_tail) },
	{ 0xef1e4705, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0xa1c76e0a, __VMLINUX_SYMBOL_STR(_cond_resched) },
	{ 0x2cf249c1, __VMLINUX_SYMBOL_STR(platform_get_resource) },
	{ 0xdc3fcbc9, __VMLINUX_SYMBOL_STR(__sw_hweight8) },
	{ 0x71026dc3, __VMLINUX_SYMBOL_STR(omap_dma_filter_fn) },
	{ 0xc9e4f0cb, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x8a7d1c31, __VMLINUX_SYMBOL_STR(high_memory) },
	{ 0xaf61202a, __VMLINUX_SYMBOL_STR(nand_scan_ident) },
	{ 0x5624f5a4, __VMLINUX_SYMBOL_STR(__dma_request_channel) },
	{ 0x37b173ff, __VMLINUX_SYMBOL_STR(mtd_device_parse_register) },
	{ 0xde80d51, __VMLINUX_SYMBOL_STR(nand_bch_correct_data) },
	{ 0x822137e2, __VMLINUX_SYMBOL_STR(arm_heavy_mb) },
	{ 0xecf8a3b4, __VMLINUX_SYMBOL_STR(__raw_writesl) },
	{ 0x5c265cba, __VMLINUX_SYMBOL_STR(sg_init_one) },
	{ 0xba497f13, __VMLINUX_SYMBOL_STR(loops_per_jiffy) },
	{ 0x6923533, __VMLINUX_SYMBOL_STR(dma_release_channel) },
	{ 0xfcec0987, __VMLINUX_SYMBOL_STR(enable_irq) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xf9dd9922, __VMLINUX_SYMBOL_STR(__init_swait_queue_head) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x9cbcaf26, __VMLINUX_SYMBOL_STR(complete) },
	{ 0xec533192, __VMLINUX_SYMBOL_STR(platform_get_irq) },
	{ 0x1029e48c, __VMLINUX_SYMBOL_STR(vmalloc_to_page) },
	{ 0xd945909, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0x8caa767c, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0xb62a6155, __VMLINUX_SYMBOL_STR(devm_request_threaded_irq) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

