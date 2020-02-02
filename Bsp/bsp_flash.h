#ifndef __BSP_FLASH_H
#define __BSP_FLASH_H


#include "stm32f10x.h"

/* STM32��������Ʒÿҳ��С2KByte���С�С������Ʒÿҳ��С1KByte */
#if defined (STM32F10X_HD) || defined (STM32F10X_HD_VL) || defined (STM32F10X_CL) || defined (STM32F10X_XL)
  #define FLASH_PAGE_SIZE    ((uint16_t)0x800)	//2048
#else
  #define FLASH_PAGE_SIZE    ((uint16_t)0x400)	//1024
#endif

// д�����ʼ��ַ�������ַ
#define WRITE_START_ADDR  ((uint32_t)0x08008000)
#define WRITE_END_ADDR    ((uint32_t)0x0801FC00)

void Flash_ReadHalfWord( uint32_t addr, uint8_t *Buff, uint16_t Len );
uint8_t Flash_WritenHalfWord( uint32_t addr, uint8_t *Buff, uint16_t Len );
uint16_t ReadFlash_HalfWord( uint32_t addr );


#endif /* __BSP_FLASH_H */


/*---------------------------- END OF FILE ----------------------------*/

