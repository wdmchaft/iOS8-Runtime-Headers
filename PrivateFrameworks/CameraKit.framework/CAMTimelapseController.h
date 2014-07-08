/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

@class NSCountedSet, CAMTimelapseState, NSObject<OS_dispatch_source>, NSMutableSet, NSDate, CAMLowDiskSpaceAlertView;

@interface CAMTimelapseController : NSObject <CAMStillImageCaptureRequestDelegate, UIAlertViewDelegate> {
    bool__ignoringTimerCallbacksForTearDown;
    bool__ignoringTimerCallbacksWaitingForCaptureResponse;
    bool__backendRecoveryNeeded;
    bool__previewStarted;
    CAMTimelapseState *__state;
    NSObject<OS_dispatch_source> *__captureTimer;
    NSCountedSet *__inFlightTimelapseUUIDs;
    NSMutableSet *__pendingCompletedStates;
    CAMLowDiskSpaceAlertView *__diskSpaceAlert;
}

@property(getter=isCapturing,readonly) bool capturing;
@property(readonly) NSDate * captureStartTime;
@property(readonly) CAMTimelapseState * _state;
@property(readonly) NSObject<OS_dispatch_source> * _captureTimer;
@property(readonly) bool _ignoringTimerCallbacksForTearDown;
@property(readonly) bool _ignoringTimerCallbacksWaitingForCaptureResponse;
@property(readonly) NSCountedSet * _inFlightTimelapseUUIDs;
@property(readonly) NSMutableSet * _pendingCompletedStates;
@property(readonly) CAMLowDiskSpaceAlertView * _diskSpaceAlert;
@property(setter=_setBackendRecoveryNeeded:) bool _backendRecoveryNeeded;
@property(setter=_setPreviewStarted:) bool _previewStarted;

+ (id)_videoPreviewImageForTimelapseState:(id)arg1;
+ (void)recoverFromCrashIfNeededForceEndLastSession:(bool)arg1;
+ (id)createPlaceholderAssetResponseForTimelapseState:(id)arg1;
+ (id)sharedInstance;

- (id)_diskSpaceAlert;
- (id)_pendingCompletedStates;
- (id)_inFlightTimelapseUUIDs;
- (bool)_ignoringTimerCallbacksWaitingForCaptureResponse;
- (bool)_ignoringTimerCallbacksForTearDown;
- (id)_captureTimer;
- (id)captureStartTime;
- (bool)startCapturing;
- (void)restoreConfiguration;
- (void)captureController:(id)arg1 didFinishWriteForResponse:(id)arg2 forStillImageRequest:(id)arg3 error:(id)arg4;
- (void)captureController:(id)arg1 didGenerateResponse:(id)arg2 forStillImageRequest:(id)arg3 error:(id)arg4;
- (void)_setPreviewStarted:(bool)arg1;
- (void)_resetIgnoringTimerCallbacksWaitingForCaptureResponse;
- (void)_updateFocusLensPosition:(float)arg1 forTimelapseUUID:(id)arg2 forceUpdate:(bool)arg3;
- (void)_notifyInsufficientDiskSpaceForContinuingCapture;
- (bool)_enqueueCaptureRequest;
- (void)_updateLocationIfNecessary;
- (void)_captureTimerFired;
- (void)_notifyInsufficientDiskSpaceForStartingCaptureWithNeededBytes:(long long)arg1 availableBytes:(long long)arg2;
- (id)_createPlaceholderAssetForTimelapseState:(id)arg1;
- (void)_updateFocusAndExposureForStopCapturing;
- (void)_saveStateToDisk:(id)arg1;
- (bool)_reserveDiskSpaceForTimelapseUUID:(id)arg1;
- (void)_setNewCaptureState;
- (void)_stopCapturingWithReasons:(long long)arg1;
- (bool)_startCapturing;
- (void)_startCaptureTimer;
- (void)_updateFocusAndExposureForStartCapturing;
- (bool)_previewStarted;
- (bool)_backendRecoveryNeeded;
- (void)_triggerBackendCrashRecoveryIfNeeded;
- (void)_setBackendRecoveryNeeded:(bool)arg1;
- (void)_prepareForTimelapseCapture;
- (void)_restoreCaptureStateFromDisk;
- (void)_teardownCaptureTimer;
- (void)_dismissDiskSpaceAlert;
- (void)_sessionRuntimeErrored:(id)arg1;
- (void)_sessionStarted:(id)arg1;
- (void)_previewStarted:(id)arg1;
- (void)_deviceStarted:(id)arg1;
- (void)stopCapturingWithReasons:(long long)arg1;
- (bool)isCapturing;
- (id)_state;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)_applicationWillEnterForeground:(id)arg1;
- (void)_applicationDidEnterBackground:(id)arg1;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;

@end