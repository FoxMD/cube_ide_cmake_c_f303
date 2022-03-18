#include "main.h"
#include "led.h"

void CppMain(void)
{
    LED LED1(LD10_GPIO_Port, LD10_Pin);
    LED LED2(LD3_GPIO_Port, LD3_Pin);
    LED LED3(LD6_GPIO_Port, LD6_Pin);
    LED LED4(LD7_GPIO_Port, LD7_Pin);

    while(1)
    {
        LED1.Toggle();
        LED2.Toggle();
        LED3.Toggle();
        LED4.Toggle();
        HAL_Delay(500);
    }
}