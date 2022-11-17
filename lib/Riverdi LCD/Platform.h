/*
 * Copyright (c) Riverdi Sp. z o.o. sp. k. <riverdi@riverdi.com>
 * Copyright (c) Skalski Embedded Technologies <contact@lukasz-skalski.com>
 */

#ifndef _PLATFORM_H_
#define _PLATFORM_H_

/*****************************************************************************/

#define EVE_1		/* for FT80x series */
//#define EVE_2		/* for FT81x series */
//#define EVE_3   /* for BT81x series */

/*****************************************************************************/

/*
 * Touch Screen:
 *   NTP_XX -> None
 *   RTP_XX -> Resisitve
 *   CTP_XX -> Capacitive
 *
 * Size:
 *   XXX_35 -> 3.5' TFT DISPLAY
 *   XXX_43 -> 4.3' TFT DISPLAY
 *   XXX_50 -> 5.0' TFT DISPLAY
 *   XXX_70 -> 7.0' TFT DISPLAY
 */

//#define NTP_28
//#define RTP_28
//#define CTP_28


//#define NTP_35
//#define RTP_35
#define CTP_35

//#define NTP_43
//#define RTP_43
//#define CTP_43

//#define NTP_50
//#define RTP_50
//#define CTP_50

//#define NTP_70
//#define RTP_70
//#define CTP_70

/*****************************************************************************/

#define ARDUINO_PLATFORM
#define ARDUINO_PLATFORM_COCMD_BURST

#ifdef __AVR__
#define GPIO_CS     10
#define GPIO_PD     8
#endif

#ifdef ESP32 /* Riverdi IoT Display */
#define GPIO_SCK	18
#define GPIO_MISO	19
#define GPIO_MOSI	23
#define GPIO_CS     5
#define GPIO_INT	27
#define GPIO_PD		14
#endif

/* Standard C libraries */
#include <stdio.h>

/* Standard Arduino libraries */
//#include <Arduino.h>
#include <EEPROM.h>
#include <SPI.h>

#ifdef __AVR__
#include <avr/pgmspace.h>
#endif

/*****************************************************************************/

/* type definitions for EVE HAL library */

#define TRUE		(1)
#define FALSE		(0)

typedef char		bool_t;
typedef char		char8_t;
typedef unsigned char	uchar8_t;
typedef signed char	schar8_t;
typedef float		float_t;

#ifdef ESP32 /* Riverdi IoT Display */
typedef PROGMEM const unsigned char  prog_uchar8_t;
#endif

#ifdef __AVR__
typedef PROGMEM const unsigned char  prog_uchar8_t;
typedef PROGMEM const char           prog_char8_t;
typedef PROGMEM const uint8_t        prog_uint8_t;
typedef PROGMEM const int8_t         prog_int8_t;
typedef PROGMEM const uint16_t       prog_uint16_t;
typedef PROGMEM const int16_t        prog_int16_t;
typedef PROGMEM const uint32_t       prog_uint32_t;
typedef PROGMEM const int32_t        prog_int32_t;
#endif

/* Predefined Riverdi modules */
#include "Riverdi_Modules.h"

/* EVE inclusions */
#include "Gpu_Hal.h"
#include "Gpu.h"
#include "CoPro_Cmds.h"
#include "Hal_Utils.h"

#endif /*_PLATFORM_H_*/
