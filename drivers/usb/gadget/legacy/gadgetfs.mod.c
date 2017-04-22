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
	{ 0x9cef51a8, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0xf6789fdc, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x65e75cb6, __VMLINUX_SYMBOL_STR(__list_del_entry) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x5fc56a46, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0x7d419536, __VMLINUX_SYMBOL_STR(usb_ep_disable) },
	{ 0x382f0cee, __VMLINUX_SYMBOL_STR(usb_ep_enable) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xaeb0f71a, __VMLINUX_SYMBOL_STR(usb_ep_queue) },
	{ 0x93ac791e, __VMLINUX_SYMBOL_STR(no_llseek) },
	{ 0x7070aab0, __VMLINUX_SYMBOL_STR(generic_delete_inode) },
	{ 0xf4b90401, __VMLINUX_SYMBOL_STR(dput) },
	{ 0xdca611e8, __VMLINUX_SYMBOL_STR(copy_from_iter) },
	{ 0x69c03fc5, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0xa8333d46, __VMLINUX_SYMBOL_STR(dup_iter) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x6e3e437e, __VMLINUX_SYMBOL_STR(init_user_ns) },
	{ 0x28cc25db, __VMLINUX_SYMBOL_STR(arm_copy_from_user) },
	{ 0xdbe8baac, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xebfb2697, __VMLINUX_SYMBOL_STR(mount_single) },
	{ 0xe80a4b2c, __VMLINUX_SYMBOL_STR(d_add) },
	{ 0x4177eebe, __VMLINUX_SYMBOL_STR(usb_ep_set_halt) },
	{ 0x614deaa0, __VMLINUX_SYMBOL_STR(usb_gadget_unregister_driver) },
	{ 0x4640ff6a, __VMLINUX_SYMBOL_STR(usb_ep_alloc_request) },
	{ 0x50b88f41, __VMLINUX_SYMBOL_STR(usb_get_gadget_udc_name) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0xf4fa543b, __VMLINUX_SYMBOL_STR(arm_copy_to_user) },
	{ 0xb541965, __VMLINUX_SYMBOL_STR(usb_gadget_set_state) },
	{ 0x51b652f, __VMLINUX_SYMBOL_STR(mutex_trylock) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x3ed5f3ac, __VMLINUX_SYMBOL_STR(d_delete) },
	{ 0x70733fd1, __VMLINUX_SYMBOL_STR(make_kgid) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x234a9317, __VMLINUX_SYMBOL_STR(kill_litter_super) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0xbe2b4186, __VMLINUX_SYMBOL_STR(mutex_lock_interruptible) },
	{ 0x5a32f871, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x328a05f1, __VMLINUX_SYMBOL_STR(strncpy) },
	{ 0x715bd81e, __VMLINUX_SYMBOL_STR(fasync_helper) },
	{ 0x1a1431fd, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irq) },
	{ 0x790989c9, __VMLINUX_SYMBOL_STR(usb_ep_clear_halt) },
	{ 0x68cc32f3, __VMLINUX_SYMBOL_STR(use_mm) },
	{ 0x229b20b2, __VMLINUX_SYMBOL_STR(up_write) },
	{ 0x7cbdf731, __VMLINUX_SYMBOL_STR(down_write) },
	{ 0x622598b1, __VMLINUX_SYMBOL_STR(init_wait_entry) },
	{ 0xa31db0e7, __VMLINUX_SYMBOL_STR(usb_ep_dequeue) },
	{ 0xbceedc0, __VMLINUX_SYMBOL_STR(usb_gadget_vbus_draw) },
	{ 0x1827ea0a, __VMLINUX_SYMBOL_STR(simple_dir_operations) },
	{ 0x37d79ccd, __VMLINUX_SYMBOL_STR(make_kuid) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0x3507a132, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0x491ff2b0, __VMLINUX_SYMBOL_STR(usb_ep_free_request) },
	{ 0x147fb690, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x7bb900ed, __VMLINUX_SYMBOL_STR(kiocb_set_cancel_fn) },
	{ 0xb6a475eb, __VMLINUX_SYMBOL_STR(register_filesystem) },
	{ 0xd85cd67e, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x344b7739, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x6d5e9e50, __VMLINUX_SYMBOL_STR(usb_gadget_probe_driver) },
	{ 0xe953b21f, __VMLINUX_SYMBOL_STR(get_next_ino) },
	{ 0x27aa6eb, __VMLINUX_SYMBOL_STR(usb_ep_fifo_status) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x40063b81, __VMLINUX_SYMBOL_STR(current_time) },
	{ 0x268b4710, __VMLINUX_SYMBOL_STR(d_make_root) },
	{ 0x2c4e172c, __VMLINUX_SYMBOL_STR(kill_fasync) },
	{ 0x69c869b6, __VMLINUX_SYMBOL_STR(simple_statfs) },
	{ 0x289e48f5, __VMLINUX_SYMBOL_STR(d_alloc_name) },
	{ 0x1cfb04fa, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0xd421396e, __VMLINUX_SYMBOL_STR(copy_to_iter) },
	{ 0x368f8aa8, __VMLINUX_SYMBOL_STR(unregister_filesystem) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xe2e8065e, __VMLINUX_SYMBOL_STR(memdup_user) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xd4669fad, __VMLINUX_SYMBOL_STR(complete) },
	{ 0xac598406, __VMLINUX_SYMBOL_STR(new_inode) },
	{ 0x99bb8806, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0xf2f61f69, __VMLINUX_SYMBOL_STR(unuse_mm) },
	{ 0x2bd15524, __VMLINUX_SYMBOL_STR(usb_ep_fifo_flush) },
	{ 0x5bf83468, __VMLINUX_SYMBOL_STR(simple_dir_inode_operations) },
	{ 0x23fa4443, __VMLINUX_SYMBOL_STR(param_ops_uint) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

