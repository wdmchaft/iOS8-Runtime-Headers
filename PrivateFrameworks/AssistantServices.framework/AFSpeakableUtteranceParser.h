/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@class NSMutableDictionary, NSLocale;

@interface AFSpeakableUtteranceParser : NSObject  {
    NSMutableDictionary *_providers;
    id _functionHandler;
    NSLocale *_locale;
}

@property bool handleTTSCodes;
@property bool handlesFunctions;

+ (id)parseUserGeneratedMessage:(id)arg1;
+ (bool)_shouldAutomaticallyProvideFunctions;

- (id)parseStringRemovingControlCharacters:(id)arg1 error:(id*)arg2;
- (void)setHandleTTSCodes:(bool)arg1;
- (id)_handleControlCodeAtIndex:(unsigned int)arg1 withBuffer:(struct { unsigned short x1[64]; struct __CFString {} *x2; unsigned short *x3; char *x4; struct { long long x_5_1_1; long long x_5_1_2; } x5; long long x6; long long x7; })arg2 totalLength:(unsigned long long)arg3 consumedLength:(unsigned int*)arg4 hadEmpties:(bool*)arg5;
- (id)_handleProviderAtIndex:(unsigned int)arg1 withBuffer:(struct { unsigned short x1[64]; struct __CFString {} *x2; unsigned short *x3; char *x4; struct { long long x_5_1_1; long long x_5_1_2; } x5; long long x6; long long x7; })arg2 totalLength:(unsigned long long)arg3 consumedLength:(unsigned int*)arg4;
- (id)_handleOptionalAtIndex:(unsigned int)arg1 withBuffer:(struct { unsigned short x1[64]; struct __CFString {} *x2; unsigned short *x3; char *x4; struct { long long x_5_1_1; long long x_5_1_2; } x5; long long x6; long long x7; })arg2 totalLength:(unsigned long long)arg3 consumedLength:(unsigned int*)arg4;
- (id)parseStringWithFormat:(id)arg1 includeControlCharacters:(bool)arg2 error:(id*)arg3 hadEmpties:(bool*)arg4;
- (id)parseStringWithFormat:(id)arg1 error:(id*)arg2;
- (bool)handlesFunctions;
- (bool)handleTTSCodes;
- (void)registerProvider:(id)arg1 forNamespace:(id)arg2;
- (void)setHandlesFunctions:(bool)arg1;
- (id)initWithLocale:(id)arg1;
- (id)init;
- (void).cxx_destruct;

@end
