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
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xaa7d42d1, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x8c96fc4a, __VMLINUX_SYMBOL_STR(rproc_get_alias_id) },
	{ 0xb08a7203, __VMLINUX_SYMBOL_STR(rproc_add) },
	{ 0xfaf213fd, __VMLINUX_SYMBOL_STR(of_get_address) },
	{ 0xa7d99be2, __VMLINUX_SYMBOL_STR(devm_ioremap_resource) },
	{ 0xb2cffb18, __VMLINUX_SYMBOL_STR(platform_get_resource_byname) },
	{ 0x9594cbe0, __VMLINUX_SYMBOL_STR(of_reserved_mem_device_init_by_idx) },
	{ 0xb6068ec0, __VMLINUX_SYMBOL_STR(devm_ioremap) },
	{ 0x2deb66d0, __VMLINUX_SYMBOL_STR(of_property_read_variable_u32_array) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x124d96d2, __VMLINUX_SYMBOL_STR(of_count_phandle_with_args) },
	{ 0x435d8774, __VMLINUX_SYMBOL_STR(of_property_read_u32_index) },
	{ 0x54001f01, __VMLINUX_SYMBOL_STR(syscon_regmap_lookup_by_phandle) },
	{ 0x1f97d8b9, __VMLINUX_SYMBOL_STR(of_find_property) },
	{ 0xc43902e8, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x9e501f1e, __VMLINUX_SYMBOL_STR(rproc_alloc) },
	{ 0xfb59a5b7, __VMLINUX_SYMBOL_STR(dma_supported) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0xac556809, __VMLINUX_SYMBOL_STR(of_device_is_compatible) },
	{ 0x131152af, __VMLINUX_SYMBOL_STR(of_match_device) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xa563adc7, __VMLINUX_SYMBOL_STR(rproc_vq_interrupt) },
	{ 0x857b0b4c, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xd4669fad, __VMLINUX_SYMBOL_STR(complete) },
	{ 0xd843fa3f, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0xfdb0e9a1, __VMLINUX_SYMBOL_STR(pm_runtime_set_autosuspend_delay) },
	{ 0x85602013, __VMLINUX_SYMBOL_STR(mbox_request_channel) },
	{ 0xf14cddbd, __VMLINUX_SYMBOL_STR(__pm_runtime_use_autosuspend) },
	{ 0x31112e9, __VMLINUX_SYMBOL_STR(mbox_free_channel) },
	{ 0x31087444, __VMLINUX_SYMBOL_STR(__pm_runtime_suspend) },
	{ 0x72662feb, __VMLINUX_SYMBOL_STR(__pm_runtime_resume) },
	{ 0xbd8250c, __VMLINUX_SYMBOL_STR(of_reserved_mem_device_release) },
	{ 0x284b2c2a, __VMLINUX_SYMBOL_STR(rproc_free) },
	{ 0x623c51ae, __VMLINUX_SYMBOL_STR(rproc_del) },
	{ 0x1c87ee07, __VMLINUX_SYMBOL_STR(__pm_runtime_disable) },
	{ 0xa1a69463, __VMLINUX_SYMBOL_STR(pm_runtime_enable) },
	{ 0xcc848dc, __VMLINUX_SYMBOL_STR(__pm_runtime_set_status) },
	{ 0xdbe8baac, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xfed0a669, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0x7cf9099, __VMLINUX_SYMBOL_STR(wait_for_completion_timeout) },
	{ 0x62432b2b, __VMLINUX_SYMBOL_STR(mbox_send_message) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xc92c4c17, __VMLINUX_SYMBOL_STR(omap_iommu_domain_activate) },
	{ 0x9adc6aba, __VMLINUX_SYMBOL_STR(omap_iommu_domain_deactivate) },
	{ 0xd6b8e852, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0x42e28e96, __VMLINUX_SYMBOL_STR(of_node_put) },
	{ 0x16e06b09, __VMLINUX_SYMBOL_STR(of_parse_phandle) },
	{ 0x95957c7a, __VMLINUX_SYMBOL_STR(rproc_report_crash) },
	{ 0x752aeb9e, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
	{ 0xf3b439c1, __VMLINUX_SYMBOL_STR(regmap_update_bits_base) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("of:N*T*Cti,omap4-dsp");
MODULE_ALIAS("of:N*T*Cti,omap4-dspC*");
MODULE_ALIAS("of:N*T*Cti,omap4-ipu");
MODULE_ALIAS("of:N*T*Cti,omap4-ipuC*");
MODULE_ALIAS("of:N*T*Cti,omap5-dsp");
MODULE_ALIAS("of:N*T*Cti,omap5-dspC*");
MODULE_ALIAS("of:N*T*Cti,omap5-ipu");
MODULE_ALIAS("of:N*T*Cti,omap5-ipuC*");
MODULE_ALIAS("of:N*T*Cti,dra7-dsp");
MODULE_ALIAS("of:N*T*Cti,dra7-dspC*");
MODULE_ALIAS("of:N*T*Cti,dra7-ipu");
MODULE_ALIAS("of:N*T*Cti,dra7-ipuC*");
