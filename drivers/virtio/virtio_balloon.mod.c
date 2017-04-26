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
	{ 0x7e42e836, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0xae64b44b, __VMLINUX_SYMBOL_STR(unregister_virtio_driver) },
	{ 0x703a13f8, __VMLINUX_SYMBOL_STR(register_virtio_driver) },
	{ 0xef1e4705, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xd65172e, __VMLINUX_SYMBOL_STR(wake_up_process) },
	{ 0xe564cc94, __VMLINUX_SYMBOL_STR(kthread_create_on_node) },
	{ 0x622c7922, __VMLINUX_SYMBOL_STR(register_oom_notifier) },
	{ 0x63b87fc5, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xdc798d37, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0xcaa1a2be, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x7b8c3a36, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x3e061b94, __VMLINUX_SYMBOL_STR(__get_page_tail) },
	{ 0x43b0c9c3, __VMLINUX_SYMBOL_STR(preempt_schedule) },
	{ 0x521445b, __VMLINUX_SYMBOL_STR(list_del) },
	{ 0x706c5a65, __VMLINUX_SYMBOL_STR(preempt_count_sub) },
	{ 0xc996899e, __VMLINUX_SYMBOL_STR(vm_event_states) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0xf229424a, __VMLINUX_SYMBOL_STR(preempt_count_add) },
	{ 0xbf1faebe, __VMLINUX_SYMBOL_STR(mutex_trylock) },
	{ 0x4482cdb, __VMLINUX_SYMBOL_STR(__refrigerator) },
	{ 0xa1c76e0a, __VMLINUX_SYMBOL_STR(_cond_resched) },
	{ 0xa8cde9a7, __VMLINUX_SYMBOL_STR(remove_wait_queue) },
	{ 0x942c9222, __VMLINUX_SYMBOL_STR(freezing_slow_path) },
	{ 0x1829d188, __VMLINUX_SYMBOL_STR(wait_woken) },
	{ 0xfe634f58, __VMLINUX_SYMBOL_STR(add_wait_queue) },
	{ 0x7ab88a45, __VMLINUX_SYMBOL_STR(system_freezing_cnt) },
	{ 0xb3f7646e, __VMLINUX_SYMBOL_STR(kthread_should_stop) },
	{ 0x9e61bb05, __VMLINUX_SYMBOL_STR(set_freezable) },
	{ 0xa6ffec60, __VMLINUX_SYMBOL_STR(woken_wake_function) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xaf0d0b73, __VMLINUX_SYMBOL_STR(kthread_stop) },
	{ 0xc617f82c, __VMLINUX_SYMBOL_STR(unregister_oom_notifier) },
	{ 0x4d265394, __VMLINUX_SYMBOL_STR(put_page) },
	{ 0x49780f79, __VMLINUX_SYMBOL_STR(balloon_page_dequeue) },
	{ 0xc9e4f0cb, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x2fd85baf, __VMLINUX_SYMBOL_STR(___ratelimit) },
	{ 0x62b72b0d, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xa2d066dd, __VMLINUX_SYMBOL_STR(adjust_managed_page_count) },
	{ 0x4c1f1149, __VMLINUX_SYMBOL_STR(balloon_page_enqueue) },
	{ 0x987c11c7, __VMLINUX_SYMBOL_STR(__pv_phys_pfn_offset) },
	{ 0x189c3a74, __VMLINUX_SYMBOL_STR(mem_map) },
	{ 0xe16b893b, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x8893fa5d, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x158f2f00, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0x8fbeb765, __VMLINUX_SYMBOL_STR(virtqueue_get_buf) },
	{ 0x7327ac5e, __VMLINUX_SYMBOL_STR(virtqueue_kick) },
	{ 0x6fd4f666, __VMLINUX_SYMBOL_STR(virtqueue_add_outbuf) },
	{ 0x5c265cba, __VMLINUX_SYMBOL_STR(sg_init_one) },
	{ 0x5fb20428, __VMLINUX_SYMBOL_STR(virtio_check_driver_offered_feature) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x40c7247c, __VMLINUX_SYMBOL_STR(si_meminfo) },
	{ 0x7278d328, __VMLINUX_SYMBOL_STR(all_vm_events) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xb9e52429, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("virtio:d00000005v*");
