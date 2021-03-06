/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
 */

@class NSString, NSArray, NSNumber;

@interface VSVoiceAsset : NSObject <NSSecureCoding> {
    bool_isInstalled;
    bool_isBuiltInVoice;
    NSString *_name;
    NSArray *_languages;
    long long _gender;
    long long _footprint;
    NSNumber *_contentVersion;
    NSString *_masteredVersion;
}

@property(readonly) NSString * name;
@property(readonly) NSArray * languages;
@property(readonly) long long gender;
@property(readonly) long long footprint;
@property(readonly) bool isInstalled;
@property bool isBuiltInVoice;
@property(readonly) NSNumber * contentVersion;
@property(readonly) NSString * masteredVersion;

+ (bool)supportsSecureCoding;

- (id)masteredVersion;
- (void)setIsBuiltInVoice:(bool)arg1;
- (bool)isBuiltInVoice;
- (id)initWithName:(id)arg1 languages:(id)arg2 gender:(long long)arg3 footprint:(long long)arg4 isInstalled:(bool)arg5;
- (id)initWithName:(id)arg1 languages:(id)arg2 gender:(long long)arg3 footprint:(long long)arg4 contentVersion:(id)arg5 masteredVersion:(id)arg6 isInstalled:(bool)arg7;
- (long long)gender;
- (long long)footprint;
- (id)contentVersion;
- (id)languages;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (bool)isInstalled;
- (id)name;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void).cxx_destruct;
- (id)description;
- (id)dictionaryRepresentation;

@end
