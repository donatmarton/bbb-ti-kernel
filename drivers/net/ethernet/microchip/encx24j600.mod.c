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
	{ 0xf47fda6b, __VMLINUX_SYMBOL_STR(spi_bus_type) },
	{ 0x8441c6d0, __VMLINUX_SYMBOL_STR(eth_validate_addr) },
	{ 0xce9e09ef, __VMLINUX_SYMBOL_STR(driver_unregister) },
	{ 0x36e4c428, __VMLINUX_SYMBOL_STR(__spi_register_driver) },
	{ 0xba8bb333, __VMLINUX_SYMBOL_STR(___ratelimit) },
	{ 0x143a1e84, __VMLINUX_SYMBOL_STR(netif_rx) },
	{ 0x77c29585, __VMLINUX_SYMBOL_STR(eth_type_trans) },
	{ 0x9cfd625d, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x6c119f4d, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0xd4ab3625, __VMLINUX_SYMBOL_STR(regmap_encx24j600_spi_read) },
	{ 0x63eea3ef, __VMLINUX_SYMBOL_STR(register_netdev) },
	{ 0x82178996, __VMLINUX_SYMBOL_STR(wake_up_process) },
	{ 0x9417a8d5, __VMLINUX_SYMBOL_STR(kthread_create_on_node) },
	{ 0x955b0e2e, __VMLINUX_SYMBOL_STR(kthread_worker_fn) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x87b9739b, __VMLINUX_SYMBOL_STR(__kthread_init_worker) },
	{ 0x12a38747, __VMLINUX_SYMBOL_STR(usleep_range) },
	{ 0x88a92245, __VMLINUX_SYMBOL_STR(regcache_cache_bypass) },
	{ 0x5a32f871, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0xf9266227, __VMLINUX_SYMBOL_STR(devm_regmap_init_encx24j600) },
	{ 0x93f069df, __VMLINUX_SYMBOL_STR(alloc_etherdev_mqs) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0xd6b8e852, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x368d3d71, __VMLINUX_SYMBOL_STR(regmap_encx24j600_spi_write) },
	{ 0x4059792f, __VMLINUX_SYMBOL_STR(print_hex_dump) },
	{ 0x69c03fc5, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0xcb62ec7d, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0x7c15102e, __VMLINUX_SYMBOL_STR(netdev_notice) },
	{ 0xd7dd8451, __VMLINUX_SYMBOL_STR(netif_carrier_off) },
	{ 0x6d4e025a, __VMLINUX_SYMBOL_STR(netif_carrier_on) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0x949e981b, __VMLINUX_SYMBOL_STR(__dynamic_netdev_dbg) },
	{ 0x86e2f02e, __VMLINUX_SYMBOL_STR(kthread_queue_work) },
	{ 0x6b834fb4, __VMLINUX_SYMBOL_STR(netdev_info) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x69329b6c, __VMLINUX_SYMBOL_STR(netif_tx_wake_queue) },
	{ 0x80929a03, __VMLINUX_SYMBOL_STR(dev_trans_start) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x20cc31ce, __VMLINUX_SYMBOL_STR(regmap_write) },
	{ 0xf3b439c1, __VMLINUX_SYMBOL_STR(regmap_update_bits_base) },
	{ 0x464b5e08, __VMLINUX_SYMBOL_STR(netdev_warn) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0xdbe8baac, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xfed0a669, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x1c49fc83, __VMLINUX_SYMBOL_STR(netdev_err) },
	{ 0xa1746f8a, __VMLINUX_SYMBOL_STR(regmap_read) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x535890a0, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0x3d8dc21b, __VMLINUX_SYMBOL_STR(unregister_netdev) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=encx24j600-regmap";

MODULE_ALIAS("spi:encx24j600");
