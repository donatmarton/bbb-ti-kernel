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
	{ 0xff178f6, __VMLINUX_SYMBOL_STR(__aeabi_idivmod) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x80a5c992, __VMLINUX_SYMBOL_STR(snd_pcm_period_elapsed) },
	{ 0xd3dbfbc4, __VMLINUX_SYMBOL_STR(_find_first_zero_bit_le) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0x2a3aa678, __VMLINUX_SYMBOL_STR(_test_and_clear_bit) },
	{ 0x16b7c05d, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0xe2fae716, __VMLINUX_SYMBOL_STR(kmemdup) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x9580deb, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x62b72b0d, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x70bf07d5, __VMLINUX_SYMBOL_STR(snd_rawmidi_set_ops) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x71d463ea, __VMLINUX_SYMBOL_STR(usb_unlink_urb) },
	{ 0x74c63c60, __VMLINUX_SYMBOL_STR(snd_card_disconnect) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x4c7a9f15, __VMLINUX_SYMBOL_STR(snd_rawmidi_new) },
	{ 0xd4bc6291, __VMLINUX_SYMBOL_STR(snd_pcm_suspend_all) },
	{ 0x63b87fc5, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x706c5a65, __VMLINUX_SYMBOL_STR(preempt_count_sub) },
	{ 0xef1e4705, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xdc798d37, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x4d2651fd, __VMLINUX_SYMBOL_STR(snd_pcm_set_ops) },
	{ 0xfea687c8, __VMLINUX_SYMBOL_STR(usb_set_interface) },
	{ 0x4bfecea6, __VMLINUX_SYMBOL_STR(snd_card_free_when_closed) },
	{ 0x94e8602, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xe16b893b, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xcb7d9da0, __VMLINUX_SYMBOL_STR(snd_rawmidi_transmit_peek) },
	{ 0xed7838b7, __VMLINUX_SYMBOL_STR(snd_pcm_lib_free_pages) },
	{ 0x16e5c2a, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0xc097332e, __VMLINUX_SYMBOL_STR(snd_pcm_lib_ioctl) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0x43b0c9c3, __VMLINUX_SYMBOL_STR(preempt_schedule) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0x7aa3c373, __VMLINUX_SYMBOL_STR(snd_pcm_lib_malloc_pages) },
	{ 0xade0767b, __VMLINUX_SYMBOL_STR(snd_card_new) },
	{ 0xe919247d, __VMLINUX_SYMBOL_STR(snd_pcm_hw_constraint_ratdens) },
	{ 0xc9e4f0cb, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xc4ad22c6, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0xd6efd600, __VMLINUX_SYMBOL_STR(usb_get_dev) },
	{ 0x39efc20f, __VMLINUX_SYMBOL_STR(snd_rawmidi_transmit_ack) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x92d08eb8, __VMLINUX_SYMBOL_STR(usb_put_dev) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0xf2ca1931, __VMLINUX_SYMBOL_STR(snd_ctl_new1) },
	{ 0x108e2ee0, __VMLINUX_SYMBOL_STR(usb_interrupt_msg) },
	{ 0xcaa1a2be, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xc7da6011, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0xb9e52429, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x158f2f00, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x8893fa5d, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0xbc199f80, __VMLINUX_SYMBOL_STR(snd_pcm_lib_preallocate_pages_for_all) },
	{ 0x810754b4, __VMLINUX_SYMBOL_STR(snd_card_free) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xc43b7e70, __VMLINUX_SYMBOL_STR(snd_pcm_new) },
	{ 0xca54fee, __VMLINUX_SYMBOL_STR(_test_and_set_bit) },
	{ 0x51dda338, __VMLINUX_SYMBOL_STR(snd_ctl_add) },
	{ 0x7f02188f, __VMLINUX_SYMBOL_STR(__msecs_to_jiffies) },
	{ 0xf229424a, __VMLINUX_SYMBOL_STR(preempt_count_add) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0x900f303a, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0x80c8ce47, __VMLINUX_SYMBOL_STR(snd_rawmidi_receive) },
	{ 0x55da3d4e, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-pcm,snd-rawmidi,snd";

