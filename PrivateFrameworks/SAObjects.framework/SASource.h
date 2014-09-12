/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSString, NSNumber;

@interface SASource : SADomainObject  {
}

@property(copy) NSString * accountIdentifier;
@property(copy) NSString * accountName;
@property(copy) NSString * domainIdentifier;
@property(copy) NSNumber * remote;

+ (id)sourceWithDictionary:(id)arg1 context:(id)arg2;
+ (id)source;

- (void)updateUsingSet:(id)arg1 add:(id)arg2 remove:(id)arg3;
- (id)encodedClassName;
- (id)remote;
- (void)setRemote:(id)arg1;
- (void)setAccountName:(id)arg1;
- (id)accountName;
- (void)setAccountIdentifier:(id)arg1;
- (id)accountIdentifier;
- (void)setDomainIdentifier:(id)arg1;
- (id)domainIdentifier;
- (id)groupIdentifier;

@end