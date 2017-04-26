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
	{ 0x7e42e836, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x29923658, __VMLINUX_SYMBOL_STR(param_array_ops) },
	{ 0xd304f5a5, __VMLINUX_SYMBOL_STR(param_ops_short) },
	{ 0xc7cb5493, __VMLINUX_SYMBOL_STR(em28xx_unregister_extension) },
	{ 0x30612e89, __VMLINUX_SYMBOL_STR(em28xx_register_extension) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xc654e37, __VMLINUX_SYMBOL_STR(dvb_net_init) },
	{ 0xd123948d, __VMLINUX_SYMBOL_STR(dvb_dmxdev_init) },
	{ 0x2abae88d, __VMLINUX_SYMBOL_STR(dvb_dmx_init) },
	{ 0xec0d5c1e, __VMLINUX_SYMBOL_STR(dvb_register_frontend) },
	{ 0xc9ee230b, __VMLINUX_SYMBOL_STR(dvb_register_adapter) },
	{ 0xdc798d37, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x7fc8652c, __VMLINUX_SYMBOL_STR(em28xx_tuner_callback) },
	{ 0x9e931cfd, __VMLINUX_SYMBOL_STR(try_module_get) },
	{ 0x500015c0, __VMLINUX_SYMBOL_STR(i2c_new_device) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0xa1cc9abd, __VMLINUX_SYMBOL_STR(em28xx_alloc_urbs) },
	{ 0xcaa1a2be, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x7b8c3a36, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x6e9dd606, __VMLINUX_SYMBOL_STR(__symbol_put) },
	{ 0x402b8281, __VMLINUX_SYMBOL_STR(__request_module) },
	{ 0x868784cb, __VMLINUX_SYMBOL_STR(__symbol_get) },
	{ 0xf975fbd2, __VMLINUX_SYMBOL_STR(em28xx_setup_xc3028) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xcd75ef7f, __VMLINUX_SYMBOL_STR(em28xx_free_device) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x5b888ea4, __VMLINUX_SYMBOL_STR(dvb_unregister_adapter) },
	{ 0x943f402e, __VMLINUX_SYMBOL_STR(dvb_frontend_detach) },
	{ 0xddf6839, __VMLINUX_SYMBOL_STR(dvb_unregister_frontend) },
	{ 0x65f3a750, __VMLINUX_SYMBOL_STR(dvb_dmx_release) },
	{ 0x23ffbee, __VMLINUX_SYMBOL_STR(dvb_dmxdev_release) },
	{ 0x440f84db, __VMLINUX_SYMBOL_STR(dvb_net_release) },
	{ 0x62ac395e, __VMLINUX_SYMBOL_STR(i2c_unregister_device) },
	{ 0x2d9b9ea6, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0x60350a8b, __VMLINUX_SYMBOL_STR(em28xx_uninit_usb_xfer) },
	{ 0x311f79d1, __VMLINUX_SYMBOL_STR(dvb_frontend_suspend) },
	{ 0x89c767f9, __VMLINUX_SYMBOL_STR(dvb_frontend_resume) },
	{ 0xb69eb1d6, __VMLINUX_SYMBOL_STR(em28xx_init_usb_xfer) },
	{ 0xfea687c8, __VMLINUX_SYMBOL_STR(usb_set_interface) },
	{ 0x62b72b0d, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xdee5c0fe, __VMLINUX_SYMBOL_STR(em28xx_stop_urbs) },
	{ 0xe16b893b, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x591bd40b, __VMLINUX_SYMBOL_STR(i2c_master_send) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x9ce95174, __VMLINUX_SYMBOL_STR(em28xx_write_reg) },
	{ 0xcb5e2b99, __VMLINUX_SYMBOL_STR(em28xx_gpio_set) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xcea899ea, __VMLINUX_SYMBOL_STR(down) },
	{ 0x364b3fff, __VMLINUX_SYMBOL_STR(up) },
	{ 0xeb20b263, __VMLINUX_SYMBOL_STR(em28xx_write_reg_bits) },
	{ 0xfe990052, __VMLINUX_SYMBOL_STR(gpio_free) },
	{ 0x403f9529, __VMLINUX_SYMBOL_STR(gpio_request_one) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xd75a955f, __VMLINUX_SYMBOL_STR(em28xx_set_mode) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x8efb86a3, __VMLINUX_SYMBOL_STR(dvb_dmx_swfilter) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=em28xx";


MODULE_INFO(srcversion, "46A0E1A040DD693FED3C59A");
