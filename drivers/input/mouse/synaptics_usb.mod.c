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
	{ 0x1a329efe, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x60fad71b, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0x3604a9a9, __VMLINUX_SYMBOL_STR(input_register_device) },
	{ 0xe483595c, __VMLINUX_SYMBOL_STR(input_free_device) },
	{ 0x456e9f87, __VMLINUX_SYMBOL_STR(input_set_abs_params) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xdd0a2ba2, __VMLINUX_SYMBOL_STR(strlcat) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x570b43fe, __VMLINUX_SYMBOL_STR(usb_alloc_coherent) },
	{ 0x4ecc5f3f, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
	{ 0x5b868a81, __VMLINUX_SYMBOL_STR(input_allocate_device) },
	{ 0x147fb690, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xf6789fdc, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x6fbc742a, __VMLINUX_SYMBOL_STR(usb_set_interface) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x6422f861, __VMLINUX_SYMBOL_STR(input_event) },
	{ 0x752aeb9e, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xa2615298, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0xe47cb9b4, __VMLINUX_SYMBOL_STR(usb_free_coherent) },
	{ 0xf8ad722d, __VMLINUX_SYMBOL_STR(input_unregister_device) },
	{ 0xadb6c848, __VMLINUX_SYMBOL_STR(usb_autopm_put_interface) },
	{ 0x37dfcc74, __VMLINUX_SYMBOL_STR(usb_autopm_get_interface) },
	{ 0xae9d6cbf, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0xfed0a669, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xdbe8baac, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x7500da19, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v06CBp0001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06CBp0002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06CBp0003d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06CBp0006d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06CBp0007d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06CBp0008d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06CBp0009d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06CBp0010d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06CBp0013d*dc*dsc*dp*ic*isc*ip*in*");
