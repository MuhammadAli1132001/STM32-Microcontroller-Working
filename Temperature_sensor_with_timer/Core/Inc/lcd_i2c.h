
/*
 * i2c_lcd.h
 *
 *  Created on: Nov 3, 2023
 *      Author: Muhammad Ali
 */

#ifndef i2c_lcd_h
#define i2c_lcd_h

#include "stm32f4xx_hal.h"

void lcd_init (void);   // initialize lcd

void lcd_send_cmd (char cmd);  // send command to the lcd

void lcd_send_data (char data);  // send data to the lcd

void lcd_clear(void);

void lcd_send_string (char *str);  // send string to the lcd

void lcd_send_float (float data, int numberofdigits);  // display float numbers on lcd


#endif /* INC_I2C_LCD_H_ */
