/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSString;

@interface SAUIShowHelp : SABaseClientBoundCommand  {
}

@property(copy) NSString * speakableText;
@property(copy) NSString * text;

+ (id)showHelpWithDictionary:(id)arg1 context:(id)arg2;
+ (id)showHelp;

- (void)setSpeakableText:(id)arg1;
- (id)speakableText;
- (bool)requiresResponse;
- (id)encodedClassName;
- (id)text;
- (id)groupIdentifier;
- (void)setText:(id)arg1;

@end
