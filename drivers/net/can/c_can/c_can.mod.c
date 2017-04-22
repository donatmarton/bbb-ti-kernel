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
	{ 0x6b834fb4, __VMLINUX_SYMBOL_STR(netdev_info) },
	{ 0x7cefdeff, __VMLINUX_SYMBOL_STR(__pm_runtime_idle) },
	{ 0xcab49eb7, __VMLINUX_SYMBOL_STR(register_candev) },
	{ 0x1c87ee07, __VMLINUX_SYMBOL_STR(__pm_runtime_disable) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x4c69ac1f, __VMLINUX_SYMBOL_STR(napi_disable) },
	{ 0x2a587842, __VMLINUX_SYMBOL_STR(alloc_can_err_skb) },
	{ 0xd4245419, __VMLINUX_SYMBOL_STR(pinctrl_select_state) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x72662feb, __VMLINUX_SYMBOL_STR(__pm_runtime_resume) },
	{ 0x9751c18d, __VMLINUX_SYMBOL_STR(alloc_candev) },
	{ 0x5a10ccea, __VMLINUX_SYMBOL_STR(pinctrl_lookup_state) },
	{ 0x9f4ddb2c, __VMLINUX_SYMBOL_STR(netif_napi_del) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x949e981b, __VMLINUX_SYMBOL_STR(__dynamic_netdev_dbg) },
	{ 0xa9f4aea6, __VMLINUX_SYMBOL_STR(can_bus_off) },
	{ 0x61242731, __VMLINUX_SYMBOL_STR(pinctrl_get) },
	{ 0xfb5d9aa3, __VMLINUX_SYMBOL_STR(close_candev) },
	{ 0x69329b6c, __VMLINUX_SYMBOL_STR(netif_tx_wake_queue) },
	{ 0x14d4a9c5, __VMLINUX_SYMBOL_STR(_change_bit) },
	{ 0x4272dccd, __VMLINUX_SYMBOL_STR(netif_receive_skb) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x6fb95e39, __VMLINUX_SYMBOL_STR(netif_napi_add) },
	{ 0xd6b8e852, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0xfcd28d15, __VMLINUX_SYMBOL_STR(free_candev) },
	{ 0xbd7a4a5f, __VMLINUX_SYMBOL_STR(pinctrl_pm_select_sleep_state) },
	{ 0x4fad0aeb, __VMLINUX_SYMBOL_STR(pinctrl_put) },
	{ 0x6e8fa05b, __VMLINUX_SYMBOL_STR(can_change_mtu) },
	{ 0xc7d530e4, __VMLINUX_SYMBOL_STR(unregister_candev) },
	{ 0xc8964e59, __VMLINUX_SYMBOL_STR(alloc_can_skb) },
	{ 0xa1a69463, __VMLINUX_SYMBOL_STR(pm_runtime_enable) },
	{ 0xa2f80617, __VMLINUX_SYMBOL_STR(__napi_schedule) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x4a6761ad, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x7da4f3c2, __VMLINUX_SYMBOL_STR(napi_complete_done) },
	{ 0x3e1a8cd, __VMLINUX_SYMBOL_STR(pinctrl_pm_select_default_state) },
	{ 0x1c49fc83, __VMLINUX_SYMBOL_STR(netdev_err) },
	{ 0x553e16c9, __VMLINUX_SYMBOL_STR(open_candev) },
	{ 0x74c134b9, __VMLINUX_SYMBOL_STR(__sw_hweight32) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0x6f79efc4, __VMLINUX_SYMBOL_STR(can_get_echo_skb) },
	{ 0xca54fee, __VMLINUX_SYMBOL_STR(_test_and_set_bit) },
	{ 0xe2a48129, __VMLINUX_SYMBOL_STR(can_put_echo_skb) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=can-dev";

