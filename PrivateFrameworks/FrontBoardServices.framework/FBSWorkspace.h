/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

@class NSMutableDictionary, FBSSerialQueue, NSArray, FBSWorkspaceClient, <FBSWorkspaceDelegate>;

@interface FBSWorkspace : NSObject <FBSWorkspaceClientDelegate> {
    <FBSWorkspaceDelegate> *_delegate;
    struct { 
        unsigned int didBeginTransaction : 1; 
        unsigned int didEndTransaction : 1; 
        unsigned int didCreateScene : 1; 
        unsigned int willDestroyScene : 1; 
        unsigned int didReceiveActions : 1; 
    } _delegateFlags;
    FBSWorkspaceClient *_client;
    NSMutableDictionary *_scenesByIdentifier;
    FBSSerialQueue *_queue;
}

@property <FBSWorkspaceDelegate> * delegate;
@property(retain,readonly) FBSSerialQueue * queue;
@property(copy,readonly) NSArray * scenes;


- (id)queue;
- (id)_client;
- (void)requestDestructionOfScene:(id)arg1 withCompletion:(id)arg2;
- (void)requestSceneCreationWithInitialClientSettings:(id)arg1 completion:(id)arg2;
- (void)enumerateScenesWithBlock:(id)arg1;
- (id)sceneWithIdentifier:(id)arg1;
- (id)_queue_sceneWithIdentifier:(id)arg1;
- (id)initWithSerialQueue:(id)arg1;
- (bool)isUIApplicationWorkspace;
- (id)_newClient;
- (void)client:(id)arg1 handleActions:(id)arg2;
- (void)client:(id)arg1 handleDestroyScene:(id)arg2 withCompletion:(id)arg3;
- (void)client:(id)arg1 handleCreateScene:(id)arg2 withCompletion:(id)arg3;
- (void)clientEndTransaction:(id)arg1;
- (void)clientBeginTransaction:(id)arg1;
- (void)clientSystemApplicationTerminated:(id)arg1;
- (id)init;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)dealloc;
- (id)description;
- (id)initWithQueue:(id)arg1;
- (id)scenes;

@end