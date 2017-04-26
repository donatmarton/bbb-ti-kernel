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
	{ 0x2c197ea3, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x7b8c3a36, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x1731ab18, __VMLINUX_SYMBOL_STR(skb_pad) },
	{ 0x16b7c05d, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0xf34c3086, __VMLINUX_SYMBOL_STR(rt2x00lib_resume) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x62b72b0d, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xef1e4705, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x99b8b519, __VMLINUX_SYMBOL_STR(rt2x00lib_dmastart) },
	{ 0xeb9029d4, __VMLINUX_SYMBOL_STR(rt2x00queue_flush_queue) },
	{ 0xe0ab6d16, __VMLINUX_SYMBOL_STR(ieee80211_alloc_hw_nm) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x94e8602, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0x4362e140, __VMLINUX_SYMBOL_STR(rt2x00queue_for_each_entry) },
	{ 0xe16b893b, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x7dd1d5c8, __VMLINUX_SYMBOL_STR(rt2x00queue_start_queue) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0x6efe5156, __VMLINUX_SYMBOL_STR(rt2x00lib_remove_dev) },
	{ 0xc4ad22c6, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0xd6efd600, __VMLINUX_SYMBOL_STR(usb_get_dev) },
	{ 0xe8cc8f3d, __VMLINUX_SYMBOL_STR(rt2x00queue_get_entry) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x8881268b, __VMLINUX_SYMBOL_STR(usb_reset_device) },
	{ 0x8bd58480, __VMLINUX_SYMBOL_STR(rt2x00lib_rxdone) },
	{ 0x92d08eb8, __VMLINUX_SYMBOL_STR(usb_put_dev) },
	{ 0xcaa1a2be, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x3eb7a160, __VMLINUX_SYMBOL_STR(hrtimer_init) },
	{ 0x4c8715ae, __VMLINUX_SYMBOL_STR(ieee80211_free_hw) },
	{ 0x2f0664db, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xefccfc74, __VMLINUX_SYMBOL_STR(rt2x00lib_txdone_noinfo) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x7f02188f, __VMLINUX_SYMBOL_STR(__msecs_to_jiffies) },
	{ 0xef3af3e5, __VMLINUX_SYMBOL_STR(rt2x00lib_dmadone) },
	{ 0x900f303a, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0xfdf378bc, __VMLINUX_SYMBOL_STR(rt2x00lib_probe_dev) },
	{ 0x1fafbedc, __VMLINUX_SYMBOL_STR(rt2x00queue_stop_queue) },
	{ 0xeb1eee4b, __VMLINUX_SYMBOL_STR(rt2x00lib_suspend) },
	{ 0x55da3d4e, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=rt2x00lib,mac80211";


MODULE_INFO(srcversion, "FADD78F4B0B6C8F4DDFA8E5");
