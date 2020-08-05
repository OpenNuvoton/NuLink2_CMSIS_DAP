#ifndef __VOLTAGE_H__
#define __VOLTAGE_H__

#include "stdint.h"

#ifdef __cplusplus
extern "C"
{
#endif

typedef enum {
    VOLTAGE_1800MV = 1,
    VOLTAGE_2500MV = 2,
    VOLTAGE_3300MV = 3,
    VOLTAGE_5000MV = 4,
} VOLTAGE_E;

void Voltage_Init(void);
void Voltage_SupplyTargetPower(int32_t bEnable, VOLTAGE_E eVoltage);
void Voltage_OpenPort(void);
void Voltage_ClosePort(void);

#ifdef __cplusplus
}
#endif

#endif
