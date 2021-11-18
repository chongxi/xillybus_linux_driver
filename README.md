What is this
================
This is bundle for running Xillybus on a Linux machine. Due to its cross-
platform nature, each platform uses a subset of those found here.

Please refer to the documentation at http://xillybus.com for information
about how to run and install the attached software.

This bundle has three subdirectories:

* module - The kernel module source + udev file
* demoapps - Sample C userspace programs for trial and hacking
* diagnostic - A simple diagnostic tool 

Please refer to Xillybus' web site document:

http://xillybus.com/downloads/doc/xillybus_getting_started_linux.pdf

Check whether an installation of xillybus driver is needed:
===========================

Some Linux distributions have the PCIe / AXI Xillybus driver pre-installed out of the
box, for example:
• Ubuntu 14.04 and later
• Xillinux (for the Zynq and Cyclone V SoC platforms only)
A quick check if the driver is installed in the current system setting is
$ modinfo xillybus_core
at shell prompt. If the driver is installed, information about it is printed. Otherwise it
says “modinfo: ERROR: Module xillybus core not found”.

Compiling the kernel module
===========================
Change directory to where the module's source is and type "make" to compile
the module. The session should look something like this:

```
$ cd module
```

```
$ make
```

```
make -C /lib/modules/3.10.0-CUSTOM/build SUBDIRS=/home/myself/xillybus/module modules
make[1]: Entering directory `/usr/src/kernels/3.10.0-CUSTOM'
  CC [M]  /home/myself/xillybus/module/xillybus_core.o
  CC [M]  /home/myself/xillybus/module/xillybus_pcie.o
  Building modules, stage 2
  MODPOST 2 modules
  CC      /home/myself/xillybus/module/xillybus_core.mod.o
  LD [M]  /home/myself/xillybus/module/xillybus_core.ko
  CC      /home/myself/xillybus/module/xillybus_pcie.mod.o
  LD [M]  /home/myself/xillybus/module/xillybus_pcie.ko
make[1]: Leaving directory `/usr/src/kernels/3.10.0-CUSTOM'
```

The details may vary slightly, but no errors or warnings should appear.

Note that the kernel module is compiled specifically for the kernel running
during the compilation. If another kernel is targeted, type
"make TARGET=kernel-version" where "kernel-version" is the targeted kernel
version, as it appears in `/lib/modules/`.


Installing the kernel module
============================
Staying in the same directory, become root and type `make install`. This can
take a few seconds, but shouldn't generate any errors.

If this fails, please refer to the website for more information.

The installation does not load the module into the kernel immediately. It will
do so on the next boot of the system if a Xillybus peripheral is discovered.

Installing the udev file
========================

By default, Xillybus device files are accessible only by their owner, which is
root. It makes a lot of sense to make these files accessible to any user, so
that working as root can be avoided. The udev mechanism changes these files
permissions when the device files are generated by following a set of rules.

So, in the same directory, and still as root, copy the udev rule file to where
all rules are kept, most likely /etc/udev/rules.d/, with

```
$ cp 10-xillybus.rules /etc/udev/rules.d/
```

