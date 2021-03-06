/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSURL, NSString;

@interface SADomainObjectCommitCompleted : SABaseCommand <SAServerBoundCommand, SADomainObjectCommand> {
}

@property(copy) NSURL * identifier;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;
@property(copy) NSString * aceId;
@property(copy) NSString * refId;

+ (id)domainObjectCommitCompletedWithDictionary:(id)arg1 context:(id)arg2;
+ (id)domainObjectCommitCompleted;

- (id)encodedClassName;
- (void)setIdentifier:(id)arg1;
- (id)identifier;
- (id)groupIdentifier;

@end
