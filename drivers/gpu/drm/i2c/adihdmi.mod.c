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
	{ 0x7b8c3a36, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xc53d15ad, __VMLINUX_SYMBOL_STR(regmap_register_patch) },
	{ 0x4db464bc, __VMLINUX_SYMBOL_STR(component_add) },
	{ 0x89cd8667, __VMLINUX_SYMBOL_STR(i2c_del_driver) },
	{ 0x72121e72, __VMLINUX_SYMBOL_STR(i2c_transfer) },
	{ 0xd479fe49, __VMLINUX_SYMBOL_STR(drm_helper_probe_single_connector_modes) },
	{ 0x44b1d426, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xd37b9622, __VMLINUX_SYMBOL_STR(regmap_bulk_write) },
	{ 0x33e2d8fe, __VMLINUX_SYMBOL_STR(regmap_read) },
	{ 0x3dbaf91c, __VMLINUX_SYMBOL_STR(drm_encoder_init) },
	{ 0x6f88effb, __VMLINUX_SYMBOL_STR(hdmi_avi_infoframe_init) },
	{ 0x6670c2e6, __VMLINUX_SYMBOL_STR(drm_connector_cleanup) },
	{ 0x8a3d15b, __VMLINUX_SYMBOL_STR(drm_do_get_edid) },
	{ 0x63b87fc5, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xb7980949, __VMLINUX_SYMBOL_STR(i2c_new_dummy) },
	{ 0x2d170fe1, __VMLINUX_SYMBOL_STR(drm_helper_connector_dpms) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xf8151173, __VMLINUX_SYMBOL_STR(drm_mode_connector_attach_encoder) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xa36c0176, __VMLINUX_SYMBOL_STR(drm_add_edid_modes) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0x62ac395e, __VMLINUX_SYMBOL_STR(i2c_unregister_device) },
	{ 0xcbeac4be, __VMLINUX_SYMBOL_STR(hdmi_avi_infoframe_pack) },
	{ 0xc691a923, __VMLINUX_SYMBOL_STR(drm_connector_init) },
	{ 0xcba8100d, __VMLINUX_SYMBOL_STR(drm_mode_connector_update_edid_property) },
	{ 0x9d41e38f, __VMLINUX_SYMBOL_STR(i2c_register_driver) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x5870b9ef, __VMLINUX_SYMBOL_STR(__devm_regmap_init_i2c) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0xcaa1a2be, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x1a770ac3, __VMLINUX_SYMBOL_STR(drm_detect_hdmi_monitor) },
	{ 0xc7da6011, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0xb9e52429, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x5b271d57, __VMLINUX_SYMBOL_STR(drm_connector_unregister) },
	{ 0xec71a48b, __VMLINUX_SYMBOL_STR(drm_encoder_cleanup) },
	{ 0x9092ec61, __VMLINUX_SYMBOL_STR(devm_gpiod_get_optional) },
	{ 0x158f2f00, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x9d05daca, __VMLINUX_SYMBOL_STR(regcache_mark_dirty) },
	{ 0xbcde9101, __VMLINUX_SYMBOL_STR(drm_of_find_possible_crtcs) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xe6690dc2, __VMLINUX_SYMBOL_STR(drm_helper_hpd_irq_event) },
	{ 0xb4f93892, __VMLINUX_SYMBOL_STR(component_del) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xc806ec77, __VMLINUX_SYMBOL_STR(gpiod_set_value_cansleep) },
	{ 0x8893fa5d, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x2f0664db, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x8caa767c, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x3237dfb4, __VMLINUX_SYMBOL_STR(regmap_update_bits) },
	{ 0xf3a91734, __VMLINUX_SYMBOL_STR(drm_connector_register) },
	{ 0xb62a6155, __VMLINUX_SYMBOL_STR(devm_request_threaded_irq) },
	{ 0x6eaf818b, __VMLINUX_SYMBOL_STR(regmap_write) },
	{ 0x69be0f70, __VMLINUX_SYMBOL_STR(regcache_sync) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("i2c:adv7511");
MODULE_ALIAS("i2c:adv7511w");
MODULE_ALIAS("i2c:adv7513");
MODULE_ALIAS("of:N*T*Cadi,adv7511*");
MODULE_ALIAS("of:N*T*Cadi,adv7511w*");
MODULE_ALIAS("of:N*T*Cadi,adv7513*");
