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
	{ 0xc546eb0, __VMLINUX_SYMBOL_STR(crypto_unregister_template) },
	{ 0xe0df53a3, __VMLINUX_SYMBOL_STR(kset_unregister) },
	{ 0x5467e6fc, __VMLINUX_SYMBOL_STR(crypto_register_template) },
	{ 0x310313f, __VMLINUX_SYMBOL_STR(padata_start) },
	{ 0x8c6de55a, __VMLINUX_SYMBOL_STR(kset_create_and_add) },
	{ 0x41d0fc2, __VMLINUX_SYMBOL_STR(kernel_kobj) },
	{ 0xa58be001, __VMLINUX_SYMBOL_STR(aead_register_instance) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x3a98af71, __VMLINUX_SYMBOL_STR(crypto_grab_aead) },
	{ 0x9a11a0fc, __VMLINUX_SYMBOL_STR(crypto_attr_alg_name) },
	{ 0x124f2056, __VMLINUX_SYMBOL_STR(crypto_get_attr_type) },
	{ 0xcfc68341, __VMLINUX_SYMBOL_STR(synchronize_rcu_bh) },
	{ 0x2acc5365, __VMLINUX_SYMBOL_STR(padata_stop) },
	{ 0x8c03d20c, __VMLINUX_SYMBOL_STR(destroy_workqueue) },
	{ 0xbd6d31a4, __VMLINUX_SYMBOL_STR(padata_free) },
	{ 0xf17b469a, __VMLINUX_SYMBOL_STR(padata_unregister_cpumask_notifier) },
	{ 0xd7d79132, __VMLINUX_SYMBOL_STR(put_online_cpus) },
	{ 0x944a8362, __VMLINUX_SYMBOL_STR(kobject_uevent) },
	{ 0xa27d8c1a, __VMLINUX_SYMBOL_STR(kobject_add) },
	{ 0x477ea0d, __VMLINUX_SYMBOL_STR(padata_register_cpumask_notifier) },
	{ 0x2cc44b15, __VMLINUX_SYMBOL_STR(__cpu_possible_mask) },
	{ 0x147fb690, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xf6789fdc, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xe066d5e1, __VMLINUX_SYMBOL_STR(padata_alloc_possible) },
	{ 0x43a53735, __VMLINUX_SYMBOL_STR(__alloc_workqueue_key) },
	{ 0x3efb35c9, __VMLINUX_SYMBOL_STR(get_online_cpus) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x4dc9cd6f, __VMLINUX_SYMBOL_STR(crypto_drop_spawn) },
	{ 0xe9f80277, __VMLINUX_SYMBOL_STR(crypto_spawn_tfm2) },
	{ 0x2419c7aa, __VMLINUX_SYMBOL_STR(__cpu_online_mask) },
	{ 0x397e25d8, __VMLINUX_SYMBOL_STR(crypto_destroy_tfm) },
	{ 0xfb03db17, __VMLINUX_SYMBOL_STR(crypto_aead_setkey) },
	{ 0xb39ea4d6, __VMLINUX_SYMBOL_STR(crypto_aead_setauthsize) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xf78e903a, __VMLINUX_SYMBOL_STR(padata_do_parallel) },
	{ 0x3c3fce39, __VMLINUX_SYMBOL_STR(__local_bh_enable_ip) },
	{ 0xd3f57a2, __VMLINUX_SYMBOL_STR(_find_next_bit_le) },
	{ 0x6d662533, __VMLINUX_SYMBOL_STR(_find_first_bit_le) },
	{ 0x74c134b9, __VMLINUX_SYMBOL_STR(__sw_hweight32) },
	{ 0xf229424a, __VMLINUX_SYMBOL_STR(preempt_count_add) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0x7e99c1c9, __VMLINUX_SYMBOL_STR(padata_do_serial) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

