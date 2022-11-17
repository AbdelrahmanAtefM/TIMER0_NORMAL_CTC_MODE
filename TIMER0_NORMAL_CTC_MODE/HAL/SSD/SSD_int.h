/*
 * SSD_int.h
 *
 *  Created on: Sep 19, 2022
 *      Author: AbdelRahman Atef
 */

#ifndef HAL_SSD_SSD_INT_H_
#define HAL_SSD_SSD_INT_H_
/******Includes*******/

#include "DIO_Int.h"
#include "SSD_confg.h"
#include "SSD_privet.h"
#include "STD_TYPS.h"
#include <util/delay.h>

/******Macros*******/

/******Prototypes*******/
void H_SSD_Void_SsdInt(void);               ///Initialization Function
void H_SSD_Void_SsdDisplay(u8);            ///Display Function
void H_SSD_Void_SsdDisplayCountDown(u8);  ///DisplayCountDown Function

#endif /* HAL_SSD_SSD_INT_H_ */
