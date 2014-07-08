/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/Photos.framework/Photos
 */

@class NSString, PHPhotoLibrary, NSManagedObjectID;

@interface PHObject : NSObject <NSCopying> {
    bool_deleted;
    NSString *_uuid;
    NSManagedObjectID *_objectID;
    PHPhotoLibrary *_photoLibrary;
    unsigned long long _propertyHint;
}

@property(copy,readonly) NSString * localIdentifier;
@property(readonly) NSString * uuid;
@property(readonly) NSManagedObjectID * objectID;
@property(readonly) PHPhotoLibrary * photoLibrary;
@property(getter=isTransient,readonly) bool transient;
@property(getter=isDeleted,readonly) bool deleted;
@property unsigned long long propertyHint;

+ (id)entityKeyForPropertyKey:(id)arg1;
+ (bool)managedObjectSupportsBursts;
+ (id)localIdentifierWithUUID:(id)arg1;
+ (id)uuidFromLocalIdentifier:(id)arg1;
+ (id)authorizationAwareFetchResultWithOptions:(id)arg1 fetchBlock:(id)arg2;
+ (id)identifierCode;
+ (bool)managedObjectSupportsTrashedState;
+ (id)propertiesToFetchWithHint:(unsigned long long)arg1;
+ (id)managedEntityName;

- (id)_shortObjectIDURI;
- (unsigned long long)propertyHint;
- (void)setPropertyHint:(unsigned long long)arg1;
- (Class)changeRequestClass;
- (id)initWithFetchDictionary:(id)arg1 propertyHint:(unsigned long long)arg2 photoLibrary:(id)arg3;
- (id)photoLibrary;
- (id)localIdentifier;
- (bool)isDeleted;
- (bool)isTransient;
- (id)objectID;
- (id)uuid;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)_identifier;

@end