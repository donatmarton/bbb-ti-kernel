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
	{ 0xa83aeacf, __VMLINUX_SYMBOL_STR(netdev_info) },
	{ 0x5838ff3a, __VMLINUX_SYMBOL_STR(__pm_runtime_idle) },
	{ 0x80c75352, __VMLINUX_SYMBOL_STR(register_candev) },
	{ 0xf3b12552, __VMLINUX_SYMBOL_STR(__pm_runtime_disable) },
	{ 0x5edffd32, __VMLINUX_SYMBOL_STR(napi_disable) },
	{ 0xd439038f, __VMLINUX_SYMBOL_STR(alloc_can_err_skb) },
	{ 0x12de6373, __VMLINUX_SYMBOL_STR(pinctrl_select_state) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x47249507, __VMLINUX_SYMBOL_STR(__pm_runtime_resume) },
	{ 0x27a0b356, __VMLINUX_SYMBOL_STR(alloc_candev) },
	{ 0x99d85a6e, __VMLINUX_SYMBOL_STR(pinctrl_lookup_state) },
	{ 0x8d7c644e, __VMLINUX_SYMBOL_STR(netif_napi_del) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x87f51bbb, __VMLINUX_SYMBOL_STR(__dynamic_netdev_dbg) },
	{ 0x3c1a4f4e, __VMLINUX_SYMBOL_STR(can_bus_off) },
	{ 0xdf5a8fd1, __VMLINUX_SYMBOL_STR(pinctrl_get) },
	{ 0x9a188766, __VMLINUX_SYMBOL_STR(close_candev) },
	{ 0x55d2f2cd, __VMLINUX_SYMBOL_STR(netif_tx_wake_queue) },
	{ 0x14d4a9c5, __VMLINUX_SYMBOL_STR(_change_bit) },
	{ 0x2e3c04d2, __VMLINUX_SYMBOL_STR(netif_receive_skb) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x2635c0e7, __VMLINUX_SYMBOL_STR(netif_napi_add) },
	{ 0xd6b8e852, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0x30ccc9ab, __VMLINUX_SYMBOL_STR(free_candev) },
	{ 0x963928c3, __VMLINUX_SYMBOL_STR(pinctrl_pm_select_sleep_state) },
	{ 0x4bf32e2e, __VMLINUX_SYMBOL_STR(pinctrl_put) },
	{ 0x8c1b4133, __VMLINUX_SYMBOL_STR(can_change_mtu) },
	{ 0x4af77e77, __VMLINUX_SYMBOL_STR(unregister_candev) },
	{ 0x28cd593f, __VMLINUX_SYMBOL_STR(alloc_can_skb) },
	{ 0xca72012e, __VMLINUX_SYMBOL_STR(pm_runtime_enable) },
	{ 0x7f64a438, __VMLINUX_SYMBOL_STR(__napi_schedule) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x4a211dfd, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x1b2df43, __VMLINUX_SYMBOL_STR(napi_complete_done) },
	{ 0x69e8b68c, __VMLINUX_SYMBOL_STR(pinctrl_pm_select_default_state) },
	{ 0xd9e787e1, __VMLINUX_SYMBOL_STR(netdev_err) },
	{ 0x492e950, __VMLINUX_SYMBOL_STR(open_candev) },
	{ 0x74c134b9, __VMLINUX_SYMBOL_STR(__sw_hweight32) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xd9f59361, __VMLINUX_SYMBOL_STR(can_get_echo_skb) },
	{ 0x809ef2c2, __VMLINUX_SYMBOL_STR(can_put_echo_skb) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=can-dev";

