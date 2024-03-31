#ifndef __DEV_815EP_H
#define __DEV_815EP_H

#include "types.h"      // u16

#define PCI_DEVICE_ID_INTEL_I815EP_MCH   0x1130
#define I815EP_HOST_BRIDGE_PAM0            0x59
#define I815EP_HOST_BRIDGE_SMRAM           0x70

#define PCI_DEVICE_ID_INTEL_ICH2_LPC    0x2440
#define ICH2_LPC_PMBASE                 0x40
#define ICH2_LPC_PMBASE_RTE             0x1

#define ICH2_LPC_ACPI_CTRL             0x44
#define ICH2_LPC_ACPI_CTRL_ACPI_EN     0x80
#define ICH2_LPC_PIRQA_ROUT            0x60
#define ICH2_LPC_PIRQE_ROUT            0x68
#define ICH2_LPC_PIRQ_ROUT_IRQEN       0x80
#define ICH2_LPC_GEN_PMCON_1           0xa0
#define ICH2_LPC_GEN_PMCON_1_SMI_LOCK  (1 << 4)
#define ICH2_LPC_PORT_ELCR1            0x4d0
#define ICH2_LPC_PORT_ELCR2            0x4d1
#define ICH2_LPC_RCBA                  0xf0
#define ICH2_LPC_RCBA_ADDR             0xfed1c000
#define ICH2_LPC_RCBA_EN               0x1
#define PCI_DEVICE_ID_INTEL_ICH2_SMBUS 0x2443
#define ICH2_SMB_SMB_BASE              0x20
#define ICH2_SMB_HOSTC                 0x40
#define ICH2_SMB_HOSTC_HST_EN          0x01

#define ICH2_ACPI_ENABLE               0x2
#define ICH2_ACPI_DISABLE              0x3

/* ICH2 LPC PM I/O registers are 128 ports and 128-aligned */
#define ICH2_PMIO_GPE0_STS             0x20
#define ICH2_PMIO_GPE0_BLK_LEN         0x10
#define ICH2_PMIO_SMI_EN               0x30
#define ICH2_PMIO_SMI_EN_APMC_EN       (1 << 5)
#define ICH2_PMIO_SMI_EN_GLB_SMI_EN    (1 << 0)

/* FADT ACPI_ENABLE/ACPI_DISABLE */
#define ICH2_APM_ACPI_ENABLE           0x2
#define ICH2_APM_ACPI_DISABLE          0x3

#define PCI_DEVICE_ID_INTEL_ICH2_IDE    0x244b

#endif // dev-815ep.h
