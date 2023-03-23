/*
 * Pilote_I2C.h
 *
 *  Created on: Jun 25, 2021
 *      Author: mahout
 */
#include "stm32f7xx.h"




#ifndef SRC_PILOTE_I2C_H_
#define SRC_PILOTE_I2C_H_



#endif /* SRC_PILOTE_I2C_H_ */

//#define DS1307_Slave7bitsAdr 0x68
#define DS1307_Slave7bitsAdr (0x68<<1)

#define BCD_To_Dec(var) (((var)&0x70)>>4)*10+((var)&0x0F)

#define I2C_TIMING      0x40912732
#define I2C_ADDRESS        0x30F

#define RTC_PtrAdr 0
#define RTC_sec 1
#define RTC_minu 2
#define RTC_hour 3
#define RTC_day 4
#define RTC_date 5
#define RTC_month 6
#define RTC_year 7
#define RTC_control 8





#define BCD_To_Dec(var) (((var)&0x70)>>4)*10+((var)&0x0F)


typedef struct
{
	unsigned char Sec;
	unsigned char Min;
	unsigned char H_12_Not_24;
	unsigned char PM_Not_AM; // 1 PM, 0 AM
	unsigned char Hour;
	unsigned char Day;
	unsigned char Date;
	unsigned char Month;
	unsigned char Year;
}
DS1307_Time_Typedef;








void DS1307_SetTime(DS1307_Time_Typedef * UserTime);
void DS1307_Init(I2C_TypeDef * I2Cx);
void DS1307_SetPointer(char Pteur);
void DS1307_SetTime(DS1307_Time_Typedef * UserTime);
void DS1307_GetTime(DS1307_Time_Typedef * UserTime);
char Conv_BCD(char );
void DS1307_Set_MemRTC_Data(char ,char );
char DS1307_Get_MemRTC_Data(char );


void MX_I2C1_Init(void);
void Error_Handler(void);
