/*
 * s2mps23-private.h - Voltage regulator driver for the s2mps23
 *
 *  Copyright (C) 2020 Samsung Electrnoics
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */

#ifndef __LINUX_MFD_S2MPS23_REGULATOR_EVT0_H
#define __LINUX_MFD_S2MPS23_REGULATOR_EVT0_H
/* PMIC Registers(EVT0) */
#define S2MPS23_PMIC_REG_INT1_EVT0		0x00
#define S2MPS23_PMIC_REG_INT2_EVT0		0x01
#define S2MPS23_PMIC_REG_INT3_EVT0		0x02
#define S2MPS23_PMIC_REG_INT4_EVT0		0x03
#define S2MPS23_PMIC_REG_INT5_EVT0		0x04
#define S2MPS23_PMIC_REG_INT6_EVT0		0x05
#define S2MPS23_PMIC_REG_INT7_EVT0		0x06

#define S2MPS23_PMIC_REG_INT1M_EVT0		0x07
#define S2MPS23_PMIC_REG_INT2M_EVT0		0x08
#define S2MPS23_PMIC_REG_INT3M_EVT0		0x09
#define S2MPS23_PMIC_REG_INT4M_EVT0		0x0A
#define S2MPS23_PMIC_REG_INT5M_EVT0		0x0B
#define S2MPS23_PMIC_REG_INT6M_EVT0		0x0C
#define S2MPS23_PMIC_REG_INT7M_EVT0		0x0D
#define S2MPS23_PMIC_REG_STATUS1_EVT0		0x0E
#define S2MPS23_PMIC_REG_STATUS2_EVT0		0x0F
#define S2MPS23_PMIC_REG_PWRONSRC_EVT0		0x10
#define S2MPS23_PMIC_REG_OFFSRC1_EVT0		0x11
#define S2MPS23_PMIC_REG_OFFSRC2_EVT0		0x12

#define S2MPS23_PMIC_REG_BUCHG_EVT0		0x13
#define S2MPS23_PMIC_REG_RTCBUF_EVT0		0x14
#define S2MPS23_PMIC_REG_CTRL1_EVT0		0x15
#define S2MPS23_PMIC_REG_CTRL2_EVT0		0x16
#define S2MPS23_PMIC_REG_CTRL3_EVT0		0x17

#define S2MPS23_PMIC_REG_ETC_OTP1_EVT0		0x18
#define S2MPS23_PMIC_REG_ETC_OTP2_EVT0		0x19
#define S2MPS23_PMIC_REG_UVLO_OTP_EVT0		0x1A
#define S2MPS23_PMIC_REG_CFG1_EVT0		0x1B
#define S2MPS23_PMIC_REG_CFG2_EVT0		0x1C

#define S2MPS23_PMIC_REG_B1M_CTRL_EVT0		0x1D
#define S2MPS23_PMIC_REG_B1M_OUT1_EVT0		0x1E
#define S2MPS23_PMIC_REG_B2M_CTRL_EVT0		0x1F
#define S2MPS23_PMIC_REG_B2M_OUT1_EVT0		0x20
#define S2MPS23_PMIC_REG_B3M_CTRL_EVT0		0x21
#define S2MPS23_PMIC_REG_B3M_OUT1_EVT0		0x22
#define S2MPS23_PMIC_REG_B4M_CTRL_EVT0		0x23
#define S2MPS23_PMIC_REG_B4M_OUT1_EVT0		0x24
#define S2MPS23_PMIC_REG_B4M_OUT2_EVT0		0x25
#define S2MPS23_PMIC_REG_B5M_CTRL_EVT0		0x26
#define S2MPS23_PMIC_REG_B5M_OUT1_EVT0		0x27
#define S2MPS23_PMIC_REG_B6M_CTRL_EVT0		0x28
#define S2MPS23_PMIC_REG_B6M_OUT1_EVT0		0x29
#define S2MPS23_PMIC_REG_B7M_CTRL_EVT0		0x2A
#define S2MPS23_PMIC_REG_B7M_OUT1_EVT0		0x2B
#define S2MPS23_PMIC_REG_B8M_CTRL_EVT0		0x2C
#define S2MPS23_PMIC_REG_B8M_OUT1_EVT0		0x2D
#define S2MPS23_PMIC_REG_B9M_CTRL_EVT0		0x2E
#define S2MPS23_PMIC_REG_B9M_OUT1_EVT0		0x2F

#define S2MPS23_PMIC_REG_BUCK_DVS1_EVT0		0x30
#define S2MPS23_PMIC_REG_BUCK_DVS2_EVT0		0x31
#define S2MPS23_PMIC_REG_BUCK_DVS3_EVT0		0x32
#define S2MPS23_PMIC_REG_BUCK_DVS4_EVT0		0x33
#define S2MPS23_PMIC_REG_BUCK_DVS5_EVT0		0x34
#define S2MPS23_PMIC_REG_BUCK_DVS6_EVT0		0x35
#define S2MPS23_PMIC_REG_BUCK_DVS7_EVT0		0x36
#define S2MPS23_PMIC_REG_BUCK_DVS8_EVT0		0x37
#define S2MPS23_PMIC_REG_BUCK_DVS9_EVT0		0x38

#define S2MPS23_PMIC_REG_DVS_LDO4_CTRL_EVT0	0x39
#define S2MPS23_PMIC_REG_DVS_LDO5_CTRL_EVT0	0x3A
#define S2MPS23_PMIC_REG_DVS_LDO6_CTRL_EVT0	0x3B
#define S2MPS23_PMIC_REG_DVS_LDO7_CTRL_EVT0	0x3C
#define S2MPS23_PMIC_REG_DVS_LDO18_CTRL_EVT0	0x3D
#define S2MPS23_PMIC_REG_DVS_LDO_RAMP1_EVT0	0x3E
#define S2MPS23_PMIC_REG_DVS_LDO_RAMP2_EVT0	0x3F

#define S2MPS23_PMIC_REG_L1CTRL_EVT0		0x40
#define S2MPS23_PMIC_REG_L2CTRL_EVT0		0x41
#define S2MPS23_PMIC_REG_L3CTRL_EVT0		0x42
#define S2MPS23_PMIC_REG_L4CTRL_EVT0		0x43
#define S2MPS23_PMIC_REG_L5CTRL1_EVT0		0x44
#define S2MPS23_PMIC_REG_L5CTRL2_EVT0		0x45
#define S2MPS23_PMIC_REG_L6CTRL_EVT0		0x46
#define S2MPS23_PMIC_REG_L7CTRL_EVT0		0x47
#define S2MPS23_PMIC_REG_L8CTRL_EVT0		0x48
#define S2MPS23_PMIC_REG_L9CTRL_EVT0		0x49
#define S2MPS23_PMIC_REG_L10CTRL_EVT0		0x4A
#define S2MPS23_PMIC_REG_L11CTRL_EVT0		0x4B
#define S2MPS23_PMIC_REG_L12CTRL_EVT0		0x4C
#define S2MPS23_PMIC_REG_L13CTRL_EVT0		0x4D
#define S2MPS23_PMIC_REG_L14CTRL_EVT0		0x4E
#define S2MPS23_PMIC_REG_L15CTRL_EVT0		0x4F
#define S2MPS23_PMIC_REG_L16CTRL_EVT0		0x50
#define S2MPS23_PMIC_REG_L17CTRL_EVT0		0x51
#define S2MPS23_PMIC_REG_L18CTRL1_EVT0		0x52
#define S2MPS23_PMIC_REG_L18CTRL2_EVT0		0x53
#define S2MPS23_PMIC_REG_L19CTRL_EVT0		0x54
#define S2MPS23_PMIC_REG_L20CTRL_EVT0		0x55
#define S2MPS23_PMIC_REG_L21CTRL_EVT0		0x56
#define S2MPS23_PMIC_REG_L22CTRL_EVT0		0x57
#define S2MPS23_PMIC_REG_L23CTRL_EVT0		0x58
#define S2MPS23_PMIC_REG_L24CTRL_EVT0		0x59
#define S2MPS23_PMIC_REG_L25CTRL_EVT0		0x5A
#define S2MPS23_PMIC_REG_L26CTRL_EVT0		0x5B
#define S2MPS23_PMIC_REG_L27CTRL_EVT0		0x5C
#define S2MPS23_PMIC_REG_L28CTRL_EVT0		0x5D
#define S2MPS23_PMIC_REG_L29CTRL_EVT0		0x5E
#define S2MPS23_PMIC_REG_L30CTRL_EVT0		0x5F
#define S2MPS23_PMIC_REG_L31CTRL_EVT0		0x60
#define S2MPS23_PMIC_REG_L32CTRL_EVT0		0x61

#define S2MPS23_PMIC_REG_LDO_DSCH1_EVT0		0x62
#define S2MPS23_PMIC_REG_LDO_DSCH2_EVT0		0x63
#define S2MPS23_PMIC_REG_LDO_DSCH3_EVT0		0x64
#define S2MPS23_PMIC_REG_LDO_DSCH4_EVT0		0x65
#define S2MPS23_PMIC_REG_LDO_DSCH5_EVT0		0x66

#define S2MPS23_PMIC_REG_IOCONF_EVT0		0x67
#define S2MPS23_PMIC_REG_RSVD_EVT0		0x68
#define S2MPS23_PMIC_REG_IPTAT_EVT0		0x69

#define S2MPS23_PMIC_REG_ONSEQ_CTRL1_EVT0	0x6A
#define S2MPS23_PMIC_REG_ONSEQ_CTRL2_EVT0	0x6B
#define S2MPS23_PMIC_REG_ONSEQ_CTRL3_EVT0	0x6C
#define S2MPS23_PMIC_REG_ONSEQ_CTRL4_EVT0	0x6D
#define S2MPS23_PMIC_REG_ONSEQ_CTRL5_EVT0	0x6E
#define S2MPS23_PMIC_REG_ONSEQ_CTRL6_EVT0	0x6F
#define S2MPS23_PMIC_REG_ONSEQ_CTRL7_EVT0	0x70
#define S2MPS23_PMIC_REG_ONSEQ_CTRL8_EVT0	0x71
#define S2MPS23_PMIC_REG_ONSEQ_CTRL9_EVT0	0x72
#define S2MPS23_PMIC_REG_ONSEQ_CTRL10_EVT0	0x73
#define S2MPS23_PMIC_REG_ONSEQ_CTRL11_EVT0	0x74
#define S2MPS23_PMIC_REG_ONSEQ_CTRL12_EVT0	0x75
#define S2MPS23_PMIC_REG_ONSEQ_CTRL13_EVT0	0x76
#define S2MPS23_PMIC_REG_ONSEQ_CTRL14_EVT0	0x77
#define S2MPS23_PMIC_REG_ONSEQ_CTRL15_EVT0	0x78
#define S2MPS23_PMIC_REG_ONSEQ_CTRL16_EVT0	0x79
#define S2MPS23_PMIC_REG_ONSEQ_CTRL17_EVT0	0x7A
#define S2MPS23_PMIC_REG_ONSEQ_CTRL18_EVT0	0x7B
#define S2MPS23_PMIC_REG_ONSEQ_CTRL19_EVT0	0x7C
#define S2MPS23_PMIC_REG_ONSEQ_CTRL20_EVT0	0x7D
#define S2MPS23_PMIC_REG_ONSEQ_CTRL21_EVT0	0x7E
#define S2MPS23_PMIC_REG_ONSEQ_CTRL22_EVT0	0x7F
#define S2MPS23_PMIC_REG_ONSEQ_CTRL23_EVT0	0x80
#define S2MPS23_PMIC_REG_ONSEQ_CTRL24_EVT0	0x81
#define S2MPS23_PMIC_REG_ONSEQ_CTRL25_EVT0	0x82
#define S2MPS23_PMIC_REG_ONSEQ_CTRL26_EVT0	0x83
#define S2MPS23_PMIC_REG_ONSEQ_CTRL27_EVT0	0x84
#define S2MPS23_PMIC_REG_ONSEQ_CTRL28_EVT0	0x85
#define S2MPS23_PMIC_REG_ONSEQ_CTRL29_EVT0	0x86
#define S2MPS23_PMIC_REG_ONSEQ_CTRL30_EVT0	0x87
#define S2MPS23_PMIC_REG_ONSEQ_CTRL31_EVT0	0x88
#define S2MPS23_PMIC_REG_ONSEQ_CTRL32_EVT0	0x89
#define S2MPS23_PMIC_REG_ONSEQ_CTRL33_EVT0	0x8A
#define S2MPS23_PMIC_REG_ONSEQ_CTRL34_EVT0	0x8B
#define S2MPS23_PMIC_REG_ONSEQ_CTRL35_EVT0	0x8C

#define S2MPS23_PMIC_REG_OFF_SEQ_CTRL1_EVT0	0x8D
#define S2MPS23_PMIC_REG_OFF_SEQ_CTRL2_EVT0	0x8E
#define S2MPS23_PMIC_REG_OFF_SEQ_CTRL3_EVT0	0x8F
#define S2MPS23_PMIC_REG_OFF_SEQ_CTRL4_EVT0	0x90
#define S2MPS23_PMIC_REG_OFF_SEQ_CTRL5_EVT0	0x91
#define S2MPS23_PMIC_REG_OFF_SEQ_CTRL6_EVT0	0x92
#define S2MPS23_PMIC_REG_OFF_SEQ_CTRL7_EVT0	0x93
#define S2MPS23_PMIC_REG_OFF_SEQ_CTRL8_EVT0	0x94
#define S2MPS23_PMIC_REG_OFF_SEQ_CTRL9_EVT0	0x95
#define S2MPS23_PMIC_REG_OFF_SEQ_CTRL10_EVT0	0x96
#define S2MPS23_PMIC_REG_OFF_SEQ_CTRL11_EVT0	0x97
#define S2MPS23_PMIC_REG_OFF_SEQ_CTRL12_EVT0	0x98
#define S2MPS23_PMIC_REG_OFF_SEQ_CTRL13_EVT0	0x99
#define S2MPS23_PMIC_REG_OFF_SEQ_CTRL14_EVT0	0x9A
#define S2MPS23_PMIC_REG_OFF_SEQ_CTRL15_EVT0	0x9B
#define S2MPS23_PMIC_REG_OFF_SEQ_CTRL16_EVT0	0x9C
#define S2MPS23_PMIC_REG_OFF_SEQ_CTRL17_EVT0	0x9D
#define S2MPS23_PMIC_REG_OFF_SEQ_CTRL18_EVT0	0x9E
#define S2MPS23_PMIC_REG_OFF_SEQ_CTRL19_EVT0	0x9F
#define S2MPS23_PMIC_REG_OFF_SEQ_CTRL20_EVT0	0xA0
#define S2MPS23_PMIC_REG_OFF_SEQ_CTRL21_EVT0	0xA1

#define S2MPS23_PMIC_REG_CONTROL_SEL1_EVT0	0xA2
#define S2MPS23_PMIC_REG_CONTROL_SEL2_EVT0	0xA3
#define S2MPS23_PMIC_REG_CONTROL_SEL3_EVT0	0xA4
#define S2MPS23_PMIC_REG_CONTROL_SEL4_EVT0	0xA5
#define S2MPS23_PMIC_REG_CONTROL_SEL5_EVT0	0xA6
#define S2MPS23_PMIC_REG_CONTROL_SEL6_EVT0	0xA7
#define S2MPS23_PMIC_REG_CONTROL_SEL7_EVT0	0xA8
#define S2MPS23_PMIC_REG_CONTROL_SEL8_EVT0	0xA9
#define S2MPS23_PMIC_REG_CONTROL_SEL9_EVT0	0xAA
#define S2MPS23_PMIC_REG_CONTROL_SEL10_EVT0	0xAB
#define S2MPS23_PMIC_REG_CONTROL_SEL11_EVT0	0xAC
#define S2MPS23_PMIC_REG_CONTROL_SEL12_EVT0	0xAD
#define S2MPS23_PMIC_REG_CONTROL_SEL13_EVT0	0xAE
#define S2MPS23_PMIC_REG_CONTROL_SEL14_EVT0	0xAF
#define S2MPS23_PMIC_REG_CONTROL_SEL15_EVT0	0xB0
#define S2MPS23_PMIC_REG_CONTROL_SEL16_EVT0	0xB1
#define S2MPS23_PMIC_REG_CONTROL_SEL17_EVT0	0xB2
#define S2MPS23_PMIC_REG_CONTROL_SEL18_EVT0	0xB3
#define S2MPS23_PMIC_REG_CONTROL_SEL19_EVT0	0xB4
#define S2MPS23_PMIC_REG_CONTROL_SEL20_EVT0	0xB5
#define S2MPS23_PMIC_REG_CONTROL_SEL21_EVT0	0xB6

#define S2MPS23_PMIC_REG_OFF_CTRL1_EVT0		0xB7
#define S2MPS23_PMIC_REG_OFF_CTRL2_EVT0		0xB8
#define S2MPS23_PMIC_REG_OFF_CTRL3_EVT0		0xB9
#define S2MPS23_PMIC_REG_OFF_CTRL4_EVT0		0xBA
#define S2MPS23_PMIC_REG_OFF_CTRL5_EVT0		0xBB
#define S2MPS23_PMIC_REG_SUB_CTRL_EVT0		0xBC

#define S2MPS23_PMIC_REG_AFM_WARN1_EVT0		0xBD
#define S2MPS23_PMIC_REG_AFM_WARN1_X_EVT0	0xBE
#define S2MPS23_PMIC_REG_AFM_WARN1_Y_EVT0	0xBF
#define S2MPS23_PMIC_REG_AFM_WARN1_Z_EVT0	0xC0

#define S2MPS23_PMIC_REG_BUCK_OI_EN1_EVT0	0xC1
#define S2MPS23_PMIC_REG_BUCK_OI_EN2_EVT0	0xC2
#define S2MPS23_PMIC_REG_BUCK_OI_PD_EN1_EVT0	0xC3
#define S2MPS23_PMIC_REG_BUCK_OI_PD_EN2_EVT0	0xC4
#define S2MPS23_PMIC_REG_BUCK_OI_CTRL1_EVT0	0xC5
#define S2MPS23_PMIC_REG_BUCK_OI_CTRL2_EVT0	0xC6
#define S2MPS23_PMIC_REG_BUCK_OI_CTRL3_EVT0	0xC7
#define S2MPS23_PMIC_REG_BUCK_OI_CTRL4_EVT0	0xC8
#define S2MPS23_PMIC_REG_BUCK_OI_CTRL5_EVT0	0xC9

#define S2MPS23_PMIC_REG_BUCK_OVP_EN1_EVT0	0xCC
#define S2MPS23_PMIC_REG_BUCK_OVP_EN2_EVT0	0xCD

#define S2MPS23_PMIC_REG_SEQ_CTRL_EVT0		0xCE
#define S2MPS23_PMIC_REG_CFG_PM2_EVT0		0xCF
#define S2MPS23_PMIC_REG_PSI_CTRL1_EVT0		0xD0
#define S2MPS23_PMIC_REG_PSI_CTRL2_EVT0		0xD1
#define S2MPS23_PMIC_REG_OFF_SEQ_SKIP_EVT0	0xD2
#define S2MPS23_PMIC_REG_SEL_HW_GPIO_EVT0	0xD3
#define S2MPS23_PMIC_REG_EXT_CTRL_EVT0		0xFB

/* CONTROL_SEL */
#define S2MPS23_CONTROL_SEL_NUM_EVT0		21
#define S2MPS23_CONTROL_SEL_MAX_VAL_EVT0	0xFF
#define S2MPS23_PWREN_MIF_MASK_EVT0		0x00
#define S2MPS23_PWREN_CPUCL0_MASK_EVT0		0x01
#define S2MPS23_PWREN_CPUCL1_MASK_EVT0		0x02
#define S2MPS23_PWREN_CPUCL2_MASK_EVT0		0x03
#define S2MPS23_PWREN_G3D_MASK_EVT0		0x04
#define S2MPS23_PWREN_NPU_MASK_EVT0		0x05
#define S2MPS23_PWREN_CP_MASK_EVT0 	 	0x06
#define S2MPS23_PWREN_CLK_MASK_EVT0		0x07
#define S2MPS23_PWREN_RF0_MASK_EVT0		0x08
#define S2MPS23_PWREN_RF1_MASK_EVT0		0x09
#define S2MPS23_PWREN_NFC_MASK_EVT0		0x0A
#define S2MPS23_PWREN_CPUCL0_CPUCL1_MASK_EVT0	0x0C
#define S2MPS23_PWREN_CPUCL0_CPUCL2_MASK_EVT0	0x0D
#define S2MPS23_PWREN_RF0_RF1_MASK_EVT0		0x0E
#define S2MPS23_PWREN_CLK_RF0_RF1_NFC_MASK_EVT0	0x0F

/* BUCKs 1M~8M */
#define S2MPS23_BUCK_MIN1_EVT0	300000
#define S2MPS23_BUCK_STEP1_EVT0	6250
/* BUCK 9M  */
#define S2MPS23_BUCK_MIN2_EVT0	600000
#define S2MPS23_BUCK_STEP2_EVT0	12500
/* LDOs 1M/8M/9M/10M/13M/17M */
#define S2MPS23_LDO_MIN1_EVT0	725000
#define S2MPS23_LDO_STEP1_EVT0	12500
/* LDOs 3M */
#define S2MPS23_LDO_MIN2_EVT0	425000
#define S2MPS23_LDO_STEP2_EVT0	12500
/* LDOs 4M/5M/6M/7M/18M */
#define S2MPS23_LDO_MIN3_EVT0	300000
#define S2MPS23_LDO_STEP3_EVT0	25000
/* LDOs 2M/11M/12M/14M/15M/16M/19M/20M/21M/22M/23M/24M/25M/26M/27M/
	28M/29M/30M/31M/32M */
#define S2MPS23_LDO_MIN4_EVT0	700000
#define S2MPS23_LDO_STEP4_EVT0	25000

#endif /* __LINUX_MFD_S2MPS23_REGULATOR_H */
