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
	{ 0x5f352a18, __VMLINUX_SYMBOL_STR(usb_gstrings_attach) },
	{ 0x8bb9b352, __VMLINUX_SYMBOL_STR(usb_free_all_descriptors) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x6f58cc53, __VMLINUX_SYMBOL_STR(gether_get_qmult) },
	{ 0x985a3f1, __VMLINUX_SYMBOL_STR(gether_setup_name_default) },
	{ 0x9e14108e, __VMLINUX_SYMBOL_STR(hrtimer_cancel) },
	{ 0x298909f1, __VMLINUX_SYMBOL_STR(gether_get_host_addr_cdc) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xa59a091d, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0x62b72b0d, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xf7d043a3, __VMLINUX_SYMBOL_STR(gether_get_ifname) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x8878cfa6, __VMLINUX_SYMBOL_STR(gether_cleanup) },
	{ 0x481ac3b0, __VMLINUX_SYMBOL_STR(usb_function_unregister) },
	{ 0xc84fc707, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0x82b504bc, __VMLINUX_SYMBOL_STR(gether_set_host_addr) },
	{ 0xca63e8df, __VMLINUX_SYMBOL_STR(gether_get_dev_addr) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xfff7d0a3, __VMLINUX_SYMBOL_STR(skb_queue_purge) },
	{ 0x6a1b7fe9, __VMLINUX_SYMBOL_STR(hrtimer_start_range_ns) },
	{ 0xeff74ea6, __VMLINUX_SYMBOL_STR(gether_connect) },
	{ 0x706c5a65, __VMLINUX_SYMBOL_STR(preempt_count_sub) },
	{ 0x87bc1537, __VMLINUX_SYMBOL_STR(usb_put_function_instance) },
	{ 0x5a5a94a6, __VMLINUX_SYMBOL_STR(kstrtou8) },
	{ 0xef1e4705, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xdc798d37, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x9b5894b0, __VMLINUX_SYMBOL_STR(usb_ep_autoconfig) },
	{ 0xbe43413c, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0xfaef0ed, __VMLINUX_SYMBOL_STR(__tasklet_schedule) },
	{ 0x8ea7aac3, __VMLINUX_SYMBOL_STR(gether_set_gadget) },
	{ 0xe16b893b, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x6220b4a2, __VMLINUX_SYMBOL_STR(crc32_le) },
	{ 0x54bdc796, __VMLINUX_SYMBOL_STR(gether_get_host_addr) },
	{ 0x5399a3c4, __VMLINUX_SYMBOL_STR(config_group_init_type_name) },
	{ 0x9545af6d, __VMLINUX_SYMBOL_STR(tasklet_init) },
	{ 0xde09007c, __VMLINUX_SYMBOL_STR(gether_set_qmult) },
	{ 0x43b0c9c3, __VMLINUX_SYMBOL_STR(preempt_schedule) },
	{ 0xf4ba9cc1, __VMLINUX_SYMBOL_STR(usb_function_register) },
	{ 0x82072614, __VMLINUX_SYMBOL_STR(tasklet_kill) },
	{ 0x4059792f, __VMLINUX_SYMBOL_STR(print_hex_dump) },
	{ 0x33c18c1e, __VMLINUX_SYMBOL_STR(skb_queue_tail) },
	{ 0xc9e4f0cb, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x34bd1d0c, __VMLINUX_SYMBOL_STR(gether_register_netdev) },
	{ 0xc2102972, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x2dd9ebbc, __VMLINUX_SYMBOL_STR(gether_set_dev_addr) },
	{ 0xe458c38f, __VMLINUX_SYMBOL_STR(config_ep_by_speed) },
	{ 0xcaa1a2be, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xc7da6011, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x8e6ab535, __VMLINUX_SYMBOL_STR(gether_disconnect) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x3eb7a160, __VMLINUX_SYMBOL_STR(hrtimer_init) },
	{ 0x9f5a8f6c, __VMLINUX_SYMBOL_STR(usb_assign_descriptors) },
	{ 0xab318d93, __VMLINUX_SYMBOL_STR(usb_interface_id) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x82c639dd, __VMLINUX_SYMBOL_STR(hrtimer_try_to_cancel) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xf229424a, __VMLINUX_SYMBOL_STR(preempt_count_add) },
	{ 0xfe8e1ccd, __VMLINUX_SYMBOL_STR(skb_put) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libcomposite,u_ether";

