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
	{ 0x856bbb2c, __VMLINUX_SYMBOL_STR(wusbhc_rh_start_port_reset) },
	{ 0xdc3abc01, __VMLINUX_SYMBOL_STR(wusbhc_rh_control) },
	{ 0xfd6ef917, __VMLINUX_SYMBOL_STR(wusbhc_rh_status_data) },
	{ 0x76d817, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x1cd1a26f, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0x839fc96, __VMLINUX_SYMBOL_STR(wusbhc_b_create) },
	{ 0x9763a8a8, __VMLINUX_SYMBOL_STR(device_wakeup_enable) },
	{ 0x86f6b027, __VMLINUX_SYMBOL_STR(usb_add_hcd) },
	{ 0x8e2ab4f, __VMLINUX_SYMBOL_STR(wa_create) },
	{ 0x1e735743, __VMLINUX_SYMBOL_STR(wusbhc_create) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x9924c496, __VMLINUX_SYMBOL_STR(__usb_get_extra_descriptor) },
	{ 0x2f0664db, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0xc7da6011, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x2fe3966a, __VMLINUX_SYMBOL_STR(usb_get_intf) },
	{ 0xd6efd600, __VMLINUX_SYMBOL_STR(usb_get_dev) },
	{ 0x857fdb6b, __VMLINUX_SYMBOL_STR(usb_init_urb) },
	{ 0xc543b60e, __VMLINUX_SYMBOL_STR(wa_process_errored_transfers_run) },
	{ 0xf4654c3f, __VMLINUX_SYMBOL_STR(wa_urb_enqueue_run) },
	{ 0xdc798d37, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xb911c88, __VMLINUX_SYMBOL_STR(usb_create_hcd) },
	{ 0x2a406df7, __VMLINUX_SYMBOL_STR(wa_dti_start) },
	{ 0xc4ad22c6, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xcaa1a2be, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x7b8c3a36, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xfe2e17d7, __VMLINUX_SYMBOL_STR(wusb_et_name) },
	{ 0x7a4497db, __VMLINUX_SYMBOL_STR(kzfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x16b7c05d, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0xef1e4705, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xc9e4f0cb, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xbb6bf5e, __VMLINUX_SYMBOL_STR(wusb_cluster_id_get) },
	{ 0x94e8602, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0xb725d128, __VMLINUX_SYMBOL_STR(wusb_cluster_id_put) },
	{ 0x9ccce9f0, __VMLINUX_SYMBOL_STR(usb_get_current_frame_number) },
	{ 0xb416b91a, __VMLINUX_SYMBOL_STR(wa_urb_enqueue) },
	{ 0x77d98555, __VMLINUX_SYMBOL_STR(wa_urb_dequeue) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb05242cf, __VMLINUX_SYMBOL_STR(rpipe_ep_disable) },
	{ 0xa179e97e, __VMLINUX_SYMBOL_STR(usb_put_hcd) },
	{ 0x9c0b9090, __VMLINUX_SYMBOL_STR(usb_remove_hcd) },
	{ 0x3e573b2b, __VMLINUX_SYMBOL_STR(wusbhc_b_destroy) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x62b72b0d, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x92d08eb8, __VMLINUX_SYMBOL_STR(usb_put_dev) },
	{ 0x60b3b289, __VMLINUX_SYMBOL_STR(usb_put_intf) },
	{ 0xb58acc19, __VMLINUX_SYMBOL_STR(uwb_rc_put) },
	{ 0x4db065b8, __VMLINUX_SYMBOL_STR(wusbhc_destroy) },
	{ 0xd1200a93, __VMLINUX_SYMBOL_STR(__wa_destroy) },
	{ 0xe16b893b, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=wusbcore,wusb-wa,uwb";

MODULE_ALIAS("usb:v13DCp5310d*dc*dsc*dp*icE0isc02ip01in*");
MODULE_ALIAS("usb:v13DCp5611d*dc*dsc*dp*icE0isc02ip01in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*icE0isc02ip01in*");
