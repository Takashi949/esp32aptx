/*
 * SPDX-FileCopyrightText: 2016 The Android Open Source Project
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#ifndef A2DP_SHIM_H
#define A2DP_SHIM_H

#include "a2d_api.h"


//
// a2dp_constants.h
//

/* Profile supported features */
#define A2DP_SUPF_PLAYER A2D_SUPF_PLAYER
#define A2DP_SUPF_MIC A2D_SUPF_MIC
#define A2DP_SUPF_TUNER A2D_SUPF_TUNER
#define A2DP_SUPF_MIXER A2D_SUPF_TUNER

#define A2DP_SUPF_HEADPHONE A2D_SUPF_TUNER
#define A2DP_SUPF_SPEAKER A2D_SUPF_TUNER
#define A2DP_SUPF_RECORDER A2D_SUPF_RECORDER
#define A2DP_SUPF_AMP A2D_SUPF_AMP

/* AV Media Codec Types (Audio Codec ID) */
#define A2DP_MEDIA_CT_SBC A2D_MEDIA_CT_SBC
#define A2DP_MEDIA_CT_AAC A2DP_MEDIA_CT_AAC
/* Non-A2DP media codec type (vendor-specific codec) */
#define A2DP_MEDIA_CT_NON_A2DP A2D_MEDIA_CT_NON_A2DP

#define tA2DP_CODEC_TYPE tA2D_CODEC_TYPE


//
//  a2dp_error_codes.h
//
#define A2DP_SUCCESS A2D_SUCCESS
#define A2DP_FAIL A2D_FAIL
#define A2DP_BUSY A2D_BUSY
#define A2DP_INVALID_PARAMS A2D_INVALID_PARAMS
#define A2DP_WRONG_CODEC A2D_WRONG_CODEC
#define A2DP_BAD_CODEC_TYPE A2D_BAD_CODEC_TYPE
#define A2DP_NS_CODEC_TYPE A2D_NS_CODEC_TYPE
#define A2DP_BAD_SAMP_FREQ A2D_BAD_SAMP_FREQ
#define A2DP_NS_SAMP_FREQ A2D_NS_SAMP_FREQ
#define A2DP_BAD_CH_MODE A2D_BAD_CH_MODE
#define A2DP_NS_CH_MODE A2D_NS_CH_MODE
#define A2DP_BAD_SUBBANDS A2D_BAD_SUBBANDS
#define A2DP_NS_SUBBANDS A2D_NS_SUBBANDS
#define A2DP_BAD_ALLOC_METHOD A2D_BAD_ALLOC_METHOD
#define A2DP_NS_ALLOC_METHOD A2D_NS_ALLOC_METHOD
#define A2DP_BAD_MIN_BITPOOL A2D_BAD_MIN_BITPOOL
#define A2DP_NS_MIN_BITPOOL A2D_NS_MIN_BITPOOL
#define A2DP_BAD_MAX_BITPOOL A2D_BAD_MAX_BITPOOL
#define A2DP_NS_MAX_BITPOOL A2D_NS_MAX_BITPOOL
#define A2DP_BAD_LAYER A2D_BAD_LAYER
#define A2DP_NS_LAYER A2D_NS_LAYER
#define A2DP_NS_CRC A2D_NS_CRC
#define A2DP_NS_MPF A2D_NS_MPF
#define A2DP_NS_VBR A2D_NS_VBR
#define A2DP_BAD_BIT_RATE A2D_BAD_BIT_RATE
#define A2DP_NS_BIT_RATE A2D_NS_BIT_RATE
#define A2DP_BAD_OBJ_TYPE A2D_BAD_OBJ_TYPE
#define A2DP_NS_OBJ_TYPE A2D_NS_OBJ_TYPE
#define A2DP_BAD_CHANNEL A2D_BAD_CHANNEL
#define A2DP_NS_CHANNEL A2D_NS_CHANNEL
#define A2DP_BAD_BLOCK_LEN A2D_BAD_BLOCK_LEN
#define A2DP_BAD_CP_TYPE A2D_BAD_CP_TYPE
#define A2DP_BAD_CP_FORMA A2D_BAD_CP_FORMATT

#define tA2DP_STATUS tA2D_STATUS


//
// a2dp_api.h
//
#define A2DP_BitsSet A2D_BitsSet


//
// misc
//
#define AVDT_MEDIA_TYPE_AUDIO A2D_MEDIA_TYPE_AUDIO

#define A2DP_SET_ZERO_BIT A2D_SET_ZERO_BIT
#define A2DP_SET_ONE_BIT A2D_SET_ONE_BIT
#define A2DP_SET_MULTL_BIT A2D_SET_MULTL_BIT

#ifndef UNUSED_ATTR
#define UNUSED_ATTR
#endif


#endif /* A2DP_SHIM_H */