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

//END USER DEFINABLE LIBRARY PARAMETERS/////////////////
#define LED_DRIVER_TLC5916_GPIO_SDI		(5)
#define LED_DRIVER_TLC5916_GPIO_CLK		(5)
#define LED_DRIVER_TLC5916_GPIO_LE		(5)
#define LED_DRIVER_TLC5916_GPIO_OE		(5)

#define LED_DRIVER_TLC5916_NUM				(1)
#define LED_DRIVER_TLC5916_CLK_DELAY_MS		(100)
#define LED_DRIVER_TLC5916_HAS_OE_CONTROL	(0)

//INTERNAL FUNCTIONS/////////////////
static GPIO_HIGH(uint8_t gpio_num);
static GPIO_LOW(uint8_t gpio_num);
static SYS_DELAY_MS(uint16_t delay_val);

void LED_DRIVER_TLC5916_Init(void);
void LED_DRIVER_TLC5916_Turn_On(void);
void LED_DRIVER_TLC5916_Turn_Off(void);
void LED_DRIVER_TLC5916_Send_Value(uint8_t* val);


#endif
