/*
 * EGG OpenSource EBike firmware
 *
 * Copyright (C) Casainho, 2015, 2106, 2017.
 *
 * Released under the GPL License, Version 3
 */

#include <stdint.h>
#include <stdio.h>
#include "stm8s.h"
#include "utils.h"

int32_t map (int32_t x, int32_t in_min, int32_t in_max, int32_t out_min, int32_t out_max)
{
  // if input is smaller/bigger than expected return the min/max out ranges value
  if (x < in_min)
    return out_min;
  else if (x > in_max)
    return out_max;

  // map the input to the output range.
  // round up if mapping bigger ranges to smaller ranges
  else  if ((in_max - in_min) > (out_max - out_min))
    return (x - in_min) * (out_max - out_min + 1) / (in_max - in_min + 1) + out_min;
  // round down if mapping smaller ranges to bigger ranges
  else
    return (x - in_min) * (out_max - out_min) / (in_max - in_min) + out_min;
}

uint8_t ui8_min (uint8_t value_a, uint8_t value_b)
{
  if (value_a < value_b) return value_a;
  else return value_b;
}

uint8_t ui8_max (uint8_t value_a, uint8_t value_b)
{
  if (value_a > value_b) return value_a;
  else return value_b;
}

void pi_controller (struct_pi_controller_state *pi_controller)
{
  int16_t i16_error;
  int16_t i16_p_term;
  int16_t i16_temp;

  i16_error = pi_controller->ui8_target_value - pi_controller->ui8_current_value; // 255-0 or 0-255 --> [-255 ; 255]
  i16_p_term = (i16_error * pi_controller->ui8_kp_dividend) >> pi_controller->ui8_kp_divisor;

  pi_controller->i16_i_term += (i16_error * pi_controller->ui8_ki_dividend) >> pi_controller->ui8_ki_divisor;
  if (pi_controller->i16_i_term > 255) { pi_controller->i16_i_term = 255; }
  if (pi_controller->i16_i_term < 0) { pi_controller->i16_i_term = 0; }

  i16_temp = i16_p_term + pi_controller->i16_i_term;
  // limit to [0 ; 255] as duty_cycle that will be controlled can't have other values than that ones
  if (i16_temp > 255) { i16_temp = 255; }
  if (i16_temp < 0) { i16_temp = 0; }
  pi_controller->ui8_controller_output_value = (uint8_t) i16_temp;
}

void pi_controller_reset (struct_pi_controller_state *pi_controller)
{
  pi_controller->i16_i_term = 0;
}
