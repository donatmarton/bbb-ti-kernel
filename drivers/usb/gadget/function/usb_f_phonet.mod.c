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
	{ 0xc0799573, __VMLINUX_SYMBOL_STR(usb_free_all_descriptors) },
	{ 0x5fc56a46, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0x7d419536, __VMLINUX_SYMBOL_STR(usb_ep_disable) },
	{ 0x382f0cee, __VMLINUX_SYMBOL_STR(usb_ep_enable) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x292db41e, __VMLINUX_SYMBOL_STR(page_address) },
	{ 0xaeb0f71a, __VMLINUX_SYMBOL_STR(usb_ep_queue) },
	{ 0x6d4e025a, __VMLINUX_SYMBOL_STR(netif_carrier_on) },
	{ 0xd7dd8451, __VMLINUX_SYMBOL_STR(netif_carrier_off) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xf3eaafa9, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0x109a8ae6, __VMLINUX_SYMBOL_STR(gether_get_ifname) },
	{ 0x4640ff6a, __VMLINUX_SYMBOL_STR(usb_ep_alloc_request) },
	{ 0x9d26ee04, __VMLINUX_SYMBOL_STR(usb_function_unregister) },
	{ 0xddfee4dd, __VMLINUX_SYMBOL_STR(__alloc_pages_nodemask) },
	{ 0x6c119f4d, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0x143a1e84, __VMLINUX_SYMBOL_STR(netif_rx) },
	{ 0xaf8a0b63, __VMLINUX_SYMBOL_STR(phonet_header_ops) },
	{ 0x69329b6c, __VMLINUX_SYMBOL_STR(netif_tx_wake_queue) },
	{ 0xffb76eee, __VMLINUX_SYMBOL_STR(usb_put_function_instance) },
	{ 0x752aeb9e, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x8c6866ff, __VMLINUX_SYMBOL_STR(usb_ep_autoconfig) },
	{ 0x535890a0, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0x63eea3ef, __VMLINUX_SYMBOL_STR(register_netdev) },
	{ 0xcb954f2, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_irq) },
	{ 0x59227b48, __VMLINUX_SYMBOL_STR(config_group_init_type_name) },
	{ 0x5713f6c5, __VMLINUX_SYMBOL_STR(usb_function_register) },
	{ 0xf69ee7fe, __VMLINUX_SYMBOL_STR(contig_page_data) },
	{ 0x857b0b4c, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x702291be, __VMLINUX_SYMBOL_STR(alloc_netdev_mqs) },
	{ 0x3047374a, __VMLINUX_SYMBOL_STR(config_ep_by_speed) },
	{ 0x491ff2b0, __VMLINUX_SYMBOL_STR(usb_ep_free_request) },
	{ 0x147fb690, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xd0cba326, __VMLINUX_SYMBOL_STR(skb_add_rx_frag) },
	{ 0x7ad9f15c, __VMLINUX_SYMBOL_STR(usb_assign_descriptors) },
	{ 0x80ea8343, __VMLINUX_SYMBOL_STR(usb_interface_id) },
	{ 0x3d8dc21b, __VMLINUX_SYMBOL_STR(unregister_netdev) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xcb62ec7d, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0x9cfd625d, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x2ef3e65f, __VMLINUX_SYMBOL_STR(__put_page) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libcomposite,u_ether,phonet";

