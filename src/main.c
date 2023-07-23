#include "stm32f4xx.h"



void gpioConfig(){
	GPIO_InitTypeDef	GPIOInitStructure;
	RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOB,ENABLE);
	GPIOInitStructure.GPIO_Mode=GPIO_Mode_OUT;
	GPIOInitStructure.GPIO_OType=GPIO_OType_PP;
	GPIOInitStructure.GPIO_PuPd=GPIO_PuPd_NOPULL;
	GPIOInitStructure.GPIO_Pin=GPIO_Pin_0;
	GPIOInitStructure.GPIO_Speed=GPIO_Speed_50MHz;

	GPIO_Init(GPIOB,&GPIOInitStructure);





}
void delay(uint32_t time){
	while(time--){
	}
}

int main(){
	gpioConfig();
	while(1){

//		GPIO_SetBits(GPIOB,GPIO_Pin_0);
//		delay(360000);
//		GPIO_ResetBits(GPIOB,GPIO_Pin_0);
//		delay(360000);

		GPIO_WriteBit(GPIOB,GPIO_Pin_0,Bit_SET);
		delay(3600000);
		GPIO_WriteBit(GPIOB,GPIO_Pin_0,Bit_RESET);
		delay(3600000);


	}

}
