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
	{ 0xbe2068f9, __VMLINUX_SYMBOL_STR(single_release) },
	{ 0x69e412be, __VMLINUX_SYMBOL_STR(seq_read) },
	{ 0x99062aba, __VMLINUX_SYMBOL_STR(seq_lseek) },
	{ 0xcd9e399f, __VMLINUX_SYMBOL_STR(sdio_unregister_driver) },
	{ 0x5ca92d40, __VMLINUX_SYMBOL_STR(put_tty_driver) },
	{ 0x85f49cc5, __VMLINUX_SYMBOL_STR(tty_unregister_driver) },
	{ 0x6e52c753, __VMLINUX_SYMBOL_STR(sdio_register_driver) },
	{ 0xfadc5e02, __VMLINUX_SYMBOL_STR(tty_register_driver) },
	{ 0x62d2911a, __VMLINUX_SYMBOL_STR(tty_set_operations) },
	{ 0x67b27ec1, __VMLINUX_SYMBOL_STR(tty_std_termios) },
	{ 0x28b2e201, __VMLINUX_SYMBOL_STR(__tty_alloc_driver) },
	{ 0xbf4a5398, __VMLINUX_SYMBOL_STR(tty_port_register_device) },
	{ 0x69c03fc5, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xc068440e, __VMLINUX_SYMBOL_STR(__kfifo_alloc) },
	{ 0x5a32f871, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x6897aba7, __VMLINUX_SYMBOL_STR(tty_port_init) },
	{ 0x147fb690, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xf6789fdc, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x3155b897, __VMLINUX_SYMBOL_STR(tty_unregister_device) },
	{ 0x979c2164, __VMLINUX_SYMBOL_STR(sdio_release_irq) },
	{ 0xafa34b6f, __VMLINUX_SYMBOL_STR(tty_standard_install) },
	{ 0xb3c56d19, __VMLINUX_SYMBOL_STR(tty_port_open) },
	{ 0x717037eb, __VMLINUX_SYMBOL_STR(tty_port_close) },
	{ 0xf23fcb99, __VMLINUX_SYMBOL_STR(__kfifo_in) },
	{ 0xb5761517, __VMLINUX_SYMBOL_STR(tty_port_hangup) },
	{ 0xc6cbbc89, __VMLINUX_SYMBOL_STR(capable) },
	{ 0xf91523c, __VMLINUX_SYMBOL_STR(seq_putc) },
	{ 0x40a9317a, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0xc7fd8e9, __VMLINUX_SYMBOL_STR(single_open) },
	{ 0xe6557692, __VMLINUX_SYMBOL_STR(sdio_disable_func) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0xc17b8191, __VMLINUX_SYMBOL_STR(sdio_claim_irq) },
	{ 0xf6b006ca, __VMLINUX_SYMBOL_STR(sdio_enable_func) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x13d0adf7, __VMLINUX_SYMBOL_STR(__kfifo_out) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xd85cd67e, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x41c73823, __VMLINUX_SYMBOL_STR(tty_wakeup) },
	{ 0x195b2f0b, __VMLINUX_SYMBOL_STR(tty_flip_buffer_push) },
	{ 0x1d1c74bc, __VMLINUX_SYMBOL_STR(tty_insert_flip_string_flags) },
	{ 0x1aafefca, __VMLINUX_SYMBOL_STR(tty_kref_put) },
	{ 0xe2a18ac2, __VMLINUX_SYMBOL_STR(tty_port_tty_get) },
	{ 0x1bc11f11, __VMLINUX_SYMBOL_STR(tty_port_tty_hangup) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x409873e3, __VMLINUX_SYMBOL_STR(tty_termios_baud_rate) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0xcb0ad105, __VMLINUX_SYMBOL_STR(sdio_writeb) },
	{ 0x8a0c700c, __VMLINUX_SYMBOL_STR(sdio_release_host) },
	{ 0xbc44a147, __VMLINUX_SYMBOL_STR(sdio_readb) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xdb760f52, __VMLINUX_SYMBOL_STR(__kfifo_free) },
	{ 0xb464a96c, __VMLINUX_SYMBOL_STR(tty_port_put) },
	{ 0xdbe8baac, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x4d8bd8a7, __VMLINUX_SYMBOL_STR(sdio_claim_host) },
	{ 0xfed0a669, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x5fc56a46, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("sdio:c01v*d*");
MODULE_ALIAS("sdio:c04v*d*");
