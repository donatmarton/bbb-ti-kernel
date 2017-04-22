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
	{ 0xefe21d65, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x1637db1, __VMLINUX_SYMBOL_STR(eth_change_mtu) },
	{ 0x8441c6d0, __VMLINUX_SYMBOL_STR(eth_validate_addr) },
	{ 0xce9e09ef, __VMLINUX_SYMBOL_STR(driver_unregister) },
	{ 0x36e4c428, __VMLINUX_SYMBOL_STR(__spi_register_driver) },
	{ 0xa99ef914, __VMLINUX_SYMBOL_STR(mii_check_link) },
	{ 0x69329b6c, __VMLINUX_SYMBOL_STR(netif_tx_wake_queue) },
	{ 0x49151079, __VMLINUX_SYMBOL_STR(netif_rx_ni) },
	{ 0x77c29585, __VMLINUX_SYMBOL_STR(eth_type_trans) },
	{ 0x9cfd625d, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x6c119f4d, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0x464b5e08, __VMLINUX_SYMBOL_STR(netdev_warn) },
	{ 0x63eea3ef, __VMLINUX_SYMBOL_STR(register_netdev) },
	{ 0xd6b8e852, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0x79aa04a2, __VMLINUX_SYMBOL_STR(get_random_bytes) },
	{ 0x12a38747, __VMLINUX_SYMBOL_STR(usleep_range) },
	{ 0xe44ce5b8, __VMLINUX_SYMBOL_STR(devm_gpio_request_one) },
	{ 0x752aeb9e, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0x5a32f871, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0xdcd88a5e, __VMLINUX_SYMBOL_STR(regulator_enable) },
	{ 0xea22191c, __VMLINUX_SYMBOL_STR(devm_regulator_get) },
	{ 0xf3fc38b8, __VMLINUX_SYMBOL_STR(of_get_named_gpio_flags) },
	{ 0x93f069df, __VMLINUX_SYMBOL_STR(alloc_etherdev_mqs) },
	{ 0x27cb133b, __VMLINUX_SYMBOL_STR(eeprom_93cx6_multiread) },
	{ 0x822222db, __VMLINUX_SYMBOL_STR(eeprom_93cx6_write) },
	{ 0x98bb5a22, __VMLINUX_SYMBOL_STR(eeprom_93cx6_read) },
	{ 0x63d2ff63, __VMLINUX_SYMBOL_STR(eeprom_93cx6_wren) },
	{ 0x64effb2a, __VMLINUX_SYMBOL_STR(netif_device_detach) },
	{ 0x6b834fb4, __VMLINUX_SYMBOL_STR(netdev_info) },
	{ 0x92b57248, __VMLINUX_SYMBOL_STR(flush_work) },
	{ 0x4c560e8e, __VMLINUX_SYMBOL_STR(netif_device_attach) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xd5a5640, __VMLINUX_SYMBOL_STR(skb_dequeue) },
	{ 0xcb62ec7d, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0xdbe8baac, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xfed0a669, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0x1c49fc83, __VMLINUX_SYMBOL_STR(netdev_err) },
	{ 0x8de5b447, __VMLINUX_SYMBOL_STR(spi_sync) },
	{ 0x23d0da5d, __VMLINUX_SYMBOL_STR(mii_ethtool_gset) },
	{ 0x270ecce7, __VMLINUX_SYMBOL_STR(mii_ethtool_sset) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x921f659, __VMLINUX_SYMBOL_STR(mii_nway_restart) },
	{ 0xf1a96aa4, __VMLINUX_SYMBOL_STR(mii_link_ok) },
	{ 0x839a39ba, __VMLINUX_SYMBOL_STR(skb_queue_tail) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0x949e981b, __VMLINUX_SYMBOL_STR(__dynamic_netdev_dbg) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x6220b4a2, __VMLINUX_SYMBOL_STR(crc32_le) },
	{ 0x5fc56a46, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x985a6ea1, __VMLINUX_SYMBOL_STR(generic_mii_ioctl) },
	{ 0x857b0b4c, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x535890a0, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0x49e6b372, __VMLINUX_SYMBOL_STR(regulator_disable) },
	{ 0x732514b2, __VMLINUX_SYMBOL_STR(gpiod_set_raw_value) },
	{ 0x94199677, __VMLINUX_SYMBOL_STR(gpio_to_desc) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
	{ 0x3d8dc21b, __VMLINUX_SYMBOL_STR(unregister_netdev) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mii,eeprom_93cx6";

MODULE_ALIAS("of:N*T*Cmicrel,ks8851");
MODULE_ALIAS("of:N*T*Cmicrel,ks8851C*");
