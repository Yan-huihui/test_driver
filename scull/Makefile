# makefile for building kernel modules

obj-m := scull.o
scull-objs := scull_main.o

KERNEL_DIR := /home/yjh/code/linux-4.9.335

PWD := $(shell pwd)
OUTPUT_DIR := $(PWD)/build
default:
	$(MAKE) -C $(KERNEL_DIR) M=$(PWD) modules

clean:
	$(MAKE) -C $(KERNEL_DIR) M=$(PWD) clean
