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
	{ 0xa57b02d8, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x76d817, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x1cd1a26f, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0x324b8c6a, __VMLINUX_SYMBOL_STR(btbcm_set_bdaddr) },
	{ 0x4e8d9c6a, __VMLINUX_SYMBOL_STR(btbcm_setup_patchram) },
	{ 0xab79cc6d, __VMLINUX_SYMBOL_STR(btbcm_setup_apple) },
	{ 0x4ceedf1a, __VMLINUX_SYMBOL_STR(usb_ifnum_to_if) },
	{ 0x4a7d7e3c, __VMLINUX_SYMBOL_STR(hci_register_dev) },
	{ 0xf57dc2e2, __VMLINUX_SYMBOL_STR(usb_driver_claim_interface) },
	{ 0x2d35cc06, __VMLINUX_SYMBOL_STR(btrtl_setup_realtek) },
	{ 0x129936b1, __VMLINUX_SYMBOL_STR(btintel_set_diag) },
	{ 0x3083a1ce, __VMLINUX_SYMBOL_STR(btintel_hw_error) },
	{ 0x9565d591, __VMLINUX_SYMBOL_STR(btintel_set_bdaddr) },
	{ 0x9d900cd, __VMLINUX_SYMBOL_STR(btintel_set_diag_mfg) },
	{ 0xfb2de2e4, __VMLINUX_SYMBOL_STR(hci_alloc_dev) },
	{ 0x63b87fc5, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x8caa767c, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x3352727a, __VMLINUX_SYMBOL_STR(usb_match_id) },
	{ 0xa0fbac79, __VMLINUX_SYMBOL_STR(wake_up_bit) },
	{ 0x612ae2b8, __VMLINUX_SYMBOL_STR(hci_recv_diag) },
	{ 0xfea687c8, __VMLINUX_SYMBOL_STR(usb_set_interface) },
	{ 0xa45e57e, __VMLINUX_SYMBOL_STR(usb_autopm_put_interface) },
	{ 0x3c117aa, __VMLINUX_SYMBOL_STR(usb_autopm_get_interface) },
	{ 0x1d0342e4, __VMLINUX_SYMBOL_STR(__hci_cmd_sync_ev) },
	{ 0xc4c410ab, __VMLINUX_SYMBOL_STR(btintel_set_event_mask_mfg) },
	{ 0xe7822b34, __VMLINUX_SYMBOL_STR(out_of_line_wait_on_bit_timeout) },
	{ 0x44bae227, __VMLINUX_SYMBOL_STR(bit_wait_timeout) },
	{ 0x7244cc98, __VMLINUX_SYMBOL_STR(btintel_check_bdaddr) },
	{ 0x2a90f7eb, __VMLINUX_SYMBOL_STR(btintel_set_event_mask) },
	{ 0x12cfcaf1, __VMLINUX_SYMBOL_STR(btintel_load_ddc_config) },
	{ 0x22ef151f, __VMLINUX_SYMBOL_STR(release_firmware) },
	{ 0x96c19fb4, __VMLINUX_SYMBOL_STR(btintel_secure_send) },
	{ 0x5ed56e18, __VMLINUX_SYMBOL_STR(request_firmware) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0xd7442057, __VMLINUX_SYMBOL_STR(bt_info) },
	{ 0x4643b27a, __VMLINUX_SYMBOL_STR(btintel_version_info) },
	{ 0xc87c1f84, __VMLINUX_SYMBOL_STR(ktime_get) },
	{ 0x7624ae76, __VMLINUX_SYMBOL_STR(usb_bulk_msg) },
	{ 0x94e8602, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x25056aef, __VMLINUX_SYMBOL_STR(__hci_cmd_sync) },
	{ 0x8861ea16, __VMLINUX_SYMBOL_STR(usb_driver_release_interface) },
	{ 0x2d1a0e9d, __VMLINUX_SYMBOL_STR(hci_free_dev) },
	{ 0xc71be960, __VMLINUX_SYMBOL_STR(hci_unregister_dev) },
	{ 0x4205ad24, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0x3da6f9d3, __VMLINUX_SYMBOL_STR(usb_kill_anchored_urbs) },
	{ 0x7a984179, __VMLINUX_SYMBOL_STR(usb_scuttle_anchored_urbs) },
	{ 0x8415cc61, __VMLINUX_SYMBOL_STR(usb_get_from_anchor) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x2f4843ad, __VMLINUX_SYMBOL_STR(hci_recv_frame) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x900f303a, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0xcaa1a2be, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x7b8c3a36, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x43b0c9c3, __VMLINUX_SYMBOL_STR(preempt_schedule) },
	{ 0xc2102972, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0x4a211dfd, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x706c5a65, __VMLINUX_SYMBOL_STR(preempt_count_sub) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xfe8e1ccd, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0xf229424a, __VMLINUX_SYMBOL_STR(preempt_count_add) },
	{ 0x3b3556e6, __VMLINUX_SYMBOL_STR(usb_unanchor_urb) },
	{ 0x47022514, __VMLINUX_SYMBOL_STR(bt_err) },
	{ 0xc4ad22c6, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xae48b57b, __VMLINUX_SYMBOL_STR(usb_anchor_urb) },
	{ 0x44b1d426, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x55da3d4e, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=btbcm,bluetooth,btrtl,btintel";

MODULE_ALIAS("usb:v*p*d*dcE0dsc01dp01ic*isc*ip*in*");
MODULE_ALIAS("usb:v*p*d*dcE0dsc01dp04ic*isc*ip*in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*icE0isc01ip01in*");
MODULE_ALIAS("usb:v05ACp*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v0E8Dp763Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A5Cp21E1d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp8213d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp8215d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp8218d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp821Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp821Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp821Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp8281d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v057Cp3800d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04BFp030Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v044Ep3001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v044Ep3002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDBp1002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C10p0000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v413Cp8197d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v19FFp0239d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v105BpE065d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0489p*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v04CAp*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v0A5Cp*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v0B05p*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v050Dp*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v13D3p*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v0930p*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v8087p0A5Ad*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "1DC19E2B41E04960B8E2BE7");
