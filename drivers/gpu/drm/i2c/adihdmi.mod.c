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
	{ 0xf6789fdc, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x8a68790, __VMLINUX_SYMBOL_STR(regmap_register_patch) },
	{ 0x693592e0, __VMLINUX_SYMBOL_STR(component_add) },
	{ 0x703b5194, __VMLINUX_SYMBOL_STR(i2c_del_driver) },
	{ 0xf3b439c1, __VMLINUX_SYMBOL_STR(regmap_update_bits_base) },
	{ 0xed5605a9, __VMLINUX_SYMBOL_STR(i2c_transfer) },
	{ 0xaf6d6978, __VMLINUX_SYMBOL_STR(drm_helper_probe_single_connector_modes) },
	{ 0x69c03fc5, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x7fe0dc08, __VMLINUX_SYMBOL_STR(regmap_bulk_write) },
	{ 0xa1746f8a, __VMLINUX_SYMBOL_STR(regmap_read) },
	{ 0xd00f9404, __VMLINUX_SYMBOL_STR(drm_encoder_init) },
	{ 0x6f88effb, __VMLINUX_SYMBOL_STR(hdmi_avi_infoframe_init) },
	{ 0x645de547, __VMLINUX_SYMBOL_STR(drm_connector_cleanup) },
	{ 0x34705961, __VMLINUX_SYMBOL_STR(drm_do_get_edid) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xdcf0bf2f, __VMLINUX_SYMBOL_STR(i2c_new_dummy) },
	{ 0xf6109673, __VMLINUX_SYMBOL_STR(drm_helper_connector_dpms) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xd0d31103, __VMLINUX_SYMBOL_STR(drm_mode_connector_attach_encoder) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xf69b9380, __VMLINUX_SYMBOL_STR(drm_add_edid_modes) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0xea977d1c, __VMLINUX_SYMBOL_STR(i2c_unregister_device) },
	{ 0xcbeac4be, __VMLINUX_SYMBOL_STR(hdmi_avi_infoframe_pack) },
	{ 0x483b21ab, __VMLINUX_SYMBOL_STR(drm_connector_init) },
	{ 0x622598b1, __VMLINUX_SYMBOL_STR(init_wait_entry) },
	{ 0x15b8211, __VMLINUX_SYMBOL_STR(drm_mode_connector_update_edid_property) },
	{ 0xc619b572, __VMLINUX_SYMBOL_STR(i2c_register_driver) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x3663792, __VMLINUX_SYMBOL_STR(__devm_regmap_init_i2c) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0x147fb690, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x1a770ac3, __VMLINUX_SYMBOL_STR(drm_detect_hdmi_monitor) },
	{ 0xd843fa3f, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0xd85cd67e, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x2b737f8f, __VMLINUX_SYMBOL_STR(drm_connector_unregister) },
	{ 0x4f22c747, __VMLINUX_SYMBOL_STR(drm_encoder_cleanup) },
	{ 0x48b9bec8, __VMLINUX_SYMBOL_STR(devm_gpiod_get_optional) },
	{ 0x344b7739, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x1bfaf4a, __VMLINUX_SYMBOL_STR(regcache_mark_dirty) },
	{ 0x14fb48, __VMLINUX_SYMBOL_STR(drm_of_find_possible_crtcs) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x88b46722, __VMLINUX_SYMBOL_STR(drm_helper_hpd_irq_event) },
	{ 0x37da88b0, __VMLINUX_SYMBOL_STR(component_del) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x156b8b2b, __VMLINUX_SYMBOL_STR(gpiod_set_value_cansleep) },
	{ 0x1cfb04fa, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0xaa7d42d1, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xc43902e8, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0xcbf36496, __VMLINUX_SYMBOL_STR(drm_connector_register) },
	{ 0x9776d7e2, __VMLINUX_SYMBOL_STR(devm_request_threaded_irq) },
	{ 0x20cc31ce, __VMLINUX_SYMBOL_STR(regmap_write) },
	{ 0xd07664d1, __VMLINUX_SYMBOL_STR(regcache_sync) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("i2c:adv7511");
MODULE_ALIAS("i2c:adv7511w");
MODULE_ALIAS("i2c:adv7513");
MODULE_ALIAS("of:N*T*Cadi,adv7511");
MODULE_ALIAS("of:N*T*Cadi,adv7511C*");
MODULE_ALIAS("of:N*T*Cadi,adv7511w");
MODULE_ALIAS("of:N*T*Cadi,adv7511wC*");
MODULE_ALIAS("of:N*T*Cadi,adv7513");
MODULE_ALIAS("of:N*T*Cadi,adv7513C*");
