/*
 * lcdLib.h
 *
 *  Created on: 18 Haz 2020
 *      Author: 90534
 */

#ifndef INCLUDE_LCDLIB_H_
#define INCLUDE_LCDLIB_H_

// Functions
void lcdInit();                                 // Initialize LCD
void lcdTriggerEN();                            // Trigger Enable
void lcdWriteData(unsigned char data);          // Send Data (Characters)
void lcdWriteCmd(unsigned char cmd);            // Send Commands
void lcdClear();                                // Clear LCD
void lcdSetText(char * text, int x, int y);     // Write string
void lcdSetInt(int val, int x, int y);          // Write integer

#endif /* INCLUDE_LCDLIB_H_ */
