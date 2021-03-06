/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKSystemController : NSObject  {
}

+ (id)sharedInstance;

- (bool)shouldRateLimitSearchCompletions;
- (bool)openURL:(id)arg1 bundleIdentifier:(id)arg2;
- (bool)isWifiEnabled;
- (bool)isHiDPI;
- (bool)isDevicePluggedIn;
- (bool)supports3DImagery;
- (bool)overrideBlurStyle;
- (bool)supports3DMaps;
- (bool)supportsPitchAPI;
- (bool)isInternalInstall;
- (bool)openURL:(id)arg1;
- (double)screenScale;
- (struct CGSize { double x1; double x2; })screenSize;
- (int)userInterfaceIdiom;

@end
