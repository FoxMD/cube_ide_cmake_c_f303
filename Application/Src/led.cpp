#include "led.h"

LED::~LED()
{

}

void LED::On()
{
    HAL_GPIO_WritePin(GPIOx, GPIO_Pin, GPIO_PIN_SET);
}

void LED::Off()
{
    HAL_GPIO_WritePin(GPIOx, GPIO_Pin, GPIO_PIN_RESET);
}

void LED::Toggle()
{
    HAL_GPIO_TogglePin(GPIOx, GPIO_Pin);
}