//
//  AccuraSDK.h
//  DocRecog
//
//  Created by Apple on 02/05/20.
//  Copyright © 2020 apple. All rights reserved.
//
#if !TARGET_OS_WATCH
#ifndef AccuraSDK_h
#define AccuraSDK_h

#import <Foundation/Foundation.h>
#include <string>
#include <sstream>
#include <iostream>
#include <fstream>
#include <queue>
#include <regex>
#include <map>
#include <dirent.h>

#include <utility>
#include <algorithm>

//#include <opencv2/opencv.hpp>
#include "opencv2/highgui.hpp"
#include "opencv2/imgproc.hpp"
#include "opencv2/imgcodecs.hpp"
#include "opencv2/features2d.hpp"
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/core/core.hpp>
#include <opencv2/features2d/features2d.hpp>

using namespace std;

class ImageOpenCv {

public:
    ImageOpenCv(const std::string &message, bool isSucess, bool isChangeCard, int cardPos,
                int resultCode, float ratioOut) : message(message), isSucess(isSucess),
    isChangeCard(isChangeCard), cardPos(cardPos),
    resultCode(resultCode), ratioOut(ratioOut) {
    }

    std::string message = "";
    bool isSucess = false;
    bool isChangeCard = false;
    int cardPos = 0;
    int resultCode = 0;
    float ratioOut;
    std::string croppedRect;
};

typedef struct tagCardDetails {
    int ret;
    std::string owner;
    std::string number;
    std::string cardType;
    std::string expirationDate;
    std::string expirationMonth;
    std::string expirationYear;
} CardDetails;

int docrecog_scan_RecogEngine_loadDictionary(std::string path_file, NSString* path, std::string directorypath, int pintData[]);

string docrecog_scan_RecogEngine_loadData(int *jint1);
string docrecog_scan_RecogEngine_loadOCR(int countrytype_, int cardtype_, int jint1, string dairectorypath);
string docrecog_scan_RecogEngine_loadScanner(int countrytype_, string dairectorypath);
ImageOpenCv docrecog_scan_RecogEngine_checkDocument(cv::Mat src, cv::Mat &resultMat, cv::Mat &showResult);
string docrecog_scan_RecogEngine_recognizeData(cv::Mat &src,/* float *imageHeightWidth, */int **boxBounds, int elementsLength, string *textArray, string facePath);
int docrecog_scan_RecogEngine_setBlurPercentage(int jint1);
int docrecog_scan_RecogEngine_setGlarePercentage(int jintMin, int jintMax);
int docrecog_scan_RecogEngine_isCheckPhotoCopy(BOOL jint1);
int docrecog_scan_RecogEngine_SetHologramDetection(bool jint1);
int docrecog_scan_RecogEngine_setFaceBlurPercentage(int jint1);
int docrecog_scan_RecogEngine_setLowLightTolerance(int tolerance);
int docrecog_scan_RecogEngine_setMotionThreshold(int motionTolerance);
int docrecog_scan_RecogEngine_closeOCR(int clear_ocr_data);
//std::string filterFace(cv::Mat opencvFace);
int checklivenessvalidation(cv::Mat mat,int faceblur,int glaremin,int glaremax,int light);

void updatedata(string s);
string docrecog_scan_RecogEngine_doLightCheck(cv::Mat mat_ref);

string docrecog_scan_RecogEngine_doCheckData(cv::Mat yuvData, int w, int h);
string docrecog_scan_RecogEngine_doFaceCheck(cv::Mat srcMat);
int docrecog_scan_RecogEngine_doDetectNumberPlate(string jstring1, char* intData, int id1, int card_id);
string docrecog_scan_RecogEngine_doCheckDocument(cv::Mat srcMat);
//void Logger(string logMsg, bool isPrint = false);
string docrecog_scan_RecogEngine_loadScanner(int countrytype_/*, string dairectorypath*/);
string docrecog_scan_RecogEngine_loadNumberPlat(int countrytype_, int cardtype_);
string docrecog_scan_RecogEngine_BankCard(std:: string inputString);
string docrecog_scan_RecogEngine_recognizeCard(string ocrText, int i, int cardSide);
std::string docrecog_scan_RecogEngine_loadCard(int recog_type);
void docrecog_scan_RecogEngine_qatarFrontFrameCount(int qatarFrontFrameCount);
void setPrintLogs(bool b);

#endif
#endif /* AccuraSDK_h */
