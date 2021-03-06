#ifndef REGS_H
#define REGS_H

#define REG_BASE	0x00300000
#define REG_BASE_ID	0x00020000
#define REG_TYPE_8	volatile unsigned char
#define REG_TYPE_16	volatile unsigned short
#define REG_TYPE_32	volatile unsigned long


// CPU identification
#define CORE_ID *((REG_TYPE_8 *)REG_BASE_ID + 0)
#define  CORE_ID_STANDARD       0x02
#define  CORE_ID_STANDARD_DESC "C33 standard macro core"
#define  CORE_ID_MINI           0x03
#define  CORE_ID_MINI_DESC      "C33 mini-macro core"
#define  CORE_ID_ADVANCED       0x04
#define  CORE_ID_ADVANCED_DESC  "C33 advanced macro core"
#define  CORE_ID_PE             0x05
#define  CORE_ID_PE_DESC        "C33 PE Core"
#define  CORE_ID_PE_LE          0x06
#define  CORE_ID_PE_LE_DESC     "C33 PE little endian core"

#define PRODUCT_ID *((REG_TYPE_8 *)REG_BASE_ID + 1)
#define  PRODUCT_ID_3           0x03
#define  PRODUCT_ID_3_DESC      "S1C333"
#define  PRODUCT_ID_4           0x04
#define  PRODUCT_ID_4_DESC      "S1C334"
#define  PRODUCT_ID_3E          0x0E
#define  PRODUCT_ID_3E_DESC     "S1C33E"
#define  PRODUCT_ID_3L          0x15
#define  PRODUCT_ID_3L_DESC     "S1C33L"

#define MODEL_ID *((REG_TYPE_8 *)REG_BASE_ID + 2)
#define VERSION_ID *((REG_TYPE_8 *)REG_BASE_ID + 3)



/* Misc Register #1 */
#define REG_MISC_RTCWT 		*((REG_TYPE_8 *) (REG_BASE + 0x10))
#define REG_MISC_USBWT 		*((REG_TYPE_8 *) (REG_BASE + 0x12))
#define REG_MISC_PMUX		*((REG_TYPE_8 *) (REG_BASE + 0x14))
#define REG_MISC_PAC		*((REG_TYPE_8 *) (REG_BASE + 0x16))
#define REG_MISC_BOOT		*((REG_TYPE_8 *) (REG_BASE + 0x18))
#define REG_MISC_COROM		*((REG_TYPE_8 *) (REG_BASE + 0x1a))
#define REG_MISC_PROT		*((REG_TYPE_8 *) (REG_BASE + 0x20))

/* Interrupt Controller */
#define REG_INT_PP01L			*((REG_TYPE_8 *) (REG_BASE + 0x260))
#define REG_INT_PP23L			*((REG_TYPE_8 *) (REG_BASE + 0x261))
#define REG_INT_PK01L			*((REG_TYPE_8 *) (REG_BASE + 0x262))
#define REG_INT_PHSD01L			*((REG_TYPE_8 *) (REG_BASE + 0x263))
#define REG_INT_PHSD23L			*((REG_TYPE_8 *) (REG_BASE + 0x264))
#define REG_INT_PDM			*((REG_TYPE_8 *) (REG_BASE + 0x265))
#define REG_INT_P16T01			*((REG_TYPE_8 *) (REG_BASE + 0x266))
#define REG_INT_P16T23			*((REG_TYPE_8 *) (REG_BASE + 0x267))
#define REG_INT_P16T45			*((REG_TYPE_8 *) (REG_BASE + 0x268))
#define REG_INT_PLCDC_PSIO0		*((REG_TYPE_8 *) (REG_BASE + 0x269))
#define REG_INT_PSI01_PAD		*((REG_TYPE_8 *) (REG_BASE + 0x26a))
#define REG_INT_PRTC			*((REG_TYPE_8 *) (REG_BASE + 0x26b))
#define REG_INT_PP45L			*((REG_TYPE_8 *) (REG_BASE + 0x26c))
#define REG_INT_PP67L			*((REG_TYPE_8 *) (REG_BASE + 0x26d))
#define REG_INT_PSI02_PSPI		*((REG_TYPE_8 *) (REG_BASE + 0x26e))
#define REG_INT_EK01_EP03		*((REG_TYPE_8 *) (REG_BASE + 0x270))
#define REG_INT_EDMA			*((REG_TYPE_8 *) (REG_BASE + 0x271))
#define REG_INT_E16T01			*((REG_TYPE_8 *) (REG_BASE + 0x272))
#define REG_INT_E16T23			*((REG_TYPE_8 *) (REG_BASE + 0x273))
#define REG_INT_E16T45			*((REG_TYPE_8 *) (REG_BASE + 0x274))
#define REG_INT_ESIF01			*((REG_TYPE_8 *) (REG_BASE + 0x276))
#define REG_INT_EP47_ERTC_EAD		*((REG_TYPE_8 *) (REG_BASE + 0x277))
#define REG_INT_ELCDC			*((REG_TYPE_8 *) (REG_BASE + 0x278))
#define REG_INT_ESIF2_ESPI		*((REG_TYPE_8 *) (REG_BASE + 0x279))
#define REG_INT_FK01_FP03		*((REG_TYPE_8 *) (REG_BASE + 0x280))
#define REG_INT_FDMA			*((REG_TYPE_8 *) (REG_BASE + 0x281))
#define REG_INT_F16T01			*((REG_TYPE_8 *) (REG_BASE + 0x282))
#define REG_INT_F16T23			*((REG_TYPE_8 *) (REG_BASE + 0x283))
#define REG_INT_F16T45			*((REG_TYPE_8 *) (REG_BASE + 0x284))
#define REG_INT_FSIF01			*((REG_TYPE_8 *) (REG_BASE + 0x286))
#define REG_INT_FP47_FRTC_FAD		*((REG_TYPE_8 *) (REG_BASE + 0x287))
#define REG_INT_FLCDC			*((REG_TYPE_8 *) (REG_BASE + 0x288))
#define REG_INT_FSIF2_FSPI		*((REG_TYPE_8 *) (REG_BASE + 0x289))
#define REG_IDMAREQ_RP03_RHS_R16T0	*((REG_TYPE_8 *) (REG_BASE + 0x290))
#define REG_IDMAREQ_R16T14		*((REG_TYPE_8 *) (REG_BASE + 0x291))
#define REG_IDMAREQ_R16T5_RSIF0		*((REG_TYPE_8 *) (REG_BASE + 0x292))
#define REG_IDMAREQ_RSIF1_RAD_RP47	*((REG_TYPE_8 *) (REG_BASE + 0x293))
#define REG_IDMAEN_DEP03_DEHS_DE16T0	*((REG_TYPE_8 *) (REG_BASE + 0x294))
#define REG_IDMAEN_DE16T14		*((REG_TYPE_8 *) (REG_BASE + 0x295))
#define REG_IDMAEN_DE16T5_DESIF0	*((REG_TYPE_8 *) (REG_BASE + 0x296))
#define REG_IDMAEN_DESIF1_DEAD_DEP47	*((REG_TYPE_8 *) (REG_BASE + 0x297))
#define REG_HSDMA_HTGR1			*((REG_TYPE_8 *) (REG_BASE + 0x298))
#define REG_HSDMA_HTGR2			*((REG_TYPE_8 *) (REG_BASE + 0x299))
#define REG_HSDMA_HSOFTTGR		*((REG_TYPE_8 *) (REG_BASE + 0x29a))
#define REG_IDMAREQ_RLCDC_RSIF2_RSPI	*((REG_TYPE_8 *) (REG_BASE + 0x29b))
#define REG_IDMAEN_DELCDC_DESIF2_DESPI	*((REG_TYPE_8 *) (REG_BASE + 0x29c))
#define REG_RST_RESET			*((REG_TYPE_8 *) (REG_BASE + 0x29f))
#define REG_INT_PP89L			*((REG_TYPE_8 *) (REG_BASE + 0x2a0))
#define REG_INT_PP1011L			*((REG_TYPE_8 *) (REG_BASE + 0x2a1))
#define REG_INT_PP1213L			*((REG_TYPE_8 *) (REG_BASE + 0x2a2))
#define REG_INT_PP1415L			*((REG_TYPE_8 *) (REG_BASE + 0x2a3))
#define REG_INT_PI2S			*((REG_TYPE_8 *) (REG_BASE + 0x2a4))
#define REG_INT_EP815			*((REG_TYPE_8 *) (REG_BASE + 0x2a6))
#define REG_INT_EI2S			*((REG_TYPE_8 *) (REG_BASE + 0x2a7))
#define REG_INT_FP815			*((REG_TYPE_8 *) (REG_BASE + 0x2a9))
#define REG_INT_FI2S			*((REG_TYPE_8 *) (REG_BASE + 0x2aa))
#define REG_IDMAREQ_RP815		*((REG_TYPE_8 *) (REG_BASE + 0x2ac))
#define REG_IDMAREQ_RI2S		*((REG_TYPE_8 *) (REG_BASE + 0x2ad))
#define REG_IDMAEN_DEP815		*((REG_TYPE_8 *) (REG_BASE + 0x2ae))
#define REG_IDMAEN_DEI2S		*((REG_TYPE_8 *) (REG_BASE + 0x2af))

/* Card Interface */
#define REG_CARDSETUP		*((REG_TYPE_8 *) (REG_BASE + 0x300))
#define REG_CARDFUNCSEL05	*((REG_TYPE_8 *) (REG_BASE + 0x302))
#define REG_ECCTRIGSEL		*((REG_TYPE_8 *) (REG_BASE + 0x310))
#define REG_ECCRSTRDY		*((REG_TYPE_8 *) (REG_BASE + 0x311))
#define REG_ECCENA		*((REG_TYPE_8 *) (REG_BASE + 0x312))
#define REG_ECCMD		*((REG_TYPE_8 *) (REG_BASE + 0x313))
#define REG_ECC0CP		*((REG_TYPE_8 *) (REG_BASE + 0x314))
#define REG_ECC0LPL		*((REG_TYPE_8 *) (REG_BASE + 0x316))
#define REG_ECC0LPH		*((REG_TYPE_8 *) (REG_BASE + 0x317))
#define REG_ECC1CP		*((REG_TYPE_8 *) (REG_BASE + 0x318))
#define REG_ECC1LPL		*((REG_TYPE_8 *) (REG_BASE + 0x31a))
#define REG_ECC1LPH		*((REG_TYPE_8 *) (REG_BASE + 0x31b))

/* I/O Ports */
#define	REG_P0_P0D		*((REG_TYPE_8 *) (REG_BASE + 0x380))
#define REG_P0_IOC0		*((REG_TYPE_8 *) (REG_BASE + 0x381))
#define REG_P1_P1D		*((REG_TYPE_8 *) (REG_BASE + 0x382))
#define REG_P1_IOC1		*((REG_TYPE_8 *) (REG_BASE + 0x383))
#define REG_P2_P2D		*((REG_TYPE_8 *) (REG_BASE + 0x384))
#define	REG_P2_IOC2		*((REG_TYPE_8 *) (REG_BASE + 0x385))
#define REG_P3_P3D		*((REG_TYPE_8 *) (REG_BASE + 0x386))
#define REG_P3_IOC3		*((REG_TYPE_8 *) (REG_BASE + 0x387))
#define REG_P4_P4D		*((REG_TYPE_8 *) (REG_BASE + 0x388))
#define REG_P4_IOC4		*((REG_TYPE_8 *) (REG_BASE + 0x389))
#define REG_P5_P5D		*((REG_TYPE_8 *) (REG_BASE + 0x38a))
#define REG_P5_IOC5		*((REG_TYPE_8 *) (REG_BASE + 0x38b))
#define REG_P6_P6D		*((REG_TYPE_8 *) (REG_BASE + 0x38c))
#define REG_P6_IOC6		*((REG_TYPE_8 *) (REG_BASE + 0x38d))
#define REG_P7_P7D		*((REG_TYPE_8 *) (REG_BASE + 0x38e))
#define REG_P8_P8D		*((REG_TYPE_8 *) (REG_BASE + 0x390))
#define REG_P8_IOC8		*((REG_TYPE_8 *) (REG_BASE + 0x391))
#define REG_P9_P9D		*((REG_TYPE_8 *) (REG_BASE + 0x392))
#define REG_P9_IOC9		*((REG_TYPE_8 *) (REG_BASE + 0x393))
#define REG_P0_03_CFP		*((REG_TYPE_8 *) (REG_BASE + 0x3a0))
#define REG_P0_47_CFP		*((REG_TYPE_8 *) (REG_BASE + 0x3a1))
#define REG_P1_03_CFP		*((REG_TYPE_8 *) (REG_BASE + 0x3a2))
#define REG_P1_47_CFP		*((REG_TYPE_8 *) (REG_BASE + 0x3a3))
#define REG_P2_03_CFP		*((REG_TYPE_8 *) (REG_BASE + 0x3a4))
#define REG_P2_47_CFP		*((REG_TYPE_8 *) (REG_BASE + 0x3a5))
#define REG_P3_03_CFP		*((REG_TYPE_8 *) (REG_BASE + 0x3a6))
#define REG_P3_46_CFP		*((REG_TYPE_8 *) (REG_BASE + 0x3a7))
#define REG_P4_03_CFP		*((REG_TYPE_8 *) (REG_BASE + 0x3a8))
#define REG_P4_47_CFP		*((REG_TYPE_8 *) (REG_BASE + 0x3a9))
#define REG_P5_03_CFP		*((REG_TYPE_8 *) (REG_BASE + 0x3aa))
#define REG_P5_47_CFP		*((REG_TYPE_8 *) (REG_BASE + 0x3ab))
#define REG_P6_03_CFP		*((REG_TYPE_8 *) (REG_BASE + 0x3ac))
#define REG_P6_47_CFP		*((REG_TYPE_8 *) (REG_BASE + 0x3ad))
#define REG_P7_03_CFP		*((REG_TYPE_8 *) (REG_BASE + 0x3ae))
#define REG_P7_4_CFP		*((REG_TYPE_8 *) (REG_BASE + 0x3af))
#define REG_P8_03_CFP		*((REG_TYPE_8 *) (REG_BASE + 0x3b0))
#define REG_P8_45_CFP		*((REG_TYPE_8 *) (REG_BASE + 0x3b1))
#define REG_P9_03_CFP		*((REG_TYPE_8 *) (REG_BASE + 0x3b2))
#define REG_P9_47_CFP		*((REG_TYPE_8 *) (REG_BASE + 0x3b3))
#define REG_PINTSEL_SPT03	*((REG_TYPE_8 *) (REG_BASE + 0x3c0))
#define REG_PINTSEL_SPT47	*((REG_TYPE_8 *) (REG_BASE + 0x3c1))
#define REG_PINTPOL_SPP07	*((REG_TYPE_8 *) (REG_BASE + 0x3c2))
#define REG_PINTEL_SEPT07	*((REG_TYPE_8 *) (REG_BASE + 0x3c3))
#define REG_PINTSEL_SPT811	*((REG_TYPE_8 *) (REG_BASE + 0x3c4))
#define REG_PINTSEL_SPT1215	*((REG_TYPE_8 *) (REG_BASE + 0x3c5))
#define REG_PINTPOL_SPP815	*((REG_TYPE_8 *) (REG_BASE + 0x3c6))
#define REG_PINTEL_SEPT815	*((REG_TYPE_8 *) (REG_BASE + 0x3c7))
#define REG_KINTSEL_SPPK01	*((REG_TYPE_8 *) (REG_BASE + 0x3d0))
#define REG_KINTCOMP_SCPK0	*((REG_TYPE_8 *) (REG_BASE + 0x3d2))
#define REG_KINTCOMP_SCPK1	*((REG_TYPE_8 *) (REG_BASE + 0x3d3))
#define REG_KINTCOMP_SMPK0	*((REG_TYPE_8 *) (REG_BASE + 0x3d4))
#define REG_KINTCOMP_SMPK1	*((REG_TYPE_8 *) (REG_BASE + 0x3d5))

/* A/D Converter */
#define REG_AD_CLKCTL		*((REG_TYPE_16 *) (REG_BASE + 0x520))
#define REG_AD_ADD		*((REG_TYPE_16 *) (REG_BASE + 0x540))
#define REG_AD_TRIG_CHNL	*((REG_TYPE_16 *) (REG_BASE + 0x542))
#define REG_AD_EN_SMPL_STAT	*((REG_TYPE_16 *) (REG_BASE + 0x544))
#define REG_AD_END		*((REG_TYPE_16 *) (REG_BASE + 0x546))
#define REG_AD_CH0_BUF		*((REG_TYPE_16 *) (REG_BASE + 0x548))
#define REG_AD_CH1_BUF		*((REG_TYPE_16 *) (REG_BASE + 0x54a))
#define REG_AD_CH2_BUF		*((REG_TYPE_16 *) (REG_BASE + 0x54c))
#define REG_AD_CH3_BUF		*((REG_TYPE_16 *) (REG_BASE + 0x54e))
#define REG_AD_CH4_BUF		*((REG_TYPE_16 *) (REG_BASE + 0x550))
#define REG_AD_UPPER		*((REG_TYPE_16 *) (REG_BASE + 0x558))
#define REG_AD_LOWER		*((REG_TYPE_16 *) (REG_BASE + 0x55a))
#define REG_AD_CH04_INTMASK	*((REG_TYPE_16 *) (REG_BASE + 0x55c))
#define REG_AD_ADVMODE		*((REG_TYPE_16 *) (REG_BASE + 0x55e))

/* Watchdog Timer */
#define REG_WD_WP		*((REG_TYPE_16 *) (REG_BASE + 0x660))
#define REG_WD_EN		*((REG_TYPE_16 *) (REG_BASE + 0x662))
#define REG_WD_COMP		*((REG_TYPE_32 *) (REG_BASE + 0x664))
#define REG_WD_COMP_LOW		*((REG_TYPE_16 *) (REG_BASE + 0x664))
#define REG_WD_COMP_HIGH	*((REG_TYPE_16 *) (REG_BASE + 0x666))
#define REG_WD_CNT		*((REG_TYPE_32 *) (REG_BASE + 0x668))
#define REG_WD_CNT_LOW		*((REG_TYPE_16 *) (REG_BASE + 0x668))
#define REG_WD_CNT_HIGH		*((REG_TYPE_16 *) (REG_BASE + 0x66a))
#define REG_WD_CNTL		*((REG_TYPE_16 *) (REG_BASE + 0x66c))

/* 16-bit Timer */
#define REG_T16_CR0A		*((REG_TYPE_16 *) (REG_BASE + 0x780))
#define REG_T16_CR0B		*((REG_TYPE_16 *) (REG_BASE + 0x782))
#define REG_T16_TC0		*((REG_TYPE_16 *) (REG_BASE + 0x784))
#define REG_T16_CTL0		*((REG_TYPE_16 *) (REG_BASE + 0x786))
#define REG_T16_CR1A		*((REG_TYPE_16 *) (REG_BASE + 0x788))
#define REG_T16_CR1B		*((REG_TYPE_16 *) (REG_BASE + 0x78a))
#define REG_T16_TC1		*((REG_TYPE_16 *) (REG_BASE + 0x78c))
#define REG_T16_CTL1		*((REG_TYPE_16 *) (REG_BASE + 0x78e))
#define REG_T16_CR2A		*((REG_TYPE_16 *) (REG_BASE + 0x790))
#define REG_T16_CR2B		*((REG_TYPE_16 *) (REG_BASE + 0x792))
#define REG_T16_TC2		*((REG_TYPE_16 *) (REG_BASE + 0x794))
#define REG_T16_CTL2		*((REG_TYPE_16 *) (REG_BASE + 0x796))
#define REG_T16_CR3A		*((REG_TYPE_16 *) (REG_BASE + 0x798))
#define REG_T16_CR3B		*((REG_TYPE_16 *) (REG_BASE + 0x79a))
#define REG_T16_TC3		*((REG_TYPE_16 *) (REG_BASE + 0x79c))
#define REG_T16_CTL3		*((REG_TYPE_16 *) (REG_BASE + 0x79e))
#define REG_T16_CR4A		*((REG_TYPE_16 *) (REG_BASE + 0x7a0))
#define REG_T16_CR4B		*((REG_TYPE_16 *) (REG_BASE + 0x7a2))
#define REG_T16_TC4		*((REG_TYPE_16 *) (REG_BASE + 0x7a4))
#define REG_T16_CTL4		*((REG_TYPE_16 *) (REG_BASE + 0x7a6))
#define REG_T16_CR5A		*((REG_TYPE_16 *) (REG_BASE + 0x7a8))
#define REG_T16_CR5B		*((REG_TYPE_16 *) (REG_BASE + 0x7aa))
#define REG_T16_TC5		*((REG_TYPE_16 *) (REG_BASE + 0x7ac))
#define REG_T16_CTL5		*((REG_TYPE_16 *) (REG_BASE + 0x7ae))
#define REG_DA16_CR0A		*((REG_TYPE_16 *) (REG_BASE + 0x7d0))
#define REG_DA16_CR1A		*((REG_TYPE_16 *) (REG_BASE + 0x7d2))
#define REG_DA16_CR2A		*((REG_TYPE_16 *) (REG_BASE + 0x7d4))
#define REG_T16_CNT_PAUSE	*((REG_TYPE_16 *) (REG_BASE + 0x7dc))
#define REG_T16_ADVMODE		*((REG_TYPE_16 *) (REG_BASE + 0x7de))
#define REG_T16_CLKCTL_0	*((REG_TYPE_16 *) (REG_BASE + 0x7e0))
#define REG_T16_CLKCTL_1	*((REG_TYPE_16 *) (REG_BASE + 0x7e2))
#define REG_T16_CLKCTL_2	*((REG_TYPE_16 *) (REG_BASE + 0x7e4))
#define REG_T16_CLKCTL_3	*((REG_TYPE_16 *) (REG_BASE + 0x7e6))
#define REG_T16_CLKCTL_4	*((REG_TYPE_16 *) (REG_BASE + 0x7e8))
#define REG_T16_CLKCTL_5	*((REG_TYPE_16 *) (REG_BASE + 0x7ea))

/* USB Function Controller */
#define REG_USB_MAIN_INT_STAT 		*((REG_TYPE_8 *) (REG_BASE + 0x900))
#define REG_USB_SIE_INT_STAT 		*((REG_TYPE_8 *) (REG_BASE + 0x901))
#define REG_USB_EPR_INT_STAT 		*((REG_TYPE_8 *) (REG_BASE + 0x902))
#define REG_USB_DMA_INT_STAT 		*((REG_TYPE_8 *) (REG_BASE + 0x903))
#define REG_USB_FIFO_INT_STAT	 	*((REG_TYPE_8 *) (REG_BASE + 0x904))
#define REG_USB_EP0_INT_STAT 		*((REG_TYPE_8 *) (REG_BASE + 0x907))
#define REG_USB_EPA_INT_STAT 		*((REG_TYPE_8 *) (REG_BASE + 0x908))
#define REG_USB_EPB_INT_STAT 		*((REG_TYPE_8 *) (REG_BASE + 0x909))
#define REG_USB_EPC_INT_STAT 		*((REG_TYPE_8 *) (REG_BASE + 0x90a))
#define REG_USB_EPD_INT_STAT 		*((REG_TYPE_8 *) (REG_BASE + 0x90b))
#define REG_USB_MAIN_INT_EN 		*((REG_TYPE_8 *) (REG_BASE + 0x910))
#define REG_USB_SIE_INT_EN 		*((REG_TYPE_8 *) (REG_BASE + 0x911))
#define REG_USB_EPR_INT_EN 		*((REG_TYPE_8 *) (REG_BASE + 0x912))
#define REG_USB_DMA_INT_EN 		*((REG_TYPE_8 *) (REG_BASE + 0x913))
#define REG_USB_FIFO_INT_EN 		*((REG_TYPE_8 *) (REG_BASE + 0x914))
#define REG_USB_EP0_INT_EN 		*((REG_TYPE_8 *) (REG_BASE + 0x917))
#define REG_USB_EPA_INT_EN 		*((REG_TYPE_8 *) (REG_BASE + 0x918))
#define REG_USB_EPB_INT_EN 		*((REG_TYPE_8 *) (REG_BASE + 0x919))
#define REG_USB_EPC_INT_EN 		*((REG_TYPE_8 *) (REG_BASE + 0x91a))
#define REG_USB_EPD_INT_EN 		*((REG_TYPE_8 *) (REG_BASE + 0x91b))
#define REG_USB_REVNUM 			*((REG_TYPE_8 *) (REG_BASE + 0x920))
#define REG_USB_USB_CTRL 		*((REG_TYPE_8 *) (REG_BASE + 0x921))
#define REG_USB_STATUS 			*((REG_TYPE_8 *) (REG_BASE + 0x922))
#define REG_USB_XCVR_CTRL 		*((REG_TYPE_8 *) (REG_BASE + 0x923))
#define REG_USB_TEST 			*((REG_TYPE_8 *) (REG_BASE + 0x924))
#define REG_USB_EPn_CTRL 		*((REG_TYPE_8 *) (REG_BASE + 0x925))
#define REG_USB_EPrFIFO_Clr 		*((REG_TYPE_8 *) (REG_BASE + 0x926))
#define REG_USB_FRAME_NUM_H 		*((REG_TYPE_8 *) (REG_BASE + 0x92e))
#define REG_USB_FRAME_NUM_L 		*((REG_TYPE_8 *) (REG_BASE + 0x92f))
#define REG_USB_EP0_SETUP_0 		*((REG_TYPE_8 *) (REG_BASE + 0x930))
#define REG_USB_EP0_SETUP_1 		*((REG_TYPE_8 *) (REG_BASE + 0x931))
#define REG_USB_EP0_SETUP_2 		*((REG_TYPE_8 *) (REG_BASE + 0x932))
#define REG_USB_EP0_SETUP_3 		*((REG_TYPE_8 *) (REG_BASE + 0x933))
#define REG_USB_EP0_SETUP_4 		*((REG_TYPE_8 *) (REG_BASE + 0x934))
#define REG_USB_EP0_SETUP_5 		*((REG_TYPE_8 *) (REG_BASE + 0x935))
#define REG_USB_EP0_SETUP_6 		*((REG_TYPE_8 *) (REG_BASE + 0x936))
#define REG_USB_EP0_SETUP_7 		*((REG_TYPE_8 *) (REG_BASE + 0x937))
#define REG_USB_ADDRESS 		*((REG_TYPE_8 *) (REG_BASE + 0x938))
#define REG_USB_EP0_CTRL 		*((REG_TYPE_8 *) (REG_BASE + 0x939))
#define REG_USB_EP0_CTRL_IN 		*((REG_TYPE_8 *) (REG_BASE + 0x93a))
#define REG_USB_EP0_CTRL_OUT 		*((REG_TYPE_8 *) (REG_BASE + 0x93b))
#define REG_USB_EP0_MAXSIZE 		*((REG_TYPE_8 *) (REG_BASE + 0x93f))
#define REG_USB_EPA_CTRL 		*((REG_TYPE_8 *) (REG_BASE + 0x940))
#define REG_USB_EPB_CTRL 		*((REG_TYPE_8 *) (REG_BASE + 0x941))
#define REG_USB_EPC_CTRL 		*((REG_TYPE_8 *) (REG_BASE + 0x942))
#define REG_USB_EPD_CTRL 		*((REG_TYPE_8 *) (REG_BASE + 0x943))
#define REG_USB_EPA_MAXSIZE_H 		*((REG_TYPE_8 *) (REG_BASE + 0x950))
#define REG_USB_EPA_MAXSIZE_L 		*((REG_TYPE_8 *) (REG_BASE + 0x951))
#define REG_USB_EPA_CONFIG_0 		*((REG_TYPE_8 *) (REG_BASE + 0x952))
#define REG_USB_EPA_CONFIG_1 		*((REG_TYPE_8 *) (REG_BASE + 0x953))
#define REG_USB_EPB_MAXSIZE_H 		*((REG_TYPE_8 *) (REG_BASE + 0x954))
#define REG_USB_EPB_MAXSIZE_L 		*((REG_TYPE_8 *) (REG_BASE + 0x955))
#define REG_USB_EPB_CONFIG_0 		*((REG_TYPE_8 *) (REG_BASE + 0x956))
#define REG_USB_EPB_CONFIG_1 		*((REG_TYPE_8 *) (REG_BASE + 0x957))
#define REG_USB_EPC_MAXSIZE_H 		*((REG_TYPE_8 *) (REG_BASE + 0x958))
#define REG_USB_EPC_MAXSIZE_L 		*((REG_TYPE_8 *) (REG_BASE + 0x959))
#define REG_USB_EPC_CONFIG_0 		*((REG_TYPE_8 *) (REG_BASE + 0x95a))
#define REG_USB_EPC_CONFIG_1 		*((REG_TYPE_8 *) (REG_BASE + 0x95b))
#define REG_USB_EPD_MAXSIZE_H 		*((REG_TYPE_8 *) (REG_BASE + 0x95c))
#define REG_USB_EPD_MAXSIZE_L 		*((REG_TYPE_8 *) (REG_BASE + 0x95d))
#define REG_USB_EPD_CONFIG_0 		*((REG_TYPE_8 *) (REG_BASE + 0x95e))
#define REG_USB_EPD_CONFIG_1 		*((REG_TYPE_8 *) (REG_BASE + 0x95f))
#define REG_USB_EPA_START_ADDR_H 	*((REG_TYPE_8 *) (REG_BASE + 0x970))
#define REG_USB_EPA_START_ADDR_L 	*((REG_TYPE_8 *) (REG_BASE + 0x971))
#define REG_USB_EPB_START_ADDR_H 	*((REG_TYPE_8 *) (REG_BASE + 0x972))
#define REG_USB_EPB_START_ADDR_L 	*((REG_TYPE_8 *) (REG_BASE + 0x973))
#define REG_USB_EPC_START_ADDR_H 	*((REG_TYPE_8 *) (REG_BASE + 0x974))
#define REG_USB_EPC_START_ADDR_L 	*((REG_TYPE_8 *) (REG_BASE + 0x975))
#define REG_USB_EPD_START_ADDR_H 	*((REG_TYPE_8 *) (REG_BASE + 0x976))
#define REG_USB_EPD_START_ADDR_L 	*((REG_TYPE_8 *) (REG_BASE + 0x977))
#define REG_USB_CPU_JOIN_RD 		*((REG_TYPE_8 *) (REG_BASE + 0x980))
#define REG_USB_CPU_JOIN_WR 		*((REG_TYPE_8 *) (REG_BASE + 0x981))
#define REG_USB_EN_EPN_FIFO 		*((REG_TYPE_8 *) (REG_BASE + 0x982))
#define REG_USB_EPN_FIFO_FOR_CPU 	*((REG_TYPE_8 *) (REG_BASE + 0x983))
#define REG_USB_EPN_RD_REMAIN_H 	*((REG_TYPE_8 *) (REG_BASE + 0x984))
#define REG_USB_EPN_RD_REMAIN_L 	*((REG_TYPE_8 *) (REG_BASE + 0x985))
#define REG_USB_EPN_WR_REMAIN_H 	*((REG_TYPE_8 *) (REG_BASE + 0x986))
#define REG_USB_EPN_WR_REMAIN_L 	*((REG_TYPE_8 *) (REG_BASE + 0x987))
#define REG_USB_DESC_ADDR_H 		*((REG_TYPE_8 *) (REG_BASE + 0x988))
#define REG_USB_DESC_ADDR_L 		*((REG_TYPE_8 *) (REG_BASE + 0x989))
#define REG_USB_DESC_SIZE_H 		*((REG_TYPE_8 *) (REG_BASE + 0x98a))
#define REG_USB_DESC_SIZE_L 		*((REG_TYPE_8 *) (REG_BASE + 0x98b))
#define REG_USB_DESC_DOOR 		*((REG_TYPE_8 *) (REG_BASE + 0x98f))
#define REG_USB_DMA_FIFO_CTRL 		*((REG_TYPE_8 *) (REG_BASE + 0x990))
#define REG_USB_DMA_JOIN 		*((REG_TYPE_8 *) (REG_BASE + 0x991))
#define REG_USB_DMA_CTRL 		*((REG_TYPE_8 *) (REG_BASE + 0x992))
#define REG_USB_DMA_CONFIG_0 		*((REG_TYPE_8 *) (REG_BASE + 0x994))
#define REG_USB_DMA_CONFIG_1 		*((REG_TYPE_8 *) (REG_BASE + 0x995))
#define REG_USB_DMA_Latency 		*((REG_TYPE_8 *) (REG_BASE + 0x997))
#define REG_USB_DMA_REMAIN_H 		*((REG_TYPE_8 *) (REG_BASE + 0x998))
#define REG_USB_DMA_REMAIN_L 		*((REG_TYPE_8 *) (REG_BASE + 0x999))
#define REG_USB_DMA_Count_HH 		*((REG_TYPE_8 *) (REG_BASE + 0x99c))
#define REG_USB_DMA_Count_HL 		*((REG_TYPE_8 *) (REG_BASE + 0x99d))
#define REG_USB_DMA_Count_LH 		*((REG_TYPE_8 *) (REG_BASE + 0x99e))
#define REG_USB_DMA_Count_LL 		*((REG_TYPE_8 *) (REG_BASE + 0x99f))

/* Serial Interface */
#define REG_EFSIF0_TXD		*((REG_TYPE_8 *) (REG_BASE + 0xb00))
#define REG_EFSIF0_RXD		*((REG_TYPE_8 *) (REG_BASE + 0xb01))
#define REG_EFSIF0_STATUS	*((REG_TYPE_8 *) (REG_BASE + 0xb02))
#define REG_EFSIF0_CTL		*((REG_TYPE_8 *) (REG_BASE + 0xb03))
#define REG_EFSIF0_IRDA		*((REG_TYPE_8 *) (REG_BASE + 0xb04))
#define REG_EFSIF0_BRTRUN	*((REG_TYPE_8 *) (REG_BASE + 0xb05))
#define REG_EFSIF0_BRTRDL	*((REG_TYPE_8 *) (REG_BASE + 0xb06))
#define REG_EFSIF0_BRTRDM	*((REG_TYPE_8 *) (REG_BASE + 0xb07))
#define REG_EFSIF0_BRTCDL	*((REG_TYPE_8 *) (REG_BASE + 0xb08))
#define REG_EFSIF0_BRTCDM	*((REG_TYPE_8 *) (REG_BASE + 0xb09))
#define REG_EFSIF1_TXD		*((REG_TYPE_8 *) (REG_BASE + 0xb10))
#define REG_EFSIF1_RXD		*((REG_TYPE_8 *) (REG_BASE + 0xb11))
#define REG_EFSIF1_STATUS	*((REG_TYPE_8 *) (REG_BASE + 0xb12))
#define REG_EFSIF1_CTL		*((REG_TYPE_8 *) (REG_BASE + 0xb13))
#define REG_EFSIF1_IRDA		*((REG_TYPE_8 *) (REG_BASE + 0xb14))
#define REG_EFSIF1_BRTRUN	*((REG_TYPE_8 *) (REG_BASE + 0xb15))
#define REG_EFSIF1_BRTRDL	*((REG_TYPE_8 *) (REG_BASE + 0xb16))
#define REG_EFSIF1_BRTRDM	*((REG_TYPE_8 *) (REG_BASE + 0xb17))
#define REG_EFSIF1_BRTCDL	*((REG_TYPE_8 *) (REG_BASE + 0xb18))
#define REG_EFSIF1_BRTCDM	*((REG_TYPE_8 *) (REG_BASE + 0xb19))
#define REG_EFSIF1_7816CTL	*((REG_TYPE_8 *) (REG_BASE + 0xb1a))
#define REG_EFSIF1_7816STA	*((REG_TYPE_8 *) (REG_BASE + 0xb1b))
#define REG_EFSIF1_FIDIL	*((REG_TYPE_8 *) (REG_BASE + 0xb1c))
#define REG_EFSIF1_FIDIM	*((REG_TYPE_8 *) (REG_BASE + 0xb1d))
#define REG_EFSIF1_TTGR		*((REG_TYPE_8 *) (REG_BASE + 0xb1e))
#define REG_EFSIF1_CLKNUM	*((REG_TYPE_8 *) (REG_BASE + 0xb1f))
#define REG_EFSIF2_TXD		*((REG_TYPE_8 *) (REG_BASE + 0xb20))
#define REG_EFSIF2_RXD		*((REG_TYPE_8 *) (REG_BASE + 0xb21))
#define REG_EFSIF2_STATUS	*((REG_TYPE_8 *) (REG_BASE + 0xb22))
#define REG_EFSIF2_CTL		*((REG_TYPE_8 *) (REG_BASE + 0xb23))
#define REG_EFSIF2_IRDA		*((REG_TYPE_8 *) (REG_BASE + 0xb24))
#define REG_EFSIF2_BRTRUN	*((REG_TYPE_8 *) (REG_BASE + 0xb25))
#define REG_EFSIF2_BRTRDL	*((REG_TYPE_8 *) (REG_BASE + 0xb26))
#define REG_EFSIF2_BRTRDM	*((REG_TYPE_8 *) (REG_BASE + 0xb27))
#define REG_EFSIF2_BRTCDL	*((REG_TYPE_8 *) (REG_BASE + 0xb28))
#define REG_EFSIF2_BRTCDM	*((REG_TYPE_8 *) (REG_BASE + 0xb29))
#define REG_EFSIF_ADV		*((REG_TYPE_8 *) (REG_BASE + 0xb4f))

/* Extended Ports */
#define REG_PA_IOC		*((REG_TYPE_8 *) (REG_BASE + 0xc00))
#define REG_PA_DATA		*((REG_TYPE_8 *) (REG_BASE + 0xc01))
#define REG_PB_IOC		*((REG_TYPE_8 *) (REG_BASE + 0xc02))
#define REG_PB_DATA		*((REG_TYPE_8 *) (REG_BASE + 0xc03))
#define REG_PC_IOC		*((REG_TYPE_8 *) (REG_BASE + 0xc04))
#define REG_PC_DATA		*((REG_TYPE_8 *) (REG_BASE + 0xc05))
#define REG_PA_03_CFP		*((REG_TYPE_8 *) (REG_BASE + 0xc20))
#define REG_PA_4_CFP		*((REG_TYPE_8 *) (REG_BASE + 0xc21))
#define REG_PB_03_CFP		*((REG_TYPE_8 *) (REG_BASE + 0xc22))
#define REG_PC_03_CFP		*((REG_TYPE_8 *) (REG_BASE + 0xc24))
#define REG_PC_47_CFP		*((REG_TYPE_8 *) (REG_BASE + 0xc25))

/* Misc registers (2 */
#define REG_MISC_BUSPUP		*((REG_TYPE_8 *) (REG_BASE + 0xc40))
#define REG_MISC_BUSLOW		*((REG_TYPE_8 *) (REG_BASE + 0xc41))
#define REG_MISC_PUP0		*((REG_TYPE_8 *) (REG_BASE + 0xc42))
#define REG_MISC_PUP1		*((REG_TYPE_8 *) (REG_BASE + 0xc43))
#define REG_MISC_PUP2		*((REG_TYPE_8 *) (REG_BASE + 0xc44))
#define REG_MISC_PUP3		*((REG_TYPE_8 *) (REG_BASE + 0xc45))
#define REG_MISC_PUP4		*((REG_TYPE_8 *) (REG_BASE + 0xc46))
#define REG_MISC_PUP5		*((REG_TYPE_8 *) (REG_BASE + 0xc47))
#define REG_MISC_PUP6		*((REG_TYPE_8 *) (REG_BASE + 0xc48))
#define REG_MISC_PUP7		*((REG_TYPE_8 *) (REG_BASE + 0xc49))
#define REG_MISC_PUP8		*((REG_TYPE_8 *) (REG_BASE + 0xc4a))
#define REG_MISC_PUP9		*((REG_TYPE_8 *) (REG_BASE + 0xc4b))
#define REG_MISC_PUPA		*((REG_TYPE_8 *) (REG_BASE + 0xc4c))
#define REG_MISC_PUPB		*((REG_TYPE_8 *) (REG_BASE + 0xc4d))

/* Intelligent DMA */
#define REG_IDMABASE0		*((REG_TYPE_16 *) (REG_BASE + 0x1100))
#define REG_IDMABASE1		*((REG_TYPE_16 *) (REG_BASE + 0x1102))
#define REG_IDMA_START		*((REG_TYPE_16 *) (REG_BASE + 0x1104))
#define REG_IDMA_EN		*((REG_TYPE_16 *) (REG_BASE + 0x1105))

#define REG_HS0_CNT		*((REG_TYPE_16 *) (REG_BASE + 0x1120))
#define REG_HS0_CTRL		*((REG_TYPE_16 *) (REG_BASE + 0x1122))
#define REG_HS0_SADR_L		*((REG_TYPE_16 *) (REG_BASE + 0x1124))
#define REG_HS0_SADR_H		*((REG_TYPE_16 *) (REG_BASE + 0x1126))
#define REG_HS0_DADR_L		*((REG_TYPE_16 *) (REG_BASE + 0x1128))
#define REG_HS0_DADR_H		*((REG_TYPE_16 *) (REG_BASE + 0x112a))
#define REG_HS0_EN		*((REG_TYPE_16 *) (REG_BASE + 0x112c))
#define REG_HS0_TF		*((REG_TYPE_16 *) (REG_BASE + 0x112e))

#define REG_HS1_CNT		*((REG_TYPE_16 *) (REG_BASE + 0x1130))
#define REG_HS1_CTRL		*((REG_TYPE_16 *) (REG_BASE + 0x1132))
#define REG_HS1_SADR_L		*((REG_TYPE_16 *) (REG_BASE + 0x1134))
#define REG_HS1_SADR_H		*((REG_TYPE_16 *) (REG_BASE + 0x1136))
#define REG_HS1_DADR_L		*((REG_TYPE_16 *) (REG_BASE + 0x1138))
#define REG_HS1_DADR_H		*((REG_TYPE_16 *) (REG_BASE + 0x113a))
#define REG_HS1_EN		*((REG_TYPE_16 *) (REG_BASE + 0x113c))
#define REG_HS1_TF		*((REG_TYPE_16 *) (REG_BASE + 0x113e))

#define REG_HS2_CNT		*((REG_TYPE_16 *) (REG_BASE + 0x1140))
#define REG_HS2_CTRL		*((REG_TYPE_16 *) (REG_BASE + 0x1142))
#define REG_HS2_SADR_L		*((REG_TYPE_16 *) (REG_BASE + 0x1144))
#define REG_HS2_SADR_H		*((REG_TYPE_16 *) (REG_BASE + 0x1146))
#define REG_HS2_DADR_L		*((REG_TYPE_16 *) (REG_BASE + 0x1148))
#define REG_HS2_DADR_H		*((REG_TYPE_16 *) (REG_BASE + 0x114a))
#define REG_HS2_EN		*((REG_TYPE_16 *) (REG_BASE + 0x114c))
#define REG_HS2_TF		*((REG_TYPE_16 *) (REG_BASE + 0x114e))

#define REG_HS3_CNT		*((REG_TYPE_16 *) (REG_BASE + 0x1150))
#define REG_HS3_CTRL		*((REG_TYPE_16 *) (REG_BASE + 0x1152))
#define REG_HS3_SADR_L		*((REG_TYPE_16 *) (REG_BASE + 0x1154))
#define REG_HS3_SADR_H		*((REG_TYPE_16 *) (REG_BASE + 0x1156))
#define REG_HS3_DADR_L		*((REG_TYPE_16 *) (REG_BASE + 0x1158))
#define REG_HS3_DADR_H		*((REG_TYPE_16 *) (REG_BASE + 0x115a))
#define REG_HS3_EN		*((REG_TYPE_16 *) (REG_BASE + 0x115c))
#define REG_HS3_TF		*((REG_TYPE_16 *) (REG_BASE + 0x115e))

#define REG_HS0_ADVMODE		*((REG_TYPE_16 *) (REG_BASE + 0x1162))
#define REG_HS0_ADV_SADR_L	*((REG_TYPE_16 *) (REG_BASE + 0x1164))
#define REG_HS0_ADV_SADR_H	*((REG_TYPE_16 *) (REG_BASE + 0x1166))
#define REG_HS0_ADV_DADR_L	*((REG_TYPE_16 *) (REG_BASE + 0x1168))
#define REG_HS0_ADV_DADR_H	*((REG_TYPE_16 *) (REG_BASE + 0x116a))

#define REG_HS1_ADVMODE		*((REG_TYPE_16 *) (REG_BASE + 0x1172))
#define REG_HS1_ADV_SADR_L	*((REG_TYPE_16 *) (REG_BASE + 0x1174))
#define REG_HS1_ADV_SADR_H	*((REG_TYPE_16 *) (REG_BASE + 0x1176))
#define REG_HS1_ADV_DADR_L	*((REG_TYPE_16 *) (REG_BASE + 0x1178))
#define REG_HS1_ADV_DADR_H	*((REG_TYPE_16 *) (REG_BASE + 0x117a))

#define REG_HS2_ADVMODE		*((REG_TYPE_16 *) (REG_BASE + 0x1182))
#define REG_HS2_ADV_SADR_L	*((REG_TYPE_16 *) (REG_BASE + 0x1184))
#define REG_HS2_ADV_SADR_H	*((REG_TYPE_16 *) (REG_BASE + 0x1186))
#define REG_HS2_ADV_DADR_L	*((REG_TYPE_16 *) (REG_BASE + 0x1188))
#define REG_HS2_ADV_DADR_H	*((REG_TYPE_16 *) (REG_BASE + 0x118a))

#define REG_HS3_ADVMODE		*((REG_TYPE_16 *) (REG_BASE + 0x1192))
#define REG_HS3_ADV_SADR_L	*((REG_TYPE_16 *) (REG_BASE + 0x1194))
#define REG_HS3_ADV_SADR_H	*((REG_TYPE_16 *) (REG_BASE + 0x1196))
#define REG_HS3_ADV_DADR_L	*((REG_TYPE_16 *) (REG_BASE + 0x1198))
#define REG_HS3_ADV_DADR_H	*((REG_TYPE_16 *) (REG_BASE + 0x119a))

#define REG_HS_CNTLMODE		*((REG_TYPE_16 *) (REG_BASE + 0x119c))
#define REG_HS_ACCTIME		*((REG_TYPE_16 *) (REG_BASE + 0x119e))

/* SRAM Controller */
#define REG_SRAMC_BCLK_SETUP	*((REG_TYPE_32 *) (REG_BASE + 0x1500))
#define REG_SRAMC_SWAIT		*((REG_TYPE_32 *) (REG_BASE + 0x1504))
#define REG_SRAMC_SLV_SIZE	*((REG_TYPE_32 *) (REG_BASE + 0x1508))
#define REG_SRAMC_A0_BSL	*((REG_TYPE_32 *) (REG_BASE + 0x150c))
#define REG_SRAMC_ALS		*((REG_TYPE_32 *) (REG_BASE + 0x1510))

/* SDRAM controller */
#define REG_SDRAMC_INI		*((REG_TYPE_32 *) (REG_BASE + 0x1600))
#define REG_SDRAMC_CTL		*((REG_TYPE_32 *) (REG_BASE + 0x1604))
#define REG_SDRAMC_REF		*((REG_TYPE_32 *) (REG_BASE + 0x1608))
#define REG_SDRAMC_APP		*((REG_TYPE_32 *) (REG_BASE + 0x1610))

/* SPI */
#define REG_SPI_RXD		*((REG_TYPE_32 *) (REG_BASE + 0x1700))
#define REG_SPI_TXD		*((REG_TYPE_32 *) (REG_BASE + 0x1704))
#define REG_SPI_CTL1		*((REG_TYPE_32 *) (REG_BASE + 0x1708))
#define REG_SPI_CTL2		*((REG_TYPE_32 *) (REG_BASE + 0x170c))
#define REG_SPI_WAIT		*((REG_TYPE_32 *) (REG_BASE + 0x1710))
#define REG_SPI_STAT		*((REG_TYPE_32 *) (REG_BASE + 0x1714))
#define REG_SPI_INT		*((REG_TYPE_32 *) (REG_BASE + 0x1718))
#define REG_SPI_RXMK		*((REG_TYPE_32 *) (REG_BASE + 0x171c))

/* DCSIO */
#define REG_DCSIO_CTL		*((REG_TYPE_32 *) (REG_BASE + 0x1800))
#define REG_DCSIO_LOAD		*((REG_TYPE_32 *) (REG_BASE + 0x1804))
#define REG_DCSIO_RCV		*((REG_TYPE_32 *) (REG_BASE + 0x1808))
#define REG_DCSIO_INT		*((REG_TYPE_32 *) (REG_BASE + 0x1814))
#define REG_DCSIO_STAT		*((REG_TYPE_32 *) (REG_BASE + 0x1818))
#define REG_DCSIO_DIR		*((REG_TYPE_32 *) (REG_BASE + 0x181c))

/* Real Time Clock */
#define REG_RTCINTSTAT		*((REG_TYPE_32 *) (REG_BASE + 0x1900))
#define REG_RTCINTMODE		*((REG_TYPE_32 *) (REG_BASE + 0x1904))
#define REG_RTC_CNTL0		*((REG_TYPE_32 *) (REG_BASE + 0x1908))
#define REG_RTC_CNTL1		*((REG_TYPE_32 *) (REG_BASE + 0x190c))
#define REG_RTCSEC		*((REG_TYPE_32 *) (REG_BASE + 0x1910))
#define REG_RTCMIN		*((REG_TYPE_32 *) (REG_BASE + 0x1914))
#define REG_RTCHOUR		*((REG_TYPE_32 *) (REG_BASE + 0x1918))
#define REG_RTCDAY		*((REG_TYPE_32 *) (REG_BASE + 0x191c))
#define REG_RTCMONTH		*((REG_TYPE_32 *) (REG_BASE + 0x1920))
#define REG_RTCYEAR		*((REG_TYPE_32 *) (REG_BASE + 0x1924))
#define REG_RTCDAYWEEK		*((REG_TYPE_32 *) (REG_BASE + 0x1928))

/* LCD Controller */
#define REG_LCDC_INT		*((REG_TYPE_32 *) (REG_BASE + 0x1a00))
#define REG_LCDC_PS		*((REG_TYPE_32 *) (REG_BASE + 0x1a04))
#define REG_LCDC_HD		*((REG_TYPE_32 *) (REG_BASE + 0x1a10))
#define REG_LCDC_VD		*((REG_TYPE_32 *) (REG_BASE + 0x1a14))
#define REG_LCDC_MR		*((REG_TYPE_32 *) (REG_BASE + 0x1a18))
#define REG_LCDC_HDPS		*((REG_TYPE_32 *) (REG_BASE + 0x1a20))
#define REG_LCDC_VDPS		*((REG_TYPE_32 *) (REG_BASE + 0x1a24))
#define REG_LCDC_L		*((REG_TYPE_32 *) (REG_BASE + 0x1a28))
#define REG_LCDC_F		*((REG_TYPE_32 *) (REG_BASE + 0x1a2c))
#define REG_LCDC_FO		*((REG_TYPE_32 *) (REG_BASE + 0x1a30))
#define REG_LCDC_TSO		*((REG_TYPE_32 *) (REG_BASE + 0x1a40))
#define REG_LCDC_TC1		*((REG_TYPE_32 *) (REG_BASE + 0x1a44))
#define REG_LCDC_TC0		*((REG_TYPE_32 *) (REG_BASE + 0x1a48))
#define REG_LCDC_TC2		*((REG_TYPE_32 *) (REG_BASE + 0x1a4c))
#define REG_LCDC_DMD		*((REG_TYPE_32 *) (REG_BASE + 0x1a60))
#define REG_LCDC_IRAM		*((REG_TYPE_32 *) (REG_BASE + 0x1a64))
#define REG_LCDC_MADD		*((REG_TYPE_32 *) (REG_BASE + 0x1a70))
#define REG_LCDC_MLADD		*((REG_TYPE_32 *) (REG_BASE + 0x1a74))
#define REG_LCDC_SADD		*((REG_TYPE_32 *) (REG_BASE + 0x1a80))
#define REG_LCDC_SSP		*((REG_TYPE_32 *) (REG_BASE + 0x1a88))
#define REG_LCDC_SEP		*((REG_TYPE_32 *) (REG_BASE + 0x1a8c))
#define REG_LCDC_LUT_03		*((REG_TYPE_32 *) (REG_BASE + 0x1aa0))
#define REG_LCDC_LUT_47		*((REG_TYPE_32 *) (REG_BASE + 0x1aa4))
#define REG_LCDC_LUT_8B		*((REG_TYPE_32 *) (REG_BASE + 0x1aa8))
#define REG_LCDC_LUT_CF		*((REG_TYPE_32 *) (REG_BASE + 0x1aac))

/* Clock Management Unit */
#define REG_CMU_GATEDCLK0	*((REG_TYPE_32 *) (REG_BASE + 0x1b00))
#define REG_CMU_GATEDCLK1	*((REG_TYPE_32 *) (REG_BASE + 0x1b04))
#define REG_CMU_CLKCNTL		*((REG_TYPE_32 *) (REG_BASE + 0x1b08))
#define REG_CMU_PLL		*((REG_TYPE_32 *) (REG_BASE + 0x1b0c))
#define REG_CMU_SSCG		*((REG_TYPE_32 *) (REG_BASE + 0x1b10))
#define REG_CMU_OPT		*((REG_TYPE_32 *) (REG_BASE + 0x1b14))
#define REG_CMU_PROTECT		*((REG_TYPE_32 *) (REG_BASE + 0x1b24))

/* I2S interface */
#define REG_I2S_CONTRL		*((REG_TYPE_32 *) (REG_BASE + 0x1c00))
#define REG_I2S_DV_MCLK		*((REG_TYPE_32 *) (REG_BASE + 0x1c04))
#define REG_I2S_DV_LRCLK	*((REG_TYPE_32 *) (REG_BASE + 0x1c08))
#define REG_I2S_START		*((REG_TYPE_32 *) (REG_BASE + 0x1c0c))
#define REG_I2S_HSDMAMD		*((REG_TYPE_32 *) (REG_BASE + 0x1c10))
#define REG_I2S_FIFO_EMPTY	*((REG_TYPE_32 *) (REG_BASE + 0x1c14))
#define REG_I2S_FIFO		*((REG_TYPE_32 *) (REG_BASE + 0x1c20))


/**********************************************************/
/***** Below here are bit masks for various registers *****/
/**********************************************************/


/*
 * Clock Management Unit
 */

// codes for: REG_CMU_PROTECT
#define CMU_PROTECT_OFF 0x96
#define CMU_PROTECT_ON  0x00

// bits for: REG_CMU_CLKCNTL
#define CMU_CLK_SEL_OSC3_DIV_32     (10 << 24)
#define CMU_CLK_SEL_OSC3_DIV_16     (9 << 24)
#define CMU_CLK_SEL_OSC3_DIV_8      (8 << 24)
#define CMU_CLK_SEL_OSC3_DIV_4      (7 << 24)
#define CMU_CLK_SEL_OSC3_DIV_2      (6 << 24)
#define CMU_CLK_SEL_OSC3_DIV_1      (5 << 24)
#define CMU_CLK_SEL_LCDC_CLK        (4 << 24)
#define CMU_CLK_SEL_MCLK            (3 << 24)
#define CMU_CLK_SEL_PLL             (2 << 24)
#define CMU_CLK_SEL_OSC1            (1 << 24)
#define CMU_CLK_SEL_OSC3            (0 << 24)

#define PLLINDIV_MASK (15 << 20)
#define PLLINDIV_10   (9 << 20)
#define PLLINDIV_9    (8 << 20)
#define PLLINDIV_8    (7 << 20)
#define PLLINDIV_7    (6 << 20)
#define PLLINDIV_6    (5 << 20)
#define PLLINDIV_5    (4 << 20)
#define PLLINDIV_4    (3 << 20)
#define PLLINDIV_3    (2 << 20)
#define PLLINDIV_2    (1 << 20)
#define PLLINDIV_1    (0 << 20)

#define LCDCDIV_MASK  (15 << 16)
#define LCDCDIV_16    (15 << 16)
#define LCDCDIV_15    (14 << 16)
#define LCDCDIV_14    (13 << 16)
#define LCDCDIV_13    (12 << 16)
#define LCDCDIV_12    (11 << 16)
#define LCDCDIV_11    (10 << 16)
#define LCDCDIV_10    (9 << 16)
#define LCDCDIV_9     (8 << 16)
#define LCDCDIV_8     (7 << 16)
#define LCDCDIV_7     (6 << 16)
#define LCDCDIV_6     (5 << 16)
#define LCDCDIV_5     (4 << 16)
#define LCDCDIV_4     (3 << 16)
#define LCDCDIV_3     (2 << 16)
#define LCDCDIV_2     (1 << 16)
#define LCDCDIV_1     (0 << 16)

#define MCLKDIV       (1 << 12)

#define OSC3DIV_MASK  (7 << 8)
#define OSC3DIV_32    (5 << 8)
#define OSC3DIV_16    (4 << 8)
#define OSC3DIV_8     (3 << 8)
#define OSC3DIV_4     (2 << 8)
#define OSC3DIV_2     (1 << 8)
#define OSC3DIV_1     (0 << 8)

#define OSCSEL_MASK   (3 << 2)
#define OSCSEL_PLL    (3 << 2)
#define OSCSEL_OSC3x  (2 << 2)
#define OSCSEL_OSC1   (1 << 2)
#define OSCSEL_OSC3   (0 << 2)

#define SOSC3  (1 << 1)
#define SOSC1  (1 << 0)

// Bits for: REG_CMU_GATEDCLK0
#define USBSAPB_CKE    (1 << 9)
#define USB_CKE        (1 << 8)
#define SDAPCPU_HCKE   (1 << 7)
#define SDAPCPU_CKE    (1 << 6)
#define SDAPLCDC_CKE   (1 << 5)
#define SDSAPB_CKE     (1 << 4)
#define DSTRAM_CKE     (1 << 3)
#define LCDCAHBIF_CKE  (1 << 2)
#define LCDCSAPB_CKE   (1 << 1)
#define LCDC_CKE       (1 << 0)

// Bits for: REG_CMU_GATEDCLK1
#define CPUAHB_HCKE    (1 << 29)
#define LCDCAHB_HCKE   (1 << 28)
#define GPIONSTP_HCKE  (1 << 27)
#define SRAMC_HCKE     (1 << 26)
#define EFSIOBR_HCKE   (1 << 25)
#define MISC_HCKE      (1 << 24)
#define IVRAMARB_CKE   (1 << 19)
#define TM5_CKE        (1 << 18)
#define TM4_CKE        (1 << 17)
#define TM3_CKE        (1 << 16)
#define TM2_CKE        (1 << 15)
#define TM1_CKE        (1 << 14)
#define TM0_CKE        (1 << 13)
#define EGPIO_MISC_CK  (1 << 12)
#define I2S_CKE        (1 << 11)
#define DCSIO_CKE      (1 << 10)
#define WDT_CKE        (1 << 9)
#define GPIO_CKE       (1 << 8)
#define SRAMSAPB_CKE   (1 << 7)
#define SPI_CKE        (1 << 6)
#define EFSIOSAPB_CKE  (1 << 5)
#define CARD_CKE       (1 << 4)
#define ADC_CKE        (1 << 3)
#define ITC_CKE        (1 << 2)
#define DMA_CKE        (1 << 1)
#define RTCSAPB_CKE    (1 << 0)

// Bits for: REG_CMU_OPT
#define OSCTM_SHIFT 8
#define OSC3OFF     (1 << 3)
#define TMHSP       (1 << 2)
#define WAKEUPWT    (1 << 0)


/*
 * Serial Controller
 */

// Bits for: REG_EFSIFx_STATUS
#define RXDxNUM1  (1 << 7)
#define RXDxNUM0  (1 << 6)
#define TENDx	  (1 << 5)
#define FERx	  (1 << 4)
#define PERx	  (1 << 3)
#define OERx	  (1 << 2)
#define TDBEx	  (1 << 1)
#define RDBFx	  (1 << 0)

// Bits for: REG_EFSIFx_CTL
#define TXENx 	  (0x1 << 7)
#define TX_DISENx (0x0 << 7)
#define RXENx 	  (0x1 << 6)
#define RX_DISENx (0x0 << 6)
#define PARx 	  (0x1 << 5)
#define NO_PARx   (0x0 << 5)
#define ODDx 	  (0x1 << 4)
#define EVENx 	  (0x0 << 4)
#define ONE_STPBx (0x1 << 3)
#define TWO_STPBx (0x0 << 3)
#define SCLKx 	  (0x1 << 2)
#define INT_CLKx  (0x0 << 2)
#define EIGHT_BIT_ASYNx   0x3
#define SEVEN_BIT_ASYNx   0x2
#define CLK_SLAVEx 	  0x1
#define CLK_MASTERx 	  0x0

// Bits for: REG_EFSIFx_IrDA
#define DIVMD_8x	  (0x1 << 4)
#define DIVMD_16x	  (0x0 << 4)
#define IRMD_IRDAx	  (0x2 << 0)
#define IRMD_GEN_IFx 	  (0x0 << 0)

// Bits for: REG_EFSIFx_BRTCTL
#define BRTRUNx 	0x1


/*
 * Interrupt Controller
 */

// Bits for: REG_INT_ESIF01
#define ESTX1  (1 << 5)
#define ESRX1  (1 << 4)
#define ESERR1 (1 << 3)
#define ESTX0  (1 << 2)
#define ESRX0  (1 << 1)
#define ESERR0 (1 << 0)

// Bits for: REG_INT_FSIF01
#define FSTX1  (1 << 5)
#define FSRX1  (1 << 4)
#define FSERR1 (1 << 3)
#define FSTX0  (1 << 2)
#define FSRX0  (1 << 1)
#define FSERR0 (1 << 0)

// Bits for: REG_RST_RESET
#define DENONLY  (1 << 2)
#define IDMAONLY (1 << 1)
#define RSTONLY  (1 << 0)


// Bits for: REG_INT_EK01_EP03
#define EK1 (1 << 5)
#define EK0 (1 << 4)
#define EP3 (1 << 3)
#define EP2 (1 << 2)
#define EP1 (1 << 1)
#define EP0 (1 << 0)

// Bits for: INT_FK01_FP03
#define FK1 (1 << 5)
#define FK0 (1 << 4)
#define FP3 (1 << 3)
#define FP2 (1 << 2)
#define FP1 (1 << 1)
#define FP0 (1 << 0)


/*
 * GPIO
 */

// Bits for REG_PINTPOL_SPP07
#define SPPT7 (1 << 7)
#define SPPT6 (1 << 6)
#define SPPT5 (1 << 5)
#define SPPT4 (1 << 4)
#define SPPT3 (1 << 3)
#define SPPT2 (1 << 2)
#define SPPT1 (1 << 1)
#define SPPT0 (1 << 0)

// Bits for REG_PINTPOL_SPP815
#define SPPTF (1 << 7)
#define SPPTE (1 << 6)
#define SPPTD (1 << 5)
#define SPPTC (1 << 4)
#define SPPTB (1 << 3)
#define SPPTA (1 << 2)
#define SPPT9 (1 << 1)
#define SPPT8 (1 << 0)

// Bits for REG_PINTEL_SEPT07
#define SEPT7 (1 << 7)
#define SEPT6 (1 << 6)
#define SEPT5 (1 << 5)
#define SEPT4 (1 << 4)
#define SEPT3 (1 << 3)
#define SEPT2 (1 << 2)
#define SEPT1 (1 << 1)
#define SEPT0 (1 << 0)

// Bits for REG_PINTEL_SEPT815
#define SEPTF (1 << 7)
#define SEPTE (1 << 6)
#define SEPTD (1 << 5)
#define SEPTC (1 << 4)
#define SEPTB (1 << 3)
#define SEPTA (1 << 2)
#define SEPT9 (1 << 1)
#define SEPT8 (1 << 0)


/*
 * SDRAM Controller
 */

// bits for: REG_SDRAMC_CTL
#define T24NS_SHIFT  12
#define T60NS_SHIFT  8
#define T80NS_SHIFT  4

#define	ADDRC_32M_x_16_bits_x_1 0x7
#define	ADDRC_16M_x__8_bits_x_2 0x6
#define	ADDRC__8M_x__8_bits_x_2 0x5
#define	ADDRC__2M_x__8_bits_x_2 0x4
#define	ADDRC_16M_x_16_bits_x_1 0x3
#define	ADDRC__8M_x_16_bits_x_1 0x2
#define	ADDRC__4M_x_16_bits_x_1 0x1
#define	ADDRC__1M_x_16_bits_x_1 0x0


// Bits for: REG_SDRAMC_REF
#define SELDO (1 << 25)
#define SCKON (1 << 24)
#define SELEN (1 << 23)
#define SELCO_SHIFT 16
#define AURCO_SHIFT  0

// Bits for: REG_SDRAMC_INI
#define SDON   (1 << 4)
#define SDEN   (1 << 3)
#define INIMRS (1 << 2)
#define INIPRE (1 << 1)
#define INIREF (1 << 0)

// SDRAM controller commands for REG_SDRAMC_INI
#define SDRAM_CMD_FIRST (SDON)
#define SDRAM_CMD_FINAL (SDON)
#define SDRAM_CMD_REF   (SDON | INIREF)
#define SDRAM_CMD_PALL  (SDON | INIPRE)
#define SDRAM_CMD_MRS   (SDON | INIMRS)

// Bits for: REG_SDRAMC_APP
#define ARBON  (1 << 31)
#define DBF    (1 << 5)
#define INCR   (1 << 4)
#define CAS1   (1 << 3)
#define CAS0   (1 << 2)
#define APPON  (1 << 1)
#define IQB    (1 << 0)

// Bits for: REG_CH1_INT_PRIORITY
#define SERIAL_CH1_INT_PRI_7  	0x7
#define SERIAL_CH1_INT_PRI_6  	0x6
#define SERIAL_CH1_INT_PRI_5  	0x5
#define SERIAL_CH1_INT_PRI_4  	0x4
#define SERIAL_CH1_INT_PRI_3  	0x3
#define SERIAL_CH1_INT_PRI_2  	0x2
#define SERIAL_CH1_INT_PRI_1  	0x1
#define SERIAL_CH1_INT_PRI_0  	0x0


/*
 * LCD controller
 */

// Bits for: REG_LCDC_PS
#define INTF              (1 << 31)
#define VNDPF             (1 << 7)
#define PSAVE_NORMAL      (3 << 0)
#define PSAVE_DOZE        (2 << 0)
#define PSAVE_POWER_SAVE  (0 << 0)

// Bits for: REG_LCDC_HD
#define HTCNT_SHIFT    16
#define HDPCNT_SHIFT   0

// Bits for: REG_LCDC_VD
#define VTCNT_SHIFT    16
#define VDPCNT_SHIFT   0

// Bits for: REG_LCDC_DMD
#define TFTSEL         (1 << 31)
#define COLOR          (1 << 30)
#define FPSMASK        (1 << 29)

#define DWD_8_BIT_2    (3 << 26)
#define DWD_8_BIT_1    (1 << 26)
#define DWD_4_BIT      (0 << 26)

#define SWINV          (1 << 25)
#define BLANK          (1 << 24)
#define FRMRPT         (1 << 7)
#define DITHEN         (1 << 6)
#define LUTPASS        (1 << 4)

#define BPP_16         (5 << 0)
#define BPP_12         (4 << 0)
#define BPP_8          (3 << 0)
#define BPP_4          (2 << 0)
#define BPP_2          (1 << 0)
#define BPP_1          (0 << 0)


/*
 * Timers
 */

// Bits for: REG_T16_ADVMODE
#define T16ADV    (1 << 0)

// Bits for: REG_T16_CNT_PAUSE
#define PAUSE5    (1 << 5)
#define PAUSE4    (1 << 4)
#define PAUSE3    (1 << 3)
#define PAUSE2    (1 << 2)
#define PAUSE1    (1 << 1)
#define PAUSE0    (1 << 0)

// Bits for: REG_T16_CTLx
#define INITOLx    (1 << 8)
//#define (TMODEx)   (1 << 7) - reserved, do not set to 1
#define SELFMx     (1 << 6)
#define SELCRBx    (1 << 5)
#define OUTINVx    (1 << 4)
#define CKSLx      (1 << 3)
#define PTMx       (1 << 2)
#define PRESETx    (1 << 1)
#define PRUNx      (1 << 0)

//Bits for: REG_T16_CLKCTL_x
#define P16TONx               (1 << 3)
#define P16TSx_MCLK_DIV_4096  (7 << 0)
#define P16TSx_MCLK_DIV_1024  (6 << 0)
#define P16TSx_MCLK_DIV_256   (5 << 0)
#define P16TSx_MCLK_DIV_64    (4 << 0)
#define P16TSx_MCLK_DIV_16    (3 << 0)
#define P16TSx_MCLK_DIV_4     (2 << 0)
#define P16TSx_MCLK_DIV_2     (1 << 0)
#define P16TSx_MCLK_DIV_1     (0 << 0)


/*
 * watchdog
 */

// Bits for: REG_WD_WP
#define WD_WP_OFF 0x96
#define WD_WP_ON  0x00

// Bits for: REG_WD_EN
#define CLKSEL  (1 << 6)
#define CLKEN   (1 << 5)
#define RUNSTP  (1 << 4)
#define NMIEN   (1 << 1)
#define RESEN   (1 << 0)

// Bits for: REG_WD_CNTL
#define WDRESEN (1 << 0)


/*
 * SPI module
 */

// Bits for: REG_SPI_CTL1

#define BPT_32_BITS        (31 << 10)
#define BPT_16_BITS        (15 << 10)
#define BPT_8_BITS         ( 7 << 10)
#define BPT_1_BITS         ( 0 << 10)

#define CPHA               (1 <<  9)
#define CPOL               (1 <<  8)

#define MCBR_MCLK_DIV_512  (7 <<  4)
#define MCBR_MCLK_DIV_256  (6 <<  4)
#define MCBR_MCLK_DIV_128  (5 <<  4)
#define MCBR_MCLK_DIV_64   (4 <<  4)
#define MCBR_MCLK_DIV_32   (3 <<  4)
#define MCBR_MCLK_DIV_16   (2 <<  4)
#define MCBR_MCLK_DIV_8    (1 <<  4)
#define MCBR_MCLK_DIV_4    (0 <<  4)

#define TXDE               (1 <<  3)
#define RXDE               (1 <<  2)

#define MODE_MASTER        (1 <<  1)
#define MODE_SLAVE         (0 <<  1)

#define ENA                (1 <<  0)

// Bits for: REG_SPI_STAT
#define BSYF   (1 << 6)
#define MFEF   (1 << 5)
#define TDEF   (1 << 4)
#define RDOF   (1 << 3)
#define RDFF   (1 << 2)

// Bits for REG_HS_CNTLMODE
#define HSDMAADV (1 << 0)

// Bits for DMA advanced channels
#define DMA_ENABLED  (1 << 0)
#define DMA_DISABLED (0 << 0)

#endif /* REGS_H */

