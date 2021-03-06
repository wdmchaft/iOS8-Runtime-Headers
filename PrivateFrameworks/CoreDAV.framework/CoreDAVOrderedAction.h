/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@class NSURL;

@interface CoreDAVOrderedAction : CoreDAVAction  {
    int _absoluteOrder;
    NSURL *_priorURL;
}

@property(readonly) int absoluteOrder;
@property(retain) NSURL * priorURL;


- (void)setPriorURL:(id)arg1;
- (id)initWithAction:(int)arg1 context:(id)arg2 absoluteOrder:(int)arg3;
- (id)priorURL;
- (int)absoluteOrder;
- (void)dealloc;
- (id)description;

@end
