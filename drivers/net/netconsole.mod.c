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
	{ 0x8af622fe, __VMLINUX_SYMBOL_STR(param_ops_string) },
	{ 0xa57b02d8, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x5a0ffef2, __VMLINUX_SYMBOL_STR(configfs_unregister_subsystem) },
	{ 0xdc982402, __VMLINUX_SYMBOL_STR(unregister_console) },
	{ 0x9d0d6206, __VMLINUX_SYMBOL_STR(unregister_netdevice_notifier) },
	{ 0x40121a20, __VMLINUX_SYMBOL_STR(configfs_register_subsystem) },
	{ 0xdc798d37, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x852ca197, __VMLINUX_SYMBOL_STR(config_group_init) },
	{ 0x737a4ac, __VMLINUX_SYMBOL_STR(netpoll_parse_options) },
	{ 0x85df9b6c, __VMLINUX_SYMBOL_STR(strsep) },
	{ 0xd2da1048, __VMLINUX_SYMBOL_STR(register_netdevice_notifier) },
	{ 0x5ac15bae, __VMLINUX_SYMBOL_STR(kstrtou16) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xf9e73082, __VMLINUX_SYMBOL_STR(scnprintf) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xdd27fa87, __VMLINUX_SYMBOL_STR(memchr) },
	{ 0x8d33f0b5, __VMLINUX_SYMBOL_STR(netpoll_send_udp) },
	{ 0xb1c3a01a, __VMLINUX_SYMBOL_STR(oops_in_progress) },
	{ 0x19351de6, __VMLINUX_SYMBOL_STR(register_console) },
	{ 0x41fb9219, __VMLINUX_SYMBOL_STR(netpoll_setup) },
	{ 0xfd0eb4ce, __VMLINUX_SYMBOL_STR(netpoll_print_options) },
	{ 0x373db350, __VMLINUX_SYMBOL_STR(kstrtoint) },
	{ 0x1b6314fd, __VMLINUX_SYMBOL_STR(in_aton) },
	{ 0xe57878a1, __VMLINUX_SYMBOL_STR(in6_pton) },
	{ 0xa3131f6, __VMLINUX_SYMBOL_STR(strnchr) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xd9ce8f0c, __VMLINUX_SYMBOL_STR(strnlen) },
	{ 0x62b72b0d, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xf6770391, __VMLINUX_SYMBOL_STR(mac_pton) },
	{ 0xe16b893b, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0x991f2233, __VMLINUX_SYMBOL_STR(config_item_init_type_name) },
	{ 0xcaa1a2be, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x7b8c3a36, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x1474ddfb, __VMLINUX_SYMBOL_STR(netpoll_cleanup) },
	{ 0x521445b, __VMLINUX_SYMBOL_STR(list_del) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xa242fec3, __VMLINUX_SYMBOL_STR(__netpoll_cleanup) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x43b0c9c3, __VMLINUX_SYMBOL_STR(preempt_schedule) },
	{ 0x706c5a65, __VMLINUX_SYMBOL_STR(preempt_count_sub) },
	{ 0xeae38b84, __VMLINUX_SYMBOL_STR(config_item_put) },
	{ 0x838c8397, __VMLINUX_SYMBOL_STR(config_item_get) },
	{ 0xf229424a, __VMLINUX_SYMBOL_STR(preempt_count_add) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

