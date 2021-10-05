//
//  VideoCameraWrapperDelegate.h
//  AccuraSDK
//
//  Created by Chang Alex on 1/26/20.
//  Copyright © 2020 Elite Development LLC. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "ResultModel.h"

typedef NS_ENUM(NSUInteger, RecType) {
    REC_INIT = 1001,
    REC_BOTH,
    REC_FACE,
    REC_MRZ
};

typedef NS_ENUM(NSUInteger, RecogType) {
    OCR,
    PDF417,
    MRZ
};
typedef NS_ENUM(int, LivenessType)
{
    DEFAULT = 0, LOOK_LEFT = 1, LOOK_RIGHT = 2, ORAL_VERIFICATION = 3, APPROVED = 4
};
typedef NS_ENUM(int, ContentType)
{
    form_data = 0,
    raw_data = 1
};

@protocol VideoCameraWrapperDelegate <NSObject>
@optional
//-(void)recognizeSucceedBarcode:(NSString*)message;
-(void)processedImage:(UIImage*)image;
-(void)recognizeFailed:(NSString*)message;
-(void)recognizeSucceed:(NSMutableDictionary*)scanedInfo recType:(RecType)recType bRecDone:(BOOL)bRecDone bFaceReplace:(BOOL)bFaceReplace bMrzFirst:(BOOL)bMrzFirst photoImage:(UIImage*)photoImage docFrontImage:(UIImage*)docFrontImage docbackImage:(UIImage*)docbackImage;
//-(void)recognizSuccessBankCard:(NSMutableDictionary*)cardDetail andBankCardImage:(UIImage*)bankCardImage;

//-(void)dlPlateNumber:(NSString*)plateNumber andImageNumberPlate:(UIImage*)imageNumberPlate;

//-(void)resultData:(ResultModel*)resultmodel;
-(void)reco_msg:(NSString*)message;
-(void)livenessData:(UIImage*)livenessImage andshowImage:(UIImage*)showImage imagePath:(NSString*)imagePath;
-(void)screenSound;
-(void)onUpdateLayout:(CGSize)frameSize;
-(void)HandleCloseButton:(bool)isCloseButtonHide;
//-(void)recognizeSucceedBarcode:(NSString*)message backImage:(UIImage*)BackSideImage frontImage:(UIImage*)FrontImage faceImage:(UIImage*)FaceImage;
-(void)reco_titleMessage:(int)messageCode;
//-(void)isBothSideAvailable:(bool)isBothAvailable;
//-(void)showAnimatedImage:(LivenessType)livenessType;
-(void)didChangedLivenessType:(LivenessType)faceDirection;
-(void)getRandomNumber:(NSString*)randomNumber;


@end
