/*
    Copyright (C) 2014 Marco Veeneman

    Licensed under the Apache License, Version 2.0 (the "License");
    you may not use this file except in compliance with the License.
    You may obtain a copy of the License at

        http://www.apache.org/licenses/LICENSE-2.0

    Unless required by applicable law or agreed to in writing, software
    distributed under the License is distributed on an "AS IS" BASIS,
    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
    See the License for the specific language governing permissions and
    limitations under the License.
*/

#include "ch.h"
#include "hal.h"
#include "test.h"

typedef struct led_config
{
  ioportid_t port;
  uint32_t sleep;
  uint8_t  pin;
} led_config_t;

/*
 * LED blinker thread.
 */
static THD_WORKING_AREA(waBlinkLed1, 128);
static THD_WORKING_AREA(waBlinkLed2, 128);
static THD_WORKING_AREA(waBlinkLed3, 128);
static THD_WORKING_AREA(waBlinkLed4, 128);
static msg_t blinkLed(void *arg)
{
  led_config_t *ledConfig = (led_config_t*) arg;

  chRegSetThreadName("Blinker");

  /* Configure pin as push-pull output.*/
  palSetPadMode(ledConfig->port, ledConfig->pin, PAL_MODE_OUTPUT_PUSHPULL);

  while (TRUE) {
    chThdSleepMilliseconds(ledConfig->sleep);
    palTogglePad(ledConfig->port, ledConfig->pin);
  }

  return (msg_t) 0;
}

/*
 * Application entry point.
 */
int main(void)
{
  led_config_t led1, led2, led3, led4;

  /*
   * System initializations.
   * - HAL initialization, this also initializes the configured device drivers
   *   and performs the board-specific initializations.
   * - Kernel initialization, the main() function becomes a thread and the
   *   RTOS is active.
   */
  halInit();
  chSysInit();

  /* Configure RX and TX pins for UART0.*/
  palSetPadMode(GPIOA, GPIOA_UART0_RX, PAL_MODE_INPUT | PAL_MODE_ALTERNATE(1));
  palSetPadMode(GPIOA, GPIOA_UART0_TX, PAL_MODE_INPUT | PAL_MODE_ALTERNATE(1));

  /* Start the serial driver with the default configuration.*/
  sdStart(&SD1, NULL);

  if (!palReadPad(GPIOJ, GPIOJ_SW1)) {
    TestThread(&SD1);
  }

  led1.port  = GPIOF;
  led1.pin   = GPIOF_LED0;
  led1.sleep = 100;

  led2.port  = GPIOF;
  led2.pin   = GPIOF_LED1;
  led2.sleep = 101;

  led3.port  = GPION;
  led3.pin   = GPION_LED2;
  led3.sleep = 102;

  led4.port  = GPION;
  led4.pin   = GPION_LED3;
  led4.sleep = 103;

  /* Creating the blinker threads.*/
  chThdCreateStatic(waBlinkLed1, sizeof(waBlinkLed1), NORMALPRIO, blinkLed,
                    &led1);

  chThdCreateStatic(waBlinkLed2, sizeof(waBlinkLed2), NORMALPRIO, blinkLed,
                    &led2);

  chThdCreateStatic(waBlinkLed3, sizeof(waBlinkLed3), NORMALPRIO, blinkLed,
                    &led3);

  chThdCreateStatic(waBlinkLed4, sizeof(waBlinkLed4), NORMALPRIO, blinkLed,
                    &led4);

  /*
   * Normal main() thread activity
   */
  while (TRUE) {
    chThdSleepMilliseconds(100);
  }
  
  return 0;
}
