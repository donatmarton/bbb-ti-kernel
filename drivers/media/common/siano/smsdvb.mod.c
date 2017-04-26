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
	{ 0x94ddd853, __VMLINUX_SYMBOL_STR(smscore_register_hotplug) },
	{ 0x5c5dbf5a, __VMLINUX_SYMBOL_STR(smscore_get_board_id) },
	{ 0xc28b3c5c, __VMLINUX_SYMBOL_STR(sms_board_setup) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x2abae88d, __VMLINUX_SYMBOL_STR(dvb_dmx_init) },
	{ 0x5b888ea4, __VMLINUX_SYMBOL_STR(dvb_unregister_adapter) },
	{ 0x2395818c, __VMLINUX_SYMBOL_STR(sms_board_event) },
	{ 0xec0d5c1e, __VMLINUX_SYMBOL_STR(dvb_register_frontend) },
	{ 0x44b1d426, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0xbbdb5c42, __VMLINUX_SYMBOL_STR(smscore_unregister_client) },
	{ 0xddf6839, __VMLINUX_SYMBOL_STR(dvb_unregister_frontend) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x62b72b0d, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0xd304f5a5, __VMLINUX_SYMBOL_STR(param_ops_short) },
	{ 0x63222b29, __VMLINUX_SYMBOL_STR(smsclient_sendrequest) },
	{ 0x23ffbee, __VMLINUX_SYMBOL_STR(dvb_dmxdev_release) },
	{ 0xdc798d37, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xa1ca77b7, __VMLINUX_SYMBOL_STR(sms_board_lna_control) },
	{ 0x8efb86a3, __VMLINUX_SYMBOL_STR(dvb_dmx_swfilter) },
	{ 0xe16b893b, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x521445b, __VMLINUX_SYMBOL_STR(list_del) },
	{ 0x65f3a750, __VMLINUX_SYMBOL_STR(dvb_dmx_release) },
	{ 0x59e5070d, __VMLINUX_SYMBOL_STR(__do_div64) },
	{ 0xe8fa148a, __VMLINUX_SYMBOL_STR(smscore_putbuffer) },
	{ 0x624b0858, __VMLINUX_SYMBOL_STR(smscore_unregister_hotplug) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x844539ae, __VMLINUX_SYMBOL_STR(sms_get_board) },
	{ 0xc9ee230b, __VMLINUX_SYMBOL_STR(dvb_register_adapter) },
	{ 0x150f130c, __VMLINUX_SYMBOL_STR(sms_board_power) },
	{ 0xcaa1a2be, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x350981ff, __VMLINUX_SYMBOL_STR(sms_board_led_feedback) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x29923658, __VMLINUX_SYMBOL_STR(param_array_ops) },
	{ 0xf9dd9922, __VMLINUX_SYMBOL_STR(__init_swait_queue_head) },
	{ 0x5eae0125, __VMLINUX_SYMBOL_STR(smscore_register_client) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xf860203f, __VMLINUX_SYMBOL_STR(smscore_get_device_mode) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x9cbcaf26, __VMLINUX_SYMBOL_STR(complete) },
	{ 0xcd1f63ee, __VMLINUX_SYMBOL_STR(wait_for_completion_timeout) },
	{ 0xd123948d, __VMLINUX_SYMBOL_STR(dvb_dmxdev_init) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=smsmdtv";

