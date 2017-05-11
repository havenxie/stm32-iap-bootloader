#ifndef __STMFLASH_H__
#define __STMFLASH_H__
#include "stm32f10x.h"
#include "stm32f10x_flash.h"
#include "common.h"

#ifndef PAGE_SIZE//common.h�ļ���û������
  #define PAGE_SIZE                         (0x400)    /* 1 Kbyte */
  #define FLASH_SIZE                        (0x10000)  /* 64 KBytes */
#endif


extern u16 STMFLASH_ReadHalfWord(u32 faddr);		  //��������  
extern void STMFLASH_Write(u32 WriteAddr,u16 *pBuffer,u16 NumToWrite);		//��ָ����ַ��ʼд��ָ�����ȵ�����
extern void STMFLASH_Read(u32 ReadAddr,u16 *pBuffer,u16 NumToRead);   		//��ָ����ַ��ʼ����ָ�����ȵ�����								   
extern void IAP_FLASH_WriteFlag(u16 flag);
extern void IAP_FLASH_ReadFlag(u16 *flag);
#endif

















