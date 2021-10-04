//
//  VideoCameraWrapper.h
//  AccuraSDK
//
//  Created by Chang Alex on 1/26/20.
//  Copyright © 2020 Elite Development LLC. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "VideoCameraWrapperDelegate.h"
#import "SDKModels.h"
#import <Speech/Speech.h>
#import <Speech/SFSpeechRecognizer.h>

#import "ResultModel.h"

typedef NS_ENUM(NSUInteger, CameraFacing)
{
    CAMERA_FACING_BACK,
    CAMERA_FACING_FRONT
};

typedef NS_ENUM(NSUInteger, CardSide)
{
    BACK_CARD_SCAN,
    FRONT_CARD_SCAN
};

typedef NS_ENUM(NSUInteger, BarcodeType)
{
    ean8,
    ean13,
    pdf417,
    aztec,
    code128,
    code39,
    code93,
    dataMatrix,
    upca,
    itf,
    qrcode,
    upce,
    codabar,
    all
};



@interface AccuraCameraWrapper : NSObject

{
    CameraFacing Camerafacing;
    CardSide ScanCard;
    BarcodeType barCodeType;
    BOOL _isCapturing;
    BOOL _isMotion;
    NSThread *thread;
    LivenessType Liveness_Type;
//    SDKModel sdkm;
}


@property (nonatomic, strong) id<VideoCameraWrapperDelegate> delegate;
@property (nonatomic) SFSpeechRecognizer *speechRecognizer;
@property (nonatomic) SFSpeechAudioBufferRecognitionRequest *recognitionRequest;
@property (nonatomic) SFSpeechRecognitionTask *recognitionTask;
@property (nonatomic) AVAudioEngine *audioEngine;
@property (nonatomic) AVAudioInputNode *inputNode;


//@property NSMutableDictionary *ocrDataSet;


- (SDKModels *)loadEngine:(NSString *)url;
-(void)setDefaultDialogs:(bool)isShowErrorDialogs;
//- (NSMutableArray *)getOCRList;

-(id)initWithDelegate:(UIViewController<VideoCameraWrapperDelegate>*)delegate andImageView:(UIImageView *)iv andLabelMsg:(UILabel*)l andurl:(NSString*)url andMRZDocType:(int)MRZDocumentType;

-(id)initWithDelegate:(UIViewController<VideoCameraWrapperDelegate>*)delegate andImageView:(UIImageView *)iv andMsgLabel:(UILabel*)l andfeedBackframeMessage:(NSString*)feedBackframeMessage andfeedBackAwayMessage:(NSString*)feedBackAwayMessage andfeedBackOpenEyesMessage:(NSString*)feedBackOpenEyesMessage andfeedBackCloserMessage:(NSString*)feedBackCloserMessage andfeedBackCenterMessage:(NSString*)feedBackCenterMessage andfeedBackMultipleFaceMessage:(NSString*)feedBackMultipleFaceMessage andfeedBackFaceSteady:(NSString*)feedBackFaceSteady andfeedBackLowLightMessage:(NSString*)feedBackLowLightMessage andfeedBackBlurFaceMessage:(NSString*)feedBackBlurFaceMessage andfeedBackGlareFaceMessage:(NSString*)feedBackGlareFaceMessage andfeedBackVideoRecordingMessage:(NSString*)feedBackVideoRecordingMessage andcheckLivess:(bool)checkLivenss labelLvienessProcess:(UILabel*)lbllivenessProcess recordingMessage:(NSString*)recordingMessage labelRecordingMSG:(UILabel*)labelRecordingMSG feedbackFMFailMessage:(NSString *)feedBackFMFailMessage andfeedBackLookLeftMessage:(NSString *)feedBackLookLeftMessage andfeedBackLookRightMessage:(NSString *)feedBackLookRightMessage andFaceInsideOvalMessage:(NSString *)FaceInsideOvalMessage andfeedBackOralInfoMessage:(NSString*)feedBackOralInfoMessage andfeedBackProcessingMessage:(NSString*)feedBackProcessingMessage;

-(void)startCamera;
-(void)stopCamera;
-(void)stopCameraPreview;
-(void)startCameraPreview;
-(void)ChangedOrintation:(CGFloat)width height:(CGFloat)height;
//-(void)changeBarcodeType:(BarcodeType)barcodetype;

//-(void)processWithArray:(NSArray*)imageDataArray andarrTextData:(NSArray*)ad;

//-(void)processWithBack1:(NSString*)stCard  andisCheckBack:(bool)isCheckBack;
//-(void)drawFeatures:(UIImage *)image11;
-(void)setHologramDetection:(BOOL)hologram;
-(void)setFaceBlurPercentage:(int)faceBlur;
-(void)setLowLightTolerance:(int)lowLight;
-(void)setMotionThreshold:(int)motion;
-(void)setGlarePercentage:(int)intMin intMax:(int)intMax;
-(void)setCheckPhotoCopy:(BOOL)isPhoto;
-(void)setLivenessGlarePercentage:(int)glareMin glareMax:(int)glareMax;
-(void)setLivenessBlurPercentage:(int)blur;
-(void)SetCameraFacing:(CameraFacing)camera;
-(void)SwitchCamera;
-(void)setBlurPercentage:(int)blur;
//-(void)CardSide:(CardSide)scanCardFirst;
-(void)showLogFile:(bool)isShowLogs;
//-(void)CloseOCR;
-(void)LivenessRetrying:(bool)isRetryLiveness;
//-(void)setMinFrameForValidate:(int)minFrame;
-(NSString *)getKYCSDKVersion;
-(void)setMRZCountryCodeList:(NSString*)countryCodeList;
-(void)startRecording;
-(void)stopRecording1;



@end
