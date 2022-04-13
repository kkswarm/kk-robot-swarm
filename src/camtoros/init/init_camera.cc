/*
 * @Author: Chaozheng Zhu && Loren
 * @Date: 2022-04-12 15:03:43
 * @LastEditTime: 2022-04-13 14:14:22
 * @FilePath: /misaro_ws/src/camtoros/init/init_camera.cc
 * @Description:
 *
 * Copyright (c) 2022 by AmovLab, All Rights Reserved.
 */

#include "camtoros/init_camera.h"

// 等待用户输入enter键来结束取流或结束程序
// wait for user to input enter to stop grabbing or end the sample program
void PressEnterToExit(void) {
  int c;
  while ((c = getchar()) != '\n' && c != EOF)
    ;
  fprintf(stderr, "\nPress enter to exit.\n");
  while (getchar() != '\n')
    ;
}

bool PrintDeviceInfo(MV_CC_DEVICE_INFO* pstMVDevInfo) {
  if (NULL == pstMVDevInfo) {
    printf("The Pointer of pstMVDevInfo is NULL!\n");
    return false;
  }
  if (pstMVDevInfo->nTLayerType == MV_GIGE_DEVICE) {
    int nIp1 =
        ((pstMVDevInfo->SpecialInfo.stGigEInfo.nCurrentIp & 0xff000000) >> 24);
    int nIp2 =
        ((pstMVDevInfo->SpecialInfo.stGigEInfo.nCurrentIp & 0x00ff0000) >> 16);
    int nIp3 =
        ((pstMVDevInfo->SpecialInfo.stGigEInfo.nCurrentIp & 0x0000ff00) >> 8);
    int nIp4 = (pstMVDevInfo->SpecialInfo.stGigEInfo.nCurrentIp & 0x000000ff);

    // ch:打印当前相机ip和用户自定义名字 | en:print current ip and user defined
    // name
    printf("Device Model Name: %s\n",
           pstMVDevInfo->SpecialInfo.stGigEInfo.chModelName);
    printf("CurrentIp: %d.%d.%d.%d\n", nIp1, nIp2, nIp3, nIp4);
    printf("UserDefinedName: %s\n\n",
           pstMVDevInfo->SpecialInfo.stGigEInfo.chUserDefinedName);
  } else if (pstMVDevInfo->nTLayerType == MV_USB_DEVICE) {
    printf("Device Model Name: %s\n",
           pstMVDevInfo->SpecialInfo.stUsb3VInfo.chModelName);
    printf("UserDefinedName: %s\n\n",
           pstMVDevInfo->SpecialInfo.stUsb3VInfo.chUserDefinedName);
  } else {
    printf("Not support.\n");
  }

  return true;
}

bool EnumDevice() {
  // MV_CC_DEVICE_INFO_LIST stDeviceList;
  memset(&stDeviceList, 0, sizeof(MV_CC_DEVICE_INFO_LIST));

  // 枚举设备
  // enum device
  nRet = MV_CC_EnumDevices(MV_GIGE_DEVICE | MV_USB_DEVICE, &stDeviceList);
  if (MV_OK != nRet) {
    printf("MV_CC_EnumDevices fail! nRet [%x]\n", nRet);
    return false;
  }
  if (stDeviceList.nDeviceNum > 0) {
    for (int i = 0; i < stDeviceList.nDeviceNum; i++) {
      printf("[device %d]:\n", i);
      MV_CC_DEVICE_INFO* pDeviceInfo = stDeviceList.pDeviceInfo[i];
      if (NULL == pDeviceInfo) {
        return false;
      }
      PrintDeviceInfo(pDeviceInfo);
    }
  } else {
    printf("Find No Devices!\n");
    return false;
  }
}

bool InitCamera() {
  unsigned int nIndex = 0;
  // select device and create handle
  nRet = MV_CC_CreateHandle(&handle, stDeviceList.pDeviceInfo[nIndex]);
  if (MV_OK != nRet) {
    printf("MV_CC_CreateHandle fail! nRet [%x]\n", nRet);
    return false;
  }

  // open device
  nRet = MV_CC_OpenDevice(handle);
  if (MV_OK != nRet) {
    printf("MV_CC_OpenDevice fail! nRet [%x]\n", nRet);
    return false;
  }

  // en:Detection network optimal package size(It only works for the GigE
  // camera)
  if (stDeviceList.pDeviceInfo[nIndex]->nTLayerType == MV_GIGE_DEVICE) {
    int nPacketSize = MV_CC_GetOptimalPacketSize(handle);
    if (nPacketSize > 0) {
      nRet = MV_CC_SetIntValue(handle, "GevSCPSPacketSize", nPacketSize);
      if (nRet != MV_OK) {
        printf("Warning: Set Packet Size fail nRet [0x%x]!\n", nRet);
      }
    } else {
      printf("Warning: Get Packet Size fail nRet [0x%x]!\n", nPacketSize);
    }
  }

  nRet = MV_CC_SetEnumValue(handle, "TriggerMode", 0);
  if (MV_OK != nRet) {
    printf("MV_CC_SetTriggerMode fail! nRet [%x]\n", nRet);
    return false;
  }

  // en:Get payload size
  MVCC_INTVALUE stParam;
  memset(&stParam, 0, sizeof(MVCC_INTVALUE));
  nRet = MV_CC_GetIntValue(handle, "PayloadSize", &stParam);
  if (MV_OK != nRet) {
    printf("Get PayloadSize fail! nRet [0x%x]\n", nRet);
    return false;
  }

  // start grab image
  nRet = MV_CC_StartGrabbing(handle);
  if (MV_OK != nRet) {
    printf("MV_CC_StartGrabbing fail! nRet [%x]\n", nRet);
    return false;
  }

  memset(&stImageInfo, 0, sizeof(MV_FRAME_OUT_INFO_EX));
  pData = (unsigned char*)malloc(sizeof(unsigned char) * stParam.nCurValue);
  if (pData == NULL) {
    return false;
  }
  nDataSize = stParam.nCurValue;

  return nRet;
}

// convert data stream in Mat format
bool Convert2Mat(MV_FRAME_OUT_INFO_EX* pstImageInfo, unsigned char* pData) {
  cv::Mat srcImage;
  if (pstImageInfo->enPixelType == PixelType_Gvsp_Mono8) {
    cout << "mono8" << endl;
    srcImage =
        cv::Mat(pstImageInfo->nHeight, pstImageInfo->nWidth, CV_8UC1, pData);
  } else if (pstImageInfo->enPixelType == PixelType_Gvsp_RGB8_Packed) {
    // RGB2BGR(pData, pstImageInfo->nWidth, pstImageInfo->nHeight);
    srcImage =
        cv::Mat(pstImageInfo->nHeight, pstImageInfo->nWidth, CV_8UC3, pData);
  } else {
    printf("unsupported pixel format\n");
    return false;
  }

  if (NULL == srcImage.data) {
    return false;
  }

  // save converted image in a local file
  try {
#if defined(VC9_COMPILE)
    cvSaveImage("MatImage.bmp", &(IplImage(srcImage)));
#else
    cv::imwrite("MatImage_01.bmp", srcImage);
#endif
  } catch (cv::Exception& ex) {
    fprintf(stderr, "Exception saving image to bmp format: %s\n", ex.what());
  }

  srcImage.release();

  return true;
}

bool StartGrabStream(Mat& image) {
  nRet = MV_CC_GetOneFrameTimeout(handle, pData, nDataSize, &stImageInfo, 1000);
  if (nRet != 0) {
    printf("No data[0x%x]\n", nRet);
    cout << nRet << endl;
    return -1;
  }

  if (stImageInfo.enPixelType == PixelType_Gvsp_Mono8) {
    image = cv::Mat(stImageInfo.nHeight, stImageInfo.nWidth, CV_8UC1, pData);
    // imwrite("MatImage_01.bmp", image);
    // cout << "finished Mat!" << endl;
  } else if (stImageInfo.enPixelType == PixelType_Gvsp_RGB8_Packed) {
    // RGB2BGR(pData, pstImageInfo->nWidth, pstImageInfo->nHeight);
    image = cv::Mat(stImageInfo.nHeight, stImageInfo.nWidth, CV_8UC3, pData);
  } else {
    printf("unsupported pixel format\n");
    return false;
  }

  if (NULL == image.data) {
    return false;
  }
  return nRet;
}

bool Destroy() {
  // end grab image
  nRet = MV_CC_StopGrabbing(handle);
  if (MV_OK != nRet) {
    printf("MV_CC_StopGrabbing fail! nRet [%x]\n", nRet);
    return false;
  }

  // destroy handle
  nRet = MV_CC_DestroyHandle(handle);
  if (MV_OK != nRet) {
    printf("MV_CC_DestroyHandle fail! nRet [%x]\n", nRet);
    return false;
  }

  if (nRet != MV_OK) {
    if (handle != NULL) {
      MV_CC_DestroyHandle(handle);
      handle = NULL;
    }
  }
  if (pData) {
    free(pData);
    pData = NULL;
  }
  if (pDataForSaveImage) {
    free(pDataForSaveImage);
    pDataForSaveImage = NULL;
  }
  return nRet;
}