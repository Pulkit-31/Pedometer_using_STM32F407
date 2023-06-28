/**
  ******************************************************************************
  * @file    activity_detection_data_params.h
  * @author  AST Embedded Analytics Research Platform
  * @date    Sun Apr  9 00:41:43 2023
  * @brief   AI Tool Automatic Code Generator for Embedded NN computing
  ******************************************************************************
  * Copyright (c) 2023 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  ******************************************************************************
  */

#ifndef ACTIVITY_DETECTION_DATA_PARAMS_H
#define ACTIVITY_DETECTION_DATA_PARAMS_H
#pragma once

#include "ai_platform.h"

/*
#define AI_ACTIVITY_DETECTION_DATA_WEIGHTS_PARAMS \
  (AI_HANDLE_PTR(&ai_activity_detection_data_weights_params[1]))
*/

#define AI_ACTIVITY_DETECTION_DATA_CONFIG               (NULL)


#define AI_ACTIVITY_DETECTION_DATA_ACTIVATIONS_SIZES \
  { 2240, }
#define AI_ACTIVITY_DETECTION_DATA_ACTIVATIONS_SIZE     (2240)
#define AI_ACTIVITY_DETECTION_DATA_ACTIVATIONS_COUNT    (1)
#define AI_ACTIVITY_DETECTION_DATA_ACTIVATION_1_SIZE    (2240)



#define AI_ACTIVITY_DETECTION_DATA_WEIGHTS_SIZES \
  { 48300, }
#define AI_ACTIVITY_DETECTION_DATA_WEIGHTS_SIZE         (48300)
#define AI_ACTIVITY_DETECTION_DATA_WEIGHTS_COUNT        (1)
#define AI_ACTIVITY_DETECTION_DATA_WEIGHT_1_SIZE        (48300)



#define AI_ACTIVITY_DETECTION_DATA_ACTIVATIONS_TABLE_GET() \
  (&g_activity_detection_activations_table[1])

extern ai_handle g_activity_detection_activations_table[1 + 2];



#define AI_ACTIVITY_DETECTION_DATA_WEIGHTS_TABLE_GET() \
  (&g_activity_detection_weights_table[1])

extern ai_handle g_activity_detection_weights_table[1 + 2];


#endif    /* ACTIVITY_DETECTION_DATA_PARAMS_H */
