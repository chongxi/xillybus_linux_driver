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
	{ 0x3df5362e, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0xfe123f2e, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0xcec1f225, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0x78c42f36, __VMLINUX_SYMBOL_STR(dma_supported) },
	{ 0xb584c076, __VMLINUX_SYMBOL_STR(xillybus_endpoint_discovery) },
	{ 0x2072ee9b, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0x25978d50, __VMLINUX_SYMBOL_STR(xillybus_isr) },
	{ 0x37329223, __VMLINUX_SYMBOL_STR(pci_enable_msi_range) },
	{ 0xc171d4f5, __VMLINUX_SYMBOL_STR(pci_set_master) },
	{ 0x263018f8, __VMLINUX_SYMBOL_STR(pci_iomap) },
	{ 0x8ffe5919, __VMLINUX_SYMBOL_STR(pci_request_regions) },
	{ 0xd33ee5d5, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xbdfc5b7a, __VMLINUX_SYMBOL_STR(pci_disable_link_state) },
	{ 0xf49fee23, __VMLINUX_SYMBOL_STR(pci_enable_device) },
	{ 0xea4de8d0, __VMLINUX_SYMBOL_STR(xillybus_init_endpoint) },
	{ 0x4c9d28b0, __VMLINUX_SYMBOL_STR(phys_base) },
	{ 0xd6aa1fed, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xf8a96516, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x6e3acf00, __VMLINUX_SYMBOL_STR(dma_ops) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xcb8acb50, __VMLINUX_SYMBOL_STR(xillybus_do_cleanup) },
	{ 0xdd391222, __VMLINUX_SYMBOL_STR(pci_disable_device) },
	{ 0xf94b7bf6, __VMLINUX_SYMBOL_STR(pci_release_regions) },
	{ 0x11becc8f, __VMLINUX_SYMBOL_STR(pci_iounmap) },
	{ 0xe61fb6d8, __VMLINUX_SYMBOL_STR(pci_disable_msi) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
	{ 0x1939f9f6, __VMLINUX_SYMBOL_STR(xillybus_endpoint_remove) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=xillybus_core";

MODULE_ALIAS("pci:v000010EEd0000EBEBsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001172d0000EBEBsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011AAd0000EBEBsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001204d0000EBEBsv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "3A56164C227D8E7CBACE73D");
