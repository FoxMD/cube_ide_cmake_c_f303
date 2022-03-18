#ifndef LED_H_
#define LED_H_
#include "stm32f3xx_hal.h"

class LED 
{
    private:
        GPIO_TypeDef* GPIOx;
        uint16_t GPIO_Pin;
    public:
        LED(GPIO_TypeDef* gport, uint16_t gpin) : GPIOx(gport), GPIO_Pin(gpin) {};
        virtual ~LED();
        void On();
        void Off();
        void Toggle();
};

#endif /* LED_H_ */
