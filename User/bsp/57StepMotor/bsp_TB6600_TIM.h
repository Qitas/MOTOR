#ifndef __TB6600_TIM_H__
#define __TB6600_TIM_H__

/* ����ͷ�ļ� ----------------------------------------------------------------*/
#include <stm32f10x.h>

/* ���Ͷ��� ------------------------------------------------------------------*/
/* �궨�� --------------------------------------------------------------------*/
#define TB6600_TIMx                         TIM1
#define TB6600_TIM_APBxClock_FUN            RCC_APB2PeriphClockCmd
#define TB6600_TIM_CLK                      RCC_APB2Periph_TIM1

#define TB6600_TIM_GPIO_APBxClock_FUN       RCC_APB2PeriphClockCmd
#define TB6600_TIM_GPIO_CLK                 (RCC_APB2Periph_GPIOA | RCC_APB2Periph_AFIO )

/* ��һ·*/
#define TB6600_TIM_CH1_PORT                 GPIOA                 // ��ӦTB6600��PUL+��
#define TB6600_TIM_CH1_PIN                  GPIO_Pin_8            // ��PLU-ֱ�ӽӿ������GND

#define TB6600_DIR1_GPIO_CLK                RCC_APB2Periph_GPIOB  // �����ת�������
#define TB6600_DIR1_PORT                    GPIOB                 // ��ӦTB6600��DIR+��
#define TB6600_DIR1_PIN                     GPIO_Pin_13           // ��DIR-ֱ�ӽӿ������GND

#define TB6600_ENA1_GPIO_CLK                RCC_APB2Periph_GPIOG  // ���ʹ�ܿ��ƣ������ſɲ�������
#define TB6600_ENA1_PORT                    GPIOG                 // ��ӦTB6600��ENA+��
#define TB6600_ENA1_PIN                     GPIO_Pin_6           // ��ENA-ֱ�ӽӿ������GND

/* �ڶ�·*/
#define TB6600_TIM_CH2_PORT                 GPIOA                 // ��ӦTB6600��PUL+��
#define TB6600_TIM_CH2_PIN                  GPIO_Pin_9            // ��PLU-ֱ�ӽӿ������GND

#define TB6600_DIR2_GPIO_CLK                RCC_APB2Periph_GPIOB  // �����ת�������
#define TB6600_DIR2_PORT                    GPIOB                 // ��ӦTB6600��DIR+��
#define TB6600_DIR2_PIN                     GPIO_Pin_14           // ��DIR-ֱ�ӽӿ������GND

#define TB6600_ENA2_GPIO_CLK                RCC_APB2Periph_GPIOG  // ���ʹ�ܿ��ƣ������ſɲ�������
#define TB6600_ENA2_PORT                    GPIOG                // ��ӦTB6600��ENA+��
#define TB6600_ENA2_PIN                     GPIO_Pin_7           // ��ENA-ֱ�ӽӿ������GND

/* ����·*/
#define TB6600_TIM_CH3_PORT                 GPIOA                 // ��ӦTB6600��PUL+��
#define TB6600_TIM_CH3_PIN                  GPIO_Pin_10            // ��PLU-ֱ�ӽӿ������GND

#define TB6600_DIR3_GPIO_CLK                RCC_APB2Periph_GPIOB  // �����ת�������
#define TB6600_DIR3_PORT                    GPIOB                 // ��ӦTB6600��DIR+��
#define TB6600_DIR3_PIN                     GPIO_Pin_15          // ��DIR-ֱ�ӽӿ������GND

#define TB6600_ENA3_GPIO_CLK                RCC_APB2Periph_GPIOG  // ���ʹ�ܿ��ƣ������ſɲ�������
#define TB6600_ENA3_PORT                    GPIOG                 // ��ӦTB6600��ENA+��
#define TB6600_ENA3_PIN                     GPIO_Pin_8           // ��ENA-ֱ�ӽӿ������GND


/* ����·*/
#define TB6600_TIM_CH4_PORT                 GPIOA                 // ��ӦTB6600��PUL+��
#define TB6600_TIM_CH4_PIN                  GPIO_Pin_11            // ��PLU-ֱ�ӽӿ������GND

#define TB6600_DIR4_GPIO_CLK                RCC_APB2Periph_GPIOB  // �����ת�������
#define TB6600_DIR4_PORT                    GPIOB                 // ��ӦTB6600��DIR+��
#define TB6600_DIR4_PIN                     GPIO_Pin_12          // ��DIR-ֱ�ӽӿ������GND

#define TB6600_ENA4_GPIO_CLK                RCC_APB2Periph_GPIOG  // ���ʹ�ܿ��ƣ������ſɲ�������
#define TB6600_ENA4_PORT                    GPIOG                 // ��ӦTB6600��ENA+��
#define TB6600_ENA4_PIN                     GPIO_Pin_9           // ��ENA-ֱ�ӽӿ������GND


/* ��չ���� ------------------------------------------------------------------*/
/* �������� ------------------------------------------------------------------*/
void TB6600_TIMx_PWM_Init(void);

#endif	/* __TB6600_TIM_H__ */
/******************* (C) COPYRIGHT 2015-2020 ӲʯǶ��ʽ�����Ŷ� *****END OF FILE****/
