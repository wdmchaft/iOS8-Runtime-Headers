/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSEntityDescription, NSManagedObjectID;

@interface _CDSnapshot : NSObject <NSCopying, NSMutableCopying> {
    int _cd_rc;
    int _cd_version;
    NSManagedObjectID *_cd_objectID;
    struct _snapshotFlags_st { 
        unsigned int _readOnly : 1; 
        unsigned int _reservedFlags : 31; 
    } _cd_flags;
    unsigned int _cd_nullFlags_;
}

@property(readonly) NSEntityDescription * entity;
@property(readonly) NSManagedObjectID * objectID;

+ (unsigned int)newBatchAllocation:(id*)arg1 count:(unsigned int)arg2 withOwnedObjectIDs:(id*)arg3;
+ (Class)classForEntity:(id)arg1;
+ (void)_entityDeallocated;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)alloc;
+ (void)initialize;

- (id)_descriptionValues;
- (id)_snapshot_;
- (id)initWithObjectID:(id)arg1;
- (id)entity;
- (id)objectID;
- (id)valueForKey:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (id)mutableCopy;
- (bool)_isDeallocating;
- (bool)_tryRetain;
- (void)finalize;
- (id)copy;
- (void)dealloc;
- (unsigned long long)retainCount;
- (oneway void)release;
- (id)retain;
- (id)description;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
