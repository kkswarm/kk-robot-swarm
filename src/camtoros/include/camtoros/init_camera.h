#ifndef INIT_CAMERA_H
#define INIT_CAMERA_H

#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include <pthread.h>
#include "MvCameraControl.h"
#include <opencv2/core.hpp>
#include "opencv2/imgproc/imgproc.hpp"
#include "opencv2/highgui/highgui.hpp"
#include <iostream>

using namespace cv;
using namespace std;


int nRet = MV_OK;

void* handle = NULL;
unsigned char * pData = NULL;    
unsigned char *pDataForSaveImage = NULL;
unsigned int nDataSize;
unsigned int m_nBufSizeForSaveImage;
MV_FRAME_OUT_INFO_EX stImageInfo = {0};

MV_CC_DEVICE_INFO_LIST stDeviceList; 
MVCC_INTVALUE stParam;   

bool PrintDeviceInfo(MV_CC_DEVICE_INFO* pstMVDevInfo);
bool EnumDevice(); //  infrequent
// thress core functions
bool InitCamera(); 
bool StartGrabStream(Mat& image);;
bool Destroy();

#endif //INIT_CAMERA_H