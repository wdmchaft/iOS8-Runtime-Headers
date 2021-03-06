/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class NSLock, <PLThumbPersistenceManager>, NSArray, PLLargeImageLoader, NSMutableDictionary, NSDictionary, NSMutableSet, NSMutableArray, NSIndexSet, PLPhotoLibrary;

@interface PLThumbnailManager : NSObject  {
    PLPhotoLibrary *_photoLibrary;
    NSLock *_lock;
    NSIndexSet *_occupiedIndexes;
    NSDictionary *_changedPhotosMap;
    NSArray *_changedPhotos;
    NSMutableDictionary *_thumbManagersByFormat;
    <PLThumbPersistenceManager> *_lastUsedThumbManager;
    int _lastUsedThumbManagerFormat;
    PLLargeImageLoader *_largeImageLoaderFullSize;
    PLLargeImageLoader *_largeImageLoaderFullScreen;
    PLLargeImageLoader *_largeImageLoaderFilledScreen;
    PLLargeImageLoader *_largeImageLoaderFilledHalfScreen;
    NSMutableSet *_previouslyRequestedThumbnailFixOIDs;
    NSMutableSet *_requestedThumbnailFixAssets;
    NSMutableArray *_alreadyFailedAssetObjectIDsForRebuild;
    id _observerToken;
}

@property PLPhotoLibrary * photoLibrary;
@property(retain,readonly) NSMutableDictionary * thumbManagersByFormat;
@property(retain) id observerToken;

+ (id)cameraPreviewWellAssetUUID;
+ (int)largestNonJPEGThumbnailFormat;
+ (void)handleRebuildThumbnailRequestPersistentFailure;
+ (bool)hasExceededRebuildThumbnailRequestLimit;
+ (bool)isRebuildingThumbnails;
+ (void)rebuildAllMissingThumbnails;
+ (void)addRebuildThumbnailsRequest;
+ (id)cameraPreviewWellImageQueue;
+ (void)saveCameraPreviewWellImage:(struct CGImage { }*)arg1 uuid:(id)arg2;
+ (void)saveCameraPreviewWellImageForAsset:(id)arg1;
+ (void)resetThumbnails;
+ (void)removeRebuildThumbnailsRequest:(const char *)arg1;
+ (bool)useImageTableForFormat:(int)arg1;
+ (id)supportedThumbnailFormats;
+ (int)thumbnailVersionCurrent;
+ (int)thumbnailVersion;
+ (bool)isRidingCrudSnow;
+ (bool)isRidingPowderSnow;
+ (id)_allPossibleThumbnailFormats;
+ (bool)shouldUseLargerNonJPEGThumbnailFormat;
+ (bool)hasRebuildThumbnailsRequest;
+ (id)defaultThumbnailsDirectory;
+ (id)defaultThumbnailsDirectoryV2;
+ (void)removeObsoleteMetadata;
+ (bool)hasObsoleteThumbnailTables;
+ (bool)isMissingThumbnailTables;
+ (int)thumbnailFormat;

- (id)newImageDataForPhoto:(id)arg1 withFormat:(int)arg2 allowPlaceholder:(bool)arg3 wantURLOnly:(bool)arg4 networkAccessAllowed:(bool)arg5 networkAccessForced:(bool)arg6 trackCPLDownload:(bool)arg7 outImageDataInfo:(id*)arg8 outCPLDownloadContext:(id*)arg9;
- (id)preheatItemSourceForFormat:(int)arg1;
- (id)thumbManagersByFormat;
- (id)thumbnailJPEGPathForPhoto:(id)arg1;
- (id)_tableDescriptions;
- (id)compactImageTables;
- (id)preflightImageTableCompactionForPhotos:(id)arg1;
- (void)deleteThumbnailsWithIdentifier:(id)arg1 orIndex:(unsigned long long)arg2 uuid:(id)arg3;
- (void)setThumbnailsForPhoto:(id)arg1 withImage:(id)arg2;
- (bool)copyThumbnailsFromAsset:(id)arg1 toAsset:(id)arg2;
- (struct __CFDictionary { }*)placeholderThumbnailDataByFormatID;
- (void)setThumbnails:(struct __CFDictionary { }*)arg1 forPhoto:(id)arg2;
- (id)_dataForInFlightAsset:(id)arg1 format:(int)arg2 width:(int*)arg3 height:(int*)arg4 bytesPerRow:(int*)arg5 dataWidth:(int*)arg6 dataHeight:(int*)arg7 imageDataOffset:(int*)arg8 imageDataFormat:(int*)arg9;
- (id)_anyImageTable;
- (void)_horse_setThumbnailsForPhoto:(id)arg1 withImage:(id)arg2;
- (void)imageForPhoto:(id)arg1 withFormat:(int)arg2 allowPlaceholder:(bool)arg3 optimalSourcePixelSize:(struct CGSize { double x1; double x2; })arg4 networkAccessAllowed:(bool)arg5 networkAccessForced:(bool)arg6 trackCPLDownload:(bool)arg7 completion:(id)arg8 sync:(bool)arg9;
- (id)_dataForAsset:(id)arg1 format:(int)arg2 width:(int*)arg3 height:(int*)arg4 bytesPerRow:(int*)arg5 dataWidth:(int*)arg6 dataHeight:(int*)arg7 imageDataOffset:(int*)arg8 imageDataFormat:(int*)arg9;
- (id)_thumbManagerForFormat:(int*)arg1;
- (void)assetsdImageForPhoto:(id)arg1 withFormat:(int)arg2 allowPlaceholder:(bool)arg3 wantURLOnly:(bool)arg4 optimalSourcePixelSize:(struct CGSize { double x1; double x2; })arg5 networkAccessAllowed:(bool)arg6 networkAccessForced:(bool)arg7 trackCPLDownload:(bool)arg8 completion:(id)arg9;
- (bool)_canAccessImageForAsset:(id)arg1;
- (void)setPhotoLibrary:(id)arg1;
- (void)_discardAlreadyFailedAssetObjectIDsForRebuild;
- (long long)_rebuildAssetThumbnailsWithLimit:(int)arg1 error:(id*)arg2;
- (id)newImageForPhoto:(id)arg1 withFormat:(int)arg2 allowPlaceholder:(bool)arg3 optimalSourcePixelSize:(struct CGSize { double x1; double x2; })arg4 networkAccessAllowed:(bool)arg5 networkAccessForced:(bool)arg6 trackCPLDownload:(bool)arg7 outImageProperties:(const struct __CFDictionary {}**)arg8 outImageDataInfo:(id*)arg9 outCPLDownloadContext:(id*)arg10;
- (void)endThumbnailSafePropertyUpdatesOnAsset:(id)arg1 withToken:(id)arg2;
- (id)beginThumbnailSafePropertyUpdatesOnAsset:(id)arg1;
- (id)newImageForPhoto:(id)arg1 withFormat:(int)arg2 allowPlaceholder:(bool)arg3 outImageProperties:(const struct __CFDictionary {}**)arg4 outDeliveredPlaceholder:(bool*)arg5;
- (id)dataForPhoto:(id)arg1 format:(int)arg2 allowPlaceholder:(bool)arg3 width:(int*)arg4 height:(int*)arg5 bytesPerRow:(int*)arg6 dataWidth:(int*)arg7 dataHeight:(int*)arg8 imageDataOffset:(int*)arg9;
- (id)photoLibrary;
- (void)clearPhotoLibrary;
- (id)initWithWeakPhotoLibrary:(id)arg1;
- (void)dealloc;
- (void)setObserverToken:(id)arg1;
- (id)observerToken;

@end
