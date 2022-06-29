/*
 * SPDX-License-Identifier: MIT
 * SPDX-FileCopyrightText: Copyright (c) 2021 Jason Skuby (mytechtoybox.com)
 */

#ifndef PICO_DB15_TO_USB_CONFIG_H_
#define PICO_DB15_TO_USB_CONFIG_H_

#include <GamepadEnums.h>
#include "PlayerLEDs.h"

#define PIN_DPAD_UP     21
#define PIN_DPAD_DOWN   20
#define PIN_DPAD_RIGHT  16
#define PIN_DPAD_LEFT   19
#define PIN_BUTTON_B1   17
#define PIN_BUTTON_B2   18
#define PIN_BUTTON_R2   10
#define PIN_BUTTON_L2   8
#define PIN_BUTTON_B3   13
#define PIN_BUTTON_B4   14
#define PIN_BUTTON_R1   11
#define PIN_BUTTON_L1   9
#define PIN_BUTTON_S1   12
#define PIN_BUTTON_S2   15
#define PIN_BUTTON_L3   6
#define PIN_BUTTON_R3   7
#define PIN_BUTTON_A1   5
#define PIN_BUTTON_A2   4

#define DEFAULT_SOCD_MODE SOCD_MODE_NEUTRAL
#define BUTTON_LAYOUT BUTTON_LAYOUT_ARCADE

#define PLED_TYPE PLED_TYPE_PWM
#define PLED1_PIN 22
#define PLED2_PIN 26
#define PLED3_PIN 27
#define PLED4_PIN 28

#endif
