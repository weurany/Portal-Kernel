/* Copyright (c) 2014-2016, The Linux Foundation. All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 and
 * only version 2 as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */

#ifndef __MSM_CLOCKS_8996_H
#define __MSM_CLOCKS_8996_H

#include "audio-ext-clk.h"

/* clock_gcc controlled clocks */
#define clk_cxo_clk_src			0x79e95308
#define clk_pnoc_clk			0x4325d220
#define clk_pnoc_a_clk			0x2808c12b
#define clk_bimc_clk			0x4b80bf00
#define clk_bimc_a_clk			0x4b25668a
#define clk_cnoc_clk			0xd5ccb7f4
#define clk_cnoc_a_clk			0xd8fe2ccc
#define clk_snoc_clk			0x2c341aa0
#define clk_snoc_a_clk			0x8fcef2af
#define clk_bb_clk1			0xf5304268
#define clk_bb_clk1_ao			0xfa113810
#define clk_bb_clk1_pin			0x6dd0a779
#define clk_bb_clk1_pin_ao		0x9b637772
#define clk_bb_clk2			0xfe15cb87
#define clk_bb_clk2_ao			0x59682706
#define clk_bb_clk2_pin			0x498938e5
#define clk_bb_clk2_pin_ao		0x52513787
#define clk_bimc_msmbus_clk		0xd212feea
#define clk_bimc_msmbus_a_clk		0x71d1a499
#define clk_ce1_a_clk			0x44a833fe
#define clk_cnoc_msmbus_clk		0x62228b5d
#define clk_cnoc_msmbus_a_clk		0x67442955
#define clk_cxo_clk_src_ao		0x64eb6004
#define clk_cxo_dwc3_clk		0xf79c19f6
#define clk_cxo_lpm_clk			0x94adbf3d
#define clk_cxo_otg_clk			0x4eec0bb9
#define clk_cxo_pil_lpass_clk		0xe17f0ff6
#define clk_cxo_pil_ssc_clk		0x81832015
#define clk_div_clk1			0xaa1157a6
#define clk_div_clk1_ao			0x6b943d68
#define clk_div_clk2			0xd454019f
#define clk_div_clk2_ao			0x53f9e788
#define clk_div_clk3			0xa9a55a68
#define clk_div_clk3_ao			0x3d6725a8
#define clk_ipa_a_clk			0xeeec2919
#define clk_ipa_clk			0xfa685cda
#define clk_ln_bb_clk			0x3ab0b36d
#define clk_ln_bb_a_clk			0xc7257ea8
#define clk_ln_bb_clk_pin		0x1b1c476a
#define clk_ln_bb_a_clk_pin		0x9cbb5411
#define clk_mcd_ce1_clk			0xbb615d26
#define clk_pnoc_keepalive_a_clk	0xf8f91f0b
#define clk_pnoc_msmbus_clk		0x38b95c77
#define clk_pnoc_msmbus_a_clk		0x8c9b4e93
#define clk_pnoc_pm_clk			0xd6f7dfb9
#define clk_pnoc_sps_clk		0xd482ecc7
#define clk_qdss_a_clk			0xdd121669
#define clk_qdss_clk			0x1492202a
#define clk_rf_clk1			0xaabeea5a
#define clk_rf_clk1_ao			0x72a10cb8
#define clk_rf_clk1_pin			0x8f463562
#define clk_rf_clk1_pin_ao		0x62549ff6
#define clk_rf_clk2			0x24a30992
#define clk_rf_clk2_ao			0x944d8bbd
#define clk_rf_clk2_pin			0xa7c5602a
#define clk_rf_clk2_pin_ao		0x2d75eb4d
#define clk_snoc_msmbus_clk		0xe6900bb6
#define clk_snoc_msmbus_a_clk		0x5d4683bd
#define clk_mcd_ce1_clk			0xbb615d26
#define clk_qcedev_ce1_clk		0x293f97b0
#define clk_qcrypto_ce1_clk		0xa6ac14df
#define clk_qseecom_ce1_clk		0xaa858373
#define clk_scm_ce1_clk			0xd8ebcc62
#define clk_ce1_clk			0x42229c55
#define clk_gcc_ce1_ahb_m_clk		0x2eb28c01
#define clk_gcc_ce1_axi_m_clk		0xc174dfba
#define clk_measure_only_bimc_hmss_axi_clk	0xc1cc4f11
#define clk_aggre1_noc_clk		0x049abba8
#define clk_aggre1_noc_a_clk		0xc12e4220
#define clk_aggre2_noc_clk		0xaa681404
#define clk_aggre2_noc_a_clk		0xcab67089
#define clk_mmssnoc_axi_rpm_clk		0x4d7f8cdc
#define clk_mmssnoc_axi_rpm_a_clk	0xfbea899b
#define clk_mmssnoc_axi_clk		0xdb4b31e6
#define clk_mmssnoc_axi_a_clk		0xd4970614
#define clk_mmssnoc_gds_clk		0x06a22afa

#define clk_gpll0			0x1ebe3bc4
#define clk_gpll0_ao			0xa1368304
#define clk_gpll0_out_main		0xe9374de7
#define clk_gpll4			0xb3b5d85b
#define clk_gpll4_out_main		0xa9a0ab9d
#define clk_ufs_axi_clk_src		0x297ca380
#define clk_pcie_aux_clk_src		0xebc50566
#define clk_usb30_master_clk_src	0xc6262f89
#define clk_usb20_master_clk_src	0x5680ac83
#define clk_ufs_ice_core_clk_src	0xda8e7119
#define clk_blsp1_qup1_i2c_apps_clk_src 0x17f78f5e
#define clk_blsp1_qup1_spi_apps_clk_src 0xf534c4fa
#define clk_blsp1_qup2_i2c_apps_clk_src 0x8de71c79
#define clk_blsp1_qup2_spi_apps_clk_src 0x33cf809a
#define clk_blsp1_qup3_i2c_apps_clk_src 0xf161b902
#define clk_blsp1_qup3_spi_apps_clk_src 0x5e95683f
#define clk_blsp1_qup4_i2c_apps_clk_src 0xb2ecce68
#define clk_blsp1_qup4_spi_apps_clk_src 0xddb5bbdb
#define clk_blsp1_qup5_i2c_apps_clk_src 0x71ea7804
#define clk_blsp1_qup5_spi_apps_clk_src 0x9752f35f
#define clk_blsp1_qup6_i2c_apps_clk_src 0x28806803
#define clk_blsp1_qup6_spi_apps_clk_src 0x44a1edc4
#define clk_blsp1_uart1_apps_clk_src	0xf8146114
#define clk_blsp1_uart2_apps_clk_src	0xfc9c2f73
#define clk_blsp1_uart3_apps_clk_src	0x600497f2
#define clk_blsp1_uart4_apps_clk_src	0x56bff15c
#define clk_blsp1_uart5_apps_clk_src	0x218ef697
#define clk_blsp1_uart6_apps_clk_src	0x8fbdbe4c
#define clk_blsp2_qup1_i2c_apps_clk_src 0xd6d1e95d
#define clk_blsp2_qup1_spi_apps_clk_src 0xcc1b8365
#define clk_blsp2_qup2_i2c_apps_clk_src 0x603b5c51
#define clk_blsp2_qup2_spi_apps_clk_src 0xd577dc44
#define clk_blsp2_qup3_i2c_apps_clk_src 0xea82959c
#define clk_blsp2_qup3_spi_apps_clk_src 0xd04b1e92
#define clk_blsp2_qup4_i2c_apps_clk_src 0x73dc968c
#define clk_blsp2_qup4_spi_apps_clk_src 0x25d4a2b1
#define clk_blsp2_qup5_i2c_apps_clk_src 0xcc3698bd
#define clk_blsp2_qup5_spi_apps_clk_src 0xfa0cf45e
#define clk_blsp2_qup6_i2c_apps_clk_src 0x2fa53151
#define clk_blsp2_qup6_spi_apps_clk_src 0x5ca86755
#define clk_blsp2_uart1_apps_clk_src	0x562c66dc
#define clk_blsp2_uart2_apps_clk_src	0xdd448080
#define clk_blsp2_uart3_apps_clk_src	0x46b2e90f
#define clk_blsp2_uart4_apps_clk_src	0x23a093d2
#define clk_blsp2_uart5_apps_clk_src	0xe067616a
#define clk_blsp2_uart6_apps_clk_src	0xe02d2829
#define clk_gp1_clk_src			0xad85b97a
#define clk_gp2_clk_src			0xfb1f0065
#define clk_gp3_clk_src			0x63b693d6
#define clk_hmss_rbcpr_clk_src		0xedd9a474
#define clk_pdm2_clk_src		0x31e494fd
#define clk_sdcc1_apps_clk_src		0xd4975db2
#define clk_sdcc2_apps_clk_src		0xfc46c821
#define clk_sdcc3_apps_clk_src		0xea34c7f4
#define clk_sdcc4_apps_clk_src		0x7aaaaa0c
#define clk_tsif_ref_clk_src		0x4e9042d1
#define clk_usb20_mock_utmi_clk_src	0xc3aaeecb
#define clk_usb30_mock_utmi_clk_src	0xa024a976
#define clk_usb3_phy_aux_clk_src	0x15eec63c
#define clk_gcc_qusb2phy_prim_reset	0x07550fa1
#define clk_gcc_qusb2phy_sec_reset	0x3f3a87d0
#define clk_gcc_periph_noc_usb20_ahb_clk	0xfb9f26e9
#define clk_gcc_mmss_gcc_dbg_clk	0xe89d461c
#define clk_cpu_dbg_clk			0x6550dfa9
#define clk_gcc_blsp1_ahb_clk		0x8caa5b4f
#define clk_gcc_blsp1_qup1_i2c_apps_clk 0xc303fae9
#define clk_gcc_blsp1_qup1_spi_apps_clk 0x759a76b0
#define clk_gcc_blsp1_qup2_i2c_apps_clk 0x1076f220
#define clk_gcc_blsp1_qup2_spi_apps_clk 0x3e77d48f
#define clk_gcc_blsp1_qup3_i2c_apps_clk 0x9e25ac82
#define clk_gcc_blsp1_qup3_spi_apps_clk 0xfb978880
#define clk_gcc_blsp1_qup4_i2c_apps_clk 0xd7f40f6f
#define clk_gcc_blsp1_qup4_spi_apps_clk 0x80f8722f
#define clk_gcc_blsp1_qup5_i2c_apps_clk 0xacae5604
#define clk_gcc_blsp1_qup5_spi_apps_clk 0xbf3e15d7
#define clk_gcc_blsp1_qup6_i2c_apps_clk 0x5c6ad820
#define clk_gcc_blsp1_qup6_spi_apps_clk 0x780d9f85
#define clk_gcc_blsp1_uart1_apps_clk	0xc7c62f90
#define clk_gcc_blsp1_uart2_apps_clk	0xf8a61c96
#define clk_gcc_blsp1_uart3_apps_clk	0xc3298bd7
#define clk_gcc_blsp1_uart4_apps_clk	0x26be16c0
#define clk_gcc_blsp1_uart5_apps_clk	0x28a6bc74
#define clk_gcc_blsp1_uart6_apps_clk	0x28fd3466
#define clk_gcc_blsp2_ahb_clk		0x8f283c1d
#define clk_gcc_blsp2_qup1_i2c_apps_clk 0x9ace11dd
#define clk_gcc_blsp2_qup1_spi_apps_clk 0xa32604cc
#define clk_gcc_blsp2_qup2_i2c_apps_clk 0x1bf9a57e
#define clk_gcc_blsp2_qup2_spi_apps_clk 0xbf54ca6d
#define clk_gcc_blsp2_qup3_i2c_apps_clk 0x336d4170
#define clk_gcc_blsp2_qup3_spi_apps_clk 0xc68509d6
#define clk_gcc_blsp2_qup4_i2c_apps_clk 0xbd22539d
#define clk_gcc_blsp2_qup4_spi_apps_clk 0x01a72b93
#define clk_gcc_blsp2_qup5_i2c_apps_clk 0xe2b2ce1d
#define clk_gcc_blsp2_qup5_spi_apps_clk 0xf40999cd
#define clk_gcc_blsp2_qup6_i2c_apps_clk 0x894bcea4
#define clk_gcc_blsp2_qup6_spi_apps_clk 0xfe1bd34a
#define clk_gcc_blsp2_uart1_apps_clk	0x8c3512ff
#define clk_gcc_blsp2_uart2_apps_clk	0x1e1965a3
#define clk_gcc_blsp2_uart3_apps_clk	0x382415ab
#define clk_gcc_blsp2_uart4_apps_clk	0x87a44b42
#define clk_gcc_blsp2_uart5_apps_clk	0x5cd30649
#define clk_gcc_blsp2_uart6_apps_clk	0x8feee5ab
#define clk_gcc_boot_rom_ahb_clk	0xde2adeb1
#define clk_gcc_gp1_clk			0x057f7b69
#define clk_gcc_gp2_clk			0x9bf83ffd
#define clk_gcc_gp3_clk			0xec6539ee
#define clk_gcc_hmss_rbcpr_clk		0x699183be
#define clk_gcc_mmss_noc_cfg_ahb_clk	0xb41a9d99
#define clk_gcc_pcie_0_aux_clk		0x3d2e3ece
#define clk_gcc_pcie_0_cfg_ahb_clk	0x4dd325c3
#define clk_gcc_pcie_0_mstr_axi_clk	0x3f85285b
#define clk_gcc_pcie_0_slv_axi_clk	0xd69638a1
#define clk_gcc_pcie_0_pipe_clk		0x4f37621e
#define clk_gcc_pcie_0_phy_reset	0xdc3201c1
#define clk_gcc_pcie_1_aux_clk		0xc9bb962c
#define clk_gcc_pcie_1_cfg_ahb_clk	0xb6338658
#define clk_gcc_pcie_1_mstr_axi_clk	0xc20f6269
#define clk_gcc_pcie_1_slv_axi_clk	0xd54e40d6
#define clk_gcc_pcie_1_pipe_clk		0xc1627422
#define clk_gcc_pcie_1_phy_reset	0x674481bb
#define clk_gcc_pcie_2_aux_clk		0xa4dc7ae8
#define clk_gcc_pcie_2_cfg_ahb_clk	0x4f1d3121
#define clk_gcc_pcie_2_mstr_axi_clk	0x9e81724a
#define clk_gcc_pcie_2_slv_axi_clk	0x7990d8b2
#define clk_gcc_pcie_2_pipe_clk		0xa757a834
#define clk_gcc_pcie_2_phy_reset	0x82634880
#define clk_gcc_pcie_phy_reset		0x9bc3c959
#define clk_gcc_pcie_phy_com_reset	0x8bf513e6
#define clk_gcc_pcie_phy_nocsr_com_phy_reset	0x0c16a2da
#define clk_gcc_pcie_phy_aux_clk	0x4746e74f
#define clk_gcc_pcie_phy_cfg_ahb_clk	0x8533671a
#define clk_gcc_pdm2_clk		0x99d55711
#define clk_gcc_pdm_ahb_clk		0x365664f6
#define clk_gcc_prng_ahb_clk		0x397e7eaa
#define clk_gcc_sdcc1_ahb_clk		0x691e0caa
#define clk_gcc_sdcc1_apps_clk		0x9ad6fb96
#define clk_gcc_sdcc2_ahb_clk		0x23d5727f
#define clk_gcc_sdcc2_apps_clk		0x861b20ac
#define clk_gcc_sdcc3_ahb_clk		0x565b2c03
#define clk_gcc_sdcc3_apps_clk		0x0b27aeac
#define clk_gcc_sdcc4_ahb_clk		0x64f3e6a8
#define clk_gcc_sdcc4_apps_clk		0xbf7c4dc8
#define clk_gcc_tsif_ahb_clk		0x88d2822c
#define clk_gcc_tsif_ref_clk		0x8f1ed2c2
#define clk_gcc_ufs_ahb_clk		0x1914bb84
#define clk_gcc_ufs_axi_clk		0x47c743a7
#define clk_gcc_ufs_ice_core_clk	0x310b0710
#define clk_gcc_ufs_rx_cfg_clk		0xa6747786
#define clk_gcc_ufs_rx_symbol_0_clk	0x7f43251c
#define clk_gcc_ufs_rx_symbol_1_clk	0x03182fde
#define clk_gcc_ufs_tx_cfg_clk		0xba2cf8b5
#define clk_gcc_ufs_tx_symbol_0_clk	0x6a9f747a
#define clk_gcc_ufs_unipro_core_clk	0x2daf7fd2
#define clk_gcc_ufs_sys_clk_core_clk	0x360e5ac8
#define clk_gcc_ufs_tx_symbol_clk_core_clk	0xf6fb0df7
#define clk_gcc_usb20_master_clk	0x24c3b66a
#define clk_gcc_usb20_mock_utmi_clk	0xe8db8203
#define clk_gcc_usb20_sleep_clk		0x6e8cb4b2
#define clk_gcc_usb30_master_clk	0xb3b4e2cb
#define clk_gcc_usb30_mock_utmi_clk	0xa800b65a
#define clk_gcc_usb30_sleep_clk		0xd0b65c92
#define clk_gcc_usb3_phy_aux_clk	0x0d9a36e0
#define clk_gcc_usb3_phy_pipe_clk	0xf279aff2
#define clk_gcc_usb_phy_cfg_ahb2phy_clk	0xd1231a0e
#define clk_gcc_aggre0_cnoc_ahb_clk	0x53a35559
#define clk_gcc_aggre0_snoc_axi_clk	0x3c446400
#define clk_gcc_aggre0_noc_qosgen_extref_clk	0x8c4356ba
#define clk_hlos1_vote_lpass_core_smmu_clk	0x3aaa1743
#define clk_hlos1_vote_lpass_adsp_smmu_clk	0xc76f702f
#define clk_gcc_usb3_phy_reset		0x03d559f1
#define clk_gcc_usb3phy_phy_reset	0xb1a4f885
#define clk_gcc_usb3_clkref_clk		0xb6cc8f01
#define clk_gcc_hdmi_clkref_clk		0x4d4eec04
#define clk_gcc_edp_clkref_clk		0xa8685c3f
#define clk_gcc_ufs_clkref_clk		0x92aa126f
#define clk_gcc_pcie_clkref_clk		0xa2e247fa
#define clk_gcc_rx2_usb2_clkref_clk	0x27ec24ba
#define clk_gcc_rx1_usb2_clkref_clk	0x53351d25
#define clk_gcc_smmu_aggre0_ahb_clk	0x47a06ce4
#define clk_gcc_smmu_aggre0_axi_clk	0x3cac4a6c
#define clk_gcc_sys_noc_usb3_axi_clk	0x94d26800
#define clk_gcc_sys_noc_ufs_axi_clk	0x19d38312
#define clk_gcc_aggre2_usb3_axi_clk	0xd5822a8e
#define clk_gcc_aggre2_ufs_axi_clk	0xb31e5191
#define clk_gcc_mmss_gpll0_div_clk	0xdd06848d
#define clk_gcc_mmss_bimc_gfx_clk	0xe4f28754
#define clk_gcc_bimc_gfx_clk		0x3edd69ad
#define clk_gcc_qspi_ahb_clk		0x96969dc8
#define clk_gcc_qspi_ser_clk		0xfaf1e266
#define clk_qspi_ser_clk_src		0x426676ee
#define clk_sdcc1_ice_core_clk_src	0xfd6a4301
#define clk_gcc_sdcc1_ice_core_clk	0x0fd5680a
#define clk_gcc_mss_cfg_ahb_clk		0x111cde81
#define clk_gcc_mss_snoc_axi_clk	0x0e71de85
#define clk_gcc_mss_q6_bimc_axi_clk	0x67544d62
#define clk_gcc_mss_mnoc_bimc_axi_clk	0xf665d03f
#define clk_gpll0_out_msscc		0x7d794829
#define clk_gcc_debug_mux_v2		0xf7e749f0
#define clk_gcc_dcc_ahb_clk		0xfa14a88c
#define clk_gcc_aggre0_noc_mpu_cfg_ahb_clk	0x5c1bb8e2

/* clock_mmss controlled clocks */
#define clk_mmsscc_xo			0x05e63704
#define clk_mmsscc_gpll0		0xe900c515
#define clk_mmsscc_gpll0_div		0x73892e05
#define clk_mmsscc_mmssnoc_ahb		0x7b4bd6f7
#define clk_mmpll0			0xdd83b751
#define clk_mmpll0_out_main		0x2f996a31
#define clk_mmpll1			0x6da7fb90
#define clk_mmpll1_out_main		0xa0d3a7da
#define clk_mmpll4			0x22c063c1
#define clk_mmpll4_out_main		0xfb21c2fd
#define clk_mmpll3			0x18c76899
#define clk_mmpll3_out_main		0x6eb6328f
#define clk_ahb_clk_src			0x86f49203
#define clk_mmpll2			0x1190e4d8
#define clk_mmpll2_out_main		0x1e9e24a8
#define clk_mmpll8			0xd06ad45e
#define clk_mmpll8_out_main		0x75b1f386
#define clk_mmpll9			0x1c50684c
#define clk_mmpll9_out_main		0x16b74937
#define clk_mmpll5			0xa41e1936
#define clk_mmpll5_out_main		0xcc1897bf
#define clk_csi0_clk_src		0x227e65bc
#define clk_vfe0_clk_src		0xa0c2bd8f
#define clk_vfe1_clk_src		0x4e357366
#define clk_csi1_clk_src		0x6a2a6c36
#define clk_csi2_clk_src		0x4113589f
#define clk_csi3_clk_src		0xfd934012
#define clk_maxi_clk_src		0x52c09777
#define clk_cpp_clk_src			0x8382f56d
#define clk_jpeg0_clk_src		0x9a0a0ac3
#define clk_jpeg2_clk_src		0x5ad927f3
#define clk_jpeg_dma_clk_src		0xb68afcea
#define clk_mdp_clk_src			0x6dc1f8f1
#define clk_video_core_clk_src		0x8be4c944
#define clk_fd_core_clk_src		0xe4799ab7
#define clk_cci_clk_src			0x822f3d97
#define clk_csiphy0_3p_clk_src		0xd2474b12
#define clk_csiphy1_3p_clk_src		0x46a02aff
#define clk_csiphy2_3p_clk_src		0x1447813f
#define clk_camss_gp0_clk_src		0x6b57cfe6
#define clk_camss_gp1_clk_src		0xf735368a
#define clk_jpeg_dma_clk_src		0xb68afcea
#define clk_mclk0_clk_src		0x266b3853
#define clk_mclk1_clk_src		0xa73cad0c
#define clk_mclk2_clk_src		0x42545468
#define clk_mclk3_clk_src		0x2bfbb714
#define clk_csi0phytimer_clk_src	0xc8a309be
#define clk_csi1phytimer_clk_src	0x7c0fe23a
#define clk_csi2phytimer_clk_src	0x62ffea9c
#define clk_rbbmtimer_clk_src		0x17649ecc
#define clk_esc0_clk_src		0xb41d7c38
#define clk_esc1_clk_src		0x3b0afa42
#define clk_hdmi_clk_src		0xb40aeea9
#define clk_vsync_clk_src		0xecb43940
#define clk_rbcpr_clk_src		0x2c2e9af2
#define clk_video_subcore0_clk_src	0x88d79636
#define clk_video_subcore1_clk_src	0x4966930c
#define clk_mmss_bto_ahb_clk		0xfdf8c361
#define clk_camss_ahb_clk		0xc4ff91d4
#define clk_camss_cci_ahb_clk		0x04c4441a
#define clk_camss_cci_clk		0xd6cb5eb9
#define clk_camss_cpp_ahb_clk		0x12e9a87b
#define clk_camss_cpp_clk		0xb82f366b
#define clk_camss_cpp_axi_clk		0x5598c804
#define clk_camss_cpp_vbif_ahb_clk	0xb5f31be4
#define clk_camss_csi0_ahb_clk		0x6e29c972
#define clk_camss_csi0_clk		0x30862ddb
#define clk_camss_csi0phy_clk		0x2cecfb84
#define clk_camss_csi0pix_clk		0x6946f77b
#define clk_camss_csi0rdi_clk		0x83645ef5
#define clk_camss_csi1_ahb_clk		0xccc15f06
#define clk_camss_csi1_clk		0xb150f052
#define clk_camss_csi1phy_clk		0xb989f06d
#define clk_camss_csi1pix_clk		0x58d19bf3
#define clk_camss_csi1rdi_clk		0x4d2f3352
#define clk_camss_csi2_ahb_clk		0x92d02d75
#define clk_camss_csi2_clk		0x74fc92e8
#define clk_camss_csi2phy_clk		0xda05d9d8
#define clk_camss_csi2pix_clk		0xf8ed0731
#define clk_camss_csi2rdi_clk		0xdc1b2081
#define clk_camss_csi3_ahb_clk		0xee5e459c
#define clk_camss_csi3_clk		0x39488fdd
#define clk_camss_csi3phy_clk		0x8b6063b9
#define clk_camss_csi3pix_clk		0xd82bd467
#define clk_camss_csi3rdi_clk		0xb6750046
#define clk_camss_csi_vfe0_clk		0x3023937a
#define clk_camss_csi_vfe1_clk		0xe66fa522
#define clk_camss_csiphy0_3p_clk	0xf2a54f5a
#define clk_camss_csiphy1_3p_clk	0x8bf70cb2
#define clk_camss_csiphy2_3p_clk	0x1c14c939
#define clk_camss_gp0_clk		0xcee7e51d
#define clk_camss_gp1_clk		0x41f1c2e3
#define clk_camss_ispif_ahb_clk		0x9a212c6d
#define clk_camss_jpeg0_clk		0x0b0e2db7
#define clk_camss_jpeg2_clk		0xd7291c8d
#define clk_camss_jpeg_ahb_clk		0x1f47fd28
#define clk_camss_jpeg_axi_clk		0x9e5545c8
#define clk_camss_jpeg_dma_clk		0x2336e65d
#define clk_camss_mclk0_clk		0xcf0c61e0
#define clk_camss_mclk1_clk		0xd1410ed4
#define clk_camss_mclk2_clk		0x851286f2
#define clk_camss_mclk3_clk		0x4db11c45
#define clk_camss_micro_ahb_clk		0x33a23277
#define clk_camss_csi0phytimer_clk	0xff93b3c8
#define clk_camss_csi1phytimer_clk	0x6c399ab6
#define clk_camss_csi2phytimer_clk	0x24f47f49
#define clk_camss_top_ahb_clk		0x8f8b2d33
#define clk_camss_vfe_ahb_clk		0x595197bc
#define clk_camss_vfe_axi_clk		0x273d4c31
#define clk_camss_vfe0_ahb_clk		0x4652833c
#define clk_camss_vfe0_clk		0x1e9bb8c4
#define clk_camss_vfe0_stream_clk	0x22835fa4
#define clk_camss_vfe1_ahb_clk		0x6a56abd3
#define clk_camss_vfe1_clk		0x5bffa69b
#define clk_camss_vfe1_stream_clk	0x92f849b9
#define clk_fd_ahb_clk			0x868a2c5c
#define clk_fd_core_clk			0x3badcae4
#define clk_fd_core_uar_clk		0x7e624e15
#define clk_gpu_ahb_clk			0xf97f1d43
#define clk_gpu_aon_isense_clk		0xa9e9b297
#define clk_gpu_gx_gfx3d_clk		0xb7ece823
#define clk_gpu_mx_clk			0xb80ccedf
#define clk_gpu_gx_rbbmtimer_clk	0xdeba634e
#define clk_mdss_ahb_clk		0x684ccb41
#define clk_mdss_axi_clk		0xcc07d687
#define clk_mdss_esc0_clk		0x28cafbe6
#define clk_mdss_esc1_clk		0xc22c6883
#define clk_mdss_hdmi_ahb_clk		0x01cef516
#define clk_mdss_hdmi_clk		0x097a6de9
#define clk_mdss_mdp_clk		0x618336ac
#define clk_mdss_vsync_clk		0x42a022d3
#define clk_mmss_misc_ahb_clk		0xea30b0e7
#define clk_mmss_misc_cxo_clk		0xe620cd80
#define clk_mmagic_bimc_noc_cfg_ahb_clk 0x12d5ba72
#define clk_mmagic_camss_axi_clk	0xa8b1c16b
#define clk_mmagic_camss_noc_cfg_ahb_clk 0x5182c819
#define clk_mmss_mmagic_cfg_ahb_clk	0x5e94a822
#define clk_mmagic_mdss_axi_clk		0xa0359d10
#define clk_mmagic_mdss_noc_cfg_ahb_clk 0x9c6d5482
#define clk_mmagic_video_axi_clk	0x7b9219c3
#define clk_mmagic_video_noc_cfg_ahb_clk 0x5124d256
#define clk_mmss_mmagic_ahb_clk		0x3d15f2b0
#define clk_mmss_mmagic_maxi_clk	0xbdaf5af7
#define clk_mmss_rbcpr_ahb_clk		0x623ba55f
#define clk_mmss_rbcpr_clk		0x69a23a6f
#define clk_mmss_spdm_cpp_clk		0xefe35cd2
#define clk_mmss_spdm_jpeg_dma_clk	0xcb7bd5a0
#define clk_smmu_cpp_ahb_clk		0x3ad82d84
#define clk_smmu_cpp_axi_clk		0xa6bb2f4a
#define clk_smmu_jpeg_ahb_clk		0x10c436ec
#define clk_smmu_jpeg_axi_clk		0x41112f37
#define clk_smmu_mdp_ahb_clk		0x04994cb2
#define clk_smmu_mdp_axi_clk		0x7fd71687
#define clk_smmu_rot_ahb_clk		0xa30772c9
#define clk_smmu_rot_axi_clk		0xfed7c078
#define clk_smmu_vfe_ahb_clk		0x4dabebe7
#define clk_smmu_vfe_axi_clk		0xde483725
#define clk_smmu_video_ahb_clk		0x2d738e2c
#define clk_smmu_video_axi_clk		0xe2b5b887
#define clk_video_ahb_clk		0x90775cfb
#define clk_video_axi_clk		0xe6c16dba
#define clk_video_core_clk		0x7e876ec3
#define clk_video_maxi_clk		0x97749db6
#define clk_video_subcore0_clk		0xb6f63e6c
#define clk_video_subcore1_clk		0x26c29cb4
#define clk_vmem_ahb_clk		0xab6223ff
#define clk_vmem_maxi_clk		0x15ef32db
#define clk_mmss_debug_mux		0xe646ffda
#define clk_mmss_gcc_dbg_clk		0xafa4d48a
#define clk_gfx3d_clk_src		0x917f76ef
#define clk_extpclk_clk_src		0xb2c31abd
#define clk_mdss_byte0_clk		0xf5a03f64
#define clk_mdss_byte1_clk		0xb8c7067d
#define clk_mdss_extpclk_clk		0xfa5aadb0
#define clk_mdss_pclk0_clk		0x3487234a
#define clk_mdss_pclk1_clk		0xd5804246
#define clk_gpu_gcc_dbg_clk		0x0ccc42cd
#define clk_mdss_mdp_vote_clk		0x588460a4
#define clk_mdss_rotator_vote_clk	0x5b1f675e
#define clk_mmpll2_postdiv_clk		0x4fdeaaba
#define clk_mmpll8_postdiv_clk		0xedf57882
#define clk_mmpll9_postdiv_clk		0x3064b618
#define clk_gfx3d_clk_src_v2		0x4210acb7
#define clk_byte0_clk_src		0x75cc885b
#define clk_byte1_clk_src		0x63c2c955
#define clk_pclk0_clk_src		0xccac1f35
#define clk_pclk1_clk_src		0x090f68ac
#define clk_ext_byte0_clk_src		0xfb32f31e
#define clk_ext_byte1_clk_src		0x585ef6d4
#define clk_ext_pclk0_clk_src		0x087c1612
#define clk_ext_pclk1_clk_src		0x8067c5a3

/* clock_debug controlled clocks */
#define clk_gcc_debug_mux		0x8121ac15

/* external multimedia clocks */
#define clk_dsi0pll_pixel_clk_mux	0x792379e1
#define clk_dsi0pll_byte_clk_mux	0x60e83f06
#define clk_dsi0pll_byte_clk_src	0xbbaa30be
#define clk_dsi0pll_pixel_clk_src	0x45b3260f
#define clk_dsi0pll_n2_div_clk		0x1474c213
#define clk_dsi0pll_post_n1_div_clk	0xdab8c389
#define clk_dsi0pll_vco_clk		0x15940d40
#define clk_dsi1pll_pixel_clk_mux	0x36458019
#define clk_dsi1pll_byte_clk_mux	0xb5a42b7b
#define clk_dsi1pll_byte_clk_src	0x63930a8f
#define clk_dsi1pll_pixel_clk_src	0x0e4c9b56
#define clk_dsi1pll_n2_div_clk		0x2c9d4007
#define clk_dsi1pll_post_n1_div_clk	0x03020041
#define clk_dsi1pll_vco_clk		0x99797b50
#define clk_mdss_dsi1_vco_clk_src	0xfcd15658
#define clk_hdmi_vco_clk		0x66003284

#define clk_dsi0pll_shadow_byte_clk_src	0x177c029c
#define clk_dsi0pll_shadow_pixel_clk_src	0x98ae3c92
#define clk_dsi0pll_shadow_n2_div_clk	0xd5f0dad9
#define clk_dsi0pll_shadow_post_n1_div_clk	0x1f7c8cf8
#define clk_dsi0pll_shadow_vco_clk	0xb100ca83
#define clk_dsi1pll_shadow_byte_clk_src	0xfc021ce5
#define clk_dsi1pll_shadow_pixel_clk_src	0xdcca3ffc
#define clk_dsi1pll_shadow_n2_div_clk		0x189541bf
#define clk_dsi1pll_shadow_post_n1_div_clk	0x1637020e
#define clk_dsi1pll_shadow_vco_clk		0x68d8b6f7

/* CPU clocks */
#define clk_pwrcl_clk 0xc554130e
#define clk_pwrcl_pll 0x25454ca1
#define clk_pwrcl_alt_pll 0xc445471b
#define clk_pwrcl_pll_main 0x28948e22
#define clk_pwrcl_alt_pll_main 0x25c8270e
#define clk_pwrcl_hf_mux 0x77706ae6
#define clk_pwrcl_lf_mux 0xd99e334d
#define clk_perfcl_clk 0x58869997
#define clk_perfcl_pll 0x97dcec1c
#define clk_perfcl_alt_pll 0xfe2eaea1
#define clk_perfcl_pll_main 0x0dbf0c0b
#define clk_perfcl_alt_pll_main 0x0b892aab
#define clk_perfcl_hf_mux 0x9e8bbe59
#define clk_perfcl_lf_mux 0x2f9c278d
#define clk_cbf_pll 0xfe2e96a3
#define clk_cbf_pll_main 0x2b05cf95
#define clk_cbf_hf_mux 0x71244f73
#define clk_cbf_clk 0x48e9e16b
#define clk_xo_ao 0x428c856d
#define clk_sys_apcsaux_clk 0x0b0dd513
#define clk_cpu_debug_mux 0xc7acaa31

/* GCC block resets */
#define QUSB2PHY_PRIM_BCR		0
#define QUSB2PHY_SEC_BCR		1
#define BLSP1_BCR			2
#define BLSP2_BCR			3
#define BOOT_ROM_BCR			4
#define PRNG_BCR			5
#define UFS_BCR				6
#define USB_20_BCR			7
#define USB_30_BCR			8
#define USB3_PHY_BCR			9
#define USB3PHY_PHY_BCR			10
#define PCIE_0_PHY_BCR			11
#define PCIE_1_PHY_BCR			12
#define PCIE_2_PHY_BCR			13
#define PCIE_PHY_BCR			14
#define PCIE_PHY_COM_BCR		15
#define PCIE_PHY_NOCSR_COM_PHY_BCR	16

/* MMSS Block resets */
#define VIDEO_BCR			0
#define MDSS_BCR			1
#define CAMSS_MICRO_BCR			2
#define CAMSS_JPEG_BCR			3
#define CAMSS_VFE0_BCR			4
#define CAMSS_VFE1_BCR			5
#define FD_BCR				6
#define GPU_GX_BCR			7

#endif
