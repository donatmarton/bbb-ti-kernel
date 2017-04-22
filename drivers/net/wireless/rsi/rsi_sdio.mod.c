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
	{ 0xcb0ad105, __VMLINUX_SYMBOL_STR(sdio_writeb) },
	{ 0xe9108d06, __VMLINUX_SYMBOL_STR(rsi_91x_init) },
	{ 0xf6789fdc, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x36d9eb3e, __VMLINUX_SYMBOL_STR(sdio_writesb) },
	{ 0xf6b006ca, __VMLINUX_SYMBOL_STR(sdio_enable_func) },
	{ 0xc17b8191, __VMLINUX_SYMBOL_STR(sdio_claim_irq) },
	{ 0xbb54f1c, __VMLINUX_SYMBOL_STR(mmc_wait_for_cmd) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0xe2fae716, __VMLINUX_SYMBOL_STR(kmemdup) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xdbe8baac, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x7201b98a, __VMLINUX_SYMBOL_STR(rsi_dbg) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xaefdd229, __VMLINUX_SYMBOL_STR(rsi_mac80211_detach) },
	{ 0x43cc185a, __VMLINUX_SYMBOL_STR(rsi_read_pkt) },
	{ 0xfed0a669, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xc4c2d383, __VMLINUX_SYMBOL_STR(sdio_readsb) },
	{ 0xcd9e399f, __VMLINUX_SYMBOL_STR(sdio_unregister_driver) },
	{ 0x95e2051d, __VMLINUX_SYMBOL_STR(sdio_f0_writeb) },
	{ 0x979c2164, __VMLINUX_SYMBOL_STR(sdio_release_irq) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x830083e6, __VMLINUX_SYMBOL_STR(sdio_f0_readb) },
	{ 0x147fb690, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xd85cd67e, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xde0aeb10, __VMLINUX_SYMBOL_STR(request_firmware) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x6e52c753, __VMLINUX_SYMBOL_STR(sdio_register_driver) },
	{ 0x4d8bd8a7, __VMLINUX_SYMBOL_STR(sdio_claim_host) },
	{ 0xb21863c0, __VMLINUX_SYMBOL_STR(rsi_91x_deinit) },
	{ 0x3fd4f0f7, __VMLINUX_SYMBOL_STR(sdio_set_block_size) },
	{ 0x3743de2b, __VMLINUX_SYMBOL_STR(release_firmware) },
	{ 0xe6557692, __VMLINUX_SYMBOL_STR(sdio_disable_func) },
	{ 0x8a0c700c, __VMLINUX_SYMBOL_STR(sdio_release_host) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=rsi_91x";

MODULE_ALIAS("sdio:c*v0303d0100*");
MODULE_ALIAS("sdio:c*v041Bd0301*");
MODULE_ALIAS("sdio:c*v041Bd0201*");
MODULE_ALIAS("sdio:c*v041Bd9330*");

MODULE_INFO(srcversion, "BDFFFF68F8AA81A00D77CBE");
