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
	{ 0x7a11e985, __VMLINUX_SYMBOL_STR(sdio_writeb) },
	{ 0x3ce4ca6f, __VMLINUX_SYMBOL_STR(disable_irq) },
	{ 0x7b8c3a36, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x5838ff3a, __VMLINUX_SYMBOL_STR(__pm_runtime_idle) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xdf6123a0, __VMLINUX_SYMBOL_STR(ieee80211_queue_work) },
	{ 0x8c25dc87, __VMLINUX_SYMBOL_STR(sdio_enable_func) },
	{ 0xfdc272c1, __VMLINUX_SYMBOL_STR(wl1251_free_hw) },
	{ 0x92e4080b, __VMLINUX_SYMBOL_STR(sdio_writeb_readb) },
	{ 0x47e4111d, __VMLINUX_SYMBOL_STR(sdio_claim_irq) },
	{ 0xfaed45a9, __VMLINUX_SYMBOL_STR(gpio_to_desc) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x47249507, __VMLINUX_SYMBOL_STR(__pm_runtime_resume) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xd6b8e852, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0x13243d4b, __VMLINUX_SYMBOL_STR(wl1251_get_platform_data) },
	{ 0x5f311bd3, __VMLINUX_SYMBOL_STR(sdio_unregister_driver) },
	{ 0xbc477a2, __VMLINUX_SYMBOL_STR(irq_set_irq_type) },
	{ 0xdabbafae, __VMLINUX_SYMBOL_STR(sdio_release_irq) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x7522f3ba, __VMLINUX_SYMBOL_STR(irq_modify_status) },
	{ 0x84186afe, __VMLINUX_SYMBOL_STR(wl1251_init_ieee80211) },
	{ 0xcaa1a2be, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x24ad3ca8, __VMLINUX_SYMBOL_STR(sdio_memcpy_toio) },
	{ 0xfcec0987, __VMLINUX_SYMBOL_STR(enable_irq) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xefac7c4c, __VMLINUX_SYMBOL_STR(gpiod_set_raw_value) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x8f4c6363, __VMLINUX_SYMBOL_STR(sdio_register_driver) },
	{ 0x1e62356a, __VMLINUX_SYMBOL_STR(sdio_memcpy_fromio) },
	{ 0xf8b91fc8, __VMLINUX_SYMBOL_STR(sdio_claim_host) },
	{ 0x2d5f2429, __VMLINUX_SYMBOL_STR(devm_gpio_request) },
	{ 0x394fad6b, __VMLINUX_SYMBOL_STR(wl1251_alloc_hw) },
	{ 0x9fdaa7fb, __VMLINUX_SYMBOL_STR(sdio_set_block_size) },
	{  0xaaa35, __VMLINUX_SYMBOL_STR(sdio_disable_func) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
	{ 0xa9ab9f51, __VMLINUX_SYMBOL_STR(sdio_release_host) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mac80211,wl1251";

MODULE_ALIAS("sdio:c*v104Cd9066*");
