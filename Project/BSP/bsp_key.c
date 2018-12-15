
/* ����ͷ�ļ� ----------------------------------------------------------------*/
#include "bsp_key.h"

/* ˽�����Ͷ��� --------------------------------------------------------------*/
/* ˽�к궨�� ----------------------------------------------------------------*/
/* ˽�б��� ------------------------------------------------------------------*/
/* ��չ���� ------------------------------------------------------------------*/
/* ˽�к���ԭ�� --------------------------------------------------------------*/
/* ������ --------------------------------------------------------------------*/

/**
  * ��������: ���ذ���IO���ų�ʼ��.
  * �������: ��
  * �� �� ֵ: ��
  * ˵    ����ʹ�ú궨�巽������������źţ����������ֲ��ֻҪ���޸�bsp_key.h
  *           �ļ���غ궨��Ϳ��Է����޸����š�
  */
void KEY_GPIO_Init(void)
{
   /* ����IOӲ����ʼ���ṹ����� */
  GPIO_InitTypeDef GPIO_InitStructure;
	
	/* ʹ��(����)KEY1���Ŷ�ӦIO�˿�ʱ�� */  
  RCC_APB2PeriphClockCmd(KEY1_RCC_CLOCKGPIO|KEY2_RCC_CLOCKGPIO, ENABLE);
   
  /* �趨KEY1��Ӧ����IO��� */
  GPIO_InitStructure.GPIO_Pin = KEY1_GPIO_PIN;  
  /* �趨KEY1��Ӧ����IO�������ٶ� ��GPIO_Speed_50MHz */
  GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;  
  /* �趨KEY1��Ӧ����IOΪ��������ģʽ */
  GPIO_InitStructure.GPIO_Mode = GPIO_Mode_IN_FLOATING;  
  /* ��ʼ��KEY1��Ӧ����IO */
  GPIO_Init(KEY1_GPIO, &GPIO_InitStructure);
 
  /* �趨KEY2��Ӧ����IO��� */
  GPIO_InitStructure.GPIO_Pin = KEY2_GPIO_PIN;  
  /* ��ʼ��KEY2��Ӧ����IO */
  GPIO_Init(KEY2_GPIO, &GPIO_InitStructure);
}

/**
  * ��������: �򵥴ֱ�����ʱ����
  * �������: time����ʱʱ������
  * �� �� ֵ: ��
  * ˵    ���������ڰ����뵯�����̴��ڶ�����һ����Ҫ��������������������򵥷���
  *           ���Ǽ���ʱ��
  */
void KEY_ScanDelay(void)
{  
  uint32_t i,j;
  for(i=0;i<500;++i)
    for(j=0;j<1000;++j){ }		
}

/**
  * ��������: ��ȡ����KEY1��״̬
  * �����������
  * �� �� ֵ: KEY_DOWN�����������£�
  *           KEY_UP  ������û������
  * ˵    �����ޡ�
  */
KEYState_TypeDef KEY1_StateRead(void)
{
  /* ��ȡ��ʱ����ֵ���ж��Ƿ��Ǳ�����״̬������Ǳ�����״̬���뺯���� */
  if(GPIO_ReadInputDataBit(KEY1_GPIO,KEY1_GPIO_PIN)==KEY1_DOWN_LEVEL)
  {
    /* ��ʱһС��ʱ�䣬�������� */
    KEY_ScanDelay();
    /* ��ʱʱ��������жϰ���״̬��������ǰ���״̬˵������ȷʵ������ */
    if(GPIO_ReadInputDataBit(KEY1_GPIO,KEY1_GPIO_PIN)==KEY1_DOWN_LEVEL)
    {
      /* �ȴ������������˳�����ɨ�躯�� */
      while(GPIO_ReadInputDataBit(KEY1_GPIO,KEY1_GPIO_PIN)==KEY1_DOWN_LEVEL);
       /* ����ɨ����ϣ�ȷ�����������£����ذ���������״̬ */
      return KEY_DOWN;
    }
  }
  /* ����û�����£�����û������״̬ */
  return KEY_UP;
}

/**
  * ��������: ��ȡ����KEY2��״̬
  * �����������
  * �� �� ֵ: KEY_DOWN�����������£�
  *           KEY_UP  ������û������
  * ˵    �����ޡ�
  */
KEYState_TypeDef KEY2_StateRead(void)
{
  /* ��ȡ��ʱ����ֵ���ж��Ƿ��Ǳ�����״̬������Ǳ�����״̬���뺯���� */
  if(GPIO_ReadInputDataBit(KEY2_GPIO,KEY2_GPIO_PIN)==KEY2_DOWN_LEVEL)
  {
    /* ��ʱһС��ʱ�䣬�������� */
    KEY_ScanDelay();
    /* ��ʱʱ��������жϰ���״̬��������ǰ���״̬˵������ȷʵ������ */
    if(GPIO_ReadInputDataBit(KEY2_GPIO,KEY2_GPIO_PIN)==KEY2_DOWN_LEVEL)
    {
      /* �ȴ������������˳�����ɨ�躯�� */
      while(GPIO_ReadInputDataBit(KEY2_GPIO,KEY2_GPIO_PIN)==KEY2_DOWN_LEVEL);
       /* ����ɨ����ϣ�ȷ�����������£����ذ���������״̬ */
      return KEY_DOWN;
    }
  }
  /* ����û�����£�����û������״̬ */
  return KEY_UP;
}
