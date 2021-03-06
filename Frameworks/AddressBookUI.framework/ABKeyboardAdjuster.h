/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class NSMutableSet;

@interface ABKeyboardAdjuster : NSObject  {
    NSMutableSet *_adjustmentRecords;
    bool_active;
}

@property bool active;

+ (id)sharedAdjuster;

- (void)resetAdjustment;
- (void)removeScrollView:(id)arg1;
- (void)addScrollView:(id)arg1;
- (void)manuallyAdjustEdgeInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1 force:(bool)arg2;
- (void)cancelDelayedAdjustmentsForView:(id)arg1;
- (void)dateFieldDateDidEndEditingNotification:(id)arg1;
- (void)dateFieldDateDidBeginEditingNotification:(id)arg1;
- (void)textViewTextDidEndEditingNotification:(id)arg1;
- (void)textViewTextDidBeginEditingNotification:(id)arg1;
- (void)textFieldTextDidEndEditingNotification:(id)arg1;
- (void)textFieldTextDidBeginEditingNotification:(id)arg1;
- (bool)shouldForceAutomaticKeyboardForView:(id)arg1;
- (bool)containsScrollView:(id)arg1;
- (id)recordForScrollView:(id)arg1;
- (bool)active;
- (id)init;
- (void)dealloc;
- (void)setActive:(bool)arg1;
- (void)_adjustTableForKeyboardInfo:(id)arg1;
- (void)_keyboardWillHide:(id)arg1;
- (void)_keyboardWillShow:(id)arg1;

@end
