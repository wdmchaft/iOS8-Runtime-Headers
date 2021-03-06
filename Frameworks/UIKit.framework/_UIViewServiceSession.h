/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class _UIAsyncInvocation, _UIViewServiceDeputyManager, NSXPCConnection, NSObject<OS_dispatch_queue>, NSString;

@interface _UIViewServiceSession : NSObject <NSXPCConnectionDelegate, _UIViewServiceDeputyManagerDelegate, _UIViewServiceViewControllerOperatorDelegate> {
    NSObject<OS_dispatch_queue> *_queue;
    NSXPCConnection *_connection;
    _UIViewServiceDeputyManager *_deputyManager;
    _UIAsyncInvocation *_invalidationInvocation;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _terminationHandler;

    int __automatic_invalidation_retainCount;
    bool__automatic_invalidation_invalidated;
}

@property(copy) id terminationHandler;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;

+ (id)sessionWithConnection:(id)arg1;

- (bool)_isDeallocating;
- (bool)_tryRetain;
- (void)dealloc;
- (unsigned long long)retainCount;
- (oneway void)release;
- (id)retain;
- (void)connection:(id)arg1 handleInvocation:(id)arg2 isReply:(bool)arg3;
- (id)terminationHandler;
- (void)deputy:(id)arg1 didFailWithError:(id)arg2;
- (void)setTerminationHandler:(id)arg1;
- (void)viewControllerOperator:(id)arg1 didCreateServiceViewControllerOfClass:(Class)arg2;
- (void)registerDeputyClass:(Class)arg1 withConnectionHandler:(id)arg2;
- (void)unregisterDeputyClass:(Class)arg1;
- (void)deputyManager:(id)arg1 didUpdateExportedInterface:(id)arg2;
- (void)_invalidateUnconditionallyThen:(id)arg1;
- (int)__automatic_invalidation_logic;

@end
