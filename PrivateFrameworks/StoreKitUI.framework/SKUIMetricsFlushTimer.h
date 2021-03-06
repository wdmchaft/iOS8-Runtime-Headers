/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class NSObject<OS_dispatch_source>, NSHashTable;

@interface SKUIMetricsFlushTimer : NSObject  {
    NSHashTable *_metricsControllers;
    NSObject<OS_dispatch_source> *_timer;
    unsigned long long _timerStartTime;
}

+ (id)sharedTimer;

- (void)_cancelFlushTimer;
- (void)_performFlush;
- (void)reloadFlushInterval;
- (void)flushAllMetricsControllers;
- (void)removeMetricsController:(id)arg1;
- (void)addMetricsController:(id)arg1;
- (void)_applicationWillEnterForegroundNotification:(id)arg1;
- (void)_applicationDidEnterBackgroundNotification:(id)arg1;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;

@end
