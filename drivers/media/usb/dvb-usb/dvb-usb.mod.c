#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x9cef51a8, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0xf6789fdc, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xbf9aaee6, __VMLINUX_SYMBOL_STR(rc_unregister_device) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xefe21d65, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x6eeb05c1, __VMLINUX_SYMBOL_STR(dvb_dmx_init) },
	{ 0xcf76c1db, __VMLINUX_SYMBOL_STR(dvb_unregister_adapter) },
	{ 0x6a76505a, __VMLINUX_SYMBOL_STR(dvb_register_frontend) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0xae9d6cbf, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0x55cb83c5, __VMLINUX_SYMBOL_STR(dvb_unregister_frontend) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x8fdf772a, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0xa0744ea9, __VMLINUX_SYMBOL_STR(cancel_delayed_work_sync) },
	{ 0xdbe8baac, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x33458a6a, __VMLINUX_SYMBOL_STR(rc_allocate_device) },
	{ 0x2073a4d0, __VMLINUX_SYMBOL_STR(dvb_net_release) },
	{ 0xbf878d92, __VMLINUX_SYMBOL_STR(i2c_add_adapter) },
	{ 0x432233c3, __VMLINUX_SYMBOL_STR(dvb_frontend_detach) },
	{ 0x6422f861, __VMLINUX_SYMBOL_STR(input_event) },
	{ 0xdd0a2ba2, __VMLINUX_SYMBOL_STR(strlcat) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xfd2da56d, __VMLINUX_SYMBOL_STR(dvb_dmx_swfilter_raw) },
	{ 0xf1a7be79, __VMLINUX_SYMBOL_STR(rc_free_device) },
	{ 0x1f5caa44, __VMLINUX_SYMBOL_STR(dvb_dmxdev_release) },
	{ 0xbe2b4186, __VMLINUX_SYMBOL_STR(mutex_lock_interruptible) },
	{ 0x5a32f871, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xe495c175, __VMLINUX_SYMBOL_STR(dvb_dmx_swfilter) },
	{ 0x9d9229d0, __VMLINUX_SYMBOL_STR(dvb_net_init) },
	{ 0x82fc1495, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0xca475b49, __VMLINUX_SYMBOL_STR(rc_register_device) },
	{ 0xe47cb9b4, __VMLINUX_SYMBOL_STR(usb_free_coherent) },
	{ 0x39f78d6, __VMLINUX_SYMBOL_STR(dvb_dmx_release) },
	{ 0x7521dd15, __VMLINUX_SYMBOL_STR(dvb_dmx_swfilter_204) },
	{ 0x3d333012, __VMLINUX_SYMBOL_STR(i2c_del_adapter) },
	{ 0x7500da19, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0x85d472aa, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x3604a9a9, __VMLINUX_SYMBOL_STR(input_register_device) },
	{ 0x30800578, __VMLINUX_SYMBOL_STR(usb_bulk_msg) },
	{ 0xd8748efb, __VMLINUX_SYMBOL_STR(usb_clear_halt) },
	{ 0xe483595c, __VMLINUX_SYMBOL_STR(input_free_device) },
	{ 0xedd2e282, __VMLINUX_SYMBOL_STR(dvb_register_adapter) },
	{ 0x147fb690, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x2c256e1f, __VMLINUX_SYMBOL_STR(input_scancode_to_scalar) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xf8ad722d, __VMLINUX_SYMBOL_STR(input_unregister_device) },
	{ 0xde0aeb10, __VMLINUX_SYMBOL_STR(request_firmware) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x570b43fe, __VMLINUX_SYMBOL_STR(usb_alloc_coherent) },
	{ 0x7f02188f, __VMLINUX_SYMBOL_STR(__msecs_to_jiffies) },
	{ 0xa2615298, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0x3743de2b, __VMLINUX_SYMBOL_STR(release_firmware) },
	{ 0x4ecc5f3f, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
	{ 0xba2269e9, __VMLINUX_SYMBOL_STR(dvb_dmxdev_init) },
	{ 0x5b868a81, __VMLINUX_SYMBOL_STR(input_allocate_device) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "D62BF95001DBC6F17EDE20B");
