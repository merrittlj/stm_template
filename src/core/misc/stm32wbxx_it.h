/*
 * filename:	stm32wbxx_it.h
 * date:	07.02.24
 * author:	Lucas Merritt/merrittlj
 * description:	ISR headers
 */

#ifndef __STM32WBxx_IT_H
#define __STM32WBxx_IT_H


void NMI_Handler(void);
void HardFault_Handler(void);
void MemManage_Handler(void);
void BusFault_Handler(void);
void UsageFault_Handler(void);
void SVC_Handler(void);
void DebugMon_Handler(void);
void PendSV_Handler(void);
void SysTick_Handler(void);


#endif /* __STM32WBxx_IT_H */
