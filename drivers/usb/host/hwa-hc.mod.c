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
	{ 0x54d9e017, __VMLINUX_SYMBOL_STR(wusbhc_rh_start_port_reset) },
	{ 0x60433923, __VMLINUX_SYMBOL_STR(wusbhc_rh_control) },
	{ 0x73c4fc90, __VMLINUX_SYMBOL_STR(wusbhc_rh_status_data) },
	{ 0x1a329efe, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x60fad71b, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0xd843fa3f, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x7ea01987, __VMLINUX_SYMBOL_STR(wusbhc_b_create) },
	{ 0x15051241, __VMLINUX_SYMBOL_STR(device_wakeup_enable) },
	{ 0x9663c504, __VMLINUX_SYMBOL_STR(usb_add_hcd) },
	{ 0x52a86bf7, __VMLINUX_SYMBOL_STR(wa_create) },
	{ 0xfeebd870, __VMLINUX_SYMBOL_STR(wusbhc_create) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x9924c496, __VMLINUX_SYMBOL_STR(__usb_get_extra_descriptor) },
	{ 0xaa7d42d1, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0xc890d635, __VMLINUX_SYMBOL_STR(usb_get_intf) },
	{ 0x182469b8, __VMLINUX_SYMBOL_STR(usb_get_dev) },
	{ 0x93dad326, __VMLINUX_SYMBOL_STR(usb_init_urb) },
	{ 0xc543b60e, __VMLINUX_SYMBOL_STR(wa_process_errored_transfers_run) },
	{ 0xf4654c3f, __VMLINUX_SYMBOL_STR(wa_urb_enqueue_run) },
	{ 0x5a32f871, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x5db3044a, __VMLINUX_SYMBOL_STR(usb_create_hcd) },
	{ 0x77a827bc, __VMLINUX_SYMBOL_STR(wa_dti_start) },
	{ 0x7500da19, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x147fb690, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xf6789fdc, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xfe2e17d7, __VMLINUX_SYMBOL_STR(wusb_et_name) },
	{ 0x7a4497db, __VMLINUX_SYMBOL_STR(kzfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xae9d6cbf, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0x752aeb9e, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0x857b0b4c, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xbb6bf5e, __VMLINUX_SYMBOL_STR(wusb_cluster_id_get) },
	{ 0x82fc1495, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0xb725d128, __VMLINUX_SYMBOL_STR(wusb_cluster_id_put) },
	{ 0x128723d, __VMLINUX_SYMBOL_STR(usb_get_current_frame_number) },
	{ 0xa32876d4, __VMLINUX_SYMBOL_STR(wa_urb_enqueue) },
	{ 0xe83a32ab, __VMLINUX_SYMBOL_STR(wa_urb_dequeue) },
	{ 0x3be8e183, __VMLINUX_SYMBOL_STR(rpipe_ep_disable) },
	{ 0xe39a145e, __VMLINUX_SYMBOL_STR(usb_put_hcd) },
	{ 0x75d2f178, __VMLINUX_SYMBOL_STR(usb_remove_hcd) },
	{ 0x29b6449e, __VMLINUX_SYMBOL_STR(wusbhc_b_destroy) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xdbe8baac, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x631c30ca, __VMLINUX_SYMBOL_STR(usb_put_dev) },
	{ 0x1a638c9c, __VMLINUX_SYMBOL_STR(usb_put_intf) },
	{ 0x9b237246, __VMLINUX_SYMBOL_STR(uwb_rc_put) },
	{ 0x8c2ea98, __VMLINUX_SYMBOL_STR(wusbhc_destroy) },
	{ 0xbdc3f2a3, __VMLINUX_SYMBOL_STR(__wa_destroy) },
	{ 0xfed0a669, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=wusbcore,wusb-wa,uwb";

MODULE_ALIAS("usb:v13DCp5310d*dc*dsc*dp*icE0isc02ip01in*");
MODULE_ALIAS("usb:v13DCp5611d*dc*dsc*dp*icE0isc02ip01in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*icE0isc02ip01in*");
