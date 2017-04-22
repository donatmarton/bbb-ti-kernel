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
	{ 0xefe21d65, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x75d3affc, __VMLINUX_SYMBOL_STR(param_array_ops) },
	{ 0x8f456c01, __VMLINUX_SYMBOL_STR(param_ops_short) },
	{ 0x6cf5c3ef, __VMLINUX_SYMBOL_STR(em28xx_unregister_extension) },
	{ 0x8471884e, __VMLINUX_SYMBOL_STR(em28xx_register_extension) },
	{ 0x9d9229d0, __VMLINUX_SYMBOL_STR(dvb_net_init) },
	{ 0xba2269e9, __VMLINUX_SYMBOL_STR(dvb_dmxdev_init) },
	{ 0x6eeb05c1, __VMLINUX_SYMBOL_STR(dvb_dmx_init) },
	{ 0x6a76505a, __VMLINUX_SYMBOL_STR(dvb_register_frontend) },
	{ 0xedd2e282, __VMLINUX_SYMBOL_STR(dvb_register_adapter) },
	{ 0x5a32f871, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x7fc8652c, __VMLINUX_SYMBOL_STR(em28xx_tuner_callback) },
	{ 0xb8e4fba7, __VMLINUX_SYMBOL_STR(try_module_get) },
	{ 0x8a8c40a4, __VMLINUX_SYMBOL_STR(i2c_new_device) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x453b38e7, __VMLINUX_SYMBOL_STR(em28xx_alloc_urbs) },
	{ 0x147fb690, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xf6789fdc, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x6e9dd606, __VMLINUX_SYMBOL_STR(__symbol_put) },
	{ 0x402b8281, __VMLINUX_SYMBOL_STR(__request_module) },
	{ 0x868784cb, __VMLINUX_SYMBOL_STR(__symbol_get) },
	{ 0x97344b35, __VMLINUX_SYMBOL_STR(em28xx_setup_xc3028) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xcd75ef7f, __VMLINUX_SYMBOL_STR(em28xx_free_device) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xcf76c1db, __VMLINUX_SYMBOL_STR(dvb_unregister_adapter) },
	{ 0x432233c3, __VMLINUX_SYMBOL_STR(dvb_frontend_detach) },
	{ 0x55cb83c5, __VMLINUX_SYMBOL_STR(dvb_unregister_frontend) },
	{ 0x39f78d6, __VMLINUX_SYMBOL_STR(dvb_dmx_release) },
	{ 0x1f5caa44, __VMLINUX_SYMBOL_STR(dvb_dmxdev_release) },
	{ 0x2073a4d0, __VMLINUX_SYMBOL_STR(dvb_net_release) },
	{ 0xea977d1c, __VMLINUX_SYMBOL_STR(i2c_unregister_device) },
	{ 0x14846fbb, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0x4a366ddc, __VMLINUX_SYMBOL_STR(em28xx_uninit_usb_xfer) },
	{ 0x65a2a67e, __VMLINUX_SYMBOL_STR(dvb_frontend_suspend) },
	{ 0xf54b3fa9, __VMLINUX_SYMBOL_STR(dvb_frontend_resume) },
	{ 0x35d1402e, __VMLINUX_SYMBOL_STR(em28xx_init_usb_xfer) },
	{ 0x6fbc742a, __VMLINUX_SYMBOL_STR(usb_set_interface) },
	{ 0xdbe8baac, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x99d6691, __VMLINUX_SYMBOL_STR(em28xx_stop_urbs) },
	{ 0xfed0a669, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x6ee5e2fb, __VMLINUX_SYMBOL_STR(i2c_master_send) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xd6b6a523, __VMLINUX_SYMBOL_STR(em28xx_write_reg) },
	{ 0x27faa92d, __VMLINUX_SYMBOL_STR(em28xx_gpio_set) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xf473ffaf, __VMLINUX_SYMBOL_STR(down) },
	{ 0x4be7fb63, __VMLINUX_SYMBOL_STR(up) },
	{ 0x832a3d71, __VMLINUX_SYMBOL_STR(em28xx_write_reg_bits) },
	{ 0xfe990052, __VMLINUX_SYMBOL_STR(gpio_free) },
	{ 0x403f9529, __VMLINUX_SYMBOL_STR(gpio_request_one) },
	{ 0x961433e1, __VMLINUX_SYMBOL_STR(em28xx_set_mode) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xe495c175, __VMLINUX_SYMBOL_STR(dvb_dmx_swfilter) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=em28xx";


MODULE_INFO(srcversion, "BAD924EC5FE516DAE9E8C88");
