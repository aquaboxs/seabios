#ifndef __DEV_VIA_H
#define __DEV_VIA_H

#define VIA_DRAM               0x68

#define VIA_PMBASE               0x48
#define VIA_PMREGMISC            0x80
#define VIA_SMBHSTBASE           0x90
#define VIA_SMBHSTCFG            0xd2
#define VIA_DEVACTB              0x58
#define VIA_DEVACTB_APMC_EN      (1 << 25)

#define VIA_GPE0_BLK            0xafe0
#define VIA_GPE0_BLK_LEN        4
#define VIA_PMIO_GLBCTL         0x2c
#define VIA_PMIO_GLBCTL_SMI_EN  1

/* FADT ACPI_ENABLE/ACPI_DISABLE */
#define VIA_ACPI_ENABLE         0xf1
#define VIA_ACPI_DISABLE        0xf0

#endif // dev-via.h
