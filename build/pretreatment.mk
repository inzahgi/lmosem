MAKEFLAGS = -s
KERNELCE_PATH	= ../script/
HEADFILE_PATH = -I ../include/script/ -I ../include/ -I ../include/bastypeinc -I ../include/halinc
CCBUILDPATH	= $(KERNELCE_PATH)
include krnlbuidcmd.mh

PREMENT_OBJS = krnlobjs.mkh lmemknllink.lds
.PHONY : all everything  build_kernel
all: build_kernel

build_kernel:everything

everything : $(PREMENT_OBJS)
include krnlbuidrule.mh