/*******************************************************************************
 * @file
 * @purpose        
 * @version        0.1
 *------------------------------------------------------------------------------
 * Copyright (C) 2011 Gumstix Inc.
 * All rights reserved.
 *
 * Contributer(s):
 *   Neil MacMunn   <neil@gumstix.com>
 *------------------------------------------------------------------------------
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 * 
 * Redistributions of source code must retain the above copyright notice, this
 *     list of conditions and the following disclaimer.
 * 
 * Redistributions in binary form must reproduce the above copyright notice,
 *  this list of conditions and the following disclaimer in the documentation
 *  and/or other materials provided with the distribution.
 * 
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
 * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
 * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
 * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 ******************************************************************************/

#ifndef ___LPC17XX_TIMER_H__
#define ___LPC17XX_TIMER_H__

#include "lpc_types.h"

int _TIM_GetIntCaptureStatus(uint8_t * args);
int _TIM_ConfigMatch(uint8_t * args);
int _TIM_ClearIntCapturePending(uint8_t * args);
int _TIM_SetMatchExt(uint8_t * args);
int _TIM_ConfigStructInit(uint8_t * args);
int _TIM_GetIntStatus(uint8_t * args);
int _TIM_Cmd(uint8_t * args);
int _TIM_DeInit(uint8_t * args);
int _TIM_ResetCounter(uint8_t * args);
int _TIM_ConfigCapture(uint8_t * args);
int _TIM_GetCaptureValue(uint8_t * args);
int _TIM_ClearIntPending(uint8_t * args);
int _TIM_UpdateMatchValue(uint8_t * args);
int _TIM_Init(uint8_t * args);
int _TIM_EXTMATCH_OPT_malloc(uint8_t * args);
int _TIM_MODE_OPT_malloc(uint8_t * args);
int _TIM_CAP_MODE_OPT_malloc(uint8_t * args);
int _TIM_CAPTURECFG_Type_malloc(uint8_t * args);
int _TIM_CAPTURECFG_Type_CaptureChannel(uint8_t * args);
int _TIM_CAPTURECFG_Type_RisingEdge(uint8_t * args);
int _TIM_CAPTURECFG_Type_FallingEdge(uint8_t * args);
int _TIM_CAPTURECFG_Type_IntOnCaption(uint8_t * args);
int _TIM_INT_TYPE_malloc(uint8_t * args);
int _TIM_COUNTER_INPUT_OPT_malloc(uint8_t * args);
int _TIM_MATCHCFG_Type_malloc(uint8_t * args);
int _TIM_MATCHCFG_Type_MatchChannel(uint8_t * args);
int _TIM_MATCHCFG_Type_IntOnMatch(uint8_t * args);
int _TIM_MATCHCFG_Type_StopOnMatch(uint8_t * args);
int _TIM_MATCHCFG_Type_ResetOnMatch(uint8_t * args);
int _TIM_MATCHCFG_Type_ExtMatchOutputType(uint8_t * args);
int _TIM_MATCHCFG_Type_MatchValue(uint8_t * args);
int _TIM_COUNTERCFG_Type_malloc(uint8_t * args);
int _TIM_COUNTERCFG_Type_CounterOption(uint8_t * args);
int _TIM_COUNTERCFG_Type_CountInputSelect(uint8_t * args);
int _TIM_TIMERCFG_Type_malloc(uint8_t * args);
int _TIM_TIMERCFG_Type_PrescaleOption(uint8_t * args);
int _TIM_TIMERCFG_Type_PrescaleValue(uint8_t * args);
int _TIM_PRESCALE_OPT_malloc(uint8_t * args);

#endif
