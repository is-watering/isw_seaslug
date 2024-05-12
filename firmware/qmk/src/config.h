/* SPDX-License-Identifier: GPL-2.0-or-later */

#pragma once

#define VIAL_KEYBOARD_UID {0xA5, 0xBE, 0x3D, 0x0C, 0x9B, 0xD8, 0x48, 0xFF}

/* CONSIDER ADDING AN UNLOCK COMBO. SEE DOCUMENTATION. */
#define VIAL_INSECURE

/* i2c */
#define HAL_USE_I2C TRUE
#define I2C1_SCL_PIN GP3
#define I2C1_SDA_PIN GP2
