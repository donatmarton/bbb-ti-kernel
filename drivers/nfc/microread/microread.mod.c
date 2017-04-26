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
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xed146654, __VMLINUX_SYMBOL_STR(nfc_hci_send_event) },
	{ 0x22a51e97, __VMLINUX_SYMBOL_STR(nfc_dep_link_is_up) },
	{ 0x903c1989, __VMLINUX_SYMBOL_STR(nfc_targets_found) },
	{ 0xa4c734f0, __VMLINUX_SYMBOL_STR(nfc_hci_set_param) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x18cf6166, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0x347fdb14, __VMLINUX_SYMBOL_STR(nfc_hci_allocate_device) },
	{ 0x7c383d78, __VMLINUX_SYMBOL_STR(nfc_tm_activated) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x6e964824, __VMLINUX_SYMBOL_STR(nfc_hci_get_clientdata) },
	{ 0x594fca4, __VMLINUX_SYMBOL_STR(nfc_hci_send_cmd) },
	{ 0x8286a48, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0xe2e18f01, __VMLINUX_SYMBOL_STR(nfc_set_remote_general_bytes) },
	{ 0x649186ea, __VMLINUX_SYMBOL_STR(nfc_hci_register_device) },
	{ 0x42d4d701, __VMLINUX_SYMBOL_STR(nfc_get_local_general_bytes) },
	{ 0x142a48d3, __VMLINUX_SYMBOL_STR(nfc_hci_free_device) },
	{ 0xbca0b4fd, __VMLINUX_SYMBOL_STR(nfc_hci_sak_to_protocol) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xe376324e, __VMLINUX_SYMBOL_STR(nfc_hci_unregister_device) },
	{ 0x4a211dfd, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0xcaa1a2be, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x43028a27, __VMLINUX_SYMBOL_STR(nfc_hci_result_to_errno) },
	{ 0x2f614545, __VMLINUX_SYMBOL_STR(nfc_tm_data_received) },
	{ 0x3771b461, __VMLINUX_SYMBOL_STR(crc_ccitt) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xa6e11481, __VMLINUX_SYMBOL_STR(nfc_hci_send_cmd_async) },
	{ 0xd92ee2c9, __VMLINUX_SYMBOL_STR(nfc_hci_get_param) },
	{ 0xfe8e1ccd, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x98b8b684, __VMLINUX_SYMBOL_STR(nfc_hci_set_clientdata) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=hci,nfc,crc-ccitt";

