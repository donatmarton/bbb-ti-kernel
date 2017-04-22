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
	{ 0x683eb2cf, __VMLINUX_SYMBOL_STR(inet_diag_unregister) },
	{ 0xd43df6e6, __VMLINUX_SYMBOL_STR(inet_diag_register) },
	{ 0x55b5fefb, __VMLINUX_SYMBOL_STR(inet_diag_bc_sk) },
	{ 0xdd3916ac, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0xa1d55e90, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x4a6761ad, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0xeaa0c4ba, __VMLINUX_SYMBOL_STR(netlink_unicast) },
	{ 0x2ce3f4c7, __VMLINUX_SYMBOL_STR(inet_sk_diag_fill) },
	{ 0x8d6ef9a9, __VMLINUX_SYMBOL_STR(netlink_net_capable) },
	{ 0x2005e93f, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0xe01e98d2, __VMLINUX_SYMBOL_STR(udp_table) },
	{ 0x628c1e6d, __VMLINUX_SYMBOL_STR(udplite_table) },
	{ 0xeb8d91d4, __VMLINUX_SYMBOL_STR(__udp4_lib_lookup) },
	{ 0x50a576c7, __VMLINUX_SYMBOL_STR(sk_free) },
	{ 0xc98255e3, __VMLINUX_SYMBOL_STR(sock_diag_destroy) },
	{ 0x1256e707, __VMLINUX_SYMBOL_STR(sock_diag_check_cookie) },
	{ 0x2469810f, __VMLINUX_SYMBOL_STR(__rcu_read_unlock) },
	{ 0x75c42690, __VMLINUX_SYMBOL_STR(__udp6_lib_lookup) },
	{ 0x8d522714, __VMLINUX_SYMBOL_STR(__rcu_read_lock) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=inet_diag";

