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
	{ 0x51fdc869, __VMLINUX_SYMBOL_STR(transport_class_register) },
	{ 0x1a311dc9, __VMLINUX_SYMBOL_STR(class_find_device) },
	{ 0xcd6f8d90, __VMLINUX_SYMBOL_STR(bus_register) },
	{ 0xf6789fdc, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x35967eef, __VMLINUX_SYMBOL_STR(scsi_remove_target) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x6e8b75b0, __VMLINUX_SYMBOL_STR(scsi_host_lookup) },
	{ 0xbbd2f946, __VMLINUX_SYMBOL_STR(scsi_flush_work) },
	{ 0xf6140fe2, __VMLINUX_SYMBOL_STR(blk_cleanup_queue) },
	{ 0xefe21d65, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x43a53735, __VMLINUX_SYMBOL_STR(__alloc_workqueue_key) },
	{ 0x1c1e6de, __VMLINUX_SYMBOL_STR(dev_printk) },
	{ 0x20000329, __VMLINUX_SYMBOL_STR(simple_strtoul) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0x6480b5f4, __VMLINUX_SYMBOL_STR(bsg_request_fn) },
	{ 0xf932ec0d, __VMLINUX_SYMBOL_STR(transport_destroy_device) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x8fdf772a, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0xe3a1d983, __VMLINUX_SYMBOL_STR(attribute_container_unregister) },
	{ 0xdbe8baac, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xcbee6439, __VMLINUX_SYMBOL_STR(ida_simple_get) },
	{ 0x23959044, __VMLINUX_SYMBOL_STR(scsi_scan_target) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xb1ea493e, __VMLINUX_SYMBOL_STR(sysfs_remove_group) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0x71f7577d, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0x80826694, __VMLINUX_SYMBOL_STR(scsi_is_host_device) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x45d63fe1, __VMLINUX_SYMBOL_STR(cancel_delayed_work) },
	{ 0xad9516b4, __VMLINUX_SYMBOL_STR(device_del) },
	{ 0x87715811, __VMLINUX_SYMBOL_STR(device_register) },
	{ 0xbd94e524, __VMLINUX_SYMBOL_STR(scsi_queue_work) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x14174fa6, __VMLINUX_SYMBOL_STR(transport_add_device) },
	{ 0x5a32f871, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0xdea51a39, __VMLINUX_SYMBOL_STR(device_find_child) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x20c55ae0, __VMLINUX_SYMBOL_STR(sscanf) },
	{ 0x19d3b7d8, __VMLINUX_SYMBOL_STR(sysfs_create_group) },
	{ 0x711520a7, __VMLINUX_SYMBOL_STR(class_unregister) },
	{ 0x8124ae9f, __VMLINUX_SYMBOL_STR(netlink_kernel_release) },
	{ 0x29e1b020, __VMLINUX_SYMBOL_STR(ida_simple_remove) },
	{ 0x84b183ae, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0x1b48fc9a, __VMLINUX_SYMBOL_STR(attribute_container_register) },
	{ 0xfed0a669, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x8c03d20c, __VMLINUX_SYMBOL_STR(destroy_workqueue) },
	{ 0x521445b, __VMLINUX_SYMBOL_STR(list_del) },
	{ 0xc6b76847, __VMLINUX_SYMBOL_STR(device_add) },
	{ 0x9badcfb5, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x431bbd5a, __VMLINUX_SYMBOL_STR(transport_class_unregister) },
	{ 0x3d31571a, __VMLINUX_SYMBOL_STR(scsi_host_put) },
	{ 0xca3df0a2, __VMLINUX_SYMBOL_STR(init_net) },
	{ 0x91d6668b, __VMLINUX_SYMBOL_STR(__class_register) },
	{ 0x3655bcb1, __VMLINUX_SYMBOL_STR(bus_unregister) },
	{ 0x42160169, __VMLINUX_SYMBOL_STR(flush_workqueue) },
	{ 0x14846fbb, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0xc6cbbc89, __VMLINUX_SYMBOL_STR(capable) },
	{ 0xe4e8a562, __VMLINUX_SYMBOL_STR(scsi_target_unblock) },
	{ 0x2005e93f, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0xcf82cf53, __VMLINUX_SYMBOL_STR(scsi_host_get) },
	{ 0xdea90712, __VMLINUX_SYMBOL_STR(netlink_broadcast) },
	{ 0xf8dfe3ad, __VMLINUX_SYMBOL_STR(put_device) },
	{ 0x85d472aa, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x4a6761ad, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0xaf099497, __VMLINUX_SYMBOL_STR(transport_setup_device) },
	{ 0xd6a2bc41, __VMLINUX_SYMBOL_STR(bsg_unregister_queue) },
	{ 0x147fb690, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x657b2089, __VMLINUX_SYMBOL_STR(get_device) },
	{ 0xf7379120, __VMLINUX_SYMBOL_STR(device_for_each_child) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0x645be291, __VMLINUX_SYMBOL_STR(__netlink_kernel_create) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x76e9f2ae, __VMLINUX_SYMBOL_STR(device_initialize) },
	{ 0x4d72b5a7, __VMLINUX_SYMBOL_STR(device_unregister) },
	{ 0x6351ce7b, __VMLINUX_SYMBOL_STR(transport_remove_device) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xf2ebe5cb, __VMLINUX_SYMBOL_STR(scsi_target_block) },
	{ 0x7f19d829, __VMLINUX_SYMBOL_STR(bsg_job_done) },
	{ 0x986abfdc, __VMLINUX_SYMBOL_STR(dev_set_name) },
	{ 0x44380be1, __VMLINUX_SYMBOL_STR(bsg_setup_queue) },
	{ 0x91fb3536, __VMLINUX_SYMBOL_STR(__nlmsg_put) },
	{ 0xb8e4fba7, __VMLINUX_SYMBOL_STR(try_module_get) },
	{ 0xdd215fb0, __VMLINUX_SYMBOL_STR(__scsi_alloc_queue) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "E2D6BC0F3C9C93BAEB79538");
