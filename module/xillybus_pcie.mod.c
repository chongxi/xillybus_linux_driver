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
	{ 0x551a9e15, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x9b7b1e49, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0xb8cc4d80, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0xb47876cc, __VMLINUX_SYMBOL_STR(dma_supported) },
	{ 0xe7655a62, __VMLINUX_SYMBOL_STR(xillybus_endpoint_discovery) },
	{ 0x2072ee9b, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0x25978d50, __VMLINUX_SYMBOL_STR(xillybus_isr) },
	{ 0x1c7a1fb9, __VMLINUX_SYMBOL_STR(pci_enable_msi_range) },
	{ 0xa9d2ebe0, __VMLINUX_SYMBOL_STR(pci_set_master) },
	{ 0x263018f8, __VMLINUX_SYMBOL_STR(pci_iomap) },
	{ 0xa4a7d50f, __VMLINUX_SYMBOL_STR(pci_request_regions) },
	{ 0xb850176, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xbdfc5b7a, __VMLINUX_SYMBOL_STR(pci_disable_link_state) },
	{ 0xfdec99f5, __VMLINUX_SYMBOL_STR(pci_enable_device) },
	{ 0xc95ffb63, __VMLINUX_SYMBOL_STR(xillybus_init_endpoint) },
	{ 0x4c9d28b0, __VMLINUX_SYMBOL_STR(phys_base) },
	{ 0x69454d4, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xc4778388, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x3697aabe, __VMLINUX_SYMBOL_STR(dma_ops) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xb2579693, __VMLINUX_SYMBOL_STR(xillybus_do_cleanup) },
	{ 0x57f87b8, __VMLINUX_SYMBOL_STR(pci_disable_device) },
	{ 0x83419b57, __VMLINUX_SYMBOL_STR(pci_release_regions) },
	{ 0x11becc8f, __VMLINUX_SYMBOL_STR(pci_iounmap) },
	{ 0xa3a3fe2, __VMLINUX_SYMBOL_STR(pci_disable_msi) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
	{ 0xc163ef8d, __VMLINUX_SYMBOL_STR(xillybus_endpoint_remove) },
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
