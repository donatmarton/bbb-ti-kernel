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
	{ 0x637119f1, __VMLINUX_SYMBOL_STR(ieee80211_rx_napi) },
	{ 0x2cfc6659, __VMLINUX_SYMBOL_STR(skb_queue_head) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x4683f72d, __VMLINUX_SYMBOL_STR(ssb_dma_translation) },
	{ 0x930284be, __VMLINUX_SYMBOL_STR(device_remove_file) },
	{ 0x7b8c3a36, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xff178f6, __VMLINUX_SYMBOL_STR(__aeabi_idivmod) },
	{ 0x91224ef7, __VMLINUX_SYMBOL_STR(bcma_pmu_spuravoid_pllupdate) },
	{ 0x189c3a74, __VMLINUX_SYMBOL_STR(mem_map) },
	{ 0x7e42e836, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x91eb9b4, __VMLINUX_SYMBOL_STR(round_jiffies) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xdf6123a0, __VMLINUX_SYMBOL_STR(ieee80211_queue_work) },
	{ 0x1eaa1bd4, __VMLINUX_SYMBOL_STR(led_classdev_register) },
	{ 0x6aa005e8, __VMLINUX_SYMBOL_STR(arm_dma_ops) },
	{ 0x8c25dc87, __VMLINUX_SYMBOL_STR(sdio_enable_func) },
	{ 0x47e4111d, __VMLINUX_SYMBOL_STR(sdio_claim_irq) },
	{ 0x365b1e3f, __VMLINUX_SYMBOL_STR(ieee80211_rts_get) },
	{ 0xd1a46981, __VMLINUX_SYMBOL_STR(skb_clone) },
	{ 0x7ef39823, __VMLINUX_SYMBOL_STR(ieee80211_hdrlen) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0x8adf037b, __VMLINUX_SYMBOL_STR(ssb_commit_settings) },
	{ 0xb80150f8, __VMLINUX_SYMBOL_STR(ieee80211_beacon_get_tim) },
	{ 0x4205ad24, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0xe2fae716, __VMLINUX_SYMBOL_STR(kmemdup) },
	{ 0xe859d507, __VMLINUX_SYMBOL_STR(ieee80211_unregister_hw) },
	{ 0xa1425906, __VMLINUX_SYMBOL_STR(ieee80211_channel_to_frequency) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xa59a091d, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0x9580deb, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x4c29dcbf, __VMLINUX_SYMBOL_STR(cancel_delayed_work_sync) },
	{ 0x62b72b0d, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x9264b771, __VMLINUX_SYMBOL_STR(ssb_bus_powerup) },
	{ 0x8965921f, __VMLINUX_SYMBOL_STR(ssb_bus_sdiobus_register) },
	{ 0x81c8c80b, __VMLINUX_SYMBOL_STR(wiphy_rfkill_start_polling) },
	{ 0xfb4abb67, __VMLINUX_SYMBOL_STR(__ieee80211_get_assoc_led_name) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0xd4790f8, __VMLINUX_SYMBOL_STR(__ssb_driver_register) },
	{ 0x8af622fe, __VMLINUX_SYMBOL_STR(param_ops_string) },
	{ 0xc84fc707, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0xf09cd5f, __VMLINUX_SYMBOL_STR(ieee80211_stop_queue) },
	{ 0xbcc5fc49, __VMLINUX_SYMBOL_STR(ieee80211_tx_status) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0xd49bd803, __VMLINUX_SYMBOL_STR(wait_for_completion) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x706c5a65, __VMLINUX_SYMBOL_STR(preempt_count_sub) },
	{ 0x75d85f1c, __VMLINUX_SYMBOL_STR(ssb_driver_unregister) },
	{ 0x3de68fad, __VMLINUX_SYMBOL_STR(ssb_chipco_gpio_control) },
	{ 0xef1e4705, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xe0ab6d16, __VMLINUX_SYMBOL_STR(ieee80211_alloc_hw_nm) },
	{ 0xcb8bb561, __VMLINUX_SYMBOL_STR(bcma_core_dma_translation) },
	{ 0xdc798d37, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x63ce6a79, __VMLINUX_SYMBOL_STR(ieee80211_free_txskb) },
	{ 0x3c3fce39, __VMLINUX_SYMBOL_STR(__local_bh_enable_ip) },
	{ 0x198a4ccf, __VMLINUX_SYMBOL_STR(ieee80211_wake_queues) },
	{ 0xa1c76e0a, __VMLINUX_SYMBOL_STR(_cond_resched) },
	{ 0x328a05f1, __VMLINUX_SYMBOL_STR(strncpy) },
	{ 0xbe2971f4, __VMLINUX_SYMBOL_STR(ssb_device_enable) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xe16b893b, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x521445b, __VMLINUX_SYMBOL_STR(list_del) },
	{ 0x96a800d7, __VMLINUX_SYMBOL_STR(bcma_core_set_clockmode) },
	{ 0x7f6ca6f8, __VMLINUX_SYMBOL_STR(dma_release_from_coherent) },
	{ 0xd6b8e852, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0x567740a2, __VMLINUX_SYMBOL_STR(__bcma_driver_register) },
	{ 0x43b0c9c3, __VMLINUX_SYMBOL_STR(preempt_schedule) },
	{ 0x43102a32, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0xa2520d7a, __VMLINUX_SYMBOL_STR(ieee80211_ctstoself_get) },
	{ 0xd43972ec, __VMLINUX_SYMBOL_STR(request_firmware_nowait) },
	{ 0xa7921271, __VMLINUX_SYMBOL_STR(ieee80211_queue_delayed_work) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0x4dea4684, __VMLINUX_SYMBOL_STR(dma_alloc_from_coherent) },
	{ 0xe523ad75, __VMLINUX_SYMBOL_STR(synchronize_irq) },
	{ 0xb65a5213, __VMLINUX_SYMBOL_STR(device_create_file) },
	{ 0x5f311bd3, __VMLINUX_SYMBOL_STR(sdio_unregister_driver) },
	{ 0x33c18c1e, __VMLINUX_SYMBOL_STR(skb_queue_tail) },
	{ 0xc6cbbc89, __VMLINUX_SYMBOL_STR(capable) },
	{ 0x4df08bbb, __VMLINUX_SYMBOL_STR(bcma_chipco_gpio_control) },
	{ 0xc9e4f0cb, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x5ec8341b, __VMLINUX_SYMBOL_STR(__ieee80211_get_rx_led_name) },
	{ 0xa100899d, __VMLINUX_SYMBOL_STR(bcma_core_is_enabled) },
	{ 0x44e6828f, __VMLINUX_SYMBOL_STR(ssb_pmu_set_ldo_voltage) },
	{ 0x12a38747, __VMLINUX_SYMBOL_STR(usleep_range) },
	{ 0xe2fe7d24, __VMLINUX_SYMBOL_STR(ssb_device_disable) },
	{ 0x2e7cde51, __VMLINUX_SYMBOL_STR(bcma_core_enable) },
	{ 0xdabbafae, __VMLINUX_SYMBOL_STR(sdio_release_irq) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x59556d16, __VMLINUX_SYMBOL_STR(wiphy_rfkill_set_hw_state) },
	{ 0x147e40ea, __VMLINUX_SYMBOL_STR(bcma_driver_unregister) },
	{ 0xe8d3a35d, __VMLINUX_SYMBOL_STR(bcma_core_pll_ctl) },
	{ 0xb678366f, __VMLINUX_SYMBOL_STR(int_sqrt) },
	{ 0xcc1e8b1, __VMLINUX_SYMBOL_STR(hwrng_register) },
	{ 0x674b6e6b, __VMLINUX_SYMBOL_STR(__ieee80211_get_tx_led_name) },
	{ 0xf3dd05b1, __VMLINUX_SYMBOL_STR(ssb_set_devtypedata) },
	{ 0xcaa1a2be, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xef02ecac, __VMLINUX_SYMBOL_STR(ieee80211_wake_queue) },
	{ 0x74f7b328, __VMLINUX_SYMBOL_STR(ieee80211_generic_frame_duration) },
	{ 0xc44a9dc6, __VMLINUX_SYMBOL_STR(__ieee80211_get_radio_led_name) },
	{ 0xf6ebc03b, __VMLINUX_SYMBOL_STR(net_ratelimit) },
	{ 0x9bba813e, __VMLINUX_SYMBOL_STR(ssb_bus_unregister) },
	{ 0x822137e2, __VMLINUX_SYMBOL_STR(arm_heavy_mb) },
	{ 0x156633a, __VMLINUX_SYMBOL_STR(ieee80211_register_hw) },
	{ 0x1ca84e69, __VMLINUX_SYMBOL_STR(led_classdev_unregister) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0x1eb9516e, __VMLINUX_SYMBOL_STR(round_jiffies_relative) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x8b91791a, __VMLINUX_SYMBOL_STR(dma_supported) },
	{ 0x5ed56e18, __VMLINUX_SYMBOL_STR(request_firmware) },
	{ 0x74c134b9, __VMLINUX_SYMBOL_STR(__sw_hweight32) },
	{ 0x4c8715ae, __VMLINUX_SYMBOL_STR(ieee80211_free_hw) },
	{ 0xfa65ba05, __VMLINUX_SYMBOL_STR(ssb_bus_may_powerdown) },
	{ 0xf9dd9922, __VMLINUX_SYMBOL_STR(__init_swait_queue_head) },
	{ 0xa045ff0b, __VMLINUX_SYMBOL_STR(skb_dequeue) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xb742fd7, __VMLINUX_SYMBOL_STR(simple_strtol) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x9cbcaf26, __VMLINUX_SYMBOL_STR(complete) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x99bb8806, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0x8f4c6363, __VMLINUX_SYMBOL_STR(sdio_register_driver) },
	{ 0x1d8f4c65, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0xf8b91fc8, __VMLINUX_SYMBOL_STR(sdio_claim_host) },
	{ 0x9792a236, __VMLINUX_SYMBOL_STR(ssb_pmu_set_ldo_paref) },
	{ 0x99a0d5dc, __VMLINUX_SYMBOL_STR(hwrng_unregister) },
	{ 0xf229424a, __VMLINUX_SYMBOL_STR(preempt_count_add) },
	{ 0xfe8e1ccd, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0xae85ac0f, __VMLINUX_SYMBOL_STR(ssb_device_is_enabled) },
	{ 0x7bf77979, __VMLINUX_SYMBOL_STR(bcma_core_disable) },
	{ 0x9fdaa7fb, __VMLINUX_SYMBOL_STR(sdio_set_block_size) },
	{ 0x22ef151f, __VMLINUX_SYMBOL_STR(release_firmware) },
	{ 0xd6fc34fd, __VMLINUX_SYMBOL_STR(ssb_pmu_spuravoid_pllupdate) },
	{ 0x2166686, __VMLINUX_SYMBOL_STR(ieee80211_get_tkip_p1k_iv) },
	{ 0x8492a430, __VMLINUX_SYMBOL_STR(ieee80211_get_response_rate) },
	{  0xaaa35, __VMLINUX_SYMBOL_STR(sdio_disable_func) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
	{ 0xa9ab9f51, __VMLINUX_SYMBOL_STR(sdio_release_host) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mac80211,ssb,bcma,cfg80211,rng-core";

MODULE_ALIAS("bcma:m04BFid0812rev11cl*");
MODULE_ALIAS("bcma:m04BFid0812rev15cl*");
MODULE_ALIAS("bcma:m04BFid0812rev17cl*");
MODULE_ALIAS("bcma:m04BFid0812rev18cl*");
MODULE_ALIAS("bcma:m04BFid0812rev1Ccl*");
MODULE_ALIAS("bcma:m04BFid0812rev1Dcl*");
MODULE_ALIAS("bcma:m04BFid0812rev1Ecl*");
MODULE_ALIAS("bcma:m04BFid0812rev28cl*");
MODULE_ALIAS("bcma:m04BFid0812rev2Acl*");
MODULE_ALIAS("ssb:v4243id0812rev05*");
MODULE_ALIAS("ssb:v4243id0812rev06*");
MODULE_ALIAS("ssb:v4243id0812rev07*");
MODULE_ALIAS("ssb:v4243id0812rev09*");
MODULE_ALIAS("ssb:v4243id0812rev0A*");
MODULE_ALIAS("ssb:v4243id0812rev0B*");
MODULE_ALIAS("ssb:v4243id0812rev0C*");
MODULE_ALIAS("ssb:v4243id0812rev0D*");
MODULE_ALIAS("ssb:v4243id0812rev0F*");
MODULE_ALIAS("ssb:v4243id0812rev10*");
