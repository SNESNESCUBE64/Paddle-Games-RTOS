/*
 * paddle games.h
 *
 *  Created on: Mar 11, 2019
 *      Author: mssch
 */

#ifndef PADDLE_GAMES_H_
#define PADDLE_GAMES_H_

//Paddle Includes
#include "drivers/Kentec320x240x16_ssd2119_spi.h"
#include <stdint.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "drivers/touch.h"
#include "inc/hw_memmap.h"
#include "inc/hw_nvic.h"
#include "inc/hw_sysctl.h"
#include "inc/hw_types.h"
#include "driverlib/fpu.h"
#include "driverlib/gpio.h"
#include "driverlib/flash.h"
#include "driverlib/sysctl.h"
#include "driverlib/systick.h"
#include "driverlib/uart.h"
#include "driverlib/udma.h"
#include "driverlib/rom.h"
#include "grlib/grlib.h"

#include "inc/tm4c123gh6pm.h"
#include "inc/hw_memmap.h"
#include "inc/hw_types.h"
#include "driverlib/sysctl.h"
#include "driverlib/interrupt.h"
#include "driverlib/gpio.h"
#include "driverlib/timer.h"

//functional prototypes...
void drawRectangle(int, int, int, int, bool, int32_t);
void drawLine(int, int, int, int, int32_t);
void drawCircle(int, int, int, bool, int32_t);
void updateScoreBoard(void);
void printLevel(void);
void doLevel(void);
void doScore(void);
void doLives(void);
void drawBoard(void);
void loadLevel(void);
uint8_t getLevelBlock(int, int);
void setColorByNumber(int);

#endif /* PADDLE_GAMES_H_ */
