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
	{ 0xa57b02d8, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x63e98b0d, __VMLINUX_SYMBOL_STR(fb_sys_read) },
	{ 0x76d817, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x1cd1a26f, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0xda8af7ad, __VMLINUX_SYMBOL_STR(fb_find_nearest_mode) },
	{ 0xd6ee688f, __VMLINUX_SYMBOL_STR(vmalloc) },
	{ 0xc9e4f0cb, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x4093d055, __VMLINUX_SYMBOL_STR(register_framebuffer) },
	{ 0x62b72b0d, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x65f3ad9a, __VMLINUX_SYMBOL_STR(fb_videomode_to_var) },
	{ 0x487f831, __VMLINUX_SYMBOL_STR(fb_find_best_display) },
	{ 0xc7da6011, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0xef1e4705, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xa1b759ce, __VMLINUX_SYMBOL_STR(fb_add_videomode) },
	{ 0xa598e29c, __VMLINUX_SYMBOL_STR(vesa_modes) },
	{ 0xff9ca065, __VMLINUX_SYMBOL_STR(fb_edid_to_monspecs) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xe16b893b, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x7a890c8, __VMLINUX_SYMBOL_STR(fb_alloc_cmap) },
	{ 0x70b268e7, __VMLINUX_SYMBOL_STR(framebuffer_alloc) },
	{ 0x7174ae4a, __VMLINUX_SYMBOL_STR(usb_alloc_coherent) },
	{ 0x55da3d4e, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
	{ 0x9580deb, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x94e8602, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xf05ffa15, __VMLINUX_SYMBOL_STR(fb_var_to_videomode) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xac3472b3, __VMLINUX_SYMBOL_STR(fb_deferred_io_init) },
	{ 0xcaa1a2be, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x7b8c3a36, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x7edaecef, __VMLINUX_SYMBOL_STR(fb_deferred_io_cleanup) },
	{ 0xc27f2e57, __VMLINUX_SYMBOL_STR(fb_sys_write) },
	{ 0x80dd7607, __VMLINUX_SYMBOL_STR(sys_fillrect) },
	{ 0x724a5380, __VMLINUX_SYMBOL_STR(sys_copyarea) },
	{ 0x2ba05c80, __VMLINUX_SYMBOL_STR(sys_imageblit) },
	{ 0xf4fa543b, __VMLINUX_SYMBOL_STR(arm_copy_to_user) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xc4ad22c6, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xc57877cd, __VMLINUX_SYMBOL_STR(down_timeout) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x364b3fff, __VMLINUX_SYMBOL_STR(up) },
	{ 0x5f206476, __VMLINUX_SYMBOL_STR(remap_pfn_range) },
	{ 0x3744cf36, __VMLINUX_SYMBOL_STR(vmalloc_to_pfn) },
	{ 0xfacd2e14, __VMLINUX_SYMBOL_STR(pgprot_user) },
	{ 0x98b71c6, __VMLINUX_SYMBOL_STR(fb_dealloc_cmap) },
	{ 0x5de83ac7, __VMLINUX_SYMBOL_STR(framebuffer_release) },
	{ 0xc9561772, __VMLINUX_SYMBOL_STR(fb_destroy_modelist) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0x1dc36131, __VMLINUX_SYMBOL_STR(fb_destroy_modedb) },
	{ 0xc5862dd2, __VMLINUX_SYMBOL_STR(unregister_framebuffer) },
	{ 0x3f616ce2, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x43b0c9c3, __VMLINUX_SYMBOL_STR(preempt_schedule) },
	{ 0x706c5a65, __VMLINUX_SYMBOL_STR(preempt_count_sub) },
	{ 0x65e75cb6, __VMLINUX_SYMBOL_STR(__list_del_entry) },
	{ 0xf229424a, __VMLINUX_SYMBOL_STR(preempt_count_add) },
	{ 0x4fe38dbd, __VMLINUX_SYMBOL_STR(down_interruptible) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x900f303a, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0x40825f43, __VMLINUX_SYMBOL_STR(usb_free_coherent) },
	{ 0x44b1d426, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v0424p9D00d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0424p9D01d*dc*dsc*dp*ic*isc*ip*in*");
