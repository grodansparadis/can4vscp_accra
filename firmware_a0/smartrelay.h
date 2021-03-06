// File:  main.h

/* ******************************************************************************
 * 	VSCP (Very Simple Control Protocol) 
 * 	http://www.vscp.org
 *
 * 	2004-09-18
 * 	akhe@eurosource.se
 *
 *  Copyright (C) 1995-205 Ake Hedman, eurosourc
 *  Copyright (C) 1995-2012 Ake Hedman, Grodans Paradis AB
 *
 *
 * This software is provided 'as-is', without any express or implied
 * warranty.  In no event will the authors be held liable for any damages
 * arising from the use of this software.
 *
 * Permission is granted to anyone to use this software for any purpose,
 * including commercial applications, and to alter it and redistribute it
 * freely, subject to the following restrictions:
 *
 * 1. The origin of this software must not be misrepresented; you must not
 *    claim that you wrote the original software. If you use this software
 *    in a product, an acknowledgment in the product documentation would be
 *    appreciated but is not required.
 * 2. Altered source versions must be plainly marked as such, and must not be
 *    misrepresented as being the original software.
 * 3. This notice may not be removed or altered from any source distribution.
 * 
 *	This file is part of VSCP - Very Simple Control Protocol 	
 *	http://www.vscp.org
 *
 * ******************************************************************************
*/

#ifndef SMARTRELAY_H
#define SMARTRELAY_H

// * * * Relay states * * *
#define RELAY_STATE_INACTIVE                0
#define RELAY_STATE_ACTIVE                  2
#define RELAY_STATE_PULSE                   3

#define RELAY_CONTROLBIT_STATE              0x01 	// Current relay state

// * * * Relay control bits * * *
#define RELAY_CONTROLBIT_NOOP               0x01 	// Noop protection
#define RELAY_CONTROLBIT_ALARM              0x02 	// Send alarm on protection time activation
#define RELAY_CONTROLBIT_PROTECTION         0x04 	// Enable protection timer
#define RELAY_CONTROLBIT_ONEVENT            0x08 	// Send ON event
#define RELAY_CONTROLBIT_OFFEVENT           0x10 	// Semd OFF event
#define RELAY_CONTROLBIT_STARTEVENT         0x20 	// Send START event
#define RELAY_CONTROLBIT_STOPEVENT          0x40 	// Sned STOP event
#define RELAY_CONTROLBIT_ENABLED            0x80 	// Relay enabled

// * * *  Registers * * *
#define REG_RELAY_STATE0                    2
#define REG_RELAY_STATE1                    3
#define REG_RELAY_STATE2                    4
#define REG_RELAY_STATE3                    5
#define REG_RELAY_STATE4                    6
#define REG_RELAY_STATE5                    7
#define REG_RELAY_STATE6                    8
#define REG_RELAY_STATE7                    9

#define REG_RELAY_CONTROL0                  10
#define REG_RELAY_CONTROL1                  11
#define REG_RELAY_CONTROL2                  12
#define REG_RELAY_CONTROL3                  13
#define REG_RELAY_CONTROL4                  14
#define REG_RELAY_CONTROL5                  15
#define REG_RELAY_CONTROL6                  16
#define REG_RELAY_CONTROL7                  17

#define REG_RELAY_PULSE_TIME_MSB0           18
#define REG_RELAY_PULSE_TIME_LSB0           19
#define REG_RELAY_PULSE_TIME_MSB1           20
#define REG_RELAY_PULSE_TIME_LSB1           21
#define REG_RELAY_PULSE_TIME_MSB2           22
#define REG_RELAY_PULSE_TIME_LSB2           23
#define REG_RELAY_PULSE_TIME_MSB3           24
#define REG_RELAY_PULSE_TIME_LSB3           25
#define REG_RELAY_PULSE_TIME_MSB4           26
#define REG_RELAY_PULSE_TIME_LSB4           27
#define REG_RELAY_PULSE_TIME_MSB5           28
#define REG_RELAY_PULSE_TIME_LSB5           29
#define REG_RELAY_PULSE_TIME_MSB6           30
#define REG_RELAY_PULSE_TIME_LSB6           31
#define REG_RELAY_PULSE_TIME_MSB7           32
#define REG_RELAY_PULSE_TIME_LSB7           33

#define REG_RELAY_PROTECTION_TIME_MSB0      34
#define REG_RELAY_PROTECTION_TIME_LSB0      35
#define REG_RELAY_PROTECTION_TIME_MSB1      36
#define REG_RELAY_PROTECTION_TIME_LSB1      37
#define REG_RELAY_PROTECTION_TIME_MSB2      38
#define REG_RELAY_PROTECTION_TIME_LSB2      39
#define REG_RELAY_PROTECTION_TIME_MSB3      40
#define REG_RELAY_PROTECTION_TIME_LSB3      41
#define REG_RELAY_PROTECTION_TIME_MSB4      42
#define REG_RELAY_PROTECTION_TIME_LSB4      43
#define REG_RELAY_PROTECTION_TIME_MSB5      44
#define REG_RELAY_PROTECTION_TIME_LSB5      45
#define REG_RELAY_PROTECTION_TIME_MSB6      46
#define REG_RELAY_PROTECTION_TIME_LSB6      47
#define REG_RELAY_PROTECTION_TIME_MSB7      48
#define REG_RELAY_PROTECTION_TIME_LSB7      49

#define REG_RELAY1_SUBZONE                  50
#define REG_RELAY2_SUBZONE                  51
#define REG_RELAY3_SUBZONE                  52
#define REG_RELAY4_SUBZONE                  53
#define REG_RELAY5_SUBZONE                  54
#define REG_RELAY6_SUBZONE                  55
#define REG_RELAY7_SUBZONE                  56
#define REG_RELAY8_SUBZONE                  57


// * * * Persistent storage


#define EEPROM_ZONE                         0x00	// Zone node belongs to


#define EEPROM_SUBZONE                      0x01	// Subzone node belongs to

#define EEPROM_LAST_POS                     0x60    // Value of last used EEPROM pos. Used for checking reg read/write range

// --------------------------------------------------------------------------------

#define REG_DESCION_MATRIX                  72	// Start of matrix
#define DESCION_MATRIX_ELEMENTS             7

// * * * Actions * * *
#define ACTION_NOOP                         0
#define ACTION_ON                           1
#define ACTION_OFF                          2
#define ACTION_PULSE                        3
#define ACTION_TOGGLE                       4
// 4-9 reserved
#define ACTION_STATUS                       10
// 11-15 reserved
#define ACTION_DISABLE                      16

#endif
