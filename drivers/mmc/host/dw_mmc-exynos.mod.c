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
	{ 0x9aa6b904, __VMLINUX_SYMBOL_STR(dw_mci_pltfm_remove) },
	{ 0xd945909, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0x4a4a4bd, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0xd054ebb9, __VMLINUX_SYMBOL_STR(dw_mci_pltfm_register) },
	{ 0x1c7fd210, __VMLINUX_SYMBOL_STR(of_match_node) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xe781d5, __VMLINUX_SYMBOL_STR(dw_mci_suspend) },
	{ 0x99b458f4, __VMLINUX_SYMBOL_STR(dw_mci_resume) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xc7da6011, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x4f161c0a, __VMLINUX_SYMBOL_STR(of_property_read_u32_array) },
	{ 0xba8253ae, __VMLINUX_SYMBOL_STR(of_device_is_compatible) },
	{ 0x8caa767c, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xe8ff4f1a, __VMLINUX_SYMBOL_STR(mmc_send_tuning) },
	{ 0x2f0664db, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x556e4390, __VMLINUX_SYMBOL_STR(clk_get_rate) },
	{ 0x76d9b876, __VMLINUX_SYMBOL_STR(clk_set_rate) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("of:N*T*Csamsung,exynos4412-dw-mshc*");
MODULE_ALIAS("of:N*T*Csamsung,exynos5250-dw-mshc*");
MODULE_ALIAS("of:N*T*Csamsung,exynos5420-dw-mshc*");
MODULE_ALIAS("of:N*T*Csamsung,exynos5420-dw-mshc-smu*");
MODULE_ALIAS("of:N*T*Csamsung,exynos7-dw-mshc*");
MODULE_ALIAS("of:N*T*Csamsung,exynos7-dw-mshc-smu*");
