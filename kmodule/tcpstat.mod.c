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

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xffc68853, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0xe9d7f68b, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x1c76d7f0, __VMLINUX_SYMBOL_STR(netlink_kernel_release) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xe16b0d30, __VMLINUX_SYMBOL_STR(unregister_jprobe) },
	{ 0xb1bedeb7, __VMLINUX_SYMBOL_STR(register_jprobe) },
	{ 0xd3937d7d, __VMLINUX_SYMBOL_STR(__netlink_kernel_create) },
	{ 0x68c067e5, __VMLINUX_SYMBOL_STR(init_net) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x8900fef6, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0x4ca9669f, __VMLINUX_SYMBOL_STR(scnprintf) },
	{ 0xdb173d39, __VMLINUX_SYMBOL_STR(netlink_unicast) },
	{ 0x9166fada, __VMLINUX_SYMBOL_STR(strncpy) },
	{ 0x3cc3a3b8, __VMLINUX_SYMBOL_STR(__nlmsg_put) },
	{ 0x28dcd5fb, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x94a40f0, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x1b9aca3f, __VMLINUX_SYMBOL_STR(jprobe_return) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "BA4A444F978DF1AC503C63C");
