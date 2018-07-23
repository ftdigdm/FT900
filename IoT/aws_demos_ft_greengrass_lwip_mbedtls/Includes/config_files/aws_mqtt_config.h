/*
 * Amazon FreeRTOS V1.0.0
 * Copyright (C) 2017 Amazon.com, Inc. or its affiliates.  All Rights Reserved.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy of
 * this software and associated documentation files (the "Software"), to deal in
 * the Software without restriction, including without limitation the rights to
 * use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of
 * the Software, and to permit persons to whom the Software is furnished to do so,
 * subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software. If you wish to use our Amazon
 * FreeRTOS name, please do so in a fair use way that does not cause confusion.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS
 * FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR
 * COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER
 * IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
 * CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 *
 * http://aws.amazon.com/freertos
 * http://www.FreeRTOS.org
 */

/**
 * @file aws_mqtt_config.h
 * @brief MQTT config options.
 */

#ifndef _AWS_MQTT_CONFIG_H_
#define _AWS_MQTT_CONFIG_H_
#include "aws_mqtt_agent_config.h"

/**
 * @brief Enable subscription management.
 *
 * This gives the user flexibility of registering a callback per topic.
 */
//#define mqttconfigENABLE_SUBSCRIPTION_MANAGEMENT

/**
 * @brief Maximum length of the topic which can be stored in subscription
 * manager.
 */
#if !mqttconfigDISABLE_SUBSCRIBE
#define mqttconfigSUBSCRIPTION_MANAGER_MAX_TOPIC_LENGTH     ( 32 )
#endif

/**
 * @brief Maximum number of subscriptions which can be stored in subscription
 * manager.
 */
#if !mqttconfigDISABLE_SUBSCRIBE
#define mqttconfigSUBSCRIPTION_MANAGER_MAX_SUBSCRIPTIONS    ( 2 )
#endif

/*
 * Uncomment the following two lines to enable asserts.
 */
/* extern void vAssertCalled( const char *pcFile, uint32_t ulLine ); */
/* #define mqttconfigASSERT( x )                       if( ( x ) == 0 ) vAssertCalled( __FILE__, __LINE__ ) */

/**
 * @brief Set this macro to 1 for enabling debug logs.
 */
//#define mqttconfigENABLE_DEBUG_LOGS    1

#endif /* _AWS_MQTT_CONFIG_H_ */