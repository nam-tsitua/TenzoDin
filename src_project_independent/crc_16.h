/* geany_encoding=UTF-8 */
#ifndef __CRC16_H_
#define __CRC16_H_
/*======================================================================================*/
#include <stdint.h>
/*======================================================================================*/

//Функция проверки контрольной суммы

#ifdef __cplusplus
extern "C" {
#endif
/*======================================================================================*/
#define CRC16Start 0xffff
uint16_t CRC16Update(uint16_t startCRC,void * data, uint32_t dataSize);
/*======================================================================================*/
#ifdef __cplusplus
}
#endif
/*======================================================================================*/
#endif