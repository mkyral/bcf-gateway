#ifndef _APPLICATION_H
#define _APPLICATION_H

#ifndef CORE_MODULE
#define CORE_MODULE 0
#endif

#ifndef TAG
#define TAG "vdev"
#endif

#if CORE_MODULE
#define FIRMWARE "bcf-gateway-core-module:" TAG
#define TALK_OVER_CDC 1
#define GPIO_LED BC_GPIO_LED
#else
#define FIRMWARE "bcf-gateway-usb-dongle:" TAG
#define GPIO_LED 19
#endif

#include <bcl.h>

#endif
