/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
 */

@class NSMutableDictionary, NSTimer, NSMutableSet, NSNotificationCenter, NSLock, NSMutableArray;

@interface RUIImageLoader : NSObject  {
    NSLock *_queueLock;
    NSMutableArray *_loadQueue;
    NSMutableSet *_loadsInProgress;
    NSLock *_cacheLock;
    NSMutableDictionary *_imageCache;
    NSMutableArray *_imageCacheLRU;
    struct __CFRunLoop { } *_loaderRunLoop;
    struct __CFRunLoopSource { } *_loaderSource;
    NSNotificationCenter *_notificationCenter;
    NSTimer *_loadStatusNotificationTimer;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    } _startupLock;
    struct _opaque_pthread_cond_t { 
        long long __sig; 
        BOOL __opaque[40]; 
    } _startupCondition;
}

+ (id)sharedImageLoader;

- (id)notificationCenter;
- (void)_locked_imageLoadStarted:(id)arg1;
- (struct CGImage { }*)imageForURL:(id)arg1 loadIfAbsent:(bool)arg2;
- (bool)isLoadingImages;
- (void)_loadingStatusChanged;
- (void)_postImageLoadedNotification:(id)arg1;
- (void)_locked_loadImageForURL:(id)arg1;
- (bool)_locked_URLIsLoading:(id)arg1;
- (void)_postLoadingStatusChanged;
- (void)_mainThread_postLoadingStatusChanged;
- (void)_loadImageURL:(id)arg1;
- (void)_startLoader;
- (void)_setImageData:(id)arg1 forURL:(id)arg2 cacheLocked:(bool)arg3;
- (void)_imageLoadFinished:(id)arg1;
- (id)init;
- (void).cxx_destruct;

@end
