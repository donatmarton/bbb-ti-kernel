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
	{ 0xd109e4f8, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0x33af8021, __VMLINUX_SYMBOL_STR(dm_unregister_target) },
	{ 0x54ca458c, __VMLINUX_SYMBOL_STR(dm_register_target) },
	{ 0x43a53735, __VMLINUX_SYMBOL_STR(__alloc_workqueue_key) },
	{ 0x62a23587, __VMLINUX_SYMBOL_STR(dm_bufio_get_device_size) },
	{ 0x17a7149b, __VMLINUX_SYMBOL_STR(dm_bufio_client_create) },
	{ 0xaafdc258, __VMLINUX_SYMBOL_STR(strcasecmp) },
	{ 0x5eb24829, __VMLINUX_SYMBOL_STR(dm_shift_arg) },
	{ 0xe04f7caa, __VMLINUX_SYMBOL_STR(dm_read_arg_group) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0xaa4a7797, __VMLINUX_SYMBOL_STR(hex2bin) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x7758b9de, __VMLINUX_SYMBOL_STR(crypto_alloc_shash) },
	{ 0xc499ae1e, __VMLINUX_SYMBOL_STR(kstrdup) },
	{ 0xc1ccfa7a, __VMLINUX_SYMBOL_STR(dm_get_device) },
	{ 0x20c55ae0, __VMLINUX_SYMBOL_STR(sscanf) },
	{ 0x6d0f1f89, __VMLINUX_SYMBOL_STR(dm_table_get_mode) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0x63ba3cc2, __VMLINUX_SYMBOL_STR(dm_put_device) },
	{ 0x6eafc117, __VMLINUX_SYMBOL_STR(crypto_destroy_tfm) },
	{ 0xeca7949e, __VMLINUX_SYMBOL_STR(dm_bufio_client_destroy) },
	{ 0x8c03d20c, __VMLINUX_SYMBOL_STR(destroy_workqueue) },
	{ 0x2fd85baf, __VMLINUX_SYMBOL_STR(___ratelimit) },
	{ 0xb16fe7b3, __VMLINUX_SYMBOL_STR(dm_ratelimit_state) },
	{ 0xd0aa8d91, __VMLINUX_SYMBOL_STR(generic_make_request) },
	{ 0xcaa1a2be, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x7b8c3a36, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x3909d3a8, __VMLINUX_SYMBOL_STR(dm_bufio_prefetch) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0xed93f29e, __VMLINUX_SYMBOL_STR(__kunmap_atomic) },
	{ 0xd1a5deac, __VMLINUX_SYMBOL_STR(kmap_atomic) },
	{ 0xad14fc55, __VMLINUX_SYMBOL_STR(bio_endio) },
	{ 0xe6024e59, __VMLINUX_SYMBOL_STR(dm_bufio_release) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x5445a52c, __VMLINUX_SYMBOL_STR(crypto_shash_final) },
	{ 0xa09ac110, __VMLINUX_SYMBOL_STR(crypto_shash_update) },
	{ 0x594952bd, __VMLINUX_SYMBOL_STR(dm_bufio_read) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x1e7bbcb3, __VMLINUX_SYMBOL_STR(kernel_restart) },
	{ 0x88418a62, __VMLINUX_SYMBOL_STR(kobject_uevent_env) },
	{ 0x67a41b1f, __VMLINUX_SYMBOL_STR(dm_disk) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x43f23311, __VMLINUX_SYMBOL_STR(dm_table_get_md) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x74dcd98c, __VMLINUX_SYMBOL_STR(dm_bufio_get_aux_data) },
	{ 0xf9e73082, __VMLINUX_SYMBOL_STR(scnprintf) },
	{ 0x43b0c9c3, __VMLINUX_SYMBOL_STR(preempt_schedule) },
	{ 0x706c5a65, __VMLINUX_SYMBOL_STR(preempt_count_sub) },
	{ 0xf229424a, __VMLINUX_SYMBOL_STR(preempt_count_add) },
	{ 0xe3baeb78, __VMLINUX_SYMBOL_STR(blk_limits_io_min) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=dm-mod,dm-bufio";

