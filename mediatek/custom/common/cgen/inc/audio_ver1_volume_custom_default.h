/* Copyright Statement:
 *
 * This software/firmware and related documentation ("MediaTek Software") are
 * protected under relevant copyright laws. The information contained herein
 * is confidential and proprietary to MediaTek Inc. and/or its licensors.
 * Without the prior written permission of MediaTek inc. and/or its licensors,
 * any reproduction, modification, use or disclosure of MediaTek Software,
 * and information contained herein, in whole or in part, shall be strictly prohibited.
 *
 * MediaTek Inc. (C) 2010. All rights reserved.
 *
 * BY OPENING THIS FILE, RECEIVER HEREBY UNEQUIVOCALLY ACKNOWLEDGES AND AGREES
 * THAT THE SOFTWARE/FIRMWARE AND ITS DOCUMENTATIONS ("MEDIATEK SOFTWARE")
 * RECEIVED FROM MEDIATEK AND/OR ITS REPRESENTATIVES ARE PROVIDED TO RECEIVER ON
 * AN "AS-IS" BASIS ONLY. MEDIATEK EXPRESSLY DISCLAIMS ANY AND ALL WARRANTIES,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE OR NONINFRINGEMENT.
 * NEITHER DOES MEDIATEK PROVIDE ANY WARRANTY WHATSOEVER WITH RESPECT TO THE
 * SOFTWARE OF ANY THIRD PARTY WHICH MAY BE USED BY, INCORPORATED IN, OR
 * SUPPLIED WITH THE MEDIATEK SOFTWARE, AND RECEIVER AGREES TO LOOK ONLY TO SUCH
 * THIRD PARTY FOR ANY WARRANTY CLAIM RELATING THERETO. RECEIVER EXPRESSLY ACKNOWLEDGES
 * THAT IT IS RECEIVER'S SOLE RESPONSIBILITY TO OBTAIN FROM ANY THIRD PARTY ALL PROPER LICENSES
 * CONTAINED IN MEDIATEK SOFTWARE. MEDIATEK SHALL ALSO NOT BE RESPONSIBLE FOR ANY MEDIATEK
 * SOFTWARE RELEASES MADE TO RECEIVER'S SPECIFICATION OR TO CONFORM TO A PARTICULAR
 * STANDARD OR OPEN FORUM. RECEIVER'S SOLE AND EXCLUSIVE REMEDY AND MEDIATEK'S ENTIRE AND
 * CUMULATIVE LIABILITY WITH RESPECT TO THE MEDIATEK SOFTWARE RELEASED HEREUNDER WILL BE,
 * AT MEDIATEK'S OPTION, TO REVISE OR REPLACE THE MEDIATEK SOFTWARE AT ISSUE,
 * OR REFUND ANY SOFTWARE LICENSE FEES OR SERVICE CHARGE PAID BY RECEIVER TO
 * MEDIATEK FOR SUCH MEDIATEK SOFTWARE AT ISSUE.
 *
 * The following software/firmware and/or related documentation ("MediaTek Software")
 * have been modified by MediaTek Inc. All revisions are subject to any receiver's
 * applicable license agreements with MediaTek Inc.
 */

/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2008
*
*  BY OPENING THIS FILE, BUYER HEREBY UNEQUIVOCALLY ACKNOWLEDGES AND AGREES
*  THAT THE SOFTWARE/FIRMWARE AND ITS DOCUMENTATIONS ("MEDIATEK SOFTWARE")
*  RECEIVED FROM MEDIATEK AND/OR ITS REPRESENTATIVES ARE PROVIDED TO BUYER ON
*  AN "AS-IS" BASIS ONLY. MEDIATEK EXPRESSLY DISCLAIMS ANY AND ALL WARRANTIES,
*  EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE IMPLIED WARRANTIES OF
*  MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE OR NONINFRINGEMENT.
*  NEITHER DOES MEDIATEK PROVIDE ANY WARRANTY WHATSOEVER WITH RESPECT TO THE
*  SOFTWARE OF ANY THIRD PARTY WHICH MAY BE USED BY, INCORPORATED IN, OR
*  SUPPLIED WITH THE MEDIATEK SOFTWARE, AND BUYER AGREES TO LOOK ONLY TO SUCH
*  THIRD PARTY FOR ANY WARRANTY CLAIM RELATING THERETO. MEDIATEK SHALL ALSO
*  NOT BE RESPONSIBLE FOR ANY MEDIATEK SOFTWARE RELEASES MADE TO BUYER'S
*  SPECIFICATION OR TO CONFORM TO A PARTICULAR STANDARD OR OPEN FORUM.
*
*  BUYER'S SOLE AND EXCLUSIVE REMEDY AND MEDIATEK'S ENTIRE AND CUMULATIVE
*  LIABILITY WITH RESPECT TO THE MEDIATEK SOFTWARE RELEASED HEREUNDER WILL BE,
*  AT MEDIATEK'S OPTION, TO REVISE OR REPLACE THE MEDIATEK SOFTWARE AT ISSUE,
*  OR REFUND ANY SOFTWARE LICENSE FEES OR SERVICE CHARGE PAID BY BUYER TO
*  MEDIATEK FOR SUCH MEDIATEK SOFTWARE AT ISSUE.
*
*  THE TRANSACTION CONTEMPLATED HEREUNDER SHALL BE CONSTRUED IN ACCORDANCE
*  WITH THE LAWS OF THE STATE OF CALIFORNIA, USA, EXCLUDING ITS CONFLICT OF
*  LAWS PRINCIPLES.  ANY DISPUTES, CONTROVERSIES OR CLAIMS ARISING THEREOF AND
*  RELATED THERETO SHALL BE SETTLED BY ARBITRATION IN SAN FRANCISCO, CA, UNDER
*  THE RULES OF THE INTERNATIONAL CHAMBER OF COMMERCE (ICC).
*
*****************************************************************************/

/*******************************************************************************
 *
 * Filename:
 * ---------
 * audio_ver1_volume_custom_default.h
 *
 * Project:
 * --------
 *   ALPS
 *
 * Description:
 * ------------
 * This file is the header of audio customization related parameters or definition.
 *
 * Author:
 * -------
 * Chipeng chang
 *
 *============================================================================
 *             HISTORY
 * Below this line, this part is controlled by CC/CQ. DO NOT MODIFY!!
 *------------------------------------------------------------------------------
 * $Revision:$
 * $Modtime:$
 * $Log:$
 *
 *
 *
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by CC/CQ. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/
#ifndef AUDIO_VER1_VOLUME_CUSTOM_DEFAULT_H
#define AUDIO_VER1_VOLUME_CUSTOM_DEFAULT_H

#define VER1_AUD_VOLUME_RING \
    150,180,200,212,232,242,255,0,0,0,0,0,0,0,0,\
    150,180,200,212,232,242,255,0,0,0,0,0,0,0,0,\
    150,180,200,212,232,242,255,0,0,0,0,0,0,0,0,\
    150,180,200,212,232,242,255,0,0,0,0,0,0,0,0

#define VER1_AUD_VOLUME_SIP \
    112,136,160,184,208,232,255,0,0,0,0,0,0,0,0,\
    112,136,160,184,208,232,255,0,0,0,0,0,0,0,0,\
    112,136,160,184,208,232,255,0,0,0,0,0,0,0,0,\
    0,43,85,128,171,213,255,0,0,0,0,0,0,0,0

#define VER1_AUD_VOLUME_MIC \
    64,112,192,144,192,192,184,184,184,184,184,0,0,0,0,\
    255,192,192,168,192,192,196,184,184,184,184,0,0,0,0,\
    255,208,208,192,255,208,196,0,0,0,0,0,0,0,0,\
    255,208,208,164,255,208,172,0,0,0,0,0,0,0,0

#ifdef FM_DIGITAL_INPUT
#define VER1_AUD_VOLUME_FM \
        16,80,112,144,176,208,240,0,0,0,0,0,0,0,0,\
        112,136,160,184,208,232,255,0,0,0,0,0,0,0,0,\
        112,136,160,184,208,232,255,0,0,0,0,0,0,0,0,\
        112,136,160,184,208,232,255,0,0,0,0,0,0,0,0
#else
#define VER1_AUD_VOLUME_FM \
        16,80,112,144,176,208,240,0,0,0,0,0,0,0,0,\
        16,80,112,144,176,208,240,0,0,0,0,0,0,0,0,\
        112,136,160,184,208,232,255,0,0,0,0,0,0,0,0,\
        112,136,160,184,208,232,255,0,0,0,0,0,0,0,0
#endif

#define VER1_AUD_VOLUME_SPH \
    52,68,88,108,120,140,152,0,0,0,0,0,0,0,0,\
    76,88,100,112,124,136,148,0,0,0,0,0,0,0,0,\
    88,104,112,128,132,144,160,0,0,0,0,0,0,0,0,\
    40,52,64,76,88,100,112,0,0,0,0,0,0,0,0

#define VER1_AUD_VOLUME_SID \
    0,0,16,0,0,0,0,0,0,0,0,0,0,0,0,\
    0,0,32,0,0,0,0,0,0,0,0,0,0,0,0,\
    0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,\
    0,0,0,0,0,0,0,0,0,0,0,0,0,0,0

#define VER1_AUD_VOLUME_MEDIA \
    112,136,160,184,208,232,255,0,0,0,0,0,0,0,0,\
    112,136,160,184,208,232,255,0,0,0,0,0,0,0,0,\
    150,180,200,220,232,240,248,0,0,0,0,0,0,0,0,\
    150,180,200,220,232,240,248,0,0,0,0,0,0,0,0

#define VER1_AUD_VOLUME_MATV \
    0,32,64,92,128,160,192,0,0,0,0,0,0,0,0,\
    0,32,64,92,128,160,192,0,0,0,0,0,0,0,0,\
    112,136,160,184,208,232,255,0,0,0,0,0,0,0,0,\
    0,43,85,128,171,213,255,0,0,0,0,0,0,0,0

#define VER1_AUD_NORMAL_VOLUME_DEFAULT \
    128,128,128,128,128,128

#define VER1_AUD_HEADSER_VOLUME_DEFAULT \
    132,148,148,148,148,148

#define VER1_AUD_SPEAKER_VOLUME_DEFAULT \
    150,144,144,144,144,144

#define VER1_AUD_HEADSETSPEAKER_VOLUME_DEFAULT \
    132,120,132,132,132,132,132,132

#define VER1_AUD_EXTAMP_VOLUME_DEFAULT \
    132,132,132,132,132,132

#define VER1_AUD_VOLUME_LEVEL_DEFAULT \
    7,7,7,7,7,7,7,7,7

#endif
