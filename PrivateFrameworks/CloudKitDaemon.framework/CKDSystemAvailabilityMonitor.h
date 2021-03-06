/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@class NSObject<OS_dispatch_queue>, NSMutableSet;

@interface CKDSystemAvailabilityMonitor : NSObject  {
    bool_systemIsAvailable;
    NSMutableSet *_watchers;
    NSObject<OS_dispatch_queue> *_availabilityQueue;
}

@property bool systemIsAvailable;
@property(retain) NSMutableSet * watchers;
@property(retain) NSObject<OS_dispatch_queue> * availabilityQueue;

+ (id)sharedMonitor;

- (void)setAvailabilityQueue:(id)arg1;
- (void)setWatchers:(id)arg1;
- (void)_notifyWatchersOfStateChange;
- (void)setSystemIsAvailable:(bool)arg1;
- (id)watchers;
- (id)availabilityQueue;
- (bool)_systemMayNowBeReady;
- (void)unregisterWatcher:(id)arg1;
- (void)registerWatcher:(id)arg1;
- (bool)systemIsAvailable;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (id)_init;

@end
