/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class NSSet;

@interface PLAssetChangeNotification : PLChangeNotification  {
    NSSet *_updatedAssets;
}

@property(copy) NSSet * updatedAssets;

+ (id)notificationWithChangedAssets:(id)arg1;

- (void)setUpdatedAssets:(id)arg1;
- (id)_initWithChangedObjects:(id)arg1;
- (id)updatedAssets;
- (id)object;
- (id)name;
- (id)userInfo;
- (void)dealloc;
- (id)description;
- (id)_init;

@end
