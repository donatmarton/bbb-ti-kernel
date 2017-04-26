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
	{ 0xdf0b96aa, __VMLINUX_SYMBOL_STR(lirc_dev_fop_close) },
	{ 0x938463b2, __VMLINUX_SYMBOL_STR(lirc_dev_fop_open) },
	{ 0xb376ecb7, __VMLINUX_SYMBOL_STR(lirc_dev_fop_poll) },
	{ 0x924b6733, __VMLINUX_SYMBOL_STR(lirc_dev_fop_read) },
	{ 0xb5a12ae1, __VMLINUX_SYMBOL_STR(no_llseek) },
	{ 0xbf433a17, __VMLINUX_SYMBOL_STR(ir_raw_handler_unregister) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xae705786, __VMLINUX_SYMBOL_STR(ir_raw_handler_register) },
	{ 0x43b0c9c3, __VMLINUX_SYMBOL_STR(preempt_schedule) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xb9e52429, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x706c5a65, __VMLINUX_SYMBOL_STR(preempt_count_sub) },
	{ 0xf23fcb99, __VMLINUX_SYMBOL_STR(__kfifo_in) },
	{ 0xf229424a, __VMLINUX_SYMBOL_STR(preempt_count_add) },
	{ 0x553efb91, __VMLINUX_SYMBOL_STR(rc_core_debug) },
	{ 0x5af58f5b, __VMLINUX_SYMBOL_STR(lirc_register_driver) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xc068440e, __VMLINUX_SYMBOL_STR(__kfifo_alloc) },
	{ 0x63b87fc5, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xcaa1a2be, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x7b8c3a36, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0xf1969a8e, __VMLINUX_SYMBOL_STR(__usecs_to_jiffies) },
	{ 0xe2e8065e, __VMLINUX_SYMBOL_STR(memdup_user) },
	{ 0xc87c1f84, __VMLINUX_SYMBOL_STR(ktime_get) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xbc10dd97, __VMLINUX_SYMBOL_STR(__put_user_4) },
	{ 0x263fa7c7, __VMLINUX_SYMBOL_STR(lirc_dev_fop_ioctl) },
	{ 0x353e3fa5, __VMLINUX_SYMBOL_STR(__get_user_4) },
	{ 0x5258e5b8, __VMLINUX_SYMBOL_STR(lirc_get_pdata) },
	{ 0xdb760f52, __VMLINUX_SYMBOL_STR(__kfifo_free) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0x4dca738, __VMLINUX_SYMBOL_STR(lirc_unregister_driver) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=lirc_dev";

