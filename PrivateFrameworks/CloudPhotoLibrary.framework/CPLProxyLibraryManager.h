/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@class NSCountedSet, NSMutableDictionary, NSXPCConnection, NSString, NSObject<OS_dispatch_queue>, NSMutableArray;

@interface CPLProxyLibraryManager : CPLPlatformObject <CPLClientLibraryManagerProtocol, NSXPCConnectionDelegate, CPLLibraryManagerImplementation> {
    NSXPCConnection *_connection;
    NSMutableDictionary *_downloadTasks;
    NSMutableDictionary *_uploadTasks;
    bool_diagnosticsEnabled;
    unsigned long long _foregroundCalls;
    NSCountedSet *_disablingReasons;
    NSMutableDictionary *_outstandingInvocations;
    unsigned long long _outstandingInvocationsCount;
    NSMutableArray *_pendingBlocksAfterOpening;
    int _openingStatus;
    int _notifyToken;
    NSObject<OS_dispatch_queue> *_queue;
}

@property(readonly) NSObject<OS_dispatch_queue> * queue;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;

+ (id)clientProtocolInterface;
+ (id)daemonProtocolInterface;

- (void)dispatchBlockWhenLibraryIsOpen:(id)arg1;
- (id)_uploadTaskDidStartForResource:(id)arg1 withTaskIdentifier:(id)arg2;
- (void)_invokeOutstandingInvocationsWithTaskIdentifier:(id)arg1;
- (void)_dispatchFailedDownloadTaskForResource:(id)arg1 highPriority:(bool)arg2 withError:(id)arg3 withCompletionHandler:(id)arg4;
- (void)_dispatchBlockWhenOpen:(id)arg1;
- (void)_reallyOpenWithCompletionHandler:(id)arg1;
- (bool)_setStatusFromDictionary:(id)arg1;
- (id)proxyWithErrorHandler:(id)arg1;
- (void)libraryManagerDidUpdateSizeOfResourcesToUploadToSize:(unsigned long long)arg1;
- (void)libraryManagerDidUpdateStatusWithProperties:(id)arg1;
- (void)libraryManagerHasChangesToPull;
- (void)uploadOfResource:(id)arg1 didFinishForResourceTransferTask:(id)arg2 withError:(id)arg3;
- (void)uploadOfResource:(id)arg1 didProgress:(float)arg2 forResourceTransferTask:(id)arg3;
- (void)uploadDidStartForResource:(id)arg1 withResourceTransferTask:(id)arg2;
- (void)backgroundDownloadDidFailForResource:(id)arg1;
- (void)backgroundDownloadDidFinishForResource:(id)arg1;
- (void)downloadDidFinishForResourceTransferTask:(id)arg1 finalResource:(id)arg2 withError:(id)arg3;
- (void)downloadDidProgress:(float)arg1 forResourceTransferTask:(id)arg2;
- (void)downloadDidStartForResourceTransferTask:(id)arg1;
- (id)initWithAbstractObject:(id)arg1;
- (void)cloudCacheGetDescriptionForRecordWithIdentifier:(id)arg1 related:(bool)arg2 completionHandler:(id)arg3;
- (void)getStatusArrayForComponents:(id)arg1 completionHandler:(id)arg2;
- (void)getStatusForComponents:(id)arg1 completionHandler:(id)arg2;
- (void)getListOfComponentsWithCompletionHandler:(id)arg1;
- (void)addInfoToLog:(id)arg1;
- (void)resetCacheWithOption:(unsigned long long)arg1 completionHandler:(id)arg2;
- (void)downloadOriginalsOfType:(id)arg1 localIdentifiers:(id)arg2 destinationURL:(id)arg3 progressIdentifier:(id)arg4 completionHandler:(id)arg5;
- (void)compactFileCacheWithCompletionHandler:(id)arg1;
- (void)getResourcesForItemWithIdentifier:(id)arg1 completionHandler:(id)arg2;
- (void)deleteResourcesIfSafe:(id)arg1 completionHandler:(id)arg2;
- (void)setDiagnosticsEnabled:(bool)arg1;
- (bool)diagnosticsEnabled;
- (void)noteClientReceivedNotificationOfServerChanges;
- (void)startSyncSession;
- (void)resetStatus;
- (void)getMappedIdentifiersForIdentifiers:(id)arg1 inAreLocalIdentifiers:(bool)arg2 completionHandler:(id)arg3;
- (void)publishResource:(id)arg1 completionHandler:(id)arg2;
- (void)beginDownloadForResource:(id)arg1 clientBundleID:(id)arg2 highPriority:(bool)arg3 completionHandler:(id)arg4;
- (void)removeCloudLibraryWithCompletionHandler:(id)arg1;
- (void)deactivateWithCompletionHandler:(id)arg1;
- (void)barrier;
- (void)enableSynchronizationWithReason:(id)arg1;
- (void)disableSynchronizationWithReason:(id)arg1;
- (void)noteClientIsInBackground;
- (void)noteClientIsInForeground;
- (void)cancelTask:(id)arg1;
- (void)takeStatisticsSnapshotSinceDate:(id)arg1 completionHandler:(id)arg2;
- (id)queue;
- (void)dealloc;
- (void).cxx_destruct;
- (void)connection:(id)arg1 handleInvocation:(id)arg2 isReply:(bool)arg3;
- (void)closeWithCompletionHandler:(id)arg1;
- (void)openWithCompletionHandler:(id)arg1;

@end
