/* Copyright Statement:
 *
 * This software/firmware and related documentation ("MediaTek Software") are
 * protected under relevant copyright laws. The information contained herein is
 * confidential and proprietary to MediaTek Inc. and/or its licensors. Without
 * the prior written permission of MediaTek inc. and/or its licensors, any
 * reproduction, modification, use or disclosure of MediaTek Software, and
 * information contained herein, in whole or in part, shall be strictly
 * prohibited.
 * 
 * MediaTek Inc. (C) 2010. All rights reserved.
 * 
 * BY OPENING THIS FILE, RECEIVER HEREBY UNEQUIVOCALLY ACKNOWLEDGES AND AGREES
 * THAT THE SOFTWARE/FIRMWARE AND ITS DOCUMENTATIONS ("MEDIATEK SOFTWARE")
 * RECEIVED FROM MEDIATEK AND/OR ITS REPRESENTATIVES ARE PROVIDED TO RECEIVER
 * ON AN "AS-IS" BASIS ONLY. MEDIATEK EXPRESSLY DISCLAIMS ANY AND ALL
 * WARRANTIES, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE OR
 * NONINFRINGEMENT. NEITHER DOES MEDIATEK PROVIDE ANY WARRANTY WHATSOEVER WITH
 * RESPECT TO THE SOFTWARE OF ANY THIRD PARTY WHICH MAY BE USED BY,
 * INCORPORATED IN, OR SUPPLIED WITH THE MEDIATEK SOFTWARE, AND RECEIVER AGREES
 * TO LOOK ONLY TO SUCH THIRD PARTY FOR ANY WARRANTY CLAIM RELATING THERETO.
 * RECEIVER EXPRESSLY ACKNOWLEDGES THAT IT IS RECEIVER'S SOLE RESPONSIBILITY TO
 * OBTAIN FROM ANY THIRD PARTY ALL PROPER LICENSES CONTAINED IN MEDIATEK
 * SOFTWARE. MEDIATEK SHALL ALSO NOT BE RESPONSIBLE FOR ANY MEDIATEK SOFTWARE
 * RELEASES MADE TO RECEIVER'S SPECIFICATION OR TO CONFORM TO A PARTICULAR
 * STANDARD OR OPEN FORUM. RECEIVER'S SOLE AND EXCLUSIVE REMEDY AND MEDIATEK'S
 * ENTIRE AND CUMULATIVE LIABILITY WITH RESPECT TO THE MEDIATEK SOFTWARE
 * RELEASED HEREUNDER WILL BE, AT MEDIATEK'S OPTION, TO REVISE OR REPLACE THE
 * MEDIATEK SOFTWARE AT ISSUE, OR REFUND ANY SOFTWARE LICENSE FEES OR SERVICE
 * CHARGE PAID BY RECEIVER TO MEDIATEK FOR SUCH MEDIATEK SOFTWARE AT ISSUE.
 *
 * The following software/firmware and/or related documentation ("MediaTek
 * Software") have been modified by MediaTek Inc. All revisions are subject to
 * any receiver's applicable license agreements with MediaTek Inc.
 */

#ifndef CUSTOM_VR_VIDEO_DROP_RATE_H
#define CUSTOM_VR_VIDEO_DROP_RATE_H
#include <media/MediaProfiles.h> 
namespace android {

struct VideoQualityAdjustParam{
	camera_id mCameraId; 
	camcorder_quality mQuality;
	int32_t mBitRateDropPercentage; //1~100,such as 25,will mean 25/100
	int32_t mFrameRateDropPercentage; //1~100,such as 50,will mean 50/100
};
//for 77
//hd:14Mbps->9Mbps 15fps->15fps final 15fps, 9Mbps    fine:12.5Mbps->8Mbps  30fps->20fps final 20fps,5Mbps
//night mode hd: 14Mbps->9Mbps 15fps->15fps             fine: 6Mbps->4Mbps  15fps->15fps

//customer can change these drop rate for each profile
//or add new profile
static  VideoQualityAdjustParam sVideoQualityAdjustParamTable[] = {
	{BACK_CAMERA,CAMCORDER_QUALITY_MTK_MPEG4_1080P,64,100},
	{BACK_CAMERA,CAMCORDER_QUALITY_MTK_FINE,64,66},
	{BACK_CAMERA,CAMCORDER_QUALITY_MTK_NIGHT_FINE,66,100},
	{FRONT_CAMERA,CAMCORDER_QUALITY_MTK_MPEG4_1080P,64,100},	
	{FRONT_CAMERA,CAMCORDER_QUALITY_MTK_FINE,64,66},
	{FRONT_CAMERA,CAMCORDER_QUALITY_MTK_NIGHT_FINE,66,100},
};

};
#endif  //CUSTOM_VR_VIDEO_DROP_RATE_H

