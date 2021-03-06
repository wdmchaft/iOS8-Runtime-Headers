/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSArray, NSNumber, NSString;

@interface SAGKLinkedAnswerGroup : AceObject <SAAceSerializable> {
}

@property(copy) NSArray * linkedAnswers;
@property(copy) NSNumber * numberOfResults;
@property(copy) NSString * title;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;

+ (id)linkedAnswerGroupWithDictionary:(id)arg1 context:(id)arg2;
+ (id)linkedAnswerGroup;

- (id)numberOfResults;
- (void)setLinkedAnswers:(id)arg1;
- (id)linkedAnswers;
- (id)encodedClassName;
- (void)setNumberOfResults:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;
- (id)groupIdentifier;

@end
