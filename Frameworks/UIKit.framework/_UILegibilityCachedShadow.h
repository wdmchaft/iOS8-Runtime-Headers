/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIImage, _UILegibilitySettings;

@interface _UILegibilityCachedShadow : NSObject  {
    _UILegibilitySettings *_settings;
    double _strength;
    UIImage *_shadow;
}

@property(retain) _UILegibilitySettings * settings;
@property double strength;
@property(retain) UIImage * shadow;


- (id)settings;
- (void)setSettings:(id)arg1;
- (id)shadow;
- (bool)isEqual:(id)arg1;
- (void)dealloc;
- (void)setShadow:(id)arg1;
- (void)setStrength:(double)arg1;
- (bool)matchesSettings:(id)arg1 strength:(double)arg2;
- (double)strength;

@end
