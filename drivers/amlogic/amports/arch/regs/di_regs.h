/*
 * drivers/amlogic/amports/arch/regs/di_regs.h
 *
 * Copyright (C) 2015 Amlogic, Inc. All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
 * more details.
 *
*/

#ifndef DI_REGS_HEADER_
#define DI_REGS_HEADER_


#define DI_PRE_CTRL 0x1700
#define DI_POST_CTRL 0x1701
#define DI_POST_SIZE 0x1702
#define DI_PRE_SIZE 0x1703
#define DI_EI_CTRL0 0x1704
#define DI_EI_CTRL1 0x1705
#define DI_EI_CTRL2 0x1706
#define DI_NR_CTRL0 0x1707
#define DI_NR_CTRL1 0x1708
#define DI_NR_CTRL2 0x1709
#define DI_NR_CTRL3 0x170a
#define DI_MTN_CTRL 0x170b
#define DI_MTN_CTRL1 0x170c
#define DI_BLEND_CTRL 0x170d
#define DI_BLEND_CTRL1 0x170e
#define DI_BLEND_CTRL2 0x170f
#define DI_BLEND_REG0_X 0x1710
#define DI_BLEND_REG0_Y 0x1711
#define DI_BLEND_REG1_X 0x1712
#define DI_BLEND_REG1_Y 0x1713
#define DI_BLEND_REG2_X 0x1714
#define DI_BLEND_REG2_Y 0x1715
#define DI_BLEND_REG3_X 0x1716
#define DI_BLEND_REG3_Y 0x1717
#define DI_CLKG_CTRL 0x1718
#define DI_EI_CTRL3 0x1719
#define DI_EI_CTRL4 0x171a
#define DI_EI_CTRL5 0x171b
#define DI_EI_CTRL6 0x171c
#define DI_EI_CTRL7 0x171d
#define DI_EI_CTRL8 0x171e
#define DI_EI_CTRL9 0x171f
#define DI_EI_CTRL10 0x1793
#define DI_EI_CTRL11 0x179e
#define DI_EI_CTRL12 0x179f
#define DI_EI_CTRL13 0x17a8
#define DI_EI_XWIN0 0x1798
#define DI_EI_XWIN1 0x1799
#define DI_MC_REG0_X 0x1720
#define DI_MC_REG0_Y 0x1721
#define DI_MC_REG1_X 0x1722
#define DI_MC_REG1_Y 0x1723
#define DI_MC_REG2_X 0x1724
#define DI_MC_REG2_Y 0x1725
#define DI_MC_REG3_X 0x1726
#define DI_MC_REG3_Y 0x1727
#define DI_MC_REG4_X 0x1728
#define DI_MC_REG4_Y 0x1729
#define DI_MC_32LVL0 0x172a
#define DI_MC_32LVL1 0x172b
#define DI_MC_22LVL0 0x172c
#define DI_MC_22LVL1 0x172d
#define DI_MC_22LVL2 0x172e
#define DI_MC_CTRL 0x172f
#define DI_INTR_CTRL 0x1730
#define DI_INFO_ADDR 0x1731
#define DI_INFO_DATA 0x1732
#define DI_PRE_HOLD 0x1733
#define DI_MTN_1_CTRL1 0x1740
#define DI_MTN_1_CTRL2 0x1741
#define DI_MTN_1_CTRL3 0x1742
#define DI_MTN_1_CTRL4 0x1743
#define DI_MTN_1_CTRL5 0x1744
#define DI_MTN_1_CTRL6 0x17a9
#define DI_MTN_1_CTRL7 0x17aa
#define DI_MTN_1_CTRL8 0x17ab
#define DI_MTN_1_CTRL9 0x17ac
#define DI_MTN_1_CTRL10 0x17ad
#define DI_MTN_1_CTRL11 0x17ae
#define DI_MTN_1_CTRL12 0x17af
#define DET3D_MOTN_CFG 0x1734
#define DET3D_CB_CFG 0x1735
#define DET3D_SPLT_CFG 0x1736
#define DET3D_HV_MUTE 0x1737
#define DET3D_MAT_STA_P1M1 0x1738
#define DET3D_MAT_STA_P1TH 0x1739
#define DET3D_MAT_STA_M1TH 0x173a
#define DET3D_MAT_STA_RSFT 0x173b
#define DET3D_MAT_SYMTC_TH 0x173c
#define DET3D_RO_DET_CB_HOR 0x173d
#define DET3D_RO_DET_CB_VER 0x173e
#define DET3D_RO_SPLT_HT 0x173f
#define NR2_MET_NM_CTRL 0x1745
#define NR2_MET_NM_YCTRL 0x1746
#define NR2_MET_NM_CCTRL 0x1747
#define NR2_MET_NM_TNR 0x1748
#define NR2_MET_NMFRM_TNR_YLEV 0x1749
#define NR2_MET_NMFRM_TNR_YCNT 0x174a
#define NR2_MET_NMFRM_TNR_CLEV 0x174b
#define NR2_MET_NMFRM_TNR_CCNT 0x174c
#define NR2_3DEN_MODE 0x174d
#define NR2_IIR_CTRL 0x174e
#define NR2_SW_EN 0x174f
#define NR2_FRM_SIZE 0x1750
#define NR2_SNR_SAD_CFG 0x1751
#define NR2_MATNR_SNR_OS 0x1752
#define NR2_MATNR_SNR_NRM_CFG 0x1753
#define NR2_MATNR_SNR_NRM_GAIN 0x1754
#define NR2_MATNR_SNR_LPF_CFG 0x1755
#define NR2_MATNR_SNR_USF_GAIN 0x1756
#define NR2_MATNR_SNR_EDGE2B 0x1757
#define NR2_MATNR_BETA_EGAIN 0x1758
#define NR2_MATNR_BETA_BRT 0x1759
#define NR2_MATNR_XBETA_CFG 0x175a
#define NR2_MATNR_YBETA_SCL 0x175b
#define NR2_MATNR_CBETA_SCL 0x175c
#define NR2_SNR_MASK 0x175d
#define NR2_SAD2NORM_LUT0 0x175e
#define NR2_SAD2NORM_LUT1 0x175f
#define NR2_SAD2NORM_LUT2 0x1760
#define NR2_SAD2NORM_LUT3 0x1761
#define NR2_EDGE2BETA_LUT0 0x1762
#define NR2_EDGE2BETA_LUT1 0x1763
#define NR2_EDGE2BETA_LUT2 0x1764
#define NR2_EDGE2BETA_LUT3 0x1765
#define NR2_MOTION2BETA_LUT0 0x1766
#define NR2_MOTION2BETA_LUT1 0x1767
#define NR2_MOTION2BETA_LUT2 0x1768
#define NR2_MOTION2BETA_LUT3 0x1769
#define NR2_MATNR_MTN_CRTL 0x176a
#define NR2_MATNR_MTN_CRTL2 0x176b
#define NR2_MATNR_MTN_COR 0x176c
#define NR2_MATNR_MTN_GAIN 0x176d
#define NR2_MATNR_DEGHOST 0x176e
#define NR2_MATNR_ALPHALP_LUT0 0x176f
#define NR2_MATNR_ALPHALP_LUT1 0x1770
#define NR2_MATNR_ALPHALP_LUT2 0x1771
#define NR2_MATNR_ALPHALP_LUT3 0x1772
#define NR2_MATNR_ALPHAHP_LUT0 0x1773
#define NR2_MATNR_ALPHAHP_LUT1 0x1774
#define NR2_MATNR_ALPHAHP_LUT2 0x1775
#define NR2_MATNR_ALPHAHP_LUT3 0x1776
#define NR2_MATNR_MTNB_BRT 0x1777
#define NR2_CUE_MODE 0x1778
#define NR2_CUE_CON_MOT_TH 0x1779
#define NR2_CUE_CON_DIF0 0x177a
#define NR2_CUE_CON_DIF1 0x177b
#define NR2_CUE_CON_DIF2 0x177c
#define NR2_CUE_CON_DIF3 0x177d
#define NR2_CUE_PRG_DIF 0x177e
#define NR2_CONV_MODE 0x177f
#define DET3D_RO_SPLT_HB 0x1780
#define DET3D_RO_SPLT_VL 0x1781
#define DET3D_RO_SPLT_VR 0x1782
#define DET3D_RO_MAT_LUMA_LR 0x1783
#define DET3D_RO_MAT_LUMA_TB 0x1784
#define DET3D_RO_MAT_CHRU_LR 0x1785
#define DET3D_RO_MAT_CHRU_TB 0x1786
#define DET3D_RO_MAT_CHRV_LR 0x1787
#define DET3D_RO_MAT_CHRV_TB 0x1788
#define DET3D_RO_MAT_HEDG_LR 0x1789
#define DET3D_RO_MAT_HEDG_TB 0x178a
#define DET3D_RO_MAT_VEDG_LR 0x178b
#define DET3D_RO_MAT_VEDG_TB 0x178c
#define DET3D_RO_MAT_MOTN_LR 0x178d
#define DET3D_RO_MAT_MOTN_TB 0x178e
#define DET3D_RO_FRM_MOTN 0x178f
#define DET3D_RAMRD_ADDR_PORT 0x179a
#define DET3D_RAMRD_DATA_PORT 0x179b
#define NR2_CFR_PARA_CFG0 0x179c
#define NR2_CFR_PARA_CFG1 0x179d
#define DI_NR_1_CTRL0 0x1794
#define DI_NR_1_CTRL1 0x1795
#define DI_NR_1_CTRL2 0x1796
#define DI_NR_1_CTRL3 0x1797
#define DI_CONTWR_X 0x17a0
#define DI_CONTWR_Y 0x17a1
#define DI_CONTWR_CTRL 0x17a2
#define DI_CONTPRD_X 0x17a3
#define DI_CONTPRD_Y 0x17a4
#define DI_CONTP2RD_X 0x17a5
#define DI_CONTP2RD_Y 0x17a6
#define DI_CONTRD_CTRL 0x17a7
#define DI_NRWR_X 0x17c0
#define DI_NRWR_Y 0x17c1
#define DI_NRWR_CTRL 0x17c2
#define DI_MTNWR_X 0x17c3
#define DI_MTNWR_Y 0x17c4
#define DI_MTNWR_CTRL 0x17c5
#define DI_DIWR_X 0x17c6
#define DI_DIWR_Y 0x17c7
#define DI_DIWR_CTRL 0x17c8
#define DI_MTNCRD_X 0x17c9
#define DI_MTNCRD_Y 0x17ca
#define DI_MTNPRD_X 0x17cb
#define DI_MTNPRD_Y 0x17cc
#define DI_MTNRD_CTRL 0x17cd
#define DI_INP_GEN_REG 0x17ce
#define DI_INP_CANVAS0 0x17cf
#define DI_INP_LUMA_X0 0x17d0
#define DI_INP_LUMA_Y0 0x17d1
#define DI_INP_CHROMA_X0 0x17d2
#define DI_INP_CHROMA_Y0 0x17d3
#define DI_INP_RPT_LOOP 0x17d4
#define DI_INP_LUMA0_RPT_PAT 0x17d5
#define DI_INP_CHROMA0_RPT_PAT 0x17d6
#define DI_INP_DUMMY_PIXEL 0x17d7
#define DI_INP_LUMA_FIFO_SIZE 0x17d8
#define DI_INP_RANGE_MAP_Y 0x17ba
#define DI_INP_RANGE_MAP_CB 0x17bb
#define DI_INP_RANGE_MAP_CR 0x17bc
#define DI_INP_GEN_REG2 0x1791
#define DI_INP_FMT_CTRL 0x17d9
#define DI_INP_FMT_W 0x17da
#define DI_MEM_GEN_REG 0x17db
#define DI_MEM_CANVAS0 0x17dc
#define DI_MEM_LUMA_X0 0x17dd
#define DI_MEM_LUMA_Y0 0x17de
#define DI_MEM_CHROMA_X0 0x17df
#define DI_MEM_CHROMA_Y0 0x17e0
#define DI_MEM_RPT_LOOP 0x17e1
#define DI_MEM_LUMA0_RPT_PAT 0x17e2
#define DI_MEM_CHROMA0_RPT_PAT 0x17e3
#define DI_MEM_DUMMY_PIXEL 0x17e4
#define DI_MEM_LUMA_FIFO_SIZE 0x17e5
#define DI_MEM_RANGE_MAP_Y 0x17bd
#define DI_MEM_RANGE_MAP_CB 0x17be
#define DI_MEM_RANGE_MAP_CR 0x17bf
#define DI_MEM_GEN_REG2 0x1792
#define DI_MEM_FMT_CTRL 0x17e6
#define DI_MEM_FMT_W 0x17e7
#define DI_IF1_GEN_REG 0x17e8
#define DI_IF1_CANVAS0 0x17e9
#define DI_IF1_LUMA_X0 0x17ea
#define DI_IF1_LUMA_Y0 0x17eb
#define DI_IF1_CHROMA_X0 0x17ec
#define DI_IF1_CHROMA_Y0 0x17ed
#define DI_IF1_RPT_LOOP 0x17ee
#define DI_IF1_LUMA0_RPT_PAT 0x17ef
#define DI_IF1_CHROMA0_RPT_PAT 0x17f0
#define DI_IF1_DUMMY_PIXEL 0x17f1
#define DI_IF1_LUMA_FIFO_SIZE 0x17f2
#define DI_IF1_RANGE_MAP_Y 0x17fc
#define DI_IF1_RANGE_MAP_CB 0x17fd
#define DI_IF1_RANGE_MAP_CR 0x17fe
#define DI_IF1_GEN_REG2 0x1790
#define DI_IF1_FMT_CTRL 0x17f3
#define DI_IF1_FMT_W 0x17f4
#define DI_CHAN2_GEN_REG 0x17f5
#define DI_CHAN2_CANVAS0 0x17f6
#define DI_CHAN2_LUMA_X0 0x17f7
#define DI_CHAN2_LUMA_Y0 0x17f8
#define DI_CHAN2_CHROMA_X0 0x17f9
#define DI_CHAN2_CHROMA_Y0 0x17fa
#define DI_CHAN2_RPT_LOOP 0x17fb
#define DI_CHAN2_LUMA0_RPT_PAT 0x17b0
#define DI_CHAN2_CHROMA0_RPT_PAT 0x17b1
#define DI_CHAN2_DUMMY_PIXEL 0x17b2
#define DI_CHAN2_LUMA_FIFO_SIZE 0x17b3
#define DI_CHAN2_RANGE_MAP_Y 0x17b4
#define DI_CHAN2_RANGE_MAP_CB 0x17b5
#define DI_CHAN2_RANGE_MAP_CR 0x17b6
#define DI_CHAN2_GEN_REG2 0x17b7
#define DI_CHAN2_FMT_CTRL 0x17b8
#define DI_CHAN2_FMT_W 0x17b9

#endif


