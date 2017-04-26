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

MODULE_INFO(staging, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x2c197ea3, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x8dca28d0, __VMLINUX_SYMBOL_STR(spk_var_store) },
	{ 0x14708c6e, __VMLINUX_SYMBOL_STR(spk_var_show) },
	{ 0x7b665e29, __VMLINUX_SYMBOL_STR(spk_synth_is_alive_restart) },
	{ 0x5b136033, __VMLINUX_SYMBOL_STR(spk_synth_immediate) },
	{ 0xe7cd4558, __VMLINUX_SYMBOL_STR(spk_serial_release) },
	{ 0xadd9b540, __VMLINUX_SYMBOL_STR(spk_serial_synth_probe) },
	{ 0x7e42e836, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0xd304f5a5, __VMLINUX_SYMBOL_STR(param_ops_short) },
	{ 0x135c5767, __VMLINUX_SYMBOL_STR(synth_remove) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x5f05e140, __VMLINUX_SYMBOL_STR(synth_add) },
	{ 0xb9e52429, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x349cba85, __VMLINUX_SYMBOL_STR(strchr) },
	{ 0x9a888082, __VMLINUX_SYMBOL_STR(synth_buffer_getc) },
	{ 0x7f02188f, __VMLINUX_SYMBOL_STR(__msecs_to_jiffies) },
	{ 0xb48956f8, __VMLINUX_SYMBOL_STR(synth_buffer_peek) },
	{ 0x41a160e5, __VMLINUX_SYMBOL_STR(synth_buffer_empty) },
	{ 0x8905e8b3, __VMLINUX_SYMBOL_STR(speakup_info) },
	{ 0x8893fa5d, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x43b0c9c3, __VMLINUX_SYMBOL_STR(preempt_schedule) },
	{ 0x75a17bed, __VMLINUX_SYMBOL_STR(prepare_to_wait) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0xb3f7646e, __VMLINUX_SYMBOL_STR(kthread_should_stop) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x706c5a65, __VMLINUX_SYMBOL_STR(preempt_count_sub) },
	{ 0xf229424a, __VMLINUX_SYMBOL_STR(preempt_count_add) },
	{ 0xd1b551a2, __VMLINUX_SYMBOL_STR(spk_get_var) },
	{ 0xc8b57c27, __VMLINUX_SYMBOL_STR(autoremove_wake_function) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xe81c76d, __VMLINUX_SYMBOL_STR(spk_serial_out) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=speakup";


MODULE_INFO(srcversion, "AF2DB93BDD41AF51CAB9F16");
