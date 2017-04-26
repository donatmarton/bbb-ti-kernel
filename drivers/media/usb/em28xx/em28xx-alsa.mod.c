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
	{ 0x92b57248, __VMLINUX_SYMBOL_STR(flush_work) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xd6ee688f, __VMLINUX_SYMBOL_STR(vmalloc) },
	{ 0x7e42e836, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xcd75ef7f, __VMLINUX_SYMBOL_STR(em28xx_free_device) },
	{ 0x80a5c992, __VMLINUX_SYMBOL_STR(snd_pcm_period_elapsed) },
	{ 0x16b7c05d, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x62b72b0d, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0x30612e89, __VMLINUX_SYMBOL_STR(em28xx_register_extension) },
	{ 0xcb4ce909, __VMLINUX_SYMBOL_STR(snd_pcm_stream_lock) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x71d463ea, __VMLINUX_SYMBOL_STR(usb_unlink_urb) },
	{ 0xab9fe9bc, __VMLINUX_SYMBOL_STR(snd_pcm_hw_constraint_integer) },
	{ 0x74c63c60, __VMLINUX_SYMBOL_STR(snd_card_disconnect) },
	{ 0xbf1faebe, __VMLINUX_SYMBOL_STR(mutex_trylock) },
	{ 0x5526335b, __VMLINUX_SYMBOL_STR(em28xx_read_ac97) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x77ae495d, __VMLINUX_SYMBOL_STR(usb_speed_string) },
	{ 0xc665fb16, __VMLINUX_SYMBOL_STR(em28xx_write_ac97) },
	{ 0x706c5a65, __VMLINUX_SYMBOL_STR(preempt_count_sub) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x4d2651fd, __VMLINUX_SYMBOL_STR(snd_pcm_set_ops) },
	{ 0xfea687c8, __VMLINUX_SYMBOL_STR(usb_set_interface) },
	{ 0xc7cb5493, __VMLINUX_SYMBOL_STR(em28xx_unregister_extension) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xe16b893b, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xc097332e, __VMLINUX_SYMBOL_STR(snd_pcm_lib_ioctl) },
	{ 0x43b0c9c3, __VMLINUX_SYMBOL_STR(preempt_schedule) },
	{ 0x40825f43, __VMLINUX_SYMBOL_STR(usb_free_coherent) },
	{ 0x7a7fd2ad, __VMLINUX_SYMBOL_STR(snd_ctl_boolean_mono_info) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0xade0767b, __VMLINUX_SYMBOL_STR(snd_card_new) },
	{ 0xc4ad22c6, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x1a4ddac1, __VMLINUX_SYMBOL_STR(snd_pcm_stream_unlock) },
	{ 0xf2ca1931, __VMLINUX_SYMBOL_STR(snd_ctl_new1) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xde5879c1, __VMLINUX_SYMBOL_STR(snd_pcm_hw_constraint_minmax) },
	{ 0x810754b4, __VMLINUX_SYMBOL_STR(snd_card_free) },
	{ 0x76fa03cc, __VMLINUX_SYMBOL_STR(snd_card_register) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x4ceedf1a, __VMLINUX_SYMBOL_STR(usb_ifnum_to_if) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xc43b7e70, __VMLINUX_SYMBOL_STR(snd_pcm_new) },
	{ 0x1029e48c, __VMLINUX_SYMBOL_STR(vmalloc_to_page) },
	{ 0x7174ae4a, __VMLINUX_SYMBOL_STR(usb_alloc_coherent) },
	{ 0x51dda338, __VMLINUX_SYMBOL_STR(snd_ctl_add) },
	{ 0xb69c9bd5, __VMLINUX_SYMBOL_STR(em28xx_audio_analog_set) },
	{ 0xf229424a, __VMLINUX_SYMBOL_STR(preempt_count_add) },
	{ 0x900f303a, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0x55da3d4e, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=em28xx,snd-pcm,snd";


MODULE_INFO(srcversion, "CEE40D4D8E2D03A88AC0445");
