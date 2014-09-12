/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSNumber;

@interface SAPhoneCallHistory : SAPhoneCallSearchResult  {
}

@property(copy) NSNumber * blocked;
@property(copy) NSNumber * callCount;
@property(copy) NSNumber * faceTime;
@property(copy) NSNumber * faceTimeAudio;
@property(copy) NSNumber * missed;
@property(copy) NSNumber * outgoing;

+ (id)callHistoryWithDictionary:(id)arg1 context:(id)arg2;
+ (id)callHistory;

- (void)setMissed:(id)arg1;
- (void)setCallCount:(id)arg1;
- (id)callCount;
- (id)blocked;
- (id)outgoing;
- (id)missed;
- (void)setFaceTimeAudio:(id)arg1;
- (id)faceTimeAudio;
- (void)setFaceTime:(id)arg1;
- (id)faceTime;
- (void)updateUsingSet:(id)arg1 add:(id)arg2 remove:(id)arg3;
- (id)encodedClassName;
- (void)setBlocked:(id)arg1;
- (void)setOutgoing:(id)arg1;
- (id)groupIdentifier;

@end