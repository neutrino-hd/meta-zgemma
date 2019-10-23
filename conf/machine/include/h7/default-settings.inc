# AX HD51 BSP default settings


SOC_FAMILY = "bcm7251s"

MACHINE_DRIVER ?= "h7"
MACHINE_BRAND = "ZGEMMA"
MACHINE_NAME = "h7"
IMAGEDIR = "zgemma/H7"
IMAGE_LINK = "${IMAGENAME}-h7"
MTD_ROOTFS = "mmcblk0p3"
MTD_KERNEL = "mmcblk0p2"
KERNEL_FILE = "kernel.bin"
ROOTFS_FILE = "rootfs.tar.bz2"

#IMAGE_CLASSES += "hd-emmc_image_single"
IMAGE_CLASSES += "zgemma-emmc_image_multiboot"


IMAGE_FSTYPES += "zgemma-emmc"
