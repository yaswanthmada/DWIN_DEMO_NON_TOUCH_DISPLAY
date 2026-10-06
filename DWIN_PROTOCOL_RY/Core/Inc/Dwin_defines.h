/*
 * Dwin_defines.h
 *
 *  Created on: Jun 18, 2026
 *      Author: MadaYaswanth
 */

#ifndef INC_DWIN_DEFINES_H_
#define INC_DWIN_DEFINES_H_

/* ── Frame Headers ─────────────────────────────────── */
#define DWIN_HEADER_1           0x5A
#define DWIN_HEADER_2           0xA5

/* ── Commands ──────────────────────────────────────── */
#define CMD_WRITE_VP            0x82  /* Write Variable Memory  */
#define CMD_READ_VP             0x83  /* Read Variable Memory   */
#define CMD_WRITE_CURVE         0x84  /* Write Curve Buffer     */

/* ── System Variable Addresses ─────────────────────── */
#define ADDR_SYS_RESET          0x0004
#define ADDR_NOR_FLASH_RW       0x0008
#define ADDR_UART2_CFG          0x000C
#define ADDR_VERSION            0x000F
#define ADDR_RTC_NOW            0x0010
#define ADDR_PIC_NOW            0x0014
#define ADDR_SYS_CONFIG         0x0080
#define ADDR_BRIGHTNESS         0x0082
#define ADDR_PAGE_SWITCH        0x0084
#define ADDR_PWM0_SET           0x0086
#define ADDR_RTC_SET            0x009C
#define ADDR_BUZZER             0x00A0
#define ADDR_ICL_SWITCH         0x00DE
#define ADDR_PAGE_STACK         0x00E8

/* ── RGB565 Colors ─────────────────────────────────── */
#define COLOR_BLACK             0x0000
#define COLOR_WHITE             0xFFFF
#define COLOR_RED               0xF800
#define COLOR_GREEN             0x07E0
#define COLOR_BLUE              0x001F
#define COLOR_YELLOW            0xFFE0
#define COLOR_CYAN              0x07FF
#define COLOR_MAGENTA           0xF81F


#define LEFT_INDICATOR    0x1000
#define RIGHT_INDICATOR    0x1004

#define CHARGER_DETECTION 0x1001
#define AIR_BAG		0X1002
#define BRAKE_FLUID 0X1003
#define HAND_BRAKE  0X1005
#define ABS         0X1006
#define PARK_LIGHTS 0X1007

#define CAR_ROAD    0X1015
#define SPEED		0X2002
#define TEMP_VAL    0x2000

#define SOC_100     0X1016
#define SOC_80     0X1018
#define SOC_50     0X1019
#define SOC_37     0X1020
#define SOC_24     0X1021
#define SOC_14     0X1022

#define PARK_MODE        0X1011
#define REVERSE_MODE     0X1012
#define NEUTRAL_MODE     0X1013
#define DRIVE_MODE      0X1014

/* ── Color helper: pack R(0-31) G(0-63) B(0-31) ───── */
#define DWIN_RGB(r,g,b) \
    ((uint16_t)(((uint16_t)((r)&0x1F)<<11)|((uint16_t)((g)&0x3F)<<5)|((uint16_t)((b)&0x1F))))

void Update_Dwin_Display();

#endif /* INC_DWIN_DEFINES_H_ */
