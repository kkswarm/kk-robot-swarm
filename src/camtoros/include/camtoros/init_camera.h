/*
 * @Author: Chaozheng Zhu && Loren
 * @Date: 2022-04-12 15:03:43
 * @LastEditTime: 2022-04-13 12:10:12
 * @FilePath: /misaro_ws/src/camtoros/include/camtoros/init_camera.h
 * @Description:
 *
 * Copyright (c) 2022 by AmovLab, All Rights Reserved.
 */

#pragma once

#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

#include <iostream>
#include <opencv2/core.hpp>

#include "MvCameraControl.h"
#include "opencv2/highgui/highgui.hpp"
#include "opencv2/imgproc/imgproc.hpp"

using namespace cv;
using namespace std;

int nRet = MV_OK;

void* handle = NULL;
unsigned char* pData = NULL;
unsigned char* pDataForSaveImage = NULL;
unsigned int nDataSize;
unsigned int m_nBufSizeForSaveImage;
MV_FRAME_OUT_INFO_EX stImageInfo = {0};

MV_CC_DEVICE_INFO_LIST stDeviceList;
MVCC_INTVALUE stParam;

bool PrintDeviceInfo(MV_CC_DEVICE_INFO* pstMVDevInfo);
bool EnumDevice();  //  infrequent
// thress core functions
bool InitCamera();
bool StartGrabStream(Mat& image);
bool Destroy();