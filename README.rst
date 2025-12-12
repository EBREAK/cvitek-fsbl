FSBL
====

FSBL is First Stage Boot Loader.
Act as ATF BL2.

BUILD
====

cv180x:

make CHIP_ARCH=cv180x DDR_CFG=ddr_auto_x16 BOOT_CPU=riscv CROSS_COMPILE=riscv64-linux-gnu- MONITOR_PATH='c906m.bin' BLCP_2ND_PATH='c906l.bin'
