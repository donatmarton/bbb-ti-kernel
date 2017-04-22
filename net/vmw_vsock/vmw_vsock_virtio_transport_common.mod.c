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
	{ 0xaca68f10, __VMLINUX_SYMBOL_STR(release_sock) },
	{ 0xf6789fdc, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xc8b57c27, __VMLINUX_SYMBOL_STR(autoremove_wake_function) },
	{ 0x580a24c7, __VMLINUX_SYMBOL_STR(__vsock_create) },
	{ 0xa1d55e90, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0xc79d5ef, __VMLINUX_SYMBOL_STR(vm_sockets_get_local_cid) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0xdca611e8, __VMLINUX_SYMBOL_STR(copy_from_iter) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x8fdf772a, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0xa8e21aa5, __VMLINUX_SYMBOL_STR(trace_event_buffer_reserve) },
	{ 0xb127da99, __VMLINUX_SYMBOL_STR(vsock_stream_has_space) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0xfb0eaeaf, __VMLINUX_SYMBOL_STR(vsock_core_get_transport) },
	{ 0xca8138a3, __VMLINUX_SYMBOL_STR(trace_define_field) },
	{ 0xe52761f2, __VMLINUX_SYMBOL_STR(vsock_find_connected_socket) },
	{ 0x45d63fe1, __VMLINUX_SYMBOL_STR(cancel_delayed_work) },
	{ 0x7f2af799, __VMLINUX_SYMBOL_STR(vsock_stream_has_data) },
	{ 0x2bfa7f13, __VMLINUX_SYMBOL_STR(lock_sock_nested) },
	{ 0x2419c7aa, __VMLINUX_SYMBOL_STR(__cpu_online_mask) },
	{ 0xc917e655, __VMLINUX_SYMBOL_STR(debug_smp_processor_id) },
	{ 0x4db232f9, __VMLINUX_SYMBOL_STR(trace_event_reg) },
	{ 0x521445b, __VMLINUX_SYMBOL_STR(list_del) },
	{ 0x50a576c7, __VMLINUX_SYMBOL_STR(sk_free) },
	{ 0xf70e4a4d, __VMLINUX_SYMBOL_STR(preempt_schedule_notrace) },
	{ 0x448a16b9, __VMLINUX_SYMBOL_STR(perf_trace_run_bpf_submit) },
	{ 0xaaecf75d, __VMLINUX_SYMBOL_STR(perf_trace_buf_alloc) },
	{ 0x15c0c57c, __VMLINUX_SYMBOL_STR(vsock_addr_init) },
	{ 0x67303ba4, __VMLINUX_SYMBOL_STR(trace_event_ignore_this_pid) },
	{ 0xdd3916ac, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0x85d472aa, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0x6d50d70b, __VMLINUX_SYMBOL_STR(vsock_find_bound_socket) },
	{ 0xadcd3c3b, __VMLINUX_SYMBOL_STR(trace_event_buffer_commit) },
	{ 0x147fb690, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x1176e07f, __VMLINUX_SYMBOL_STR(__per_cpu_offset) },
	{ 0x997d83e4, __VMLINUX_SYMBOL_STR(event_triggers_call) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xe93f6042, __VMLINUX_SYMBOL_STR(trace_print_symbols_seq) },
	{ 0x542a74a6, __VMLINUX_SYMBOL_STR(trace_event_raw_init) },
	{ 0x499cb58c, __VMLINUX_SYMBOL_STR(prepare_to_wait) },
	{ 0x1cfb04fa, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0xd7278ce5, __VMLINUX_SYMBOL_STR(vsock_remove_sock) },
	{ 0xd421396e, __VMLINUX_SYMBOL_STR(copy_to_iter) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x1d682385, __VMLINUX_SYMBOL_STR(trace_raw_output_prep) },
	{ 0x3c93ea25, __VMLINUX_SYMBOL_STR(trace_seq_printf) },
	{ 0xc8c09542, __VMLINUX_SYMBOL_STR(vsock_insert_connected) },
	{ 0x34240ef3, __VMLINUX_SYMBOL_STR(vsock_enqueue_accept) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=vsock";

