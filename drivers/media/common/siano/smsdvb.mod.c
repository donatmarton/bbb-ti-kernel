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
	{ 0x4f85518f, __VMLINUX_SYMBOL_STR(smscore_register_hotplug) },
	{ 0x3a41b9c9, __VMLINUX_SYMBOL_STR(smscore_get_board_id) },
	{ 0x957cac81, __VMLINUX_SYMBOL_STR(sms_board_setup) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x6eeb05c1, __VMLINUX_SYMBOL_STR(dvb_dmx_init) },
	{ 0xcf76c1db, __VMLINUX_SYMBOL_STR(dvb_unregister_adapter) },
	{ 0x4f05f31c, __VMLINUX_SYMBOL_STR(sms_board_event) },
	{ 0x6a76505a, __VMLINUX_SYMBOL_STR(dvb_register_frontend) },
	{ 0x69c03fc5, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0xbbdb5c42, __VMLINUX_SYMBOL_STR(smscore_unregister_client) },
	{ 0x55cb83c5, __VMLINUX_SYMBOL_STR(dvb_unregister_frontend) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xdbe8baac, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0x8f456c01, __VMLINUX_SYMBOL_STR(param_ops_short) },
	{ 0x63222b29, __VMLINUX_SYMBOL_STR(smsclient_sendrequest) },
	{ 0x1f5caa44, __VMLINUX_SYMBOL_STR(dvb_dmxdev_release) },
	{ 0x5a32f871, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x2dc4c9, __VMLINUX_SYMBOL_STR(sms_board_lna_control) },
	{ 0xe495c175, __VMLINUX_SYMBOL_STR(dvb_dmx_swfilter) },
	{ 0xfed0a669, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x521445b, __VMLINUX_SYMBOL_STR(list_del) },
	{ 0x39f78d6, __VMLINUX_SYMBOL_STR(dvb_dmx_release) },
	{ 0x307047c2, __VMLINUX_SYMBOL_STR(smscore_putbuffer) },
	{ 0xf552f7a5, __VMLINUX_SYMBOL_STR(smscore_unregister_hotplug) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x844539ae, __VMLINUX_SYMBOL_STR(sms_get_board) },
	{ 0xedd2e282, __VMLINUX_SYMBOL_STR(dvb_register_adapter) },
	{ 0xd67b0b4f, __VMLINUX_SYMBOL_STR(sms_board_power) },
	{ 0x147fb690, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xacb9b588, __VMLINUX_SYMBOL_STR(sms_board_led_feedback) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x75d3affc, __VMLINUX_SYMBOL_STR(param_array_ops) },
	{ 0x3cb8d7ed, __VMLINUX_SYMBOL_STR(smscore_register_client) },
	{ 0x3cbdba0e, __VMLINUX_SYMBOL_STR(smscore_get_device_mode) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xd4669fad, __VMLINUX_SYMBOL_STR(complete) },
	{ 0x7cf9099, __VMLINUX_SYMBOL_STR(wait_for_completion_timeout) },
	{ 0xba2269e9, __VMLINUX_SYMBOL_STR(dvb_dmxdev_init) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=smsmdtv";

