ifneq ($(KERNELRELEASE),)

    obj-m :=hello_world.o

else

obj-m :=hello_world.o
#modules-objs:= hello_world.o
KERNELDIR ?=/lib/modules/$(shell uname -r)/build

PWD       := $(shell pwd)

modules:
	$(MAKE) -C $(KERNELDIR) M=$(PWD) modules
endif

clean:
	rm -rf *.o *~ .depend


#obj-m+=hello_world.o
#all:
#	make -C /lib/modules/$(shell uname -r)/build/ M=$(PWD) modules
#clean:
#	make -C /lib/modules/$(shell uname -r)/build/ M=$(PWD) clean
