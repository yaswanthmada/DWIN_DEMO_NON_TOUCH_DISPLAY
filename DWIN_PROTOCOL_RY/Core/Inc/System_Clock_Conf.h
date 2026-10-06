/*
 * System_Clock_Conf.h
 *
 *  Created on: Jun 18, 2026
 *      Author: MadaYaswanth
 */

#ifndef INC_SYSTEM_CLOCK_CONF_H_
#define INC_SYSTEM_CLOCK_CONF_H_

#include"main.h"
#include<stdint.h>
/*******************************************************************************
 * @fn          - System_Clock_Init
 * * @brief       - Initializes the system core clock to a frequency of 72 MHz.
 * Configures the HSE/HSI, PLL factors, and Flash latency.
 * * @param[in]   - None
 * * @return      - None
 ******************************************************************************/
void System_Clock_Init(void);


/*******************************************************************************
 * @fn          - Get_Sys_Clk_Freq
 * * @brief       - Determines the current operational frequency of the system clock (SYSCLK).
 * * @param[in]   - None
 * * @return      - uint32_t : The SYSCLK frequency in Hertz (Hz).
 ******************************************************************************/
uint32_t Get_Sys_Clk_Freq(void);


/*******************************************************************************
 * @fn          - Get_Ahb_Freq
 * * @brief       - Calculates the Advanced High-performance Bus (AHB) frequency
 * based on the current SYSCLK and the AHB prescaler setting.
 * * @param[in]   - None
 * * @return      - uint32_t : The AHB bus frequency in Hertz (Hz).
 ******************************************************************************/
uint32_t Get_Ahb_Freq(void);


/*******************************************************************************
 * @fn          - Get_Apb1_Freq
 * * @brief       - Calculates the Advanced Peripheral Bus 1 (APB1) frequency.
 * Derived by applying the APB1 prescaler to the AHB clock.
 * * @param[in]   - None
 * * @return      - uint32_t : The APB1 bus frequency in Hertz (Hz).
 * * @note        - This is usually the low-speed peripheral bus.
 ******************************************************************************/
uint32_t Get_Apb1_Freq(void);


/*******************************************************************************
 * @fn          - Get_Apb2_Freq
 * * @brief       - Calculates the Advanced Peripheral Bus 2 (APB2) frequency.
 * *Derived by applying the APB2 prescaler to the AHB clock.
 * * @param[in]   - None
 * * @return      - uint32_t : The APB2 bus frequency in Hertz (Hz).
 * * @note        - This is usually the high-speed peripheral bus.
 ******************************************************************************/
uint32_t Get_Apb2_Freq(void);

#endif /* INC_SYSTEM_CLOCK_CONF_H_ */
