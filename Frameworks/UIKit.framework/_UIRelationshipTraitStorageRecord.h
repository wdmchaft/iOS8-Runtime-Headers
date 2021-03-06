/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSSet, UITraitCollection;

@interface _UIRelationshipTraitStorageRecord : NSObject <NSCoding> {
    UITraitCollection *_traitCollection;
    NSSet *_addedObjects;
    NSSet *_removedObjects;
}

@property(readonly) UITraitCollection * traitCollection;
@property(readonly) NSSet * addedObjects;
@property(readonly) NSSet * removedObjects;


- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)removedObjects;
- (id)addedObjects;
- (id)initWithTraitCollection:(id)arg1 addedObjects:(id)arg2 removedObjects:(id)arg3;
- (id)traitCollection;

@end
