/* SPDX-License-Identifier: GPL-2.0-only */

#ifndef GPIO_NAMES_GEMINILAKE_H
#define GPIO_NAMES_GEMINILAKE_H

#include "gpio_groups.h"

/*
 * Names prefixed with an *asterisk are the default.
 * (if it's the first column, GPIO is the default, no matter the name)
 */

static const char *const glk_group_north_names[] = {
	"*GPIO_76",	"SVID0_ALERT_N",	"n/a",			"n/a",			"n/a",		"n/a",
	"*GPIO_77",	"SCID0_DATA",		"n/a",			"n/a",			"n/a",		"n/a",
	"*GPIO_78",	"SVID0_CLK",		"n/a",			"n/a",			"n/a",		"n/a",
	"*GPIO_79",	"SIO_SPI_0_CLK",	"ISH_SPI_0_CLK",	"n/a",			"n/a",		"n/a",
	"*GPIO_80",	"SIO_SPI_0_FS0",	"ISH_SPI_0_FS0",	"n/a",			"n/a",		"n/a",
	"*GPIO_81",	"SIO_SPI_0_FS1",	"ISH_SPI_0_FS1",	"FST_SPI_CS2_N",	"n/a",		"n/a",
	"*GPIO_82",	"SIO_SPI_0_RXD",	"ISH_SPI_0_RXD",	"n/a",			"n/a",		"n/a",
	"*GPIO_83",	"SIO_SPI_0_TXD",	"ISH_SPI_0_TXD",	"n/a",			"n/a",		"n/a",
	"*GPIO_84",	"SIO_SPI_2_CLK",	"ISH_SPI_1_CLK",	"TOUCH_SPI_CLK",	"n/a",		"n/a",
	"*GPIO_85",	"SIO_SPI_2_FS0",	"ISH_SPI_1_FS0",	"TOUCH_SPI_FS0",	"n/a",		"n/a",
	"*GPIO_86",	"SIO_SPI_2_FS1",	"ISH_SPI_1_FS1",	"TOUCH_SPI_D0",		"n/a",		"n/a",
	"*GPIO_87",	"SIO_SPI_2_FS2",	"n/a",			"TOUCH_SPI_D1",		"n/a",		"n/a",
	"*GPIO_88",	"SIO_SPI_2_RXD",	"ISH_SPI_1_RXD",	"TOUCH_SPI_D2",		"n/a",		"n/a",
	"*GPIO_89",	"SIO_SPI_2_TXD",	"ISH_SPI_1_TXD",	"TOUCH_SPI_D3",		"n/a",		"n/a",
	"*GPIO_90",	"FST_SPI_CS0_N",	"n/a",			"n/a",			"n/a",		"n/a",
	"*GPIO_91",	"FST_SPI_CS1_N",	"n/a",			"n/a",			"n/a",		"n/a",
	"*GPIO_92",	"FST_SPI_MOSI_IO0",	"n/a",			"n/a",			"n/a",		"n/a",
	"*GPIO_93",	"FST_SPI_MISO_IO1",	"n/a",			"n/a",			"n/a",		"n/a",
	"*GPIO_94",	"FST_SPI_IO2",		"n/a",			"n/a",			"n/a",		"n/a",
	"*GPIO_95",	"FST_SPI_IO_3",		"n/a",			"n/a",			"n/a",		"n/a",
	"*GPIO_96",	"FST_SPI_CLK",		"n/a",			"n/a",			"n/a",		"n/a",
	"*GPIO_97",	"FST_SPI_CLK_FB",	"n/a",			"n/a",			"n/a",		"n/a",
	"*GPIO_98",	"PMU_PLTRST_N",		"n/a",			"n/a",			"n/a",		"n/a",
	"*GPIO_99",	"PMU_PWRBTN_N",		"n/a",			"n/a",			"n/a",		"n/a",
	"*GPIO_100",	"PMU_SLP_S_3_N",	"n/a",			"n/a",			"n/a",		"n/a",
	"*GPIO_101",	"PMU_SLP_S_4_N",	"n/a",			"n/a",			"n/a",		"n/a",
	"*GPIO_102",	"SUSPWRDNACK",		"n/a",			"n/a",			"n/a",		"n/a",
	"*GPIO_103",	"EMMC_PWR_EN_N",	"n/a",			"n/a",			"n/a",		"n/a",
	"*GPIO_104",	"JTAG_TRST_N",		"n/a",			"n/a",			"n/a",		"n/a",
	"*GPIO_105",	"JTAG_TRST_N",		"n/a",			"n/a",			"n/a",		"n/a",
	"*GPIO_106",	"PMU_BATLOW_N",		"n/a",			"n/a",			"n/a",		"n/a",
	"*GPIO_107",	"PMU_RSTBTN_N",		"n/a",			"n/a",			"n/a",		"n/a",
	"*GPIO_108",	"PMU_SUSCLK",		"n/a",			"n/a",			"n/a",		"n/a",
	"*GPIO_109",	"SUS_STAT_N",		"n/a",			"n/a",			"n/a",		"n/a",
	"*GPIO_110",	"SIO_I2C5_SDA",		"ISH_I2C0_SDA",		"n/a",			"n/a",		"n/a",
	"*GPIO_111",	"SIO_I2C5_SCL",		"ISH_I2C0_SCL",		"n/a",			"n/a",		"n/a",
	"*GPIO_112",	"SIO_I2C6_SDA",		"ISH_I2C1_SDA",		"n/a",			"n/a",		"n/a",
	"*GPIO_113",	"SIO_I2C6_SCL",		"ISH_I2C1_SCL",		"n/a",			"n/a",		"n/a",
	"*GPIO_114",	"SIO_I2C7_SDA",		"ISH_I2C2_SDA",		"n/a",			"n/a",		"n/a",
	"*GPIO_115",	"SIO_I2C7_SCL",		"ISH_I2C2_SCL",		"n/a",			"n/a",		"n/a",
	"*GPIO_116",	"PCIE_WAKE0_N",		"n/a",			"n/a",			"n/a",		"n/a",
	"*GPIO_117",	"PCIE_WAKE1_N",		"n/a",			"n/a",			"n/a",		"n/a",
	"*GPIO_118",	"PCIE_WAKE2_N",		"n/a",			"n/a",			"n/a",		"n/a",
	"*GPIO_119",	"PCIE_WAKE3_N",		"n/a",			"n/a",			"n/a",		"n/a",
	"*GPIO_120",	"PCIE_CLKREQ0_N",	"n/a",			"n/a",			"n/a",		"n/a",
	"*GPIO_121",	"PCIE_CLKREQ1_N",	"n/a",			"n/a",			"n/a",		"n/a",
	"*GPIO_122",	"PCIE_CLKREQ2_N",	"n/a",			"n/a",			"n/a",		"n/a",
	"*GPIO_123",	"PCIE_CLKREQ3_N",	"n/a",			"n/a",			"n/a",		"n/a",
	"*GPIO_124",	"DDI0_DDC_SDA",		"n/a",			"n/a",			"n/a",		"n/a",
	"*GPIO_125",	"DDI0_DDC_SCL",		"n/a",			"n/a",			"n/a",		"n/a",
	"*GPIO_126",	"DDI1_DDC_SDA",		"SIO_I2C5_SDA",		"n/a",			"n/a",		"n/a",
	"*GPIO_127",	"DDI1_DDC_SCL",		"SIO_I2C5_SCL",		"n/a",			"n/a",		"n/a",
	"*GPIO_128",	"PNL0_VDDEN",		"n/a",			"n/a",			"n/a",		"n/a",
	"*GPIO_129",	"PNL0_BKLTEN",		"n/a",			"n/a",			"n/a",		"n/a",
	"*GPIO_130",	"PNL0_BKLCTL",		"n/a",			"n/a",			"n/a",		"n/a",
	"*GPIO_131",	"DDI0_HPD",		"n/a",			"n/a",			"n/a",		"n/a",
	"*GPIO_132",	"DDI1_HPD",		"n/a",			"n/a",			"n/a",		"n/a",
	"*GPIO_133",	"DDI2_HPD",		"n/a",			"n/a",			"n/a",		"n/a",
	"*GPIO_134",	"n/a",			"n/a",			"n/a",			"ISH_GPIO_10",	"n/a",
	"*GPIO_135",	"n/a",			"n/a",			"n/a",			"ISH_GPIO_11",	"n/a",
	"*GPIO_136",	"n/a",			"n/a",			"n/a",			"ISH_GPIO_12",	"n/a",
	"*GPIO_137",	"n/a",			"n/a",			"n/a",			"ISH_GPIO_13",	"n/a",
	"*GPIO_138",	"n/a",			"SIO_UART3_RXD",	"ISH_UART0_RXD",	"ISH_GPIO_14",	"SATA_GP0",
	"*GPIO_139",	"n/a",			"SIO_UART3_TXD",	"ISH_UART0_TXD",	"ISH_GPIO_15",	"SATA_GP1",
	"*GPIO_140",	"n/a",			"SIO_UART3_RTS_N",	"ISH_UART0_RTS_N",	"n/a",		"SATA_DEVSLP0",
	"*GPIO_141",	"n/a",			"SIO_UART3_CTS_N",	"SIO_UART0_CTS_N",	"n/a",		"SATA_DEVSLP1",
	"*GPIO_142",	"n/a",			"SIO_SPI_1_CLK",	"ISH_SPI_0_CLK",	"n/a",		"SATA_LE_DN",
	"*GPIO_143",	"n/a",			"SIO_SPI_1_FS0",	"ISH_SPI_0_FS0",	"JTAG2_TCK",	"n/a",
	"*GPIO_144",	"n/a",			"SIO_SPI_1_FS1",	"ISH_SPI_0_FS1",	"JTAG2_TDI",	"PNL1_VDDEN",
	"*GPIO_145",	"n/a",			"SIO_SPI_1_RXD",	"ISH_SPI_0_RXD",	"JTAG2_TMS",	"PNL1_BKLTEN",
	"*GPIO_146",	"n/a",			"SIO_SPI_1_TXD",	"ISH_SPI_0_TXD",	"JTAG2_TDO",	"PNL1_BKLTCTL",
	"*GPIO_147",	"LPC_SERIRQ",		"ESPI_RESET_N",		"n/a",			"n/a",		"n/a",
	"*GPIO_148",	"LPC_CLKOUT0",		"ESPI_CLK",		"n/a",			"n/a",		"n/a",
	"*GPIO_149",	"LPC_CLKOUT1",		"n/a",			"n/a",			"n/a",		"n/a",
	"*GPIO_150",	"LPC_AD0",		"ESPI_IO_0",		"n/a",			"n/a",		"n/a",
	"*GPIO_151",	"LPC_AD1",		"ESPI_IO_1",		"n/a",			"n/a",		"n/a",
	"*GPIO_152",	"LPC_AD2",		"ESPI_IO_2",		"n/a",			"n/a",		"n/a",
	"*GPIO_153",	"LPC_AD3",		"ESPI_IO_3",		"n/a",			"n/a",		"n/a",
	"*GPIO_154",	"LPC_CLKRUN_N",		"n/a",			"n/a",			"n/a",		"n/a",
	"*GPIO_155",	"LPC_FRAME_N",		"ESPI_CS_N",		"n/a",			"n/a",		"n/a",
};

static const char *const glk_group_northwest_names[] = {
	"*GPIO_0",	"JTAG_TCK",		"n/a",			"n/a",			"n/a",			"n/a",	"n/a",
	"*GPIO_1",	"JTAG_TRST_N",		"n/a",			"n/a",			"n/a",			"n/a",	"n/a",
	"*GPIO_2",	"JTAG_TMS",		"n/a",			"n/a",			"n/a",			"n/a",	"n/a",
	"*GPIO_3",	"JTAG_TDI",		"n/a",			"n/a",			"n/a",			"n/a",	"n/a",
	"*GPIO_4",	"JTAG_TDO",		"n/a",			"n/a",			"n/a",			"n/a",	"n/a",
	"*GPIO_5",	"JTAGX",		"n/a",			"n/a",			"n/a",			"n/a",	"n/a",
	"*GPIO_6",	"JTAG_PREQ_N",		"n/a",			"n/a",			"n/a",			"n/a",	"n/a",
	"*GPIO_7",	"JTAG_PRDY_N",		"n/a",			"n/a",			"n/a",			"n/a",	"n/a",
	"*GPIO_8",	"n/a",			"n/a",			"CNV_DEBUG_09",		"CNV_DEBUG_00",		"n/a",	"n/a",
	"*GPIO_9",	"n/a",			"n/a",			"CNV_DEBUG_10",		"CNV_DEBUG_01",		"n/a",	"n/a",
	"*GPIO_10",	"n/a",			"n/a",			"CNV_DEBUG_11",		"CNV_DEBUG_02",		"n/a",	"n/a",
	"*GPIO_11",	"n/a",			"n/a",			"CNV_DEBUG_12",		"GNV_DEBUG_03",		"n/a",	"n/a",
	"*GPIO_12",	"n/a",			"n/a",			"GNV_DEBUG_13",		"GNV_DEBUG_04",		"n/a",	"n/a",
	"*GPIO_13",	"n/a",			"n/a",			"CNV_DEBUG_14",		"CNV_DEBUG_05",		"n/a",	"n/a",
	"*GPIO_14",	"n/a",			"n/a",			"CNV_DEBUG_15",		"CNV_DEBUG_06",		"n/a",	"n/a",
	"*GPIO_15",	"n/a",			"n/a",			"CNV_DEBUG_16",		"CNV_DEBUG_07",		"n/a",	"n/a",
	"*GPIO_16",	"NA",			"n/a",			"CNV_DEBUG_17",		"CNV_DEBUG_08",		"n/a",	"n/a",
	"*GPIO_17",	"NA",			"CNV_MFUART0_RXD",	"CNV_DEBUG_00",		"n/a",			"n/a",	"n/a",
	"*GPIO_18",	"NA",			"n/a",			"CNV_MFUART0_TXD",	"CNV_DEBUG_01",		"n/a",	"n/a",
	"*GPIO_19",	"NA",			"n/a",			"CNV_MFUART0_RTS_N",	"CNV_DEBUG_02",		"n/a",	"n/a",
	"*GPIO_20",	"n/a",			"CNV_MFUART0_CTS_N",	"CNV_DEBUG_03",		"n/a",			"n/a", 	"n/a",
	"*GPIO_21",	"n/a",			"CNV_MFUART2_RXD",	"CNV_DEBUG_04",		"n/a",			"n/a", 	"n/a",
	"*GPIO_22",	"n/a",			"CNV_MFU_ART2_TXD",	"CNV_DEBUG_05",		"n/a",			"n/a", 	"n/a",
	"*GPIO_23",	"n/a",			"CNV_GNSS_PA_BLANKING",	"CNV_DEBUG_06",		"PMIC_STDBY",		"n/a", 	"n/a",
	"*GPIO_24",	"n/a",			"CNV_GNSS_FTA",		"CNV_DEBUG_07",		"PMIC_PWRGOOD",		"n/a", 	"n/a",
	"*GPIO_25",	"n/a",			"CNV_GNSS_SYSCK",	"CNV_DEBUG_08",		"PMIC_RESET_N",		"n/a", 	"n/a",
	"*GPIO_26",	"ISH_GPIO_0",		"SIO_UART1_RXD",	"ISH_UART1_RXD",	"CNV_BT_UART_RXD",	"n/a",	"n/a",
	"*GPIO_27",	"ISH_GPIO_1",		"SIO_UART1_TXD",	"ISH_UART1_TXD",	"CNV_BT_UART_TXD",	"n/a",	"n/a",
	"*GPIO_28",	"ISH_GPIO_2",		"SIO_UART1_RST_N",	"SIO_UART1_RST_N",	"CNV_BT_UART_RTS_N",	"n/a",	"n/a",
	"*GPIO_29",	"ISH_GPIO_3",		"SIO_UART1_CTS_N",	"SIO_UART1_CTS_N",	"CNV_BT_UART_CTS_N",	"n/a",	"n/a",
	"*GPIO_30",	"ISH_GPIO_4",		"SATA_GP0",		"n/a",			"n/a",			"n/a", 	"n/a",
	"*GPIO_31",	"ISH_GPIO_5",		"SATA_GP1",		"n/a",			"n/a",			"n/a", 	"n/a",
	"*GPIO_32",	"ISH_GPIO_6",		"SATA_DEVSLP0",		"n/a",			"n/a",			"n/a", 	"n/a",
	"*GPIO_33",	"ISH_GPIO_7",		"SATA_DEVSLP1",		"SUSCLK1",		"n/a",			"n/a", 	"n/a",
	"*GPIO_34",	"ISH_GPIO_8",		"SATA_LEDN",		"SUSCLK2",		"n/a",			"n/a", 	"n/a",
	"*GPIO_35",	"ISH_GPIO_9",		"n/a",			"n/a",			"SPKR",			"n/a",	"BSSB_CLK",
	"*GPIO_36",	"n/a",			"n/a",			"CNV_BTEN",		"n/a",			"n/a",	"BSSB_DI",
	"*GPIO_37",	"n/a",			"n/a",			"CNV_GNEN",		"n/a",			"n/a",	"n/a",
	"*GPIO_38",	"n/a",			"n/a",			"CNV_WFEN",		"n/a",			"n/a",	"n/a",
	"*GPIO_39",	"n/a",			"n/a",			"CNV_WCEN",		"n/a",			"n/a",	"n/a",
	"*GPIO_40",	"n/a",			"n/a",			"CNV_BT_HOST_WAKE_N",	"n/a",			"n/a",	"n/a",
	"*GPIO_41",	"n/a",			"n/a",			"CNV_GNSS_HOST_WAKEN",	"n/a",			"n/a",	"n/a",
	"*GPIO_42",	"MDSI_A_TE",		"PWM0",			"n/a",			"n/a",			"n/a", 	"n/a",
	"*GPIO_43",	"MDSI_C_TE",		"PWM1",			"n/a",			"n/a",			"n/a", 	"n/a",
	"*GPIO_44",	"USB2_OC0_N",		"PWM2",			"n/a",			"n/a",			"n/a", 	"n/a",
	"*GPIO_45",	"USB2_OC1_N",		"PWM3",			"n/a",			"n/a",			"n/a", 	"n/a",
	"*GPIO_46",	"MIPI_I2C_SDA",		"n/a",			"n/a",			"n/a",			"n/a", 	"n/a",
	"*GPIO_47",	"MIPI_I2C_SCL",		"n/a",			"n/a",			"n/a",			"n/a", 	"n/a",
	"*GPIO_48",	"PMC_I2C_SDA",		"n/a",			"n/a",			"n/a",			"n/a", 	"n/a",
	"*GPIO_49",	"PMC_I2C_SCL",		"n/a",			"n/a",			"n/a",			"n/a", 	"n/a",
	"*GPIO_50",	"SIO_I2C0_SDA",		"n/a",			"n/a",			"n/a",			"n/a", 	"n/a",
	"*GPIO_51",	"SIO_I2C0_SCL",		"n/a",			"n/a",			"n/a",			"n/a", 	"n/a",
	"*GPIO_52",	"SIO_I2C1_SDA",		"n/a",			"n/a",			"n/a",			"n/a", 	"n/a",
	"*GPIO_53",	"SIO_I2C1_SCL",		"n/a",			"n/a",			"n/a",			"n/a", 	"n/a",
	"*GPIO_54",	"SIO_I2C2_SDA",		"n/a",			"n/a",			"n/a",			"n/a", 	"n/a",
	"*GPIO_55",	"SIO_I2C2_SCL",		"n/a",			"n/a",			"n/a",			"n/a", 	"n/a",
	"*GPIO_56",	"SIO_I2C3_SDA",		"n/a",			"n/a",			"n/a",			"n/a", 	"n/a",
	"*GPIO_57",	"SIO_I2C3_SCL",		"n/a",			"n/a",			"n/a",			"n/a", 	"n/a",
	"*GPIO_58",	"SIO_I2C4_SDA",		"n/a",			"n/a",			"n/a",			"n/a", 	"n/a",
	"*GPIO_59",	"SIO_I2C4_SCL",		"n/a",			"n/a",			"n/a",			"n/a", 	"n/a",
	"*GPIO_60",	"SIO_UART0_RXD",	"ISH_UART0_RXD",	"CNV_GNSS_UART_RXD",	"n/a",			"n/a", 	"n/a",
	"*GPIO_61",	"SIO_UART0_TXD",	"ISH_UART0_TXD",	"CNV_GNSS_UART_TXD",	"n/a",			"n/a", 	"n/a",
	"*GPIO_62",	"SIO_UART0_RTS_N",	"ISH_UART0_RTS_N",	"CNV_GNSS_UART_RTS_N",	"n/a",			"n/a", 	"n/a",
	"*GPIO_63",	"SIO_UART0_CTS_N",	"ISH_UART0_CTS_N",	"CNV_GBSS_UART_CTS_N",	"n/a",			"n/a", 	"n/a",
	"*GPIO_64",	"SIO_UART2_RXD",	"ISH_UART2_RXD",	"CNV_MFUA_RT1_RXD",	"n/a",			"n/a", 	"n/a",
	"*GPIO_65",	"SIO_UART2_TXD",	"ISH_UART2_TXD",	"CNV_MFUA_RT1_TXD",	"n/a",			"n/a", 	"n/a",
	"*GPIO_66",	"SIO_UART2_RTS_N",	"ISH_UART2_RTS_N",	"CNV_MFUA_RT1_RTS_N",	"n/a",			"n/a", 	"n/a",
	"*GPIO_67",	"SIO_UART2_CTS_N",	"ISH_UART2_CTS_N",	"CNV_MFUA_RT1_CTS_N",	"n/a",			"n/a", 	"n/a",
	"*GPIO_68",	"PMC_SPI_DS0",		"n/a",			"n/a",			"n/a",			"n/a", 	"n/a",
	"*GPIO_69",	"PMC_SPI_DS1",		"n/a",			"n/a",			"n/a",			"n/a", 	"n/a",
	"*GPIO_70",	"PMC_SPI_FS2",		"n/a",			"n/a",			"n/a",			"n/a", 	"n/a",
	"*GPIO_71",	"PMC_SPI_RXD",		"n/a",			"n/a",			"n/a",			"n/a", 	"n/a",
	"*GPIO_72",	"PMC_SPI_TXD",		"n/a",			"n/a",			"n/a",			"n/a", 	"n/a",
	"*GPIO_73",	"PMC_SPI_CLK",		"n/a",			"n/a",			"n/a",			"n/a", 	"n/a",
	"*GPIO_74",	"THERMTRIP_N",		"n/a",			"n/a",			"n/a",			"n/a", 	"n/a",
	"*GPIO_75",	"PROCHOT_N",		"n/a",			"n/a",			"n/a",			"n/a", 	"n/a",
	"*GPIO_211",	"EMMC_RST_N",		"n/a",			"n/a",			"n/a",			"n/a", 	"n/a",
	"*GPIO_212",	"n/a",			"n/a",			"n/a",			"n/a",			"n/a", 	"n/a",
	"*GPIO_213",	"n/a",			"n/a",			"n/a",			"n/a",			"n/a", 	"n/a",
	"*GPIO_214",	"n/a",			"n/a",			"n/a",			"n/a",			"n/a", 	"n/a",
};

static const char *const glk_group_audio_names[] = {
	"*GPIO_156",	"AVS_I2S0_MCLK",	"n/a",			"n/a",
	"*GPIO_157",	"AVS_I2S0_BCLK",	"n/a",			"n/a",
	"*GPIO_158",	"AVS_I2S0_WS_SYNC",	"n/a",			"n/a",
	"*GPIO_159",	"AVS_I2S0_SDI",		"n/a",			"n/a",
	"*GPIO_160",	"AVS_I2S0_SDO",		"n/a",			"n/a",
	"*GPIO_161",	"AVS_I2S1_MCLK",	"n/a",			"n/a",
	"*GPIO_162",	"AVS_I2S1_BCLK",	"n/a",			"CNV_BT_I2S_BCLK",
	"*GPIO_163",	"AVS_I2S1_WS_SYNC",	"n/a",			"CNV_BT_I2S_WS_SYNC",
	"*GPIO_164",	"AVS_I2S1_SDI",		"n/a",			"CNV_BT_I2S_SD1",
	"*GPIO_165",	"AVS_I2S1_SDO",		"n/a",			"CNV_BT_I2S_SD0",
	"*GPIO_166",	"AVS_HDA_B_CLK",	"AVS_I2S2_BCLK",	"n/a",
	"*GPIO_167",	"AVS_HDA_WS_SYNC",	"AVS_I2S2_WS_SYNC",	"n/a",
	"*GPIO_168",	"AVS_HDS_SDI",		"AVS_I2S2_SDI",		"n/a",
	"*GPIO_169",	"AVS_HDA_SDO",		"AVS_I2S2_SDO",		"n/a",
	"*GPIO_170",	"AVS_HDA_RST_N",	"AVS_I2S1_MCLK",	"n/a",
	"*GPIO_171",	"AVS_DMIC_CLK_A1",	"n/a",			"n/a",
	"*GPIO_172",	"AVS_DMIC_CLK_B1",	"n/a",			"n/a",
	"*GPIO_173",	"AVS_DMIC_DATA_1",	"n/a",			"n/a",
	"*GPIO_174",	"AVS_DMIC_CLK_AB2",	"n/a",			"n/a",
	"*GPIO_175",	"AVS_DMIC_DATA_2",	"n/a",			"n/a",
};

static const char *const glk_group_scc_names[] = {
	"*GPIO_176",	"SMB_ALERT_N",		"n/a",		"n/a",
	"*GPIO_177",	"SMB_CLK",		"SIO_I2C7_SCL",	"n/a",
	"*GPIO_178",	"SMB_DATA",		"SIO_I2C7_SDA",	"n/a",
	"*GPIO_187",	"SDCARD_LVL_WP",	"n/a",		"n/a",
	"*GPIO_179",	"SDACARD_CLK",		"n/a",		"n/a",
	"GPIO_180",    "SDCARD_CLK_FB",	"n/a",		"n/a",
	"*GPIO_181",	"SDCARD_D0",		"n/a",		"n/a",
	"*GPIO_182",	"SDCARD_D1",		"n/a",		"n/a",
	"*GPIO_183",	"SDCARD_D2",		"n/a",		"n/a",
	"*GPIO_184",	"SDCARD_D3",		"n/a",		"n/a",
	"*GPIO_185",	"SDCARD_CMD",		"n/a",		"n/a",
	"*GPIO_186",	"SDCARD_CD_N",		"n/a",		"n/a",
	"*GPIO_188",	"SDCARD_PWR_DWN_N",	"n/a",		"n/a",
	"*GPIO_210",	"n/a",			"n/a",		"n/a",
	"*GPIO_189",	"OSC_CLK_OUT_0",	"n/a",		"n/a",
	"*GPIO_190",	"OSC_CLK_OUT_1",	"n/a",		"n/a",
	"*GPIO_191",	"CNV_BRI_DT",		"n/a",		"SIO_UART1_RTS_N",
	"*GPIO_192",	"CNV_BRI_RSP",		"n/a",		"SIO_UART1_RXD",
	"*GPIO_193",	"CNV_RGI_DT",		"n/a",		"SIO_UART1_TXD",
	"*GPIO_194",	"CNV_RGI_RSP",		"n/a",		"SIO_UART1_CTS_N",
	"*GPIO_195",	"CNV_RF_RESET_N",	"n/a",		"AVS_I2S1_WS_SYNC",
	"*GPIO_196",	"XTAL_CLKREQ",		"n/a",		"AVS_I2S1_SDO",
	"GPIO_197",	"SDIO_CLK_FB",	"n/a",		"n/a",
	"*GPIO_198",	"EMMC_CLK",		"n/a",		"n/a",
	"GPIO_199",	"EMMC_D0",	"n/a",		"n/a",
	"*GPIO_200",	"EMMC_D0",		"n/a",		"n/a",
	"*GPIO_201",	"EMMC_D1",		"n/a",		"n/a",
	"*GPIO_202",	"EMMC_D2",		"n/a",		"n/a",
	"*GPIO_203",	"EMMC_D3",		"n/a",		"n/a",
	"*GPIO_204",	"EMMC_D4",		"n/a",		"n/a",
	"*GPIO_205",	"EMMC_D5",		"n/a",		"n/a",
	"*GPIO_206",	"EMMC_D6",		"n/a",		"n/a",
	"*GPIO_207",	"EMMC_D7",		"n/a",		"n/a",
	"*GPIO_208",	"EMMC_CMD",		"n/a",		"n/a",
	"*GPIO_209",	"EMMC_RCLK",		"n/a",		"n/a",
};

static const struct gpio_group glk_group_north = {
	.display	= "------- GPIO Group North -------",
	.pad_count	= ARRAY_SIZE(glk_group_north_names) / 6,
	.func_count	= 6,
	.pad_names	= glk_group_north_names,
};

static const struct gpio_group *const glk_community_north_groups[] = {
	&glk_group_north,
};

static const struct gpio_community glk_community_north = {
	.name		= "--- GPIO Community North ---",
	.pcr_port_id	= 0xc5,
	.group_count	= ARRAY_SIZE(glk_community_north_groups),
	.groups		= glk_community_north_groups,
};

static const struct gpio_group glk_group_northwest = {
	.display	= "------- GPIO Group NorthWest -------",
	.pad_count	= ARRAY_SIZE(glk_group_northwest_names) / 7,
	.func_count	= 7,
	.pad_names	= glk_group_northwest_names,
};

static const struct gpio_group *const glk_community_northwest_groups[] = {
	&glk_group_northwest,
};

static const struct gpio_community glk_community_northwest = {
	.name		= "------- GPIO Community NorthWest -------",
	.pcr_port_id	= 0xc4,
	.group_count	= ARRAY_SIZE(glk_community_northwest_groups),
	.groups		= glk_community_northwest_groups,
};

static const struct gpio_group glk_group_audio = {
	.display	= "----- GPIO Group Audio -----",
	.pad_count	= ARRAY_SIZE(glk_group_audio_names) / 4,
	.func_count	= 4,
	.pad_names	= glk_group_audio_names,
};

static const struct gpio_group *const glk_community_audio_groups[] = {
	&glk_group_audio,
};

static const struct gpio_community glk_community_audio = {
	.name		= "--- GPIO Community Audio ---",
	.pcr_port_id	= 0xc9,
	.group_count	= ARRAY_SIZE(glk_community_audio_groups),
	.groups		= glk_community_audio_groups,
};

static const struct gpio_group glk_group_scc = {
	.display	= "----- GPIO Group SCC -----",
	.pad_count	= ARRAY_SIZE(glk_group_scc_names) / 4,
	.func_count	= 4,
	.pad_names	= glk_group_scc_names,
};

static const struct gpio_group *const glk_community_scc_groups[] = {
	&glk_group_scc,
};

static const struct gpio_community glk_community_scc = {
	.name		= "--- GPIO Community SCC ---",
	.pcr_port_id	= 0xc8,
	.group_count	= ARRAY_SIZE(glk_community_scc_groups),
	.groups		= glk_community_scc_groups,
};

static const struct gpio_community *const glk_communities[] = {
	&glk_community_northwest, &glk_community_north,
	&glk_community_audio, &glk_community_scc,
};

#endif
