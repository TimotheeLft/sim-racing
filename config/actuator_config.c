/*
 * actuator_config.c
 *
 *  Created on: Feb 4, 2024
 *      Author: timot
 */

#include "shifter.h"
#include "stm32f1xx.h"

#include "actuator_config.h"

struct shifter_cfg shifter_conf = {
		.gear_assiociation = {
			{
				.shifter_gear_port = GPIOC_BASE,
				.shifter_gear_pin = GPIO_PIN_5,
				.gear = SHIFTER_GEAR_REVERSE,
			},
			{
				.shifter_gear_port = GPIOC_BASE,
				.shifter_gear_pin = GPIO_PIN_6,
				.gear = SHIFTER_GEAR_1,
			},
			{
				.shifter_gear_port = GPIOC_BASE,
				.shifter_gear_pin = GPIO_PIN_7,
				.gear = SHIFTER_GEAR_2,
			},
			{
				.shifter_gear_port = GPIOC_BASE,
				.shifter_gear_pin = GPIO_PIN_8,
				.gear = SHIFTER_GEAR_3,
			},
			{
				.shifter_gear_port = GPIOC_BASE,
				.shifter_gear_pin = GPIO_PIN_9,
				.gear = SHIFTER_GEAR_4,
			},
			{
				.shifter_gear_port = GPIOC_BASE,
				.shifter_gear_pin = GPIO_PIN_10,
				.gear = SHIFTER_GEAR_5,
			},
			{
				.shifter_gear_port = GPIOC_BASE,
				.shifter_gear_pin = GPIO_PIN_11,
				.gear = SHIFTER_GEAR_6,
			},
			{
				.shifter_gear_port = GPIOC_BASE,
				.shifter_gear_pin = GPIO_PIN_12,
				.gear = SHIFTER_GEAR_7,
			},
		},
		.is_a_clutch = 1
};
