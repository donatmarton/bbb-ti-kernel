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
	{ 0xcc0e56a7, __VMLINUX_SYMBOL_STR(tty_unregister_driver) },
	{ 0x5df8baf8, __VMLINUX_SYMBOL_STR(put_tty_driver) },
	{ 0x348c59e2, __VMLINUX_SYMBOL_STR(tty_register_driver) },
	{ 0x865665c0, __VMLINUX_SYMBOL_STR(tty_set_operations) },
	{ 0x67b27ec1, __VMLINUX_SYMBOL_STR(tty_std_termios) },
	{ 0xa120d33c, __VMLINUX_SYMBOL_STR(tty_unregister_ldisc) },
	{ 0xfc0eb554, __VMLINUX_SYMBOL_STR(__tty_alloc_driver) },
	{ 0x413c8555, __VMLINUX_SYMBOL_STR(tty_register_ldisc) },
	{ 0x63fda361, __VMLINUX_SYMBOL_STR(register_netdev) },
	{ 0x328a05f1, __VMLINUX_SYMBOL_STR(strncpy) },
	{ 0x3835e6a1, __VMLINUX_SYMBOL_STR(alloc_netdev_mqs) },
	{ 0xc6cbbc89, __VMLINUX_SYMBOL_STR(capable) },
	{ 0x2cfc6659, __VMLINUX_SYMBOL_STR(skb_queue_head) },
	{ 0x1030b539, __VMLINUX_SYMBOL_STR(netif_rx) },
	{ 0xfe8e1ccd, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0xc84fc707, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0xb28a9472, __VMLINUX_SYMBOL_STR(tty_register_device) },
	{ 0xab86ebe4, __VMLINUX_SYMBOL_STR(tty_unregister_device) },
	{ 0xf4fa543b, __VMLINUX_SYMBOL_STR(arm_copy_to_user) },
	{ 0x28cc25db, __VMLINUX_SYMBOL_STR(arm_copy_from_user) },
	{ 0x873895dc, __VMLINUX_SYMBOL_STR(n_tty_ioctl_helper) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x8d6c8d13, __VMLINUX_SYMBOL_STR(tty_vhangup) },
	{ 0x2494b94c, __VMLINUX_SYMBOL_STR(tty_port_lower_dtr_rts) },
	{ 0x59b863e9, __VMLINUX_SYMBOL_STR(tty_port_close_end) },
	{ 0x136d83b4, __VMLINUX_SYMBOL_STR(tty_port_close_start) },
	{ 0xbe43413c, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0x95eef112, __VMLINUX_SYMBOL_STR(unregister_netdev) },
	{ 0x69c6c5, __VMLINUX_SYMBOL_STR(tty_insert_flip_string_fixed_flag) },
	{ 0x8ef9c91, __VMLINUX_SYMBOL_STR(tty_flip_buffer_push) },
	{ 0xd9165064, __VMLINUX_SYMBOL_STR(tty_kref_put) },
	{ 0xd582c35, __VMLINUX_SYMBOL_STR(tty_wakeup) },
	{ 0x6f6e5000, __VMLINUX_SYMBOL_STR(tty_port_tty_get) },
	{ 0x13b5a419, __VMLINUX_SYMBOL_STR(tty_hangup) },
	{ 0x9ccfd892, __VMLINUX_SYMBOL_STR(tty_insert_flip_string_flags) },
	{ 0xf23fcb99, __VMLINUX_SYMBOL_STR(__kfifo_in) },
	{ 0x5fc4a128, __VMLINUX_SYMBOL_STR(tty_port_block_til_ready) },
	{ 0x5d829786, __VMLINUX_SYMBOL_STR(tty_port_tty_set) },
	{ 0x753ca315, __VMLINUX_SYMBOL_STR(tty_port_hangup) },
	{ 0x13d0adf7, __VMLINUX_SYMBOL_STR(__kfifo_out) },
	{ 0x33c18c1e, __VMLINUX_SYMBOL_STR(skb_queue_tail) },
	{ 0x6790a12b, __VMLINUX_SYMBOL_STR(skb_dequeue_tail) },
	{ 0xa59a091d, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0x43102a32, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x16e5c2a, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x43b0c9c3, __VMLINUX_SYMBOL_STR(preempt_schedule) },
	{ 0x706c5a65, __VMLINUX_SYMBOL_STR(preempt_count_sub) },
	{ 0xf229424a, __VMLINUX_SYMBOL_STR(preempt_count_add) },
	{ 0x63b87fc5, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xdcac6f8d, __VMLINUX_SYMBOL_STR(tty_write_room) },
	{ 0x6a0931d0, __VMLINUX_SYMBOL_STR(tty_hung_up_p) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0xc03e4fac, __VMLINUX_SYMBOL_STR(tty_name) },
	{ 0xfa5aa1d9, __VMLINUX_SYMBOL_STR(tty_port_tty_hangup) },
	{ 0xa045ff0b, __VMLINUX_SYMBOL_STR(skb_dequeue) },
	{ 0x1d8f4c65, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0xdb760f52, __VMLINUX_SYMBOL_STR(__kfifo_free) },
	{ 0xb9e52429, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x6c09c2a4, __VMLINUX_SYMBOL_STR(del_timer) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x62b72b0d, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xa926281f, __VMLINUX_SYMBOL_STR(tty_port_install) },
	{ 0xe16b893b, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x90df47e6, __VMLINUX_SYMBOL_STR(tty_port_init) },
	{ 0x9580deb, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0xc068440e, __VMLINUX_SYMBOL_STR(__kfifo_alloc) },
	{ 0xdc798d37, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0xcaa1a2be, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x7b8c3a36, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x198cf78d, __VMLINUX_SYMBOL_STR(tty_port_put) },
	{ 0xc7da6011, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x30e74134, __VMLINUX_SYMBOL_STR(tty_termios_copy_hw) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x8893fa5d, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x158f2f00, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x4059792f, __VMLINUX_SYMBOL_STR(print_hex_dump) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x521445b, __VMLINUX_SYMBOL_STR(list_del) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x44b1d426, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

