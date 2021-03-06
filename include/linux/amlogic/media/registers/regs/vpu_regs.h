/* SPDX-License-Identifier: (GPL-2.0+ OR MIT) */
/*
 * Copyright (c) 2019 Amlogic, Inc. All rights reserved.
 */

#ifndef VPU_REGS_HEADER_
#define VPU_REGS_HEADER_

#define VPU_OSD1_MMC_CTRL           0x2701
#define VPU_OSD2_MMC_CTRL           0x2702
#define VPU_VD1_MMC_CTRL            0x2703
#define VPU_VD2_MMC_CTRL            0x2704
#define VPU_DI_IF1_MMC_CTRL         0x2705
#define VPU_DI_MEM_MMC_CTRL         0x2706
#define VPU_DI_INP_MMC_CTRL         0x2707
#define VPU_DI_MTNRD_MMC_CTRL       0x2708
#define VPU_DI_CHAN2_MMC_CTRL       0x2709
#define VPU_DI_MTNWR_MMC_CTRL       0x270a
#define VPU_DI_NRWR_MMC_CTRL        0x270b
#define VPU_DI_DIWR_MMC_CTRL        0x270c
#define VPU_VDIN0_MMC_CTRL          0x270d
#define VPU_VDIN1_MMC_CTRL          0x270e
#define VPU_BT656_MMC_CTRL          0x270f
#define VPU_TVD3D_MMC_CTRL          0x2710
#define VPU_TVDVBI_MMC_CTRL         0x2711
#define VPU_TVDVBI_VSLATCH_ADDR     0x2712
#define VPU_TVDVBI_WRRSP_ADDR       0x2713
#define VPU_VDIN_PRE_ARB_CTRL       0x2714
#define VPU_VDISP_PRE_ARB_CTRL      0x2715
#define VPU_VPUARB2_PRE_ARB_CTRL    0x2716
#define VPU_OSD3_MMC_CTRL           0x2717
#define VPU_OSD4_MMC_CTRL           0x2718
#define VPU_VD3_MMC_CTRL            0x2719
#define VPU_VIU_VENC_MUX_CTRL       0x271a
#define VPU_HDMI_SETTING            0x271b
#define ENCI_INFO_READ              0x271c
#define ENCP_INFO_READ              0x271d
#define ENCT_INFO_READ              0x271e
#define ENCL_INFO_READ              0x271f
#define VPU_SW_RESET                0x2720
#define VPU_D2D3_MMC_CTRL           0x2721
#define VPU_CONT_MMC_CTRL           0x2722
#define VPU_CLK_GATE                0x2723
#define VPU_RDMA_MMC_CTRL           0x2724
#define VPU_MEM_PD_REG0             0x2725
#define VPU_MEM_PD_REG1             0x2726
#define VPU_HDMI_DATA_OVR           0x2727
#define VPU_PROT1_MMC_CTRL          0x2728
#define VPU_PROT2_MMC_CTRL          0x2729
#define VPU_PROT3_MMC_CTRL          0x272a
#define VPU_ARB4_V1_MMC_CTRL        0x272b
#define VPU_ARB4_V2_MMC_CTRL        0x272c
#define VPU_VPU_PWM_V0              0x2730
#define VPU_VPU_PWM_V1              0x2731
#define VPU_VPU_PWM_V2              0x2732
#define VPU_VPU_PWM_V3              0x2733
#define VPU_VPU_PWM_H0              0x2734
#define VPU_VPU_PWM_H1              0x2735
#define VPU_VPU_PWM_H2              0x2736
#define VPU_VPU_PWM_H3              0x2737
#define VPU_MISC_CTRL               0x2740
#define VPU_ISP_GCLK_CTRL0          0x2741
#define VPU_ISP_GCLK_CTRL1          0x2742
/*add from M8M2*/
#define VPU_VDIN_ASYNC_HOLD_CTRL    0x2743
#define VPU_VDISP_ASYNC_HOLD_CTRL   0x2744
#define VPU_VPUARB2_ASYNC_HOLD_CTRL 0x2745
/**/
#define VPU_PROT1_CLK_GATE          0x2750
#define VPU_PROT1_GEN_CNTL          0x2751
#define VPU_PROT1_X_START_END       0x2752
#define VPU_PROT1_Y_START_END       0x2753
#define VPU_PROT1_Y_LEN_STEP        0x2754
#define VPU_PROT1_RPT_LOOP          0x2755
#define VPU_PROT1_RPT_PAT           0x2756
#define VPU_PROT1_DDR               0x2757
#define VPU_PROT1_RBUF_ROOM         0x2758
#define VPU_PROT1_STAT_0            0x2759
#define VPU_PROT1_STAT_1            0x275a
#define VPU_PROT1_STAT_2            0x275b
#define VPU_PROT1_REQ_ONOFF         0x275c
#define VPU_PROT2_CLK_GATE          0x2760
#define VPU_PROT2_GEN_CNTL          0x2761
#define VPU_PROT2_X_START_END       0x2762
#define VPU_PROT2_Y_START_END       0x2763
#define VPU_PROT2_Y_LEN_STEP        0x2764
#define VPU_PROT2_RPT_LOOP          0x2765
#define VPU_PROT2_RPT_PAT           0x2766
#define VPU_PROT2_DDR               0x2767
#define VPU_PROT2_RBUF_ROOM         0x2768
#define VPU_PROT2_STAT_0            0x2769
#define VPU_PROT2_STAT_1            0x276a
#define VPU_PROT2_STAT_2            0x276b
#define VPU_PROT2_REQ_ONOFF         0x276c
#define VPU_PROT3_CLK_GATE          0x2770
#define VPU_PROT3_GEN_CNTL          0x2771
#define VPU_PROT3_X_START_END       0x2772
#define VPU_PROT3_Y_START_END       0x2773
#define VPU_PROT3_Y_LEN_STEP        0x2774
#define VPU_PROT3_RPT_LOOP          0x2775
#define VPU_PROT3_RPT_PAT           0x2776
#define VPU_PROT3_DDR               0x2777
#define VPU_PROT3_RBUF_ROOM         0x2778
#define VPU_PROT3_STAT_0            0x2779
#define VPU_PROT3_STAT_1            0x277a
#define VPU_PROT3_STAT_2            0x277b
#define VPU_PROT3_REQ_ONOFF         0x277c

#define VPU_VENCI_STAT              0x1ceb
#define VPU_VENCL_STAT              0x1cec
#define VPU_VENCP_STAT              0x1ced
#define VPU_VENC_CTRL               0x1cef
#endif

