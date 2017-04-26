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
	{ 0x65e75cb6, __VMLINUX_SYMBOL_STR(__list_del_entry) },
	{ 0x85741565, __VMLINUX_SYMBOL_STR(usbip_event_happened) },
	{ 0xd02753dc, __VMLINUX_SYMBOL_STR(usbip_header_correct_endian) },
	{ 0x4805e22, __VMLINUX_SYMBOL_STR(kernel_sendmsg) },
	{ 0xa88ba6f2, __VMLINUX_SYMBOL_STR(sockfd_lookup) },
	{ 0x86f6b027, __VMLINUX_SYMBOL_STR(usb_add_hcd) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x9c0b9090, __VMLINUX_SYMBOL_STR(usb_remove_hcd) },
	{ 0xb911c88, __VMLINUX_SYMBOL_STR(usb_create_hcd) },
	{ 0x8d4fece7, __VMLINUX_SYMBOL_STR(usb_hcd_poll_rh_status) },
	{ 0xe38a218c, __VMLINUX_SYMBOL_STR(usbip_alloc_iso_desc_pdu) },
	{ 0x44b1d426, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xb468d40e, __VMLINUX_SYMBOL_STR(usb_hcd_giveback_urb) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x906099bd, __VMLINUX_SYMBOL_STR(sysfs_remove_group) },
	{ 0xe564cc94, __VMLINUX_SYMBOL_STR(kthread_create_on_node) },
	{ 0x4a4a4bd, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0xa179e97e, __VMLINUX_SYMBOL_STR(usb_put_hcd) },
	{ 0x32ba4095, __VMLINUX_SYMBOL_STR(usbip_event_add) },
	{ 0x63b87fc5, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xe1ea0586, __VMLINUX_SYMBOL_STR(usbip_dump_header) },
	{ 0x77ae495d, __VMLINUX_SYMBOL_STR(usb_speed_string) },
	{ 0x706c5a65, __VMLINUX_SYMBOL_STR(preempt_count_sub) },
	{ 0x1f36c881, __VMLINUX_SYMBOL_STR(usb_hcd_link_urb_to_ep) },
	{ 0xef1e4705, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x20c55ae0, __VMLINUX_SYMBOL_STR(sscanf) },
	{ 0xaf0d0b73, __VMLINUX_SYMBOL_STR(kthread_stop) },
	{ 0x8f7a5832, __VMLINUX_SYMBOL_STR(sysfs_create_group) },
	{ 0x92f19c62, __VMLINUX_SYMBOL_STR(kernel_sock_shutdown) },
	{ 0x521445b, __VMLINUX_SYMBOL_STR(list_del) },
	{ 0x9c272ecf, __VMLINUX_SYMBOL_STR(usbip_stop_eh) },
	{ 0x8d97d280, __VMLINUX_SYMBOL_STR(dev_attr_usbip_debug) },
	{ 0xabab5bb1, __VMLINUX_SYMBOL_STR(platform_device_unregister) },
	{ 0x43b0c9c3, __VMLINUX_SYMBOL_STR(preempt_schedule) },
	{ 0x394fd24c, __VMLINUX_SYMBOL_STR(fput) },
	{ 0x7477e80d, __VMLINUX_SYMBOL_STR(usbip_recv_iso) },
	{ 0x3ee7b299, __VMLINUX_SYMBOL_STR(usbip_pad_iso) },
	{ 0x82c20cff, __VMLINUX_SYMBOL_STR(usb_hcd_check_unlink_urb) },
	{ 0xc9e4f0cb, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xd8c95059, __VMLINUX_SYMBOL_STR(usbip_dump_urb) },
	{ 0x93d3991f, __VMLINUX_SYMBOL_STR(platform_device_register) },
	{ 0xd6efd600, __VMLINUX_SYMBOL_STR(usb_get_dev) },
	{ 0xf9a0e5b4, __VMLINUX_SYMBOL_STR(usbip_recv) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x92d08eb8, __VMLINUX_SYMBOL_STR(usb_put_dev) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0xd65172e, __VMLINUX_SYMBOL_STR(wake_up_process) },
	{ 0xcaa1a2be, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xc7da6011, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0xb9e52429, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0xb3f7646e, __VMLINUX_SYMBOL_STR(kthread_should_stop) },
	{ 0x158f2f00, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x19a304ba, __VMLINUX_SYMBOL_STR(usb_disabled) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xef3714e0, __VMLINUX_SYMBOL_STR(usbip_recv_xbuff) },
	{ 0x2f3fbfd7, __VMLINUX_SYMBOL_STR(__put_task_struct) },
	{ 0x78b72f44, __VMLINUX_SYMBOL_STR(usbip_debug_flag) },
	{ 0x8893fa5d, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xd945909, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0x52c26c71, __VMLINUX_SYMBOL_STR(usb_hcd_unlink_urb_from_ep) },
	{ 0xf229424a, __VMLINUX_SYMBOL_STR(preempt_count_add) },
	{ 0x93c93c8a, __VMLINUX_SYMBOL_STR(usb_hcd_resume_root_hub) },
	{ 0xd2550c8f, __VMLINUX_SYMBOL_STR(usbip_start_eh) },
	{ 0xa014d81b, __VMLINUX_SYMBOL_STR(usbip_pack_pdu) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usbip-core";


MODULE_INFO(srcversion, "0ADE5E6B77BC88B5CABBCD4");
