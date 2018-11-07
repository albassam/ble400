// Haider Albassam <SmartAware.de>
#ifndef BLE400_H
#define BLE400_H

#include "nrf_gpio.h"

#define LED_0 18
#define LED_1 19
#define LED_2 20
#define LED_3 21 
#define LED_4 22

#define BUTTON_START   16
#define BUTTON_0       16
#define BUTTON_1       17
#define BUTTON_STOP    17
#define BUTTON_PULL    NRF_GPIO_PIN_PULLUP

#ifdef USE_EXTERNAL_UART
#define RX_PIN_NUMBER  5
#define TX_PIN_NUMBER  6
#define CTS_PIN_NUMBER 7
#define RTS_PIN_NUMBER 12
#else
#define RX_PIN_NUMBER  11
#define TX_PIN_NUMBER  9
#define CTS_PIN_NUMBER 10
#define RTS_PIN_NUMBER 8
#define HWFC true
#endif
#define HWFC          true

// this configuration works with the SPI wires setup
#define SER_APP_RX_PIN              9     // UART RX pin number.
#define SER_APP_TX_PIN              11     // UART TX pin number.
#define SER_APP_CTS_PIN             8     // UART Clear To Send pin number.
#define SER_APP_RTS_PIN             10     // UART Request To Send pin number.

// UART
#if 0
#define SER_CON_RX_PIN              9    // UART RX pin number.
#define SER_CON_TX_PIN              11    // UART TX pin number.
#define SER_CON_CTS_PIN             8   // UART Clear To Send pin number. Not used if HWFC is set to false.
#define SER_CON_RTS_PIN             10    // UART Request To Send pin number. Not used if HWFC is set to false.
#else
// this configuration works with the SPI wires setup
#define SER_CON_RX_PIN              11    // UART RX pin number.
#define SER_CON_TX_PIN              9    // UART TX pin number.
#define SER_CON_CTS_PIN             10    // UART Clear To Send pin number. Not used if HWFC is set to false.
#define SER_CON_RTS_PIN             8    // UART Request To Send pin number. Not used if HWFC is set to false.
#endif

#endif // BLE400_H

