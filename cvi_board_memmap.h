#ifndef __CVI_BOARD_MEMMAP_H_
#define __CVI_BOARD_MEMMAP_H_

#define CVIMMAP_DRAM_BASE               0x80000000  /* offset 0.0KiB */
#define CVIMMAP_DRAM_SIZE               0x04000000  /* 64.0MiB */
#define CVIMMAP_MONITOR_ADDR            0x80100000  /* offset 1.0MiB */
#define CVIMMAP_OPENSBI_SIZE            0x000C0000  /* 768KiB */
#define CVIMMAP_OPENSBI_FDT_ADDR        0x801C0000  /* offset 1.75MiB */
#define CVIMMAP_FSBL_C906L_START_ADDR   0x80200000  /* offset 2.0MiB */
#define CVIMMAP_FSBL_UNZIP_ADDR         0x81400000  /* offset 20.0MiB */
#define CVIMMAP_FSBL_UNZIP_SIZE         0x00F00000  /* 15.0MiB */

#endif
