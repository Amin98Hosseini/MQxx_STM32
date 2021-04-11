#include "main.h"
#include <stdio.h>
#include <math.h>

// Set Your Digital OutPut Pin From Sensor 
#define Do_PORT GPIOA
#define Do_PIN GPIO_PIN_1
// Set Your ADC Channel To Connect Ao Pin From Sensor
#define Ao_PIN 1
// Set Your Voltage Of Load Resistor On Datasheet Chart (v to ppm)
#define V_RL 2.4

// Set Your hadc Number --> Assumption hadc1
extern ADC_HandleTypeDef hadc1;

// Function 
void MQ_Init(void);
float LPG_Read(void);
float Methane_Read(void);
float Co_Read(void);
