## Mqxx Sensor library for STM32 HAL

![GY906](https://www.google.com/url?sa=i&url=https%3A%2F%2Fwww.waveshare.com%2Fmq-2-gas-sensor.htm&psig=AOvVaw39gI1cQgTQxBoH2NanlIS1&ust=1618222886727000&source=images&cd=vfe&ved=0CAIQjRxqFwoTCIiquJb89e8CFQAAAAAdAAAAABAJ)


*	Author:     Amin Hosseini
*	WebSite:    https://www.elecomp-tech.ir
*	Instagram:  https://www.instagram.com/Elecomp_Tech
*	Youtube:    https://www.youtube.com/channel/UCbASsLHmmKg_32L6RTsmUrA
--------------------------------------------------------------------------------
* [x] Super Loop Supported.
* [ ] RTOS Supported.
--------------------------------------------------------------------------------
* [x] MQ4 Tested.
* [x] MQ5 Tested.
* [x] MQ6 Tested.
* [ ] MQxx Tested.
-------------------------------------------------------------------------------- 
* Enable ADC And Select Channel .
* Config GPIO InPut Mode For MQ Digital Data ( just Read 0,1) .
* Configure `MQx.h` files.
* Add 'MQ_Init()' to Main File.

--------------------------------------------------------------------------------
## Super Loop example:
* file MQx.h
``` 
// Set Your Digital OutPut Pin From Sensor 
#define Do_PORT GPIOA
#define Do_PIN GPIO_PIN_1
// Set Your ADC Channel To Connect Ao Pin From Sensor
#define Ao_PIN 1
// Set Your hadc Number --> Assumption hadc1
extern ADC_HandleTypeDef hadc1;
```
* file main.c   
```
#include "MQx.h"

int main()
{
  MQ_Init();
  while (1)
  {
    data=LPG_Read();
  }  
}
```
