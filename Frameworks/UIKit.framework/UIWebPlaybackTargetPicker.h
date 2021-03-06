/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class MPAVRoutingController, UIWebDocumentView, MPAudioVideoRoutingPopoverController, MPAudioVideoRoutingActionSheet, NSString;

@interface UIWebPlaybackTargetPicker : UIView <UIPopoverControllerDelegate> {
    MPAVRoutingController *_routingController;
    MPAudioVideoRoutingPopoverController *_popoverController;
    MPAudioVideoRoutingActionSheet *_actionSheet;
    UIWebDocumentView *_delegate;
}

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (void)setDelegate:(id)arg1;
- (void)dealloc;
- (void)showAirPlayPickerIPhone:(unsigned long long)arg1;
- (void)showAirPlayPickerIPad:(unsigned long long)arg1 fromRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)_presentAirPlayPopoverAnimated:(bool)arg1 fromRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)_windowDidRotate:(id)arg1;
- (void)_dismissAirPlayRoutePickerIPad;
- (void)_windowWillRotate:(id)arg1;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (void)show:(bool)arg1 fromRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;

@end
