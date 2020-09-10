/*
 * Copyright (c) {YEAR}, {ORGANIZATION_NAME}, {ORGANIZATION_WEB}
 * All rights reserved.
 */
/*
 * This file is licensed according to the BSD 3-clause license as follows:
 * 
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *   * Redistributions of source code must retain the above copyright
 *     notice, this list of conditions and the following disclaimer.
 *   * Redistributions in binary form must reproduce the above copyright
 *     notice, this list of conditions and the following disclaimer in the
 *     documentation and/or other materials provided with the distribution.
 *   * Neither the name of the "{ORGANIZATION_NAME}" nor
 *     the names of its contributors may be used to endorse or promote products
 *     derived from this software without specific prior written permission.
 * 
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
 * IN NO EVENT SHALL "{ORGANIZATION_NAME}" BE LIABLE FOR ANY
 * DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
 * ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 * SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */
/*
 * This file is part of X2C. http://www.mechatronic-simulation.org/
 * $LastChangedRevision$
 */
/* USERCODE-BEGIN:Description                                                                                         */
/* Description: */
/* USERCODE-END:Description                                                                                           */
#ifndef CLARKE_PARK_MCHP_FIP32_H
#define CLARKE_PARK_MCHP_FIP32_H

#ifdef __cplusplus
extern "C" {
#endif

#include "CommonFcts.h"

#if !defined(CLARKE_PARK_MCHP_FIP32_ISLINKED)
#define CLARKE_PARK_MCHP_FIP32_ID ((uint16)20961)

typedef struct {
    uint16          ID;
    int32           *a;
    int32           *b;
    int32           *theta;
    int32           d;
    int32           q;
    int32           alpha;
    int32           beta;
} CLARKE_PARK_MCHP_FIP32;

#define CLARKE_PARK_MCHP_FIP32_FUNCTIONS { \
    CLARKE_PARK_MCHP_FIP32_ID, \
    (void (*)(void*))Clarke_Park_MCHP_FiP32_Update, \
    (void (*)(void*))Clarke_Park_MCHP_FiP32_Init, \
    (tLoadImplementationParameter)Common_Load, \
    (tSaveImplementationParameter)Common_Save, \
    (void* (*)(const void*, uint16))Clarke_Park_MCHP_FiP32_GetAddress }

/**********************************************************************************************************************/
/** Public prototypes                                                                                                **/
/**********************************************************************************************************************/
void Clarke_Park_MCHP_FiP32_Update(CLARKE_PARK_MCHP_FIP32 *pTClarke_Park_MCHP_FiP32);
void Clarke_Park_MCHP_FiP32_Init(CLARKE_PARK_MCHP_FIP32 *pTClarke_Park_MCHP_FiP32);
void* Clarke_Park_MCHP_FiP32_GetAddress(const CLARKE_PARK_MCHP_FIP32 *block, uint16 elementId);

#endif

#ifdef __cplusplus
}
#endif

#endif
