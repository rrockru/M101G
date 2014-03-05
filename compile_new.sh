#!/bin/sh
export PATH=/home/rrock/programming/arm-eabi-4.4.3/prebuilt/linux-x86/toolchain/arm-eabi-4.4.3/bin/:$PATH
export ARCH=arm
export SUBARCH=arm
export CROSS_COMPILE=/home/rrock/programming/arm-eabi-4.4.3/prebuilt/linux-x86/toolchain/arm-eabi-4.4.3/bin/arm-eabi-
make -j 3 zImage
make modules -j 3