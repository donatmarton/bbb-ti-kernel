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
	{ 0x5788a263, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x8c03d20c, __VMLINUX_SYMBOL_STR(destroy_workqueue) },
	{ 0x42160169, __VMLINUX_SYMBOL_STR(flush_workqueue) },
	{ 0x1cfb04fa, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0x344b7739, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x622598b1, __VMLINUX_SYMBOL_STR(init_wait_entry) },
	{ 0x36cf4f03, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0xce098205, __VMLINUX_SYMBOL_STR(platform_device_unregister) },
	{ 0x837bc10d, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0x43a53735, __VMLINUX_SYMBOL_STR(__alloc_workqueue_key) },
	{ 0x19a304ba, __VMLINUX_SYMBOL_STR(usb_disabled) },
	{ 0xa5de5ec6, __VMLINUX_SYMBOL_STR(usb_ftdi_elan_edset_empty) },
	{ 0xf9917f30, __VMLINUX_SYMBOL_STR(usb_ftdi_elan_edset_setup) },
	{ 0xcd9ee18d, __VMLINUX_SYMBOL_STR(usb_ftdi_elan_edset_flush) },
	{ 0xae288fc6, __VMLINUX_SYMBOL_STR(usb_ftdi_elan_edset_input) },
	{ 0xeee62bbc, __VMLINUX_SYMBOL_STR(usb_ftdi_elan_edset_single) },
	{ 0x5b537d96, __VMLINUX_SYMBOL_STR(usb_ftdi_elan_edset_output) },
	{ 0x15051241, __VMLINUX_SYMBOL_STR(device_wakeup_enable) },
	{ 0x9663c504, __VMLINUX_SYMBOL_STR(usb_add_hcd) },
	{ 0x5a32f871, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x5db3044a, __VMLINUX_SYMBOL_STR(usb_create_hcd) },
	{ 0xb990d3b4, __VMLINUX_SYMBOL_STR(usb_hcd_giveback_urb) },
	{ 0x841375eb, __VMLINUX_SYMBOL_STR(usb_hcd_check_unlink_urb) },
	{ 0x8fcc0cb3, __VMLINUX_SYMBOL_STR(usb_hcd_unlink_urb_from_ep) },
	{ 0x147fb690, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xf6789fdc, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0x8fdf772a, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x7f02188f, __VMLINUX_SYMBOL_STR(__msecs_to_jiffies) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x681923c8, __VMLINUX_SYMBOL_STR(usb_hcd_link_urb_to_ep) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x85d472aa, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0x24a0f57a, __VMLINUX_SYMBOL_STR(ftdi_elan_gone_away) },
	{ 0x333c8295, __VMLINUX_SYMBOL_STR(usb_hc_died) },
	{ 0x75d2f178, __VMLINUX_SYMBOL_STR(usb_remove_hcd) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x45d63fe1, __VMLINUX_SYMBOL_STR(cancel_delayed_work) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x857b0b4c, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x94fd298f, __VMLINUX_SYMBOL_STR(usb_ftdi_elan_write_pcimem) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x290f476f, __VMLINUX_SYMBOL_STR(usb_ftdi_elan_read_pcimem) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x521445b, __VMLINUX_SYMBOL_STR(list_del) },
	{ 0xe39a145e, __VMLINUX_SYMBOL_STR(usb_put_hcd) },
	{ 0xaa7d42d1, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0xdbe8baac, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x65e75cb6, __VMLINUX_SYMBOL_STR(__list_del_entry) },
	{ 0xfed0a669, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x752aeb9e, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ftdi-elan";

