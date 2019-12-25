/*******************************************************************************
* File Name: cyfitter.h
* 
* PSoC Creator  4.2
*
* Description:
* 
* This file is automatically generated by PSoC Creator.
*
********************************************************************************
* Copyright (c) 2007-2018 Cypress Semiconductor.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
********************************************************************************/

#ifndef INCLUDED_CYFITTER_H
#define INCLUDED_CYFITTER_H
#include "cydevice_trm.h"

/* I2C */
#define I2C_SCB__CTRL CYREG_SCB1_CTRL
#define I2C_SCB__EZ_DATA0 CYREG_SCB1_EZ_DATA0
#define I2C_SCB__EZ_DATA1 CYREG_SCB1_EZ_DATA1
#define I2C_SCB__EZ_DATA10 CYREG_SCB1_EZ_DATA10
#define I2C_SCB__EZ_DATA11 CYREG_SCB1_EZ_DATA11
#define I2C_SCB__EZ_DATA12 CYREG_SCB1_EZ_DATA12
#define I2C_SCB__EZ_DATA13 CYREG_SCB1_EZ_DATA13
#define I2C_SCB__EZ_DATA14 CYREG_SCB1_EZ_DATA14
#define I2C_SCB__EZ_DATA15 CYREG_SCB1_EZ_DATA15
#define I2C_SCB__EZ_DATA16 CYREG_SCB1_EZ_DATA16
#define I2C_SCB__EZ_DATA17 CYREG_SCB1_EZ_DATA17
#define I2C_SCB__EZ_DATA18 CYREG_SCB1_EZ_DATA18
#define I2C_SCB__EZ_DATA19 CYREG_SCB1_EZ_DATA19
#define I2C_SCB__EZ_DATA2 CYREG_SCB1_EZ_DATA2
#define I2C_SCB__EZ_DATA20 CYREG_SCB1_EZ_DATA20
#define I2C_SCB__EZ_DATA21 CYREG_SCB1_EZ_DATA21
#define I2C_SCB__EZ_DATA22 CYREG_SCB1_EZ_DATA22
#define I2C_SCB__EZ_DATA23 CYREG_SCB1_EZ_DATA23
#define I2C_SCB__EZ_DATA24 CYREG_SCB1_EZ_DATA24
#define I2C_SCB__EZ_DATA25 CYREG_SCB1_EZ_DATA25
#define I2C_SCB__EZ_DATA26 CYREG_SCB1_EZ_DATA26
#define I2C_SCB__EZ_DATA27 CYREG_SCB1_EZ_DATA27
#define I2C_SCB__EZ_DATA28 CYREG_SCB1_EZ_DATA28
#define I2C_SCB__EZ_DATA29 CYREG_SCB1_EZ_DATA29
#define I2C_SCB__EZ_DATA3 CYREG_SCB1_EZ_DATA3
#define I2C_SCB__EZ_DATA30 CYREG_SCB1_EZ_DATA30
#define I2C_SCB__EZ_DATA31 CYREG_SCB1_EZ_DATA31
#define I2C_SCB__EZ_DATA4 CYREG_SCB1_EZ_DATA4
#define I2C_SCB__EZ_DATA5 CYREG_SCB1_EZ_DATA5
#define I2C_SCB__EZ_DATA6 CYREG_SCB1_EZ_DATA6
#define I2C_SCB__EZ_DATA7 CYREG_SCB1_EZ_DATA7
#define I2C_SCB__EZ_DATA8 CYREG_SCB1_EZ_DATA8
#define I2C_SCB__EZ_DATA9 CYREG_SCB1_EZ_DATA9
#define I2C_SCB__I2C_CFG CYREG_SCB1_I2C_CFG
#define I2C_SCB__I2C_CTRL CYREG_SCB1_I2C_CTRL
#define I2C_SCB__I2C_M_CMD CYREG_SCB1_I2C_M_CMD
#define I2C_SCB__I2C_S_CMD CYREG_SCB1_I2C_S_CMD
#define I2C_SCB__I2C_STATUS CYREG_SCB1_I2C_STATUS
#define I2C_SCB__INTR_CAUSE CYREG_SCB1_INTR_CAUSE
#define I2C_SCB__INTR_I2C_EC CYREG_SCB1_INTR_I2C_EC
#define I2C_SCB__INTR_I2C_EC_MASK CYREG_SCB1_INTR_I2C_EC_MASK
#define I2C_SCB__INTR_I2C_EC_MASKED CYREG_SCB1_INTR_I2C_EC_MASKED
#define I2C_SCB__INTR_M CYREG_SCB1_INTR_M
#define I2C_SCB__INTR_M_MASK CYREG_SCB1_INTR_M_MASK
#define I2C_SCB__INTR_M_MASKED CYREG_SCB1_INTR_M_MASKED
#define I2C_SCB__INTR_M_SET CYREG_SCB1_INTR_M_SET
#define I2C_SCB__INTR_RX CYREG_SCB1_INTR_RX
#define I2C_SCB__INTR_RX_MASK CYREG_SCB1_INTR_RX_MASK
#define I2C_SCB__INTR_RX_MASKED CYREG_SCB1_INTR_RX_MASKED
#define I2C_SCB__INTR_RX_SET CYREG_SCB1_INTR_RX_SET
#define I2C_SCB__INTR_S CYREG_SCB1_INTR_S
#define I2C_SCB__INTR_S_MASK CYREG_SCB1_INTR_S_MASK
#define I2C_SCB__INTR_S_MASKED CYREG_SCB1_INTR_S_MASKED
#define I2C_SCB__INTR_S_SET CYREG_SCB1_INTR_S_SET
#define I2C_SCB__INTR_SPI_EC CYREG_SCB1_INTR_SPI_EC
#define I2C_SCB__INTR_SPI_EC_MASK CYREG_SCB1_INTR_SPI_EC_MASK
#define I2C_SCB__INTR_SPI_EC_MASKED CYREG_SCB1_INTR_SPI_EC_MASKED
#define I2C_SCB__INTR_TX CYREG_SCB1_INTR_TX
#define I2C_SCB__INTR_TX_MASK CYREG_SCB1_INTR_TX_MASK
#define I2C_SCB__INTR_TX_MASKED CYREG_SCB1_INTR_TX_MASKED
#define I2C_SCB__INTR_TX_SET CYREG_SCB1_INTR_TX_SET
#define I2C_SCB__RX_CTRL CYREG_SCB1_RX_CTRL
#define I2C_SCB__RX_FIFO_CTRL CYREG_SCB1_RX_FIFO_CTRL
#define I2C_SCB__RX_FIFO_RD CYREG_SCB1_RX_FIFO_RD
#define I2C_SCB__RX_FIFO_RD_SILENT CYREG_SCB1_RX_FIFO_RD_SILENT
#define I2C_SCB__RX_FIFO_STATUS CYREG_SCB1_RX_FIFO_STATUS
#define I2C_SCB__RX_MATCH CYREG_SCB1_RX_MATCH
#define I2C_SCB__SPI_CTRL CYREG_SCB1_SPI_CTRL
#define I2C_SCB__SPI_STATUS CYREG_SCB1_SPI_STATUS
#define I2C_SCB__SS0_POSISTION 0u
#define I2C_SCB__SS1_POSISTION 1u
#define I2C_SCB__SS2_POSISTION 2u
#define I2C_SCB__SS3_POSISTION 3u
#define I2C_SCB__STATUS CYREG_SCB1_STATUS
#define I2C_SCB__TX_CTRL CYREG_SCB1_TX_CTRL
#define I2C_SCB__TX_FIFO_CTRL CYREG_SCB1_TX_FIFO_CTRL
#define I2C_SCB__TX_FIFO_STATUS CYREG_SCB1_TX_FIFO_STATUS
#define I2C_SCB__TX_FIFO_WR CYREG_SCB1_TX_FIFO_WR
#define I2C_SCB__UART_CTRL CYREG_SCB1_UART_CTRL
#define I2C_SCB__UART_FLOW_CTRL CYREG_SCB1_UART_FLOW_CTRL
#define I2C_SCB__UART_RX_CTRL CYREG_SCB1_UART_RX_CTRL
#define I2C_SCB__UART_RX_STATUS CYREG_SCB1_UART_RX_STATUS
#define I2C_SCB__UART_TX_CTRL CYREG_SCB1_UART_TX_CTRL
#define I2C_SCB_IRQ__INTC_CLR_EN_REG CYREG_CM0_ICER
#define I2C_SCB_IRQ__INTC_CLR_PD_REG CYREG_CM0_ICPR
#define I2C_SCB_IRQ__INTC_MASK 0x400u
#define I2C_SCB_IRQ__INTC_NUMBER 10u
#define I2C_SCB_IRQ__INTC_PRIOR_MASK 0xC00000u
#define I2C_SCB_IRQ__INTC_PRIOR_NUM 3u
#define I2C_SCB_IRQ__INTC_PRIOR_REG CYREG_CM0_IPR2
#define I2C_SCB_IRQ__INTC_SET_EN_REG CYREG_CM0_ISER
#define I2C_SCB_IRQ__INTC_SET_PD_REG CYREG_CM0_ISPR
#define I2C_SCBCLK__CTRL_REGISTER CYREG_PERI_PCLK_CTL2
#define I2C_SCBCLK__DIV_ID 0x00000042u
#define I2C_SCBCLK__DIV_REGISTER CYREG_PERI_DIV_16_CTL2
#define I2C_SCBCLK__PA_DIV_ID 0x000000FFu
#define I2C_scl__0__DR CYREG_GPIO_PRT3_DR
#define I2C_scl__0__DR_CLR CYREG_GPIO_PRT3_DR_CLR
#define I2C_scl__0__DR_INV CYREG_GPIO_PRT3_DR_INV
#define I2C_scl__0__DR_SET CYREG_GPIO_PRT3_DR_SET
#define I2C_scl__0__HSIOM CYREG_HSIOM_PORT_SEL3
#define I2C_scl__0__HSIOM_GPIO 0u
#define I2C_scl__0__HSIOM_I2C 14u
#define I2C_scl__0__HSIOM_I2C_SCL 14u
#define I2C_scl__0__HSIOM_MASK 0x00F00000u
#define I2C_scl__0__HSIOM_SHIFT 20u
#define I2C_scl__0__HSIOM_UART 9u
#define I2C_scl__0__HSIOM_UART_TX 9u
#define I2C_scl__0__INTCFG CYREG_GPIO_PRT3_INTR_CFG
#define I2C_scl__0__INTR CYREG_GPIO_PRT3_INTR
#define I2C_scl__0__INTR_CFG CYREG_GPIO_PRT3_INTR_CFG
#define I2C_scl__0__INTSTAT CYREG_GPIO_PRT3_INTR
#define I2C_scl__0__MASK 0x20u
#define I2C_scl__0__PA__CFG0 CYREG_UDB_PA3_CFG0
#define I2C_scl__0__PA__CFG1 CYREG_UDB_PA3_CFG1
#define I2C_scl__0__PA__CFG10 CYREG_UDB_PA3_CFG10
#define I2C_scl__0__PA__CFG11 CYREG_UDB_PA3_CFG11
#define I2C_scl__0__PA__CFG12 CYREG_UDB_PA3_CFG12
#define I2C_scl__0__PA__CFG13 CYREG_UDB_PA3_CFG13
#define I2C_scl__0__PA__CFG14 CYREG_UDB_PA3_CFG14
#define I2C_scl__0__PA__CFG2 CYREG_UDB_PA3_CFG2
#define I2C_scl__0__PA__CFG3 CYREG_UDB_PA3_CFG3
#define I2C_scl__0__PA__CFG4 CYREG_UDB_PA3_CFG4
#define I2C_scl__0__PA__CFG5 CYREG_UDB_PA3_CFG5
#define I2C_scl__0__PA__CFG6 CYREG_UDB_PA3_CFG6
#define I2C_scl__0__PA__CFG7 CYREG_UDB_PA3_CFG7
#define I2C_scl__0__PA__CFG8 CYREG_UDB_PA3_CFG8
#define I2C_scl__0__PA__CFG9 CYREG_UDB_PA3_CFG9
#define I2C_scl__0__PC CYREG_GPIO_PRT3_PC
#define I2C_scl__0__PC2 CYREG_GPIO_PRT3_PC2
#define I2C_scl__0__PORT 3u
#define I2C_scl__0__PS CYREG_GPIO_PRT3_PS
#define I2C_scl__0__SHIFT 5u
#define I2C_scl__DR CYREG_GPIO_PRT3_DR
#define I2C_scl__DR_CLR CYREG_GPIO_PRT3_DR_CLR
#define I2C_scl__DR_INV CYREG_GPIO_PRT3_DR_INV
#define I2C_scl__DR_SET CYREG_GPIO_PRT3_DR_SET
#define I2C_scl__INTCFG CYREG_GPIO_PRT3_INTR_CFG
#define I2C_scl__INTR CYREG_GPIO_PRT3_INTR
#define I2C_scl__INTR_CFG CYREG_GPIO_PRT3_INTR_CFG
#define I2C_scl__INTSTAT CYREG_GPIO_PRT3_INTR
#define I2C_scl__MASK 0x20u
#define I2C_scl__PA__CFG0 CYREG_UDB_PA3_CFG0
#define I2C_scl__PA__CFG1 CYREG_UDB_PA3_CFG1
#define I2C_scl__PA__CFG10 CYREG_UDB_PA3_CFG10
#define I2C_scl__PA__CFG11 CYREG_UDB_PA3_CFG11
#define I2C_scl__PA__CFG12 CYREG_UDB_PA3_CFG12
#define I2C_scl__PA__CFG13 CYREG_UDB_PA3_CFG13
#define I2C_scl__PA__CFG14 CYREG_UDB_PA3_CFG14
#define I2C_scl__PA__CFG2 CYREG_UDB_PA3_CFG2
#define I2C_scl__PA__CFG3 CYREG_UDB_PA3_CFG3
#define I2C_scl__PA__CFG4 CYREG_UDB_PA3_CFG4
#define I2C_scl__PA__CFG5 CYREG_UDB_PA3_CFG5
#define I2C_scl__PA__CFG6 CYREG_UDB_PA3_CFG6
#define I2C_scl__PA__CFG7 CYREG_UDB_PA3_CFG7
#define I2C_scl__PA__CFG8 CYREG_UDB_PA3_CFG8
#define I2C_scl__PA__CFG9 CYREG_UDB_PA3_CFG9
#define I2C_scl__PC CYREG_GPIO_PRT3_PC
#define I2C_scl__PC2 CYREG_GPIO_PRT3_PC2
#define I2C_scl__PORT 3u
#define I2C_scl__PS CYREG_GPIO_PRT3_PS
#define I2C_scl__SHIFT 5u
#define I2C_sda__0__DR CYREG_GPIO_PRT3_DR
#define I2C_sda__0__DR_CLR CYREG_GPIO_PRT3_DR_CLR
#define I2C_sda__0__DR_INV CYREG_GPIO_PRT3_DR_INV
#define I2C_sda__0__DR_SET CYREG_GPIO_PRT3_DR_SET
#define I2C_sda__0__HSIOM CYREG_HSIOM_PORT_SEL3
#define I2C_sda__0__HSIOM_GPIO 0u
#define I2C_sda__0__HSIOM_I2C 14u
#define I2C_sda__0__HSIOM_I2C_SDA 14u
#define I2C_sda__0__HSIOM_MASK 0x000F0000u
#define I2C_sda__0__HSIOM_SHIFT 16u
#define I2C_sda__0__HSIOM_UART 9u
#define I2C_sda__0__HSIOM_UART_RX 9u
#define I2C_sda__0__INTCFG CYREG_GPIO_PRT3_INTR_CFG
#define I2C_sda__0__INTR CYREG_GPIO_PRT3_INTR
#define I2C_sda__0__INTR_CFG CYREG_GPIO_PRT3_INTR_CFG
#define I2C_sda__0__INTSTAT CYREG_GPIO_PRT3_INTR
#define I2C_sda__0__MASK 0x10u
#define I2C_sda__0__PA__CFG0 CYREG_UDB_PA3_CFG0
#define I2C_sda__0__PA__CFG1 CYREG_UDB_PA3_CFG1
#define I2C_sda__0__PA__CFG10 CYREG_UDB_PA3_CFG10
#define I2C_sda__0__PA__CFG11 CYREG_UDB_PA3_CFG11
#define I2C_sda__0__PA__CFG12 CYREG_UDB_PA3_CFG12
#define I2C_sda__0__PA__CFG13 CYREG_UDB_PA3_CFG13
#define I2C_sda__0__PA__CFG14 CYREG_UDB_PA3_CFG14
#define I2C_sda__0__PA__CFG2 CYREG_UDB_PA3_CFG2
#define I2C_sda__0__PA__CFG3 CYREG_UDB_PA3_CFG3
#define I2C_sda__0__PA__CFG4 CYREG_UDB_PA3_CFG4
#define I2C_sda__0__PA__CFG5 CYREG_UDB_PA3_CFG5
#define I2C_sda__0__PA__CFG6 CYREG_UDB_PA3_CFG6
#define I2C_sda__0__PA__CFG7 CYREG_UDB_PA3_CFG7
#define I2C_sda__0__PA__CFG8 CYREG_UDB_PA3_CFG8
#define I2C_sda__0__PA__CFG9 CYREG_UDB_PA3_CFG9
#define I2C_sda__0__PC CYREG_GPIO_PRT3_PC
#define I2C_sda__0__PC2 CYREG_GPIO_PRT3_PC2
#define I2C_sda__0__PORT 3u
#define I2C_sda__0__PS CYREG_GPIO_PRT3_PS
#define I2C_sda__0__SHIFT 4u
#define I2C_sda__DR CYREG_GPIO_PRT3_DR
#define I2C_sda__DR_CLR CYREG_GPIO_PRT3_DR_CLR
#define I2C_sda__DR_INV CYREG_GPIO_PRT3_DR_INV
#define I2C_sda__DR_SET CYREG_GPIO_PRT3_DR_SET
#define I2C_sda__INTCFG CYREG_GPIO_PRT3_INTR_CFG
#define I2C_sda__INTR CYREG_GPIO_PRT3_INTR
#define I2C_sda__INTR_CFG CYREG_GPIO_PRT3_INTR_CFG
#define I2C_sda__INTSTAT CYREG_GPIO_PRT3_INTR
#define I2C_sda__MASK 0x10u
#define I2C_sda__PA__CFG0 CYREG_UDB_PA3_CFG0
#define I2C_sda__PA__CFG1 CYREG_UDB_PA3_CFG1
#define I2C_sda__PA__CFG10 CYREG_UDB_PA3_CFG10
#define I2C_sda__PA__CFG11 CYREG_UDB_PA3_CFG11
#define I2C_sda__PA__CFG12 CYREG_UDB_PA3_CFG12
#define I2C_sda__PA__CFG13 CYREG_UDB_PA3_CFG13
#define I2C_sda__PA__CFG14 CYREG_UDB_PA3_CFG14
#define I2C_sda__PA__CFG2 CYREG_UDB_PA3_CFG2
#define I2C_sda__PA__CFG3 CYREG_UDB_PA3_CFG3
#define I2C_sda__PA__CFG4 CYREG_UDB_PA3_CFG4
#define I2C_sda__PA__CFG5 CYREG_UDB_PA3_CFG5
#define I2C_sda__PA__CFG6 CYREG_UDB_PA3_CFG6
#define I2C_sda__PA__CFG7 CYREG_UDB_PA3_CFG7
#define I2C_sda__PA__CFG8 CYREG_UDB_PA3_CFG8
#define I2C_sda__PA__CFG9 CYREG_UDB_PA3_CFG9
#define I2C_sda__PC CYREG_GPIO_PRT3_PC
#define I2C_sda__PC2 CYREG_GPIO_PRT3_PC2
#define I2C_sda__PORT 3u
#define I2C_sda__PS CYREG_GPIO_PRT3_PS
#define I2C_sda__SHIFT 4u

/* PWM */
#define PWM_1_cy_m0s8_tcpwm_1__CC CYREG_TCPWM_CNT3_CC
#define PWM_1_cy_m0s8_tcpwm_1__CC_BUFF CYREG_TCPWM_CNT3_CC_BUFF
#define PWM_1_cy_m0s8_tcpwm_1__COUNTER CYREG_TCPWM_CNT3_COUNTER
#define PWM_1_cy_m0s8_tcpwm_1__CTRL CYREG_TCPWM_CNT3_CTRL
#define PWM_1_cy_m0s8_tcpwm_1__INTR CYREG_TCPWM_CNT3_INTR
#define PWM_1_cy_m0s8_tcpwm_1__INTR_MASK CYREG_TCPWM_CNT3_INTR_MASK
#define PWM_1_cy_m0s8_tcpwm_1__INTR_MASKED CYREG_TCPWM_CNT3_INTR_MASKED
#define PWM_1_cy_m0s8_tcpwm_1__INTR_SET CYREG_TCPWM_CNT3_INTR_SET
#define PWM_1_cy_m0s8_tcpwm_1__PERIOD CYREG_TCPWM_CNT3_PERIOD
#define PWM_1_cy_m0s8_tcpwm_1__PERIOD_BUFF CYREG_TCPWM_CNT3_PERIOD_BUFF
#define PWM_1_cy_m0s8_tcpwm_1__STATUS CYREG_TCPWM_CNT3_STATUS
#define PWM_1_cy_m0s8_tcpwm_1__TCPWM_CMD CYREG_TCPWM_CMD
#define PWM_1_cy_m0s8_tcpwm_1__TCPWM_CMDCAPTURE_MASK 0x08u
#define PWM_1_cy_m0s8_tcpwm_1__TCPWM_CMDCAPTURE_SHIFT 3u
#define PWM_1_cy_m0s8_tcpwm_1__TCPWM_CMDRELOAD_MASK 0x800u
#define PWM_1_cy_m0s8_tcpwm_1__TCPWM_CMDRELOAD_SHIFT 11u
#define PWM_1_cy_m0s8_tcpwm_1__TCPWM_CMDSTART_MASK 0x8000000u
#define PWM_1_cy_m0s8_tcpwm_1__TCPWM_CMDSTART_SHIFT 27u
#define PWM_1_cy_m0s8_tcpwm_1__TCPWM_CMDSTOP_MASK 0x80000u
#define PWM_1_cy_m0s8_tcpwm_1__TCPWM_CMDSTOP_SHIFT 19u
#define PWM_1_cy_m0s8_tcpwm_1__TCPWM_CTRL CYREG_TCPWM_CTRL
#define PWM_1_cy_m0s8_tcpwm_1__TCPWM_CTRL_MASK 0x08u
#define PWM_1_cy_m0s8_tcpwm_1__TCPWM_CTRL_SHIFT 3u
#define PWM_1_cy_m0s8_tcpwm_1__TCPWM_INTR_CAUSE CYREG_TCPWM_INTR_CAUSE
#define PWM_1_cy_m0s8_tcpwm_1__TCPWM_INTR_CAUSE_MASK 0x08u
#define PWM_1_cy_m0s8_tcpwm_1__TCPWM_INTR_CAUSE_SHIFT 3u
#define PWM_1_cy_m0s8_tcpwm_1__TCPWM_NUMBER 3u
#define PWM_1_cy_m0s8_tcpwm_1__TR_CTRL0 CYREG_TCPWM_CNT3_TR_CTRL0
#define PWM_1_cy_m0s8_tcpwm_1__TR_CTRL1 CYREG_TCPWM_CNT3_TR_CTRL1
#define PWM_1_cy_m0s8_tcpwm_1__TR_CTRL2 CYREG_TCPWM_CNT3_TR_CTRL2
#define PWM_cy_m0s8_tcpwm_1__CC CYREG_TCPWM_CNT0_CC
#define PWM_cy_m0s8_tcpwm_1__CC_BUFF CYREG_TCPWM_CNT0_CC_BUFF
#define PWM_cy_m0s8_tcpwm_1__COUNTER CYREG_TCPWM_CNT0_COUNTER
#define PWM_cy_m0s8_tcpwm_1__CTRL CYREG_TCPWM_CNT0_CTRL
#define PWM_cy_m0s8_tcpwm_1__INTR CYREG_TCPWM_CNT0_INTR
#define PWM_cy_m0s8_tcpwm_1__INTR_MASK CYREG_TCPWM_CNT0_INTR_MASK
#define PWM_cy_m0s8_tcpwm_1__INTR_MASKED CYREG_TCPWM_CNT0_INTR_MASKED
#define PWM_cy_m0s8_tcpwm_1__INTR_SET CYREG_TCPWM_CNT0_INTR_SET
#define PWM_cy_m0s8_tcpwm_1__PERIOD CYREG_TCPWM_CNT0_PERIOD
#define PWM_cy_m0s8_tcpwm_1__PERIOD_BUFF CYREG_TCPWM_CNT0_PERIOD_BUFF
#define PWM_cy_m0s8_tcpwm_1__STATUS CYREG_TCPWM_CNT0_STATUS
#define PWM_cy_m0s8_tcpwm_1__TCPWM_CMD CYREG_TCPWM_CMD
#define PWM_cy_m0s8_tcpwm_1__TCPWM_CMDCAPTURE_MASK 0x01u
#define PWM_cy_m0s8_tcpwm_1__TCPWM_CMDCAPTURE_SHIFT 0u
#define PWM_cy_m0s8_tcpwm_1__TCPWM_CMDRELOAD_MASK 0x100u
#define PWM_cy_m0s8_tcpwm_1__TCPWM_CMDRELOAD_SHIFT 8u
#define PWM_cy_m0s8_tcpwm_1__TCPWM_CMDSTART_MASK 0x1000000u
#define PWM_cy_m0s8_tcpwm_1__TCPWM_CMDSTART_SHIFT 24u
#define PWM_cy_m0s8_tcpwm_1__TCPWM_CMDSTOP_MASK 0x10000u
#define PWM_cy_m0s8_tcpwm_1__TCPWM_CMDSTOP_SHIFT 16u
#define PWM_cy_m0s8_tcpwm_1__TCPWM_CTRL CYREG_TCPWM_CTRL
#define PWM_cy_m0s8_tcpwm_1__TCPWM_CTRL_MASK 0x01u
#define PWM_cy_m0s8_tcpwm_1__TCPWM_CTRL_SHIFT 0u
#define PWM_cy_m0s8_tcpwm_1__TCPWM_INTR_CAUSE CYREG_TCPWM_INTR_CAUSE
#define PWM_cy_m0s8_tcpwm_1__TCPWM_INTR_CAUSE_MASK 0x01u
#define PWM_cy_m0s8_tcpwm_1__TCPWM_INTR_CAUSE_SHIFT 0u
#define PWM_cy_m0s8_tcpwm_1__TCPWM_NUMBER 0u
#define PWM_cy_m0s8_tcpwm_1__TR_CTRL0 CYREG_TCPWM_CNT0_TR_CTRL0
#define PWM_cy_m0s8_tcpwm_1__TR_CTRL1 CYREG_TCPWM_CNT0_TR_CTRL1
#define PWM_cy_m0s8_tcpwm_1__TR_CTRL2 CYREG_TCPWM_CNT0_TR_CTRL2

/* Clock_1 */
#define Clock_1__CTRL_REGISTER CYREG_PERI_PCLK_CTL7
#define Clock_1__DIV_ID 0x00000040u
#define Clock_1__DIV_REGISTER CYREG_PERI_DIV_16_CTL0
#define Clock_1__PA_DIV_ID 0x000000FFu

/* Clock_2 */
#define Clock_2__CTRL_REGISTER CYREG_PERI_PCLK_CTL10
#define Clock_2__DIV_ID 0x00000041u
#define Clock_2__DIV_REGISTER CYREG_PERI_DIV_16_CTL1
#define Clock_2__PA_DIV_ID 0x000000FFu

/* Pin_Red */
#define Pin_Red__0__DR CYREG_GPIO_PRT2_DR
#define Pin_Red__0__DR_CLR CYREG_GPIO_PRT2_DR_CLR
#define Pin_Red__0__DR_INV CYREG_GPIO_PRT2_DR_INV
#define Pin_Red__0__DR_SET CYREG_GPIO_PRT2_DR_SET
#define Pin_Red__0__HSIOM CYREG_HSIOM_PORT_SEL2
#define Pin_Red__0__HSIOM_MASK 0x0F000000u
#define Pin_Red__0__HSIOM_SHIFT 24u
#define Pin_Red__0__INTCFG CYREG_GPIO_PRT2_INTR_CFG
#define Pin_Red__0__INTR CYREG_GPIO_PRT2_INTR
#define Pin_Red__0__INTR_CFG CYREG_GPIO_PRT2_INTR_CFG
#define Pin_Red__0__INTSTAT CYREG_GPIO_PRT2_INTR
#define Pin_Red__0__MASK 0x40u
#define Pin_Red__0__OUT_SEL CYREG_UDB_PA2_CFG10
#define Pin_Red__0__OUT_SEL_SHIFT 12u
#define Pin_Red__0__OUT_SEL_VAL 1u
#define Pin_Red__0__PA__CFG0 CYREG_UDB_PA2_CFG0
#define Pin_Red__0__PA__CFG1 CYREG_UDB_PA2_CFG1
#define Pin_Red__0__PA__CFG10 CYREG_UDB_PA2_CFG10
#define Pin_Red__0__PA__CFG11 CYREG_UDB_PA2_CFG11
#define Pin_Red__0__PA__CFG12 CYREG_UDB_PA2_CFG12
#define Pin_Red__0__PA__CFG13 CYREG_UDB_PA2_CFG13
#define Pin_Red__0__PA__CFG14 CYREG_UDB_PA2_CFG14
#define Pin_Red__0__PA__CFG2 CYREG_UDB_PA2_CFG2
#define Pin_Red__0__PA__CFG3 CYREG_UDB_PA2_CFG3
#define Pin_Red__0__PA__CFG4 CYREG_UDB_PA2_CFG4
#define Pin_Red__0__PA__CFG5 CYREG_UDB_PA2_CFG5
#define Pin_Red__0__PA__CFG6 CYREG_UDB_PA2_CFG6
#define Pin_Red__0__PA__CFG7 CYREG_UDB_PA2_CFG7
#define Pin_Red__0__PA__CFG8 CYREG_UDB_PA2_CFG8
#define Pin_Red__0__PA__CFG9 CYREG_UDB_PA2_CFG9
#define Pin_Red__0__PC CYREG_GPIO_PRT2_PC
#define Pin_Red__0__PC2 CYREG_GPIO_PRT2_PC2
#define Pin_Red__0__PORT 2u
#define Pin_Red__0__PS CYREG_GPIO_PRT2_PS
#define Pin_Red__0__SHIFT 6u
#define Pin_Red__DR CYREG_GPIO_PRT2_DR
#define Pin_Red__DR_CLR CYREG_GPIO_PRT2_DR_CLR
#define Pin_Red__DR_INV CYREG_GPIO_PRT2_DR_INV
#define Pin_Red__DR_SET CYREG_GPIO_PRT2_DR_SET
#define Pin_Red__INTCFG CYREG_GPIO_PRT2_INTR_CFG
#define Pin_Red__INTR CYREG_GPIO_PRT2_INTR
#define Pin_Red__INTR_CFG CYREG_GPIO_PRT2_INTR_CFG
#define Pin_Red__INTSTAT CYREG_GPIO_PRT2_INTR
#define Pin_Red__MASK 0x40u
#define Pin_Red__PA__CFG0 CYREG_UDB_PA2_CFG0
#define Pin_Red__PA__CFG1 CYREG_UDB_PA2_CFG1
#define Pin_Red__PA__CFG10 CYREG_UDB_PA2_CFG10
#define Pin_Red__PA__CFG11 CYREG_UDB_PA2_CFG11
#define Pin_Red__PA__CFG12 CYREG_UDB_PA2_CFG12
#define Pin_Red__PA__CFG13 CYREG_UDB_PA2_CFG13
#define Pin_Red__PA__CFG14 CYREG_UDB_PA2_CFG14
#define Pin_Red__PA__CFG2 CYREG_UDB_PA2_CFG2
#define Pin_Red__PA__CFG3 CYREG_UDB_PA2_CFG3
#define Pin_Red__PA__CFG4 CYREG_UDB_PA2_CFG4
#define Pin_Red__PA__CFG5 CYREG_UDB_PA2_CFG5
#define Pin_Red__PA__CFG6 CYREG_UDB_PA2_CFG6
#define Pin_Red__PA__CFG7 CYREG_UDB_PA2_CFG7
#define Pin_Red__PA__CFG8 CYREG_UDB_PA2_CFG8
#define Pin_Red__PA__CFG9 CYREG_UDB_PA2_CFG9
#define Pin_Red__PC CYREG_GPIO_PRT2_PC
#define Pin_Red__PC2 CYREG_GPIO_PRT2_PC2
#define Pin_Red__PORT 2u
#define Pin_Red__PS CYREG_GPIO_PRT2_PS
#define Pin_Red__SHIFT 6u

/* Pin_SW2 */
#define Pin_SW2__0__DR CYREG_GPIO_PRT2_DR
#define Pin_SW2__0__DR_CLR CYREG_GPIO_PRT2_DR_CLR
#define Pin_SW2__0__DR_INV CYREG_GPIO_PRT2_DR_INV
#define Pin_SW2__0__DR_SET CYREG_GPIO_PRT2_DR_SET
#define Pin_SW2__0__HSIOM CYREG_HSIOM_PORT_SEL2
#define Pin_SW2__0__HSIOM_MASK 0xF0000000u
#define Pin_SW2__0__HSIOM_SHIFT 28u
#define Pin_SW2__0__INTCFG CYREG_GPIO_PRT2_INTR_CFG
#define Pin_SW2__0__INTR CYREG_GPIO_PRT2_INTR
#define Pin_SW2__0__INTR_CFG CYREG_GPIO_PRT2_INTR_CFG
#define Pin_SW2__0__INTSTAT CYREG_GPIO_PRT2_INTR
#define Pin_SW2__0__MASK 0x80u
#define Pin_SW2__0__PA__CFG0 CYREG_UDB_PA2_CFG0
#define Pin_SW2__0__PA__CFG1 CYREG_UDB_PA2_CFG1
#define Pin_SW2__0__PA__CFG10 CYREG_UDB_PA2_CFG10
#define Pin_SW2__0__PA__CFG11 CYREG_UDB_PA2_CFG11
#define Pin_SW2__0__PA__CFG12 CYREG_UDB_PA2_CFG12
#define Pin_SW2__0__PA__CFG13 CYREG_UDB_PA2_CFG13
#define Pin_SW2__0__PA__CFG14 CYREG_UDB_PA2_CFG14
#define Pin_SW2__0__PA__CFG2 CYREG_UDB_PA2_CFG2
#define Pin_SW2__0__PA__CFG3 CYREG_UDB_PA2_CFG3
#define Pin_SW2__0__PA__CFG4 CYREG_UDB_PA2_CFG4
#define Pin_SW2__0__PA__CFG5 CYREG_UDB_PA2_CFG5
#define Pin_SW2__0__PA__CFG6 CYREG_UDB_PA2_CFG6
#define Pin_SW2__0__PA__CFG7 CYREG_UDB_PA2_CFG7
#define Pin_SW2__0__PA__CFG8 CYREG_UDB_PA2_CFG8
#define Pin_SW2__0__PA__CFG9 CYREG_UDB_PA2_CFG9
#define Pin_SW2__0__PC CYREG_GPIO_PRT2_PC
#define Pin_SW2__0__PC2 CYREG_GPIO_PRT2_PC2
#define Pin_SW2__0__PORT 2u
#define Pin_SW2__0__PS CYREG_GPIO_PRT2_PS
#define Pin_SW2__0__SHIFT 7u
#define Pin_SW2__DR CYREG_GPIO_PRT2_DR
#define Pin_SW2__DR_CLR CYREG_GPIO_PRT2_DR_CLR
#define Pin_SW2__DR_INV CYREG_GPIO_PRT2_DR_INV
#define Pin_SW2__DR_SET CYREG_GPIO_PRT2_DR_SET
#define Pin_SW2__INTCFG CYREG_GPIO_PRT2_INTR_CFG
#define Pin_SW2__INTR CYREG_GPIO_PRT2_INTR
#define Pin_SW2__INTR_CFG CYREG_GPIO_PRT2_INTR_CFG
#define Pin_SW2__INTSTAT CYREG_GPIO_PRT2_INTR
#define Pin_SW2__MASK 0x80u
#define Pin_SW2__PA__CFG0 CYREG_UDB_PA2_CFG0
#define Pin_SW2__PA__CFG1 CYREG_UDB_PA2_CFG1
#define Pin_SW2__PA__CFG10 CYREG_UDB_PA2_CFG10
#define Pin_SW2__PA__CFG11 CYREG_UDB_PA2_CFG11
#define Pin_SW2__PA__CFG12 CYREG_UDB_PA2_CFG12
#define Pin_SW2__PA__CFG13 CYREG_UDB_PA2_CFG13
#define Pin_SW2__PA__CFG14 CYREG_UDB_PA2_CFG14
#define Pin_SW2__PA__CFG2 CYREG_UDB_PA2_CFG2
#define Pin_SW2__PA__CFG3 CYREG_UDB_PA2_CFG3
#define Pin_SW2__PA__CFG4 CYREG_UDB_PA2_CFG4
#define Pin_SW2__PA__CFG5 CYREG_UDB_PA2_CFG5
#define Pin_SW2__PA__CFG6 CYREG_UDB_PA2_CFG6
#define Pin_SW2__PA__CFG7 CYREG_UDB_PA2_CFG7
#define Pin_SW2__PA__CFG8 CYREG_UDB_PA2_CFG8
#define Pin_SW2__PA__CFG9 CYREG_UDB_PA2_CFG9
#define Pin_SW2__PC CYREG_GPIO_PRT2_PC
#define Pin_SW2__PC2 CYREG_GPIO_PRT2_PC2
#define Pin_SW2__PORT 2u
#define Pin_SW2__PS CYREG_GPIO_PRT2_PS
#define Pin_SW2__SHIFT 7u

/* Pin_Blue */
#define Pin_Blue__0__DR CYREG_GPIO_PRT3_DR
#define Pin_Blue__0__DR_CLR CYREG_GPIO_PRT3_DR_CLR
#define Pin_Blue__0__DR_INV CYREG_GPIO_PRT3_DR_INV
#define Pin_Blue__0__DR_SET CYREG_GPIO_PRT3_DR_SET
#define Pin_Blue__0__HSIOM CYREG_HSIOM_PORT_SEL3
#define Pin_Blue__0__HSIOM_MASK 0xF0000000u
#define Pin_Blue__0__HSIOM_SHIFT 28u
#define Pin_Blue__0__INTCFG CYREG_GPIO_PRT3_INTR_CFG
#define Pin_Blue__0__INTR CYREG_GPIO_PRT3_INTR
#define Pin_Blue__0__INTR_CFG CYREG_GPIO_PRT3_INTR_CFG
#define Pin_Blue__0__INTSTAT CYREG_GPIO_PRT3_INTR
#define Pin_Blue__0__MASK 0x80u
#define Pin_Blue__0__PA__CFG0 CYREG_UDB_PA3_CFG0
#define Pin_Blue__0__PA__CFG1 CYREG_UDB_PA3_CFG1
#define Pin_Blue__0__PA__CFG10 CYREG_UDB_PA3_CFG10
#define Pin_Blue__0__PA__CFG11 CYREG_UDB_PA3_CFG11
#define Pin_Blue__0__PA__CFG12 CYREG_UDB_PA3_CFG12
#define Pin_Blue__0__PA__CFG13 CYREG_UDB_PA3_CFG13
#define Pin_Blue__0__PA__CFG14 CYREG_UDB_PA3_CFG14
#define Pin_Blue__0__PA__CFG2 CYREG_UDB_PA3_CFG2
#define Pin_Blue__0__PA__CFG3 CYREG_UDB_PA3_CFG3
#define Pin_Blue__0__PA__CFG4 CYREG_UDB_PA3_CFG4
#define Pin_Blue__0__PA__CFG5 CYREG_UDB_PA3_CFG5
#define Pin_Blue__0__PA__CFG6 CYREG_UDB_PA3_CFG6
#define Pin_Blue__0__PA__CFG7 CYREG_UDB_PA3_CFG7
#define Pin_Blue__0__PA__CFG8 CYREG_UDB_PA3_CFG8
#define Pin_Blue__0__PA__CFG9 CYREG_UDB_PA3_CFG9
#define Pin_Blue__0__PC CYREG_GPIO_PRT3_PC
#define Pin_Blue__0__PC2 CYREG_GPIO_PRT3_PC2
#define Pin_Blue__0__PORT 3u
#define Pin_Blue__0__PS CYREG_GPIO_PRT3_PS
#define Pin_Blue__0__SHIFT 7u
#define Pin_Blue__DR CYREG_GPIO_PRT3_DR
#define Pin_Blue__DR_CLR CYREG_GPIO_PRT3_DR_CLR
#define Pin_Blue__DR_INV CYREG_GPIO_PRT3_DR_INV
#define Pin_Blue__DR_SET CYREG_GPIO_PRT3_DR_SET
#define Pin_Blue__INTCFG CYREG_GPIO_PRT3_INTR_CFG
#define Pin_Blue__INTR CYREG_GPIO_PRT3_INTR
#define Pin_Blue__INTR_CFG CYREG_GPIO_PRT3_INTR_CFG
#define Pin_Blue__INTSTAT CYREG_GPIO_PRT3_INTR
#define Pin_Blue__MASK 0x80u
#define Pin_Blue__PA__CFG0 CYREG_UDB_PA3_CFG0
#define Pin_Blue__PA__CFG1 CYREG_UDB_PA3_CFG1
#define Pin_Blue__PA__CFG10 CYREG_UDB_PA3_CFG10
#define Pin_Blue__PA__CFG11 CYREG_UDB_PA3_CFG11
#define Pin_Blue__PA__CFG12 CYREG_UDB_PA3_CFG12
#define Pin_Blue__PA__CFG13 CYREG_UDB_PA3_CFG13
#define Pin_Blue__PA__CFG14 CYREG_UDB_PA3_CFG14
#define Pin_Blue__PA__CFG2 CYREG_UDB_PA3_CFG2
#define Pin_Blue__PA__CFG3 CYREG_UDB_PA3_CFG3
#define Pin_Blue__PA__CFG4 CYREG_UDB_PA3_CFG4
#define Pin_Blue__PA__CFG5 CYREG_UDB_PA3_CFG5
#define Pin_Blue__PA__CFG6 CYREG_UDB_PA3_CFG6
#define Pin_Blue__PA__CFG7 CYREG_UDB_PA3_CFG7
#define Pin_Blue__PA__CFG8 CYREG_UDB_PA3_CFG8
#define Pin_Blue__PA__CFG9 CYREG_UDB_PA3_CFG9
#define Pin_Blue__PC CYREG_GPIO_PRT3_PC
#define Pin_Blue__PC2 CYREG_GPIO_PRT3_PC2
#define Pin_Blue__PORT 3u
#define Pin_Blue__PS CYREG_GPIO_PRT3_PS
#define Pin_Blue__SHIFT 7u

/* Pin_Green */
#define Pin_Green__0__DR CYREG_GPIO_PRT3_DR
#define Pin_Green__0__DR_CLR CYREG_GPIO_PRT3_DR_CLR
#define Pin_Green__0__DR_INV CYREG_GPIO_PRT3_DR_INV
#define Pin_Green__0__DR_SET CYREG_GPIO_PRT3_DR_SET
#define Pin_Green__0__HSIOM CYREG_HSIOM_PORT_SEL3
#define Pin_Green__0__HSIOM_MASK 0x0F000000u
#define Pin_Green__0__HSIOM_SHIFT 24u
#define Pin_Green__0__INTCFG CYREG_GPIO_PRT3_INTR_CFG
#define Pin_Green__0__INTR CYREG_GPIO_PRT3_INTR
#define Pin_Green__0__INTR_CFG CYREG_GPIO_PRT3_INTR_CFG
#define Pin_Green__0__INTSTAT CYREG_GPIO_PRT3_INTR
#define Pin_Green__0__MASK 0x40u
#define Pin_Green__0__OUT_SEL CYREG_UDB_PA3_CFG10
#define Pin_Green__0__OUT_SEL_SHIFT 12u
#define Pin_Green__0__OUT_SEL_VAL -1u
#define Pin_Green__0__PA__CFG0 CYREG_UDB_PA3_CFG0
#define Pin_Green__0__PA__CFG1 CYREG_UDB_PA3_CFG1
#define Pin_Green__0__PA__CFG10 CYREG_UDB_PA3_CFG10
#define Pin_Green__0__PA__CFG11 CYREG_UDB_PA3_CFG11
#define Pin_Green__0__PA__CFG12 CYREG_UDB_PA3_CFG12
#define Pin_Green__0__PA__CFG13 CYREG_UDB_PA3_CFG13
#define Pin_Green__0__PA__CFG14 CYREG_UDB_PA3_CFG14
#define Pin_Green__0__PA__CFG2 CYREG_UDB_PA3_CFG2
#define Pin_Green__0__PA__CFG3 CYREG_UDB_PA3_CFG3
#define Pin_Green__0__PA__CFG4 CYREG_UDB_PA3_CFG4
#define Pin_Green__0__PA__CFG5 CYREG_UDB_PA3_CFG5
#define Pin_Green__0__PA__CFG6 CYREG_UDB_PA3_CFG6
#define Pin_Green__0__PA__CFG7 CYREG_UDB_PA3_CFG7
#define Pin_Green__0__PA__CFG8 CYREG_UDB_PA3_CFG8
#define Pin_Green__0__PA__CFG9 CYREG_UDB_PA3_CFG9
#define Pin_Green__0__PC CYREG_GPIO_PRT3_PC
#define Pin_Green__0__PC2 CYREG_GPIO_PRT3_PC2
#define Pin_Green__0__PORT 3u
#define Pin_Green__0__PS CYREG_GPIO_PRT3_PS
#define Pin_Green__0__SHIFT 6u
#define Pin_Green__DR CYREG_GPIO_PRT3_DR
#define Pin_Green__DR_CLR CYREG_GPIO_PRT3_DR_CLR
#define Pin_Green__DR_INV CYREG_GPIO_PRT3_DR_INV
#define Pin_Green__DR_SET CYREG_GPIO_PRT3_DR_SET
#define Pin_Green__INTCFG CYREG_GPIO_PRT3_INTR_CFG
#define Pin_Green__INTR CYREG_GPIO_PRT3_INTR
#define Pin_Green__INTR_CFG CYREG_GPIO_PRT3_INTR_CFG
#define Pin_Green__INTSTAT CYREG_GPIO_PRT3_INTR
#define Pin_Green__MASK 0x40u
#define Pin_Green__PA__CFG0 CYREG_UDB_PA3_CFG0
#define Pin_Green__PA__CFG1 CYREG_UDB_PA3_CFG1
#define Pin_Green__PA__CFG10 CYREG_UDB_PA3_CFG10
#define Pin_Green__PA__CFG11 CYREG_UDB_PA3_CFG11
#define Pin_Green__PA__CFG12 CYREG_UDB_PA3_CFG12
#define Pin_Green__PA__CFG13 CYREG_UDB_PA3_CFG13
#define Pin_Green__PA__CFG14 CYREG_UDB_PA3_CFG14
#define Pin_Green__PA__CFG2 CYREG_UDB_PA3_CFG2
#define Pin_Green__PA__CFG3 CYREG_UDB_PA3_CFG3
#define Pin_Green__PA__CFG4 CYREG_UDB_PA3_CFG4
#define Pin_Green__PA__CFG5 CYREG_UDB_PA3_CFG5
#define Pin_Green__PA__CFG6 CYREG_UDB_PA3_CFG6
#define Pin_Green__PA__CFG7 CYREG_UDB_PA3_CFG7
#define Pin_Green__PA__CFG8 CYREG_UDB_PA3_CFG8
#define Pin_Green__PA__CFG9 CYREG_UDB_PA3_CFG9
#define Pin_Green__PC CYREG_GPIO_PRT3_PC
#define Pin_Green__PC2 CYREG_GPIO_PRT3_PC2
#define Pin_Green__PORT 3u
#define Pin_Green__PS CYREG_GPIO_PRT3_PS
#define Pin_Green__SHIFT 6u

/* Miscellaneous */
#define CY_PROJECT_NAME "Lesson10-I2C"
#define CY_VERSION "PSoC Creator  4.2"
#define CYDEV_BANDGAP_VOLTAGE 1.024
#define CYDEV_BCLK__HFCLK__HZ 48000000U
#define CYDEV_BCLK__HFCLK__KHZ 48000U
#define CYDEV_BCLK__HFCLK__MHZ 48U
#define CYDEV_BCLK__SYSCLK__HZ 48000000U
#define CYDEV_BCLK__SYSCLK__KHZ 48000U
#define CYDEV_BCLK__SYSCLK__MHZ 48U
#define CYDEV_CHIP_DIE_LEOPARD 1u
#define CYDEV_CHIP_DIE_PSOC4A 18u
#define CYDEV_CHIP_DIE_PSOC5LP 2u
#define CYDEV_CHIP_DIE_PSOC5TM 3u
#define CYDEV_CHIP_DIE_TMA4 4u
#define CYDEV_CHIP_DIE_UNKNOWN 0u
#define CYDEV_CHIP_FAMILY_FM0P 5u
#define CYDEV_CHIP_FAMILY_FM3 6u
#define CYDEV_CHIP_FAMILY_FM4 7u
#define CYDEV_CHIP_FAMILY_PSOC3 1u
#define CYDEV_CHIP_FAMILY_PSOC4 2u
#define CYDEV_CHIP_FAMILY_PSOC5 3u
#define CYDEV_CHIP_FAMILY_PSOC6 4u
#define CYDEV_CHIP_FAMILY_UNKNOWN 0u
#define CYDEV_CHIP_FAMILY_USED CYDEV_CHIP_FAMILY_PSOC4
#define CYDEV_CHIP_JTAG_ID 0x1A1711AAu
#define CYDEV_CHIP_MEMBER_3A 1u
#define CYDEV_CHIP_MEMBER_4A 18u
#define CYDEV_CHIP_MEMBER_4D 13u
#define CYDEV_CHIP_MEMBER_4E 6u
#define CYDEV_CHIP_MEMBER_4F 19u
#define CYDEV_CHIP_MEMBER_4G 4u
#define CYDEV_CHIP_MEMBER_4H 17u
#define CYDEV_CHIP_MEMBER_4I 23u
#define CYDEV_CHIP_MEMBER_4J 14u
#define CYDEV_CHIP_MEMBER_4K 15u
#define CYDEV_CHIP_MEMBER_4L 22u
#define CYDEV_CHIP_MEMBER_4M 21u
#define CYDEV_CHIP_MEMBER_4N 10u
#define CYDEV_CHIP_MEMBER_4O 7u
#define CYDEV_CHIP_MEMBER_4P 20u
#define CYDEV_CHIP_MEMBER_4Q 12u
#define CYDEV_CHIP_MEMBER_4R 8u
#define CYDEV_CHIP_MEMBER_4S 11u
#define CYDEV_CHIP_MEMBER_4T 9u
#define CYDEV_CHIP_MEMBER_4U 5u
#define CYDEV_CHIP_MEMBER_4V 16u
#define CYDEV_CHIP_MEMBER_5A 3u
#define CYDEV_CHIP_MEMBER_5B 2u
#define CYDEV_CHIP_MEMBER_6A 24u
#define CYDEV_CHIP_MEMBER_FM3 28u
#define CYDEV_CHIP_MEMBER_FM4 29u
#define CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE1 25u
#define CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE2 26u
#define CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE3 27u
#define CYDEV_CHIP_MEMBER_UNKNOWN 0u
#define CYDEV_CHIP_MEMBER_USED CYDEV_CHIP_MEMBER_4F
#define CYDEV_CHIP_DIE_EXPECT CYDEV_CHIP_MEMBER_USED
#define CYDEV_CHIP_DIE_ACTUAL CYDEV_CHIP_DIE_EXPECT
#define CYDEV_CHIP_REV_LEOPARD_ES1 0u
#define CYDEV_CHIP_REV_LEOPARD_ES2 1u
#define CYDEV_CHIP_REV_LEOPARD_ES3 3u
#define CYDEV_CHIP_REV_LEOPARD_PRODUCTION 3u
#define CYDEV_CHIP_REV_PSOC4A_ES0 17u
#define CYDEV_CHIP_REV_PSOC4A_PRODUCTION 17u
#define CYDEV_CHIP_REV_PSOC5LP_ES0 0u
#define CYDEV_CHIP_REV_PSOC5LP_PRODUCTION 0u
#define CYDEV_CHIP_REV_PSOC5TM_ES0 0u
#define CYDEV_CHIP_REV_PSOC5TM_ES1 1u
#define CYDEV_CHIP_REV_PSOC5TM_PRODUCTION 1u
#define CYDEV_CHIP_REV_TMA4_ES 17u
#define CYDEV_CHIP_REV_TMA4_ES2 33u
#define CYDEV_CHIP_REV_TMA4_PRODUCTION 17u
#define CYDEV_CHIP_REVISION_3A_ES1 0u
#define CYDEV_CHIP_REVISION_3A_ES2 1u
#define CYDEV_CHIP_REVISION_3A_ES3 3u
#define CYDEV_CHIP_REVISION_3A_PRODUCTION 3u
#define CYDEV_CHIP_REVISION_4A_ES0 17u
#define CYDEV_CHIP_REVISION_4A_PRODUCTION 17u
#define CYDEV_CHIP_REVISION_4D_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4E_CCG2_NO_USBPD 0u
#define CYDEV_CHIP_REVISION_4E_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4F_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4F_PRODUCTION_256DMA 0u
#define CYDEV_CHIP_REVISION_4F_PRODUCTION_256K 0u
#define CYDEV_CHIP_REVISION_4G_ES 17u
#define CYDEV_CHIP_REVISION_4G_ES2 33u
#define CYDEV_CHIP_REVISION_4G_PRODUCTION 17u
#define CYDEV_CHIP_REVISION_4H_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4I_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4J_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4K_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4L_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4M_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4N_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4O_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4P_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4Q_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4R_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4S_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4T_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4U_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4V_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_5A_ES0 0u
#define CYDEV_CHIP_REVISION_5A_ES1 1u
#define CYDEV_CHIP_REVISION_5A_PRODUCTION 1u
#define CYDEV_CHIP_REVISION_5B_ES0 0u
#define CYDEV_CHIP_REVISION_5B_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_6A_ES 17u
#define CYDEV_CHIP_REVISION_6A_NO_UDB 33u
#define CYDEV_CHIP_REVISION_6A_PRODUCTION 33u
#define CYDEV_CHIP_REVISION_FM3_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_FM4_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_PDL_FM0P_TYPE1_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_PDL_FM0P_TYPE2_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_PDL_FM0P_TYPE3_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_USED CYDEV_CHIP_REVISION_4F_PRODUCTION_256DMA
#define CYDEV_CHIP_REV_EXPECT CYDEV_CHIP_REVISION_USED
#define CYDEV_CONFIG_READ_ACCELERATOR 1
#define CYDEV_CONFIG_UNUSED_IO_AllowButWarn 0
#define CYDEV_CONFIG_UNUSED_IO_AllowWithInfo 1
#define CYDEV_CONFIG_UNUSED_IO_Disallowed 2
#define CYDEV_CONFIG_UNUSED_IO CYDEV_CONFIG_UNUSED_IO_Disallowed
#define CYDEV_CONFIGURATION_COMPRESSED 1
#define CYDEV_CONFIGURATION_MODE_COMPRESSED 0
#define CYDEV_CONFIGURATION_MODE CYDEV_CONFIGURATION_MODE_COMPRESSED
#define CYDEV_CONFIGURATION_MODE_DMA 2
#define CYDEV_CONFIGURATION_MODE_UNCOMPRESSED 1
#define CYDEV_DEBUG_PROTECT_KILL 4
#define CYDEV_DEBUG_PROTECT_OPEN 1
#define CYDEV_DEBUG_PROTECT CYDEV_DEBUG_PROTECT_OPEN
#define CYDEV_DEBUG_PROTECT_PROTECTED 2
#define CYDEV_DEBUGGING_DPS_Disable 3
#define CYDEV_DEBUGGING_DPS_SWD 2
#define CYDEV_DEBUGGING_DPS CYDEV_DEBUGGING_DPS_SWD
#define CYDEV_DEBUGGING_ENABLE 1
#define CYDEV_DFT_SELECT_CLK0 10u
#define CYDEV_DFT_SELECT_CLK1 11u
#define CYDEV_DMA_CHANNELS_AVAILABLE 8
#define CYDEV_HEAP_SIZE 0x80
#define CYDEV_IMO_TRIMMED_BY_USB 0u
#define CYDEV_IMO_TRIMMED_BY_WCO 0u
#define CYDEV_INTR_NUMBER_DMA 21u
#define CYDEV_IS_EXPORTING_CODE 0
#define CYDEV_IS_IMPORTING_CODE 0
#define CYDEV_PROJ_TYPE 0
#define CYDEV_PROJ_TYPE_BOOTLOADER 1
#define CYDEV_PROJ_TYPE_LAUNCHER 5
#define CYDEV_PROJ_TYPE_LOADABLE 2
#define CYDEV_PROJ_TYPE_LOADABLEANDBOOTLOADER 4
#define CYDEV_PROJ_TYPE_MULTIAPPBOOTLOADER 3
#define CYDEV_PROJ_TYPE_STANDARD 0
#define CYDEV_STACK_SIZE 0x0800
#define CYDEV_USE_BUNDLED_CMSIS 1
#define CYDEV_VARIABLE_VDDA 1
#define CYDEV_VDDA 3.3
#define CYDEV_VDDA_MV 3300
#define CYDEV_VDDD 3.3
#define CYDEV_VDDD_MV 3300
#define CYDEV_VDDR 3.3
#define CYDEV_VDDR_MV 3300
#define CYDEV_WDT_GENERATE_ISR 1u
#define CYIPBLOCK_m0s8bless_VERSION 2
#define CYIPBLOCK_m0s8cpussv2_VERSION 1
#define CYIPBLOCK_m0s8csd_VERSION 1
#define CYIPBLOCK_m0s8ioss_VERSION 1
#define CYIPBLOCK_m0s8lcd_VERSION 2
#define CYIPBLOCK_m0s8lpcomp_VERSION 2
#define CYIPBLOCK_m0s8peri_VERSION 1
#define CYIPBLOCK_m0s8scb_VERSION 2
#define CYIPBLOCK_m0s8srssv2_VERSION 1
#define CYIPBLOCK_m0s8tcpwm_VERSION 2
#define CYIPBLOCK_m0s8udbif_VERSION 1
#define CYIPBLOCK_s8pass4al_VERSION 1
#define DMA_CHANNELS_USED__MASK 0u
#define CYDEV_BOOTLOADER_ENABLE 0

#endif /* INCLUDED_CYFITTER_H */
