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
	{ 0x36cf4f03, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0x837bc10d, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0xf8dfe3ad, __VMLINUX_SYMBOL_STR(put_device) },
	{ 0xe6d85967, __VMLINUX_SYMBOL_STR(devm_spi_register_master) },
	{ 0xa1a69463, __VMLINUX_SYMBOL_STR(pm_runtime_enable) },
	{ 0xfdb0e9a1, __VMLINUX_SYMBOL_STR(pm_runtime_set_autosuspend_delay) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xc43902e8, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0xa7d99be2, __VMLINUX_SYMBOL_STR(devm_ioremap_resource) },
	{ 0x35dd5ad6, __VMLINUX_SYMBOL_STR(platform_get_resource) },
	{ 0x1df9d6f5, __VMLINUX_SYMBOL_STR(of_get_property) },
	{ 0x2deb66d0, __VMLINUX_SYMBOL_STR(of_property_read_variable_u32_array) },
	{ 0x131152af, __VMLINUX_SYMBOL_STR(of_match_device) },
	{ 0x3689ceff, __VMLINUX_SYMBOL_STR(spi_alloc_master) },
	{ 0x2728864, __VMLINUX_SYMBOL_STR(gpiod_direction_output_raw) },
	{ 0x94199677, __VMLINUX_SYMBOL_STR(gpio_to_desc) },
	{ 0x47229b5c, __VMLINUX_SYMBOL_STR(gpio_request) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0x147fb690, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xf6789fdc, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xaa7d42d1, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x53662a62, __VMLINUX_SYMBOL_STR(dma_request_chan) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x1fab5905, __VMLINUX_SYMBOL_STR(wait_for_completion) },
	{ 0x27e1d20e, __VMLINUX_SYMBOL_STR(sg_split) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xea124bd1, __VMLINUX_SYMBOL_STR(gcd) },
	{ 0xff178f6, __VMLINUX_SYMBOL_STR(__aeabi_idivmod) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0xd4669fad, __VMLINUX_SYMBOL_STR(complete) },
	{ 0x752aeb9e, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xfe990052, __VMLINUX_SYMBOL_STR(gpio_free) },
	{ 0x9c2faee7, __VMLINUX_SYMBOL_STR(dma_release_channel) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x521445b, __VMLINUX_SYMBOL_STR(list_del) },
	{ 0xd843fa3f, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0x1c87ee07, __VMLINUX_SYMBOL_STR(__pm_runtime_disable) },
	{ 0x7cefdeff, __VMLINUX_SYMBOL_STR(__pm_runtime_idle) },
	{ 0xf14cddbd, __VMLINUX_SYMBOL_STR(__pm_runtime_use_autosuspend) },
	{ 0xbd7a4a5f, __VMLINUX_SYMBOL_STR(pinctrl_pm_select_sleep_state) },
	{ 0x3e1a8cd, __VMLINUX_SYMBOL_STR(pinctrl_pm_select_default_state) },
	{ 0x31087444, __VMLINUX_SYMBOL_STR(__pm_runtime_suspend) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x72662feb, __VMLINUX_SYMBOL_STR(__pm_runtime_resume) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("of:N*T*Cti,omap2-mcspi");
MODULE_ALIAS("of:N*T*Cti,omap2-mcspiC*");
MODULE_ALIAS("of:N*T*Cti,omap4-mcspi");
MODULE_ALIAS("of:N*T*Cti,omap4-mcspiC*");
