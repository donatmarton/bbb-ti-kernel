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
	{ 0x8a51448, __VMLINUX_SYMBOL_STR(usb_gstrings_attach) },
	{ 0xc0799573, __VMLINUX_SYMBOL_STR(usb_free_all_descriptors) },
	{ 0x7d419536, __VMLINUX_SYMBOL_STR(usb_ep_disable) },
	{ 0x382f0cee, __VMLINUX_SYMBOL_STR(usb_ep_enable) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xf0980eb9, __VMLINUX_SYMBOL_STR(gether_get_qmult) },
	{ 0xaeb0f71a, __VMLINUX_SYMBOL_STR(usb_ep_queue) },
	{ 0x85fab844, __VMLINUX_SYMBOL_STR(gether_setup_name_default) },
	{ 0x96aa5911, __VMLINUX_SYMBOL_STR(gether_get_host_addr_cdc) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xdbe8baac, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x109a8ae6, __VMLINUX_SYMBOL_STR(gether_get_ifname) },
	{ 0x4640ff6a, __VMLINUX_SYMBOL_STR(usb_ep_alloc_request) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x8878cfa6, __VMLINUX_SYMBOL_STR(gether_cleanup) },
	{ 0x9d26ee04, __VMLINUX_SYMBOL_STR(usb_function_unregister) },
	{ 0xa0aefd1b, __VMLINUX_SYMBOL_STR(gether_set_host_addr) },
	{ 0x7bdfb901, __VMLINUX_SYMBOL_STR(gether_get_dev_addr) },
	{ 0xcdabb9dd, __VMLINUX_SYMBOL_STR(gether_connect) },
	{ 0xffb76eee, __VMLINUX_SYMBOL_STR(usb_put_function_instance) },
	{ 0x5a5a94a6, __VMLINUX_SYMBOL_STR(kstrtou8) },
	{ 0x752aeb9e, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x5a32f871, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x8c6866ff, __VMLINUX_SYMBOL_STR(usb_ep_autoconfig) },
	{ 0x535890a0, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0x90c6d532, __VMLINUX_SYMBOL_STR(gether_set_gadget) },
	{ 0xfed0a669, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xe3a6124f, __VMLINUX_SYMBOL_STR(gether_get_host_addr) },
	{ 0x59227b48, __VMLINUX_SYMBOL_STR(config_group_init_type_name) },
	{ 0x216ba1e7, __VMLINUX_SYMBOL_STR(gether_set_qmult) },
	{ 0x5713f6c5, __VMLINUX_SYMBOL_STR(usb_function_register) },
	{ 0xf3c8e493, __VMLINUX_SYMBOL_STR(gether_register_netdev) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x230346aa, __VMLINUX_SYMBOL_STR(gether_set_dev_addr) },
	{ 0x3047374a, __VMLINUX_SYMBOL_STR(config_ep_by_speed) },
	{ 0x491ff2b0, __VMLINUX_SYMBOL_STR(usb_ep_free_request) },
	{ 0x147fb690, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xd843fa3f, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x62e6d5a1, __VMLINUX_SYMBOL_STR(gether_disconnect) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x7ad9f15c, __VMLINUX_SYMBOL_STR(usb_assign_descriptors) },
	{ 0x80ea8343, __VMLINUX_SYMBOL_STR(usb_interface_id) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libcomposite,u_ether";

