/* SPDX-License-Identifier: (GPL-2.0+ OR MIT) */
/*
 * Copyright (c) 2019 Amlogic, Inc. All rights reserved.
 */

#ifndef _DT_BINDINGS_AMLOGIC_MESON_T5W_RESET_H
#define _DT_BINDINGS_AMLOGIC_MESON_T5W_RESET_H

/*	RESET0					*/
#define RESET_HIU			0
/*					1	*/
#define RESET_DOS			2
/*					3	*/
#define RESET_PL301_ADB400_PWRDNREQN	4
#define RESET_VIU			5
#define RESET_AFIFO			6
#define RESET_VID_PLL_DIV		7
#define RESET_DEMOD			8
#define RESET_HDMIRX			9
#define RESET_VENC			10
#define RESET_ASSIST			11
/*					12	*/
#define RESET_VCBUS			13
/*					14-15	*/
#define RESET_GIC			16
#define RESET_CAPB3_DECODE		17
#define RESET_HDMIRX_APB		18
/*					19	*/
#define RESET_MALI_CAPB3		20
#define RESET_DOS_CAPB3			21
#define RESET_CLK_RST			22
#define RESET_CBUS_CAPB3		23
#define RESET_AHB_CNTL			24
#define RESET_AHB_DATA			25
#define RESET_VCBUS_CLK81		26
#define RESET_NIC_AXI			27
/*					28-31	*/
/*	RESET1					*/
/*					32-33	*/
#define RESET_USB			34
#define RESET_DDR			35
#define RESET_AML_TCON			36
/*					37	*/
#define RESET_AHB_SRAM			38
#define RESET_TVFE_TOP			39
/*					40	*/
#define RESET_AVT_DMD			41
#define RESET_ISA			42
#define RESET_ETHERNET			43
/*					44	*/
#define RESET_PWR_CTRL			45
#define RESET_SD_EMMC_C			46
#define RESET_SD_EMMC_B			47
#define RESET_USB_PHY20			48
#define RESET_USB_PHY21			49
#define RESET_USB_PHY22			50
/*					51-53	*/
#define RESET_HDMIRX20_AES		54
#define RESET_HRX_EMP_AXI		55
/*					56-60	*/
#define RESET_AUDIO_CODEC		61
/*					62-63	*/
/*	RESET2					*/
#define RESET_A55_ACE			64
#define RESET_AUDIO			65
/*					66	*/
#define RESET_ADEC_TOP_WRAP		67
/*					68-69	*/
#define RESET_GE2D			70
/*					71-57	*/
#define RESET_MALI			78
/*					79-95	*/
/*	RESET3					*/
/*					96-127	*/
/*	RESET4					*/
/*					128-132	*/
#define RESET_RDMA			133
#define RESET_VENC2			134
#define RESET_VENC1			135
/*					136	*/
#define RESET_VDAC			137
/*					138-139 */
#define RESET_VDI6			140
#define RESET_VENC0			141
#define RESET_I2C_M1			142
#define RESET_I2C_M2			143
/*					144-159	*/
/*	RESET5					*/
/*					160-191	*/
/*	RESET6					*/
#define RESET_GEN			192
#define RESET_SPICC0			193
#define RESET_SC			194
/*					195	*/
#define RESET_I2C_M0			196
#define RESET_TS_PLL			197
#define RESET_SPICC1			198
#define RESET_STREAM			199
#define RESET_CIPLUS			200
#define RESET_UART0			201
#define RESET_UART1_2			202
#define RESET_ASYNC0			203
#define RESET_ASYNC1			204
#define RESET_SPIFC0			205
#define RESET_I2C_M3			206
#define RESET_ASYNC3			207
/*					208-223	*/
/*	RESET7					*/
/*					224	*/
#define RESET_USB_DDR_1			225
/*					226-227	*/
#define RESET_SPICC2			228
#define RESET_DEVICE_MMC_ARB		229
#define RESET_MALI_DMC_PIPL		230
#define RESET_VPU_VID_LOCK		231
/*					232	*/
#define RESET_DMC_VPU_PIPL		233
/*					234-235	*/
#define RESET_VPU_BUS			236
#define RESET_HEVCF_DM_PIPL		237
#define RESET_DEVICE_MMC_ARB1		238
/*					239-255	*/

#endif
