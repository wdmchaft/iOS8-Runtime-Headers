/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class ABMultiCellContentView;

@interface ABMultiCell : ABChameleonCell  {
    ABMultiCellContentView *_abMultiCellContentView;
    BOOL _editingDisabled;
}

@property(getter=isEditingDisabled) BOOL editingDisabled;
@property(retain) ABMultiCellContentView * multiCellContentView;

+ (void)_initializeSafeCategory;
+ (id)_initializeSafeCategoryFromValidationManager;

- (void)setEditingDisabled:(BOOL)arg1;
- (BOOL)isEditingDisabled;
- (void)setMultiCellContentView:(id)arg1;
- (id)multiCellContentView;
- (BOOL)_shouldSwallowTouches:(id)arg1 withEvent:(id)arg2;
- (void)_addMultiCellContentViewIfNeeded;
- (void)setAbCellStyle:(int)arg1;
- (void)dealloc;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (void)layoutSubviews;
- (id)accessibilityValue;
- (id)accessibilityLabel;
- (BOOL)isAccessibilityElement;
- (BOOL)_accessibilityAlwaysReturnsChild;
- (BOOL)_accessibilityCanDeleteTableViewCell;

@end