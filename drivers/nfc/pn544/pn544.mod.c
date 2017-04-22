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
	{ 0xf6789fdc, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x7a049c67, __VMLINUX_SYMBOL_STR(nfc_hci_send_event) },
	{ 0xce910c79, __VMLINUX_SYMBOL_STR(nfc_dep_link_is_up) },
	{ 0xcbe6dfcc, __VMLINUX_SYMBOL_STR(nfc_hci_set_param) },
	{ 0x69c03fc5, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xdbe8baac, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x93828a1c, __VMLINUX_SYMBOL_STR(nfc_hci_allocate_device) },
	{ 0x36ca29f9, __VMLINUX_SYMBOL_STR(nfc_find_se) },
	{ 0xe251fa89, __VMLINUX_SYMBOL_STR(nfc_tm_activated) },
	{ 0x5a32f871, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x3be4e58b, __VMLINUX_SYMBOL_STR(nfc_hci_get_clientdata) },
	{ 0x2d9ac1f, __VMLINUX_SYMBOL_STR(nfc_hci_send_cmd) },
	{ 0xfdf8f58f, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0xfed0a669, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x9badcfb5, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x7982430c, __VMLINUX_SYMBOL_STR(nfc_set_remote_general_bytes) },
	{ 0xdd48b0ff, __VMLINUX_SYMBOL_STR(nfc_hci_target_discovered) },
	{ 0x4f48fef9, __VMLINUX_SYMBOL_STR(nfc_hci_register_device) },
	{ 0xfcd48948, __VMLINUX_SYMBOL_STR(nfc_get_local_general_bytes) },
	{ 0xf6e2ea7b, __VMLINUX_SYMBOL_STR(nfc_hci_free_device) },
	{ 0x4059792f, __VMLINUX_SYMBOL_STR(print_hex_dump) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xe3ed295c, __VMLINUX_SYMBOL_STR(nfc_hci_unregister_device) },
	{ 0x4a6761ad, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x147fb690, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xe4b027bb, __VMLINUX_SYMBOL_STR(nfc_tm_data_received) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x449126cb, __VMLINUX_SYMBOL_STR(nfc_add_se) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x99bb8806, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0x22bef61e, __VMLINUX_SYMBOL_STR(nfc_hci_send_cmd_async) },
	{ 0xafd9a1b4, __VMLINUX_SYMBOL_STR(nfc_hci_get_param) },
	{ 0xa8cfe78e, __VMLINUX_SYMBOL_STR(nfc_hci_set_clientdata) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=hci,nfc";

