#include <stdio.h>
#include "CPPGPIO/cppgpio.h"

CPPGPIO::GpioOutput led {GPIO_NUM_2};

extern "C" void app_main(void)
{
    led.on();
    vTaskDelay(pdTICKS_TO_MS(1000));
    led.off();
    vTaskDelay(pdTICKS_TO_MS(1000));
}