/*
 * Copyright (c) 2021 Conexio Technologies, Inc
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include <init.h>
#include <drivers/gpio.h>
#include <devicetree.h>

#define GPIO0 DT_LABEL(DT_NODELABEL(gpio0))
#define SENSOR_POWER_PIN 11 /* ENABLE_3V3_SENSOR --> i2c sensors  */

static int board_conexio_stratus_init(const struct device *dev)
{
	ARG_UNUSED(dev);

	/* Get the device binding */
	const struct device *gpio = device_get_binding(GPIO0);
	if (gpio == NULL) {
		return -ENODEV;
	}

	/* Configure sensor power pin as output. */
	gpio_pin_configure(gpio, SENSOR_POWER_PIN, GPIO_OUTPUT_HIGH);

	return 0;
}

/* Needs to be done after GPIO driver init */
SYS_INIT(board_conexio_stratus_init, POST_KERNEL,
	 CONFIG_KERNEL_INIT_PRIORITY_DEFAULT);
