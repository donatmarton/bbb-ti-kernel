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
	{ 0x5fc56a46, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0xc5287452, __VMLINUX_SYMBOL_STR(gserial_connect) },
	{ 0x7d419536, __VMLINUX_SYMBOL_STR(usb_ep_disable) },
	{ 0x382f0cee, __VMLINUX_SYMBOL_STR(usb_ep_enable) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xaeb0f71a, __VMLINUX_SYMBOL_STR(usb_ep_queue) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x4177eebe, __VMLINUX_SYMBOL_STR(usb_ep_set_halt) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x9d26ee04, __VMLINUX_SYMBOL_STR(usb_function_unregister) },
	{ 0xffb76eee, __VMLINUX_SYMBOL_STR(usb_put_function_instance) },
	{ 0x752aeb9e, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x8c6866ff, __VMLINUX_SYMBOL_STR(usb_ep_autoconfig) },
	{ 0xbd63fdb1, __VMLINUX_SYMBOL_STR(gserial_disconnect) },
	{ 0xbade9bf, __VMLINUX_SYMBOL_STR(gs_alloc_req) },
	{ 0x59227b48, __VMLINUX_SYMBOL_STR(config_group_init_type_name) },
	{ 0x33bfdca2, __VMLINUX_SYMBOL_STR(gserial_alloc_line) },
	{ 0x5713f6c5, __VMLINUX_SYMBOL_STR(usb_function_register) },
	{ 0x3047374a, __VMLINUX_SYMBOL_STR(config_ep_by_speed) },
	{ 0x147fb690, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0xd843fa3f, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xb6652875, __VMLINUX_SYMBOL_STR(gserial_free_line) },
	{ 0x7ad9f15c, __VMLINUX_SYMBOL_STR(usb_assign_descriptors) },
	{ 0x80ea8343, __VMLINUX_SYMBOL_STR(usb_interface_id) },
	{ 0x4e3dfea7, __VMLINUX_SYMBOL_STR(gs_free_req) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libcomposite,u_serial";

