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
	{ 0x10ab577b, __VMLINUX_SYMBOL_STR(kmem_cache_destroy) },
	{ 0xe01615de, __VMLINUX_SYMBOL_STR(device_remove_file) },
	{ 0xf6789fdc, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x65e75cb6, __VMLINUX_SYMBOL_STR(__list_del_entry) },
	{ 0xca490744, __VMLINUX_SYMBOL_STR(usbip_event_happened) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xd02753dc, __VMLINUX_SYMBOL_STR(usbip_header_correct_endian) },
	{ 0x1dc738c1, __VMLINUX_SYMBOL_STR(kernel_sendmsg) },
	{ 0x98714d13, __VMLINUX_SYMBOL_STR(sockfd_lookup) },
	{ 0x5fc56a46, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x7f95f1f9, __VMLINUX_SYMBOL_STR(usb_set_configuration) },
	{ 0x31ec2df8, __VMLINUX_SYMBOL_STR(usbip_alloc_iso_desc_pdu) },
	{ 0xae9d6cbf, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0x69c03fc5, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0xe2fae716, __VMLINUX_SYMBOL_STR(kmemdup) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x382cec4f, __VMLINUX_SYMBOL_STR(usb_hub_claim_port) },
	{ 0xdbe8baac, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x677071c6, __VMLINUX_SYMBOL_STR(usb_unlink_urb) },
	{ 0x9417a8d5, __VMLINUX_SYMBOL_STR(kthread_create_on_node) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x692535d3, __VMLINUX_SYMBOL_STR(usbip_event_add) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xe1ea0586, __VMLINUX_SYMBOL_STR(usbip_dump_header) },
	{ 0x6c12830d, __VMLINUX_SYMBOL_STR(usbip_in_eh) },
	{ 0x5a2d8974, __VMLINUX_SYMBOL_STR(usb_lock_device_for_reset) },
	{ 0x752aeb9e, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x20c55ae0, __VMLINUX_SYMBOL_STR(sscanf) },
	{ 0x686f8a1a, __VMLINUX_SYMBOL_STR(kthread_stop) },
	{ 0x6fbc742a, __VMLINUX_SYMBOL_STR(usb_set_interface) },
	{ 0x1a1431fd, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irq) },
	{ 0x84b183ae, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x67bc06d0, __VMLINUX_SYMBOL_STR(usb_register_device_driver) },
	{ 0xd26e0e90, __VMLINUX_SYMBOL_STR(kmem_cache_free) },
	{ 0x4371f77a, __VMLINUX_SYMBOL_STR(kernel_sock_shutdown) },
	{ 0x521445b, __VMLINUX_SYMBOL_STR(list_del) },
	{ 0xb6605088, __VMLINUX_SYMBOL_STR(device_attach) },
	{ 0xd113957f, __VMLINUX_SYMBOL_STR(usbip_stop_eh) },
	{ 0xfcae7713, __VMLINUX_SYMBOL_STR(dev_attr_usbip_debug) },
	{ 0x33ff49a8, __VMLINUX_SYMBOL_STR(fput) },
	{ 0xf2fc7770, __VMLINUX_SYMBOL_STR(usbip_recv_iso) },
	{ 0x622598b1, __VMLINUX_SYMBOL_STR(init_wait_entry) },
	{ 0x9347e40, __VMLINUX_SYMBOL_STR(device_create_file) },
	{ 0x857b0b4c, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x7500da19, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0x666774aa, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0xfbf0f4ee, __VMLINUX_SYMBOL_STR(usbip_dump_urb) },
	{ 0x182469b8, __VMLINUX_SYMBOL_STR(usb_get_dev) },
	{ 0xd9ce8f0c, __VMLINUX_SYMBOL_STR(strnlen) },
	{ 0xee378216, __VMLINUX_SYMBOL_STR(driver_create_file) },
	{ 0xe1a9710a, __VMLINUX_SYMBOL_STR(usbip_recv) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x584c9d8c, __VMLINUX_SYMBOL_STR(usb_reset_device) },
	{ 0x631c30ca, __VMLINUX_SYMBOL_STR(usb_put_dev) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0xd8748efb, __VMLINUX_SYMBOL_STR(usb_clear_halt) },
	{ 0x3507a132, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0x82178996, __VMLINUX_SYMBOL_STR(wake_up_process) },
	{ 0x2b745f83, __VMLINUX_SYMBOL_STR(usb_deregister_device_driver) },
	{ 0x147fb690, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0xd843fa3f, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xedf65a89, __VMLINUX_SYMBOL_STR(kmem_cache_create) },
	{ 0xd85cd67e, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0xb3f7646e, __VMLINUX_SYMBOL_STR(kthread_should_stop) },
	{ 0x344b7739, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x15d1e539, __VMLINUX_SYMBOL_STR(usbip_recv_xbuff) },
	{ 0x1852487a, __VMLINUX_SYMBOL_STR(usb_hub_release_port) },
	{ 0x934bf69f, __VMLINUX_SYMBOL_STR(__put_task_struct) },
	{ 0x78b72f44, __VMLINUX_SYMBOL_STR(usbip_debug_flag) },
	{ 0x1cfb04fa, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x804a03d1, __VMLINUX_SYMBOL_STR(driver_remove_file) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xef6d375a, __VMLINUX_SYMBOL_STR(usbip_start_eh) },
	{ 0xa2615298, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0x8cbdb89e, __VMLINUX_SYMBOL_STR(usbip_pack_pdu) },
	{ 0x4ecc5f3f, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usbip-core";


MODULE_INFO(srcversion, "FD7F7BC1D185EC49DCF1D86");
