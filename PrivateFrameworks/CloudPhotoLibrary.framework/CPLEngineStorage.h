/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@class NSString, CPLEngineStore, CPLPlatformObject;

@interface CPLEngineStorage : NSObject <CPLAbstractObject> {
    bool_superWasCalled;
    CPLPlatformObject *_platformObject;
    CPLEngineStore *_engineStore;
    NSString *_name;
}

@property(readonly) CPLEngineStore * engineStore;
@property(copy,readonly) NSString * name;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;
@property(readonly) CPLPlatformObject * platformObject;

+ (id)platformImplementationProtocol;

- (id)statusDictionary;
- (bool)_checkSuperWasCalled;
- (void)writeTransactionDidSucceed;
- (void)writeTransactionDidFail;
- (id)engineStore;
- (id)platformObject;
- (id)initWithEngineStore:(id)arg1 name:(id)arg2;
- (bool)openWithError:(id*)arg1;
- (id)status;
- (id)name;
- (void).cxx_destruct;
- (id)description;
- (bool)closeWithError:(id*)arg1;

@end
