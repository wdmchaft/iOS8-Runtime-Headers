/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class OADThemeOverrides, OADColorMap;

@interface PDSlideChild : PDSlideBase  {
    boolmShowMasterPlaceholderAnimations;
    boolmShowMasterShapes;
    OADThemeOverrides *mThemeOverrides;
    OADColorMap *mColorMapOverride;
}


- (bool)showMasterPlaceholderAnimations;
- (id)colorMapOverride;
- (void)setShowMasterPlaceholderAnimations:(bool)arg1;
- (void)setShowMasterShapes:(bool)arg1;
- (void)setColorMapOverride:(id)arg1;
- (id)themeOverrides;
- (void)doneWithContent;
- (id)drawingTheme;
- (bool)showMasterShapes;
- (id)fontScheme;
- (id)styleMatrix;
- (id)colorScheme;
- (id)colorMap;
- (id)init;
- (void)dealloc;

@end
