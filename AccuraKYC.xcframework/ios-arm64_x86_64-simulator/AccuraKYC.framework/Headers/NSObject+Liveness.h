//
//  NSObject+Liveness.h
//  AccuraOCR
//
//  Created by Technozer on 17/02/21.
//  Copyright © 2021 Technozer. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "LivenessVC.h"
#import "NSObject+userDefaults.h"

NS_ASSUME_NONNULL_BEGIN

@interface Liveness : NSObject


-(void) setLiveness:(UIViewController*)livenessView;


-(void)setBackGroundColor:(NSString*)backGroundColor;

-(void) setCloseIconColor:(NSString*)closeIconColor;

-(void)setFeedbackBackGroundColor:(NSString*)feedbackBackGroundColor;

-(void) setFeedbackTextColor:(NSString*)feedbackTextColor;

-(void) setFeedbackTextSize:(float)feedbackTextSize;

-(void) setFeedBackframeMessage:(NSString*)feedBackframeMessage;

-(void) setFeedBackAwayMessage:(NSString*)feedBackAwayMessage;

-(void) setFeedBackOpenEyesMessage:(NSString*)feedBackOpenEyesMessage;

-(void) setFeedBackCloserMessage:(NSString*)feedBackCloserMessage;

-(void) setFeedBackCenterMessage:(NSString*)feedBackCenterMessage;

-(void) setLivenessURL:(NSString*)livenessURL;

-(void) setFeedbackMultipleFaceMessage:(NSString*)feedBackMultipleFaceMessage;

-(void) setFeedBackFaceSteadymessage:(NSString*)feedBackFaceSteadymessage;
       
-(void) setFeedBackLowLightMessage:(NSString*)feedBackLowLightMessage;

-(void) setFeedBackBlurFaceMessage:(NSString*)feedBackBlurFaceMessage;
-(void) setFeedBackGlareFaceMessage:(NSString*)feedBackGlareFaceMessage;
-(void) setFeedBackOralInfoMessage:(NSString*)feedBackOralInfoMessage;
//-(void) setfeedBackVideoRecordingMessage:(NSString*)feedBackRecordingMessage;

-(void) setBlurPercentage:(int)blurPercentage;

-(void) setGlarePercentage:(int) glaremin :(int) glareMax;

//-(void)setVideoLengthInSecond:(int)videoLength;
-(void)saveImageinDocumentDirectory:(bool)isSaveImage;
//-(void)saveVideoinDocumentDirectory:(bool)isSaveVideo;
//-(void)setRecordingMessage:(NSString*)recordingMessage;
//-(void)enableFaceDetect:(bool)isFaceDetect;
//-(void)fmScoreThreshold:(int)FMMinPer;
//-(void)enableFaceMatch:(bool)isCheckFMScore;
//-(void)setfeedBackFMFailMessage:(NSString*)setfeedBackFMFail;
//-(void)setRecordingTimerTextSize:(CGFloat)textSize;
//-(void)setRecordingTimerTextColor:(NSString*)textColor;
//-(void)setRecordingMessageTextSize:(CGFloat)textSize;
//-(void)setRecordingMessageTextColor:(NSString*)textColor;
//-(void)evaluateServerTrustWIthSSLPinning:(bool)isServerTrust;
-(void)setFeedBackProcessingMessage:(NSString *)feedBackProcessingMessage;

-(void)setFeedBackLookRightMessage:(NSString*)feedBackLookRightMessage;
-(void) setLowLightThreshHold:(int)lowLightThreshHold;
-(void) setFeedBackLookLeftMessage:(NSString*)feedBackLookLeftMessage;
-(void) setFeedBackFaceInsideOvalMessage:(NSString*)FaceInsideOvalMessage;
-(void)GIFImageNameForRightMoveFaceAnimation:(NSString*)rightMoveGIFName;
-(void)GIFImageNameForLeftMoveFaceAnimation:(NSString*)leftMoveGIFName;
-(void)isShowLogo:(bool)isShowLogo;
-(void)setLogoImage:(NSString*)LogoImageName;
-(void)enableOralVerification:(bool)isOralVerification;
-(void)setButtonStartRecordingIcon:(NSString*)imageName;
-(void)setCodeTextColor:(NSString*)codeTextColor;
-(void)setContentType:(ContentType)contentType;

@end

NS_ASSUME_NONNULL_END
