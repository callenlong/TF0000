#ifndef TEST_LED_DRIVER_H
#define TEST_LED_DRIVER_H

#ifdef __cplusplus
 extern "C" {
#endif

#include "stm32f7xx_hal.h"

#define LED_PIN                 GPIO_PIN_1
#define LED_GPIO_PORT           GPIOI
#define LED_GPIO_CLK_ENABLE()   __HAL_RCC_GPIOI_CLK_ENABLE()

void test_led_init(void);
void test_led_de_init(void);
void test_led_builtin_pin_number(void);
void test_led_state_high(void);
void test_led_state_low(void);

#ifdef __cplusplus
}
#endif
#endif