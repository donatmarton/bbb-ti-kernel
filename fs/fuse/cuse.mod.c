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
	{ 0x13ebf38, __VMLINUX_SYMBOL_STR(fuse_file_poll) },
	{ 0xa634b079, __VMLINUX_SYMBOL_STR(noop_llseek) },
	{ 0xf8e4433c, __VMLINUX_SYMBOL_STR(misc_deregister) },
	{ 0x7130df08, __VMLINUX_SYMBOL_STR(class_destroy) },
	{ 0xa01ec12f, __VMLINUX_SYMBOL_STR(misc_register) },
	{ 0xfd418fb8, __VMLINUX_SYMBOL_STR(__class_create) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x181add38, __VMLINUX_SYMBOL_STR(fuse_dev_operations) },
	{ 0x6ae0f10b, __VMLINUX_SYMBOL_STR(contig_page_data) },
	{ 0x26843cd6, __VMLINUX_SYMBOL_STR(fuse_put_request) },
	{ 0x74fcffaa, __VMLINUX_SYMBOL_STR(fuse_dev_free) },
	{ 0xb92b59c8, __VMLINUX_SYMBOL_STR(fuse_request_send_background) },
	{ 0x492621b9, __VMLINUX_SYMBOL_STR(__alloc_pages_nodemask) },
	{ 0x7ec12bc3, __VMLINUX_SYMBOL_STR(fuse_get_req_for_background) },
	{ 0x74e8873a, __VMLINUX_SYMBOL_STR(fuse_dev_alloc) },
	{ 0x33216e0, __VMLINUX_SYMBOL_STR(fuse_conn_init) },
	{ 0xda97e5a5, __VMLINUX_SYMBOL_STR(kobject_uevent) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0x9864e30c, __VMLINUX_SYMBOL_STR(cdev_add) },
	{ 0xb7658caa, __VMLINUX_SYMBOL_STR(cdev_alloc) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x7c8e67a0, __VMLINUX_SYMBOL_STR(put_device) },
	{ 0xf080ed1a, __VMLINUX_SYMBOL_STR(device_add) },
	{ 0xd8e484f0, __VMLINUX_SYMBOL_STR(register_chrdev_region) },
	{ 0xd035cb86, __VMLINUX_SYMBOL_STR(dev_set_name) },
	{ 0xff58b518, __VMLINUX_SYMBOL_STR(device_initialize) },
	{ 0xcaa1a2be, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x7b8c3a36, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x29537c9e, __VMLINUX_SYMBOL_STR(alloc_chrdev_region) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x77bc13a0, __VMLINUX_SYMBOL_STR(strim) },
	{ 0x85df9b6c, __VMLINUX_SYMBOL_STR(strsep) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x89cf4c4a, __VMLINUX_SYMBOL_STR(page_address) },
	{ 0x6be960f4, __VMLINUX_SYMBOL_STR(__free_pages) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x740f9b44, __VMLINUX_SYMBOL_STR(fuse_direct_io) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x681562f2, __VMLINUX_SYMBOL_STR(fuse_do_ioctl) },
	{ 0x1bc993c4, __VMLINUX_SYMBOL_STR(fuse_do_open) },
	{ 0xc3901447, __VMLINUX_SYMBOL_STR(fuse_conn_get) },
	{ 0x1fc13c3a, __VMLINUX_SYMBOL_STR(fuse_sync_release) },
	{ 0x19f462ab, __VMLINUX_SYMBOL_STR(kfree_call_rcu) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x63c1422a, __VMLINUX_SYMBOL_STR(fuse_dev_release) },
	{ 0x36e0b0fd, __VMLINUX_SYMBOL_STR(fuse_conn_put) },
	{ 0x8a22159a, __VMLINUX_SYMBOL_STR(cdev_del) },
	{ 0x7485e15e, __VMLINUX_SYMBOL_STR(unregister_chrdev_region) },
	{ 0x684ff483, __VMLINUX_SYMBOL_STR(device_unregister) },
	{ 0x62b72b0d, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x65e75cb6, __VMLINUX_SYMBOL_STR(__list_del_entry) },
	{ 0xe16b893b, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x14e2c617, __VMLINUX_SYMBOL_STR(fuse_abort_conn) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

