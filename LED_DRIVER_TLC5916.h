//////////////////////////////////////////////////////////////////
// LED DRIVER - TLC5916
//
// LIBRARY FOR 8 CHANNEL CONSTANT CURRENT SINK TLC5916 FROM
// TEXAS INSTRUMENTS
//
// NOTE : DEPENDS ON GPIO LIBRARY. GPIO LIBRARY WOULD BE PLATFORM
//		  DEPENDENT (AVR/ARM/ESP)
//
// FEBRUARY 6, 2017
//
// ANKIT BHATNAGAR
// ANKIT.BHATNAGARINDIA@GMAIL.COM
//////////////////////////////////////////////////////////////////

#ifndef _LED_DRIVER_TLC5916_H_
#define _LED_DRIVER_TLC5916_H_

#include <osapi.h>
#include <ets_sys.h>
#include <gpio.h>
#include "ESP8266_GPIO.h"

//END USER DEFINABLE LIBRARY PARAMETERS/////////////////
#define LED_DRIVER_TLC5916_GPIO_SDI		(5)
#define LED_DRIVER_TLC5916_GPIO_CLK		(5)
#define LED_DRIVER_TLC5916_GPIO_LE		(5)
#define LED_DRIVER_TLC5916_GPIO_OE		(5)

#define LED_DRIVER_TLC5916_NUM				(1)
#define LED_DRIVER_TLC5916_CLK_DELAY_MS		(100)
#define LED_DRIVER_TLC5916_HAS_OE_CONTROL	(0)

//USER DEFINABLE
//FUNCTION POINTERS FOR GPIO OPERATIONS & SYSTEM DELAY///////////////////
static void (*TLC5916_GPIO_SET)(uint8_t, uint8_t) = ESP8266_GPIO_Set_Value;
static void (*TLC5916_SYS_DELAY_US)(uint32_t) = ESP8266_GPIO_Sys_Delay_Us;

void LED_DRIVER_TLC5916_Init(void);
void LED_DRIVER_TLC5916_Turn_On(void);
void LED_DRIVER_TLC5916_Turn_Off(void);
void LED_DRIVER_TLC5916_Send_Value(uint8_t* val);


#endif
