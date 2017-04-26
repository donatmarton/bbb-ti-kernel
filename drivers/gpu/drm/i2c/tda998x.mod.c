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
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x591bd40b, __VMLINUX_SYMBOL_STR(i2c_master_send) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x6c09c2a4, __VMLINUX_SYMBOL_STR(del_timer) },
	{ 0x4db464bc, __VMLINUX_SYMBOL_STR(component_add) },
	{ 0x89cd8667, __VMLINUX_SYMBOL_STR(i2c_del_driver) },
	{ 0xd479fe49, __VMLINUX_SYMBOL_STR(drm_helper_probe_single_connector_modes) },
	{ 0x4205ad24, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0x4f161c0a, __VMLINUX_SYMBOL_STR(of_property_read_u32_array) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x36fdda67, __VMLINUX_SYMBOL_STR(hdmi_infoframe_pack) },
	{ 0x9580deb, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x4d5cf86e, __VMLINUX_SYMBOL_STR(drm_kms_helper_hotplug_event) },
	{ 0x62b72b0d, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x3dbaf91c, __VMLINUX_SYMBOL_STR(drm_encoder_init) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x6670c2e6, __VMLINUX_SYMBOL_STR(drm_connector_cleanup) },
	{ 0x8a3d15b, __VMLINUX_SYMBOL_STR(drm_do_get_edid) },
	{ 0x63b87fc5, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xb7980949, __VMLINUX_SYMBOL_STR(i2c_new_dummy) },
	{ 0x2d170fe1, __VMLINUX_SYMBOL_STR(drm_helper_connector_dpms) },
	{ 0xf8151173, __VMLINUX_SYMBOL_STR(drm_mode_connector_attach_encoder) },
	{ 0xef1e4705, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xdc798d37, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0xe16b893b, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xbe3915f6, __VMLINUX_SYMBOL_STR(irq_get_irq_data) },
	{ 0x16e5c2a, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0xa36c0176, __VMLINUX_SYMBOL_STR(drm_add_edid_modes) },
	{ 0xd6b8e852, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0x62ac395e, __VMLINUX_SYMBOL_STR(i2c_unregister_device) },
	{ 0xc691a923, __VMLINUX_SYMBOL_STR(drm_connector_init) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0xcba8100d, __VMLINUX_SYMBOL_STR(drm_mode_connector_update_edid_property) },
	{ 0x9d41e38f, __VMLINUX_SYMBOL_STR(i2c_register_driver) },
	{ 0x20645642, __VMLINUX_SYMBOL_STR(drm_debug) },
	{ 0xc9e4f0cb, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0x1a770ac3, __VMLINUX_SYMBOL_STR(drm_detect_hdmi_monitor) },
	{ 0x2cf3f76d, __VMLINUX_SYMBOL_STR(i2c_master_recv) },
	{ 0xb9e52429, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x5b271d57, __VMLINUX_SYMBOL_STR(drm_connector_unregister) },
	{ 0xec71a48b, __VMLINUX_SYMBOL_STR(drm_encoder_cleanup) },
	{ 0x158f2f00, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0xbcde9101, __VMLINUX_SYMBOL_STR(drm_of_find_possible_crtcs) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x965d6e45, __VMLINUX_SYMBOL_STR(drm_hdmi_avi_infoframe_from_display_mode) },
	{ 0xb4f93892, __VMLINUX_SYMBOL_STR(component_del) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xf5c2d34d, __VMLINUX_SYMBOL_STR(hdmi_audio_infoframe_init) },
	{ 0x8893fa5d, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x2f0664db, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xc360e7e2, __VMLINUX_SYMBOL_STR(drm_ut_debug_printk) },
	{ 0x8caa767c, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0xf3a91734, __VMLINUX_SYMBOL_STR(drm_connector_register) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("of:N*T*Cnxp,tda998x*");
MODULE_ALIAS("i2c:tda998x");
