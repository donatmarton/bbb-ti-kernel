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
	{ 0x2060d6e7, __VMLINUX_SYMBOL_STR(driver_unregister) },
	{ 0xb4b743ae, __VMLINUX_SYMBOL_STR(__spi_register_driver) },
	{ 0xcaa1a2be, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x7b8c3a36, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x27bbf221, __VMLINUX_SYMBOL_STR(disable_irq_nosync) },
	{ 0xc9e4f0cb, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xc66f04a9, __VMLINUX_SYMBOL_STR(ieee802154_register_hw) },
	{ 0xb62a6155, __VMLINUX_SYMBOL_STR(devm_request_threaded_irq) },
	{ 0xbe3915f6, __VMLINUX_SYMBOL_STR(irq_get_irq_data) },
	{ 0x8e376325, __VMLINUX_SYMBOL_STR(devm_gpio_request_one) },
	{ 0xf9dd9922, __VMLINUX_SYMBOL_STR(__init_swait_queue_head) },
	{ 0x750ca8c2, __VMLINUX_SYMBOL_STR(__devm_regmap_init_spi) },
	{ 0xa719459d, __VMLINUX_SYMBOL_STR(ieee802154_alloc_hw) },
	{ 0xe1c1b62b, __VMLINUX_SYMBOL_STR(of_property_read_u8_array) },
	{ 0x81e373bd, __VMLINUX_SYMBOL_STR(of_get_named_gpio_flags) },
	{ 0x79aa04a2, __VMLINUX_SYMBOL_STR(get_random_bytes) },
	{ 0x3ce4ca6f, __VMLINUX_SYMBOL_STR(disable_irq) },
	{ 0xcd1f63ee, __VMLINUX_SYMBOL_STR(wait_for_completion_timeout) },
	{ 0x51c8b3e9, __VMLINUX_SYMBOL_STR(ieee802154_wake_queue) },
	{ 0x2f0664db, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x6a1b7fe9, __VMLINUX_SYMBOL_STR(hrtimer_start_range_ns) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0xfcec0987, __VMLINUX_SYMBOL_STR(enable_irq) },
	{ 0xef1e4705, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xf8ad649, __VMLINUX_SYMBOL_STR(spi_async) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x33e2d8fe, __VMLINUX_SYMBOL_STR(regmap_read) },
	{ 0x3eb7a160, __VMLINUX_SYMBOL_STR(hrtimer_init) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x9cbcaf26, __VMLINUX_SYMBOL_STR(complete) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x6eaf818b, __VMLINUX_SYMBOL_STR(regmap_write) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x488d0d39, __VMLINUX_SYMBOL_STR(ieee802154_xmit_complete) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x467414ec, __VMLINUX_SYMBOL_STR(ieee802154_rx_irqsafe) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xfe8e1ccd, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0xc84fc707, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0xc7da6011, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x8158dc84, __VMLINUX_SYMBOL_STR(ieee802154_free_hw) },
	{ 0x21f6c4b3, __VMLINUX_SYMBOL_STR(ieee802154_unregister_hw) },
	{ 0xefac7c4c, __VMLINUX_SYMBOL_STR(gpiod_set_raw_value) },
	{ 0xfaed45a9, __VMLINUX_SYMBOL_STR(gpio_to_desc) },
	{ 0x3237dfb4, __VMLINUX_SYMBOL_STR(regmap_update_bits) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x12a38747, __VMLINUX_SYMBOL_STR(usleep_range) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mac802154";

MODULE_ALIAS("spi:at86rf230");
MODULE_ALIAS("spi:at86rf231");
MODULE_ALIAS("spi:at86rf233");
MODULE_ALIAS("spi:at86rf212");
MODULE_ALIAS("of:N*T*Catmel,at86rf230*");
MODULE_ALIAS("of:N*T*Catmel,at86rf231*");
MODULE_ALIAS("of:N*T*Catmel,at86rf233*");
MODULE_ALIAS("of:N*T*Catmel,at86rf212*");
