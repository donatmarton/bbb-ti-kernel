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
	{ 0xf6128e9c, __VMLINUX_SYMBOL_STR(ethtool_op_get_ts_info) },
	{ 0xbe4c8b3b, __VMLINUX_SYMBOL_STR(ethtool_op_get_link) },
	{ 0x6756873d, __VMLINUX_SYMBOL_STR(eth_change_mtu) },
	{ 0xb8ec1b03, __VMLINUX_SYMBOL_STR(eth_validate_addr) },
	{ 0xd945909, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0x4a4a4bd, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0xca2e290d, __VMLINUX_SYMBOL_STR(netdev_warn) },
	{ 0x79fc0855, __VMLINUX_SYMBOL_STR(phy_start) },
	{ 0x79aa04a2, __VMLINUX_SYMBOL_STR(get_random_bytes) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xc7da6011, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x1dfbf27e, __VMLINUX_SYMBOL_STR(phy_connect_direct) },
	{ 0xe42e9167, __VMLINUX_SYMBOL_STR(phy_find_first) },
	{ 0x7f900fd3, __VMLINUX_SYMBOL_STR(__mdiobus_register) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x28ddcde4, __VMLINUX_SYMBOL_STR(mdiobus_alloc_size) },
	{ 0x63fda361, __VMLINUX_SYMBOL_STR(register_netdev) },
	{ 0x8ca73395, __VMLINUX_SYMBOL_STR(netif_carrier_off) },
	{ 0xd6b8e852, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0x2635c0e7, __VMLINUX_SYMBOL_STR(netif_napi_add) },
	{ 0x47249507, __VMLINUX_SYMBOL_STR(__pm_runtime_resume) },
	{ 0xca72012e, __VMLINUX_SYMBOL_STR(pm_runtime_enable) },
	{ 0x2db75607, __VMLINUX_SYMBOL_STR(device_property_present) },
	{ 0x71d48624, __VMLINUX_SYMBOL_STR(device_property_read_u32_array) },
	{ 0xde147390, __VMLINUX_SYMBOL_STR(device_get_mac_address) },
	{ 0x48380a2b, __VMLINUX_SYMBOL_STR(device_get_phy_mode) },
	{ 0x815588a6, __VMLINUX_SYMBOL_STR(clk_enable) },
	{ 0xd9e787e1, __VMLINUX_SYMBOL_STR(netdev_err) },
	{ 0x7c9a7371, __VMLINUX_SYMBOL_STR(clk_prepare) },
	{ 0x5278e086, __VMLINUX_SYMBOL_STR(regulator_bulk_enable) },
	{ 0x1ca225fa, __VMLINUX_SYMBOL_STR(clk_get) },
	{ 0x2edc5d8, __VMLINUX_SYMBOL_STR(regulator_bulk_get) },
	{ 0x79c5a9f0, __VMLINUX_SYMBOL_STR(ioremap) },
	{ 0xbe3915f6, __VMLINUX_SYMBOL_STR(irq_get_irq_data) },
	{ 0xfc642a79, __VMLINUX_SYMBOL_STR(alloc_etherdev_mqs) },
	{ 0xadf42bd5, __VMLINUX_SYMBOL_STR(__request_region) },
	{ 0xec533192, __VMLINUX_SYMBOL_STR(platform_get_irq) },
	{ 0x12a38747, __VMLINUX_SYMBOL_STR(usleep_range) },
	{ 0xb15006b1, __VMLINUX_SYMBOL_STR(mdiobus_write) },
	{ 0x1b2df43, __VMLINUX_SYMBOL_STR(napi_complete_done) },
	{ 0x2e3c04d2, __VMLINUX_SYMBOL_STR(netif_receive_skb) },
	{ 0x11064f33, __VMLINUX_SYMBOL_STR(eth_type_trans) },
	{ 0xfe8e1ccd, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0xc84fc707, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0x2a90ba66, __VMLINUX_SYMBOL_STR(phy_stop) },
	{ 0x5edffd32, __VMLINUX_SYMBOL_STR(napi_disable) },
	{ 0x4f92a38, __VMLINUX_SYMBOL_STR(skb_tstamp_tx) },
	{ 0xa59a091d, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0x1756eea9, __VMLINUX_SYMBOL_STR(mdiobus_read) },
	{ 0x6220b4a2, __VMLINUX_SYMBOL_STR(crc32_le) },
	{ 0x11dbc6b6, __VMLINUX_SYMBOL_STR(phy_mii_ioctl) },
	{ 0xfcec0987, __VMLINUX_SYMBOL_STR(enable_irq) },
	{ 0x3ce4ca6f, __VMLINUX_SYMBOL_STR(disable_irq) },
	{ 0x6f008822, __VMLINUX_SYMBOL_STR(phy_ethtool_gset) },
	{ 0x8353674d, __VMLINUX_SYMBOL_STR(phy_ethtool_sset) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xeed31ef8, __VMLINUX_SYMBOL_STR(phy_start_aneg) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x55d2f2cd, __VMLINUX_SYMBOL_STR(netif_tx_wake_queue) },
	{ 0x7f64a438, __VMLINUX_SYMBOL_STR(__napi_schedule) },
	{ 0xa83aeacf, __VMLINUX_SYMBOL_STR(netdev_info) },
	{ 0x2cf249c1, __VMLINUX_SYMBOL_STR(platform_get_resource) },
	{ 0xf3b12552, __VMLINUX_SYMBOL_STR(__pm_runtime_disable) },
	{ 0x5838ff3a, __VMLINUX_SYMBOL_STR(__pm_runtime_idle) },
	{ 0xbe43413c, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0xedc03953, __VMLINUX_SYMBOL_STR(iounmap) },
	{ 0x9bce482f, __VMLINUX_SYMBOL_STR(__release_region) },
	{ 0x788fe103, __VMLINUX_SYMBOL_STR(iomem_resource) },
	{ 0xa8ea8259, __VMLINUX_SYMBOL_STR(platform_get_resource_byname) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
	{ 0x95eef112, __VMLINUX_SYMBOL_STR(unregister_netdev) },
	{ 0xd7f096d1, __VMLINUX_SYMBOL_STR(mdiobus_free) },
	{ 0x3fa2f178, __VMLINUX_SYMBOL_STR(mdiobus_unregister) },
	{ 0xd6b2e8d, __VMLINUX_SYMBOL_STR(phy_disconnect) },
	{ 0x2e1ca751, __VMLINUX_SYMBOL_STR(clk_put) },
	{ 0x717615d0, __VMLINUX_SYMBOL_STR(regulator_bulk_free) },
	{ 0xb077e70a, __VMLINUX_SYMBOL_STR(clk_unprepare) },
	{ 0xb6e6d99d, __VMLINUX_SYMBOL_STR(clk_disable) },
	{ 0x34317eea, __VMLINUX_SYMBOL_STR(regulator_bulk_disable) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xeb03b389, __VMLINUX_SYMBOL_STR(__raw_readsl) },
	{ 0x43b0c9c3, __VMLINUX_SYMBOL_STR(preempt_schedule) },
	{ 0x706c5a65, __VMLINUX_SYMBOL_STR(preempt_count_sub) },
	{ 0xecf8a3b4, __VMLINUX_SYMBOL_STR(__raw_writesl) },
	{ 0xf229424a, __VMLINUX_SYMBOL_STR(preempt_count_add) },
	{ 0x822137e2, __VMLINUX_SYMBOL_STR(arm_heavy_mb) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("acpi*:ARMH9118:*");
MODULE_ALIAS("of:N*T*Csmsc,lan9115*");

MODULE_INFO(srcversion, "F7B7587CD736B9EF36A819E");
