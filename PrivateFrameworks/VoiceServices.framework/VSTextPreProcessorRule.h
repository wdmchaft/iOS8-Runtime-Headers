/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
 */

@class NSString;

@interface VSTextPreProcessorRule : NSObject  {
    NSString *_matchPattern;
    NSString *_replacement;
    bool_caseSensitive;
    bool_eatPunctuation;
}


- (id)matchedString:(id)arg1 forTokenInRange:(struct { long long x1; long long x2; }*)arg2;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (void)dealloc;

@end
