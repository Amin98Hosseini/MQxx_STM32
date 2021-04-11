/*
Developer: Amin Hosseini 
Date : 2021/4/11 
Company : Elecomp Tech
*/
#include "MQx.h"

//Variable
float voltage_sensor;
double e_number=2.71828;
float RS,R0=314,ratio;

// Readin ADC
void MQ_Init(void)
{
	  hadc1.Init.NbrOfConversion = Ao_PIN;
    HAL_ADC_Init(&hadc1);
    HAL_ADC_Start(&hadc1);
    if (HAL_ADC_PollForConversion(&hadc1, 500) == HAL_OK)
    {
      voltage_sensor = HAL_ADC_GetValue(&hadc1);
      voltage_sensor=(voltage_sensor/4095)*3.3;
			voltage_sensor=(voltage_sensor*1.515151515151515);
			RS=(5.0-voltage_sensor)/voltage_sensor;
			//R0=RS/6.5; // if you need calibration you sensor
			ratio=RS/R0;
    }
    HAL_ADC_Stop(&hadc1);
}

float LPG_Read(void)
{
	MQ_Init();
	float LPG;
	LPG=26.572*(pow(e_number , (1.2894*ratio)));
	//LPG=26.572*(pow(e_number , (1.2894*voltage_sensor)));
	return LPG;
}

float Methane_Read(void)
{
	MQ_Init();
	float Methane;
	Methane=10.938*(pow(e_number , (1.7742*ratio)));
	//Methane=10.938*(pow(e_number , (1.7742*voltage_sensor)));
	return Methane;
}

float Co_Read(void)
{
	MQ_Init();
	float CO;
	CO=3.027*(pow(e_number , (1.0698*ratio)));
	//CO=3.027*(pow(e_number , (1.0698*voltage_sensor)));
	return CO;
}
