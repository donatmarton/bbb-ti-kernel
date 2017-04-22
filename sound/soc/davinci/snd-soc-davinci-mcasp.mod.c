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
	{ 0xe56a9336, __VMLINUX_SYMBOL_STR(snd_pcm_format_width) },
	{ 0x7cefdeff, __VMLINUX_SYMBOL_STR(__pm_runtime_idle) },
	{ 0xff178f6, __VMLINUX_SYMBOL_STR(__aeabi_idivmod) },
	{ 0x1c87ee07, __VMLINUX_SYMBOL_STR(__pm_runtime_disable) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0x2e1ca751, __VMLINUX_SYMBOL_STR(clk_put) },
	{ 0xa7d99be2, __VMLINUX_SYMBOL_STR(devm_ioremap_resource) },
	{ 0x5b19634d, __VMLINUX_SYMBOL_STR(div_s64_rem) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x72662feb, __VMLINUX_SYMBOL_STR(__pm_runtime_resume) },
	{ 0x8fb6c99f, __VMLINUX_SYMBOL_STR(devm_kasprintf) },
	{ 0x53662a62, __VMLINUX_SYMBOL_STR(dma_request_chan) },
	{ 0x837bc10d, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x752aeb9e, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x8c74bd91, __VMLINUX_SYMBOL_STR(snd_pcm_hw_constraint_list) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x6d80e9e5, __VMLINUX_SYMBOL_STR(of_property_read_string) },
	{ 0x84b183ae, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0x35dd5ad6, __VMLINUX_SYMBOL_STR(platform_get_resource) },
	{ 0x72bef55d, __VMLINUX_SYMBOL_STR(edma_pcm_platform_register) },
	{ 0x874cc6a4, __VMLINUX_SYMBOL_STR(devm_kmemdup) },
	{ 0x131152af, __VMLINUX_SYMBOL_STR(of_match_device) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0x857b0b4c, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x1d01768, __VMLINUX_SYMBOL_STR(snd_pcm_hw_rule_add) },
	{ 0xa1a69463, __VMLINUX_SYMBOL_STR(pm_runtime_enable) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x2f0a776e, __VMLINUX_SYMBOL_STR(snd_pcm_stream_lock_irq) },
	{ 0xb743780f, __VMLINUX_SYMBOL_STR(platform_get_irq_byname) },
	{ 0x4628d1e5, __VMLINUX_SYMBOL_STR(snd_pcm_stream_unlock_irq) },
	{ 0x2396c7f0, __VMLINUX_SYMBOL_STR(clk_set_parent) },
	{ 0x32820141, __VMLINUX_SYMBOL_STR(devm_snd_soc_register_component) },
	{ 0x1df9d6f5, __VMLINUX_SYMBOL_STR(of_get_property) },
	{ 0xd843fa3f, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x2ed5c980, __VMLINUX_SYMBOL_STR(clk_get) },
	{ 0xb2cffb18, __VMLINUX_SYMBOL_STR(platform_get_resource_byname) },
	{ 0x4cda566, __VMLINUX_SYMBOL_STR(snd_interval_refine) },
	{ 0x9c2faee7, __VMLINUX_SYMBOL_STR(dma_release_channel) },
	{ 0xd292808e, __VMLINUX_SYMBOL_STR(snd_pcm_hw_constraint_minmax) },
	{ 0x58d7447c, __VMLINUX_SYMBOL_STR(snd_pcm_stop) },
	{ 0x74c134b9, __VMLINUX_SYMBOL_STR(__sw_hweight32) },
	{ 0x6c0e2f4e, __VMLINUX_SYMBOL_STR(of_parse_phandle_with_args) },
	{ 0xaa7d42d1, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xe3dfe433, __VMLINUX_SYMBOL_STR(of_property_match_string) },
	{ 0x36cf4f03, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0x2deb66d0, __VMLINUX_SYMBOL_STR(of_property_read_variable_u32_array) },
	{ 0x441af902, __VMLINUX_SYMBOL_STR(omap_pcm_platform_register) },
	{ 0xc43902e8, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x9776d7e2, __VMLINUX_SYMBOL_STR(devm_request_threaded_irq) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-pcm,snd-soc-edma,snd-soc-core,snd-soc-omap";

MODULE_ALIAS("of:N*T*Cti,dm646x-mcasp-audio");
MODULE_ALIAS("of:N*T*Cti,dm646x-mcasp-audioC*");
MODULE_ALIAS("of:N*T*Cti,da830-mcasp-audio");
MODULE_ALIAS("of:N*T*Cti,da830-mcasp-audioC*");
MODULE_ALIAS("of:N*T*Cti,am33xx-mcasp-audio");
MODULE_ALIAS("of:N*T*Cti,am33xx-mcasp-audioC*");
MODULE_ALIAS("of:N*T*Cti,dra7-mcasp-audio");
MODULE_ALIAS("of:N*T*Cti,dra7-mcasp-audioC*");
