/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/LegacyGameKit.framework/LegacyGameKit
 */

@class NSTimer, NSString, NSMutableDictionary, UITableView, NSMutableArray, GKContentView, GKSession;

@interface GKPeerPickerViewController : UIViewController  {
    id _delegate;
    NSMutableDictionary *_sessionMap;
    GKContentView *_btView;
    GKContentView *_listView;
    GKContentView *_statusView;
    GKContentView *_inviteView;
    GKContentView *_currentView;
    GKContentView *_connectTypeView;
    GKContentView *_noPeersView;
    UITableView *_peerTableView;
    unsigned long long _connectionTypesMask;
    NSString *_currentConnectionTypeKey;
    NSMutableArray *_menuQueue;
    bool_animating;
    bool_alertPresented;
    int _state;
    int _pendingState;
    bool_updating;
    NSTimer *_invitationWaitTimer;
    int _bluetoothStatus;
    NSString *_searchingForServicesString;
    NSMutableArray *_peers;
    NSString *_pendingPeer;
    bool_alertCancelled;
}

@property id delegate;
@property(readonly) GKSession * currentSession;
@property(retain) GKContentView * btView;
@property(retain) GKContentView * listView;
@property(retain) GKContentView * statusView;
@property(retain) GKContentView * inviteView;
@property(retain) GKContentView * connectTypeView;
@property(retain) GKContentView * noPeersView;
@property(readonly) GKContentView * currentView;
@property unsigned long long connectionTypesMask;
@property NSString * currentConnectionTypeKey;
@property(retain) NSMutableDictionary * sessionMap;
@property(copy) NSString * searchingForServicesString;
@property(retain) NSMutableArray * peers;
@property(retain) UITableView * peerTableView;
@property int bluetoothStatus;
@property(retain) NSMutableArray * menuQueue;
@property(getter=isAnimating) bool animating;
@property bool alertPresented;
@property bool alertCancelled;
@property int state;
@property int pendingState;
@property bool updating;
@property(getter=isVisible,readonly) bool visible;
@property(retain) NSTimer * invitationWaitTimer;


- (void)setPeers:(id)arg1;
- (id)peers;
- (void)session:(id)arg1 peerDidBecomeBusy:(id)arg2;
- (void)session:(id)arg1 connectionWithPeerFailed:(id)arg2 withError:(id)arg3;
- (void)session:(id)arg1 didReceiveConnectionRequestFromPeer:(id)arg2;
- (void)session:(id)arg1 peer:(id)arg2 didChangeState:(int)arg3;
- (void)session:(id)arg1 didFailWithError:(id)arg2;
- (int)_determineBluetoothStatus;
- (void)setBluetoothStatus:(int)arg1;
- (id)searchingForServicesString;
- (void)contentView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)_changePanelAnimationDidEnd:(id)arg1;
- (void)setAlertCancelled:(bool)arg1;
- (void)setAlertPresented:(bool)arg1;
- (void)_timedOutWaitingForInvitation:(id)arg1;
- (id)currentView;
- (id)noPeersView;
- (void)_createNoPeersViewIfNeeded;
- (id)statusView;
- (void)_createStatusViewIfNeeded;
- (id)inviteView;
- (void)_createInviteViewIfNeeded;
- (id)listView;
- (void)_createListViewIfNeeded;
- (id)btView;
- (void)_createBTViewIfNeeded;
- (void)_showView:(id)arg1 animated:(bool)arg2;
- (id)_createAlertFromGKContentView:(id)arg1;
- (id)connectTypeView;
- (void)_setSessionAvailabilityForState:(int)arg1;
- (void)_createConnectTypeViewIfNeeded;
- (bool)alertCancelled;
- (void)_showInviteViewWithName:(id)arg1 animated:(bool)arg2;
- (void)_showStatusView:(int)arg1 peerName:(id)arg2 animated:(bool)arg3;
- (void)_showNoPeersView:(bool)arg1;
- (void)_showListView:(bool)arg1;
- (void)_setupListView;
- (void)_btPowerStateChanged:(id)arg1;
- (void)_showBluetoothErrorView:(bool)arg1;
- (void)_showRequestBluetoothView:(bool)arg1;
- (void)_showConnectTypeView:(bool)arg1;
- (bool)alertPresented;
- (bool)_shouldShowConnectTypeView;
- (id)menuQueue;
- (void)loadInitialView;
- (void)setPendingState:(int)arg1;
- (void)_declineInvitation:(id)arg1;
- (void)_acceptInvitation:(id)arg1;
- (void)_turnBluetoothOn:(id)arg1;
- (void)_cancelButtonPressed:(id)arg1;
- (void)_nearbyButtonPressed:(id)arg1;
- (void)_onlineButtonPressed:(id)arg1;
- (int)bluetoothStatus;
- (bool)_updatePicker:(int)arg1;
- (void)_sortAndUpdateTable;
- (id)currentSession;
- (id)peerTableView;
- (id)currentConnectionTypeKey;
- (id)sessionMap;
- (void)setInvitationWaitTimer:(id)arg1;
- (id)invitationWaitTimer;
- (void)setMenuQueue:(id)arg1;
- (void)setPeerTableView:(id)arg1;
- (void)setNoPeersView:(id)arg1;
- (void)setInviteView:(id)arg1;
- (void)setStatusView:(id)arg1;
- (void)setListView:(id)arg1;
- (void)setBtView:(id)arg1;
- (void)setConnectTypeView:(id)arg1;
- (void)setCurrentConnectionTypeKey:(id)arg1;
- (void)setSessionMap:(id)arg1;
- (void)setSearchingForServicesString:(id)arg1;
- (unsigned long long)connectionTypesMask;
- (void)setConnectionTypesMask:(unsigned long long)arg1;
- (void)setUpdating:(bool)arg1;
- (bool)updating;
- (bool)isVisible;
- (int)pendingState;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)setState:(int)arg1;
- (int)state;
- (void)dealloc;
- (void)didPresentAlertView:(id)arg1;
- (void)dismiss;
- (void)setAnimating:(bool)arg1;
- (bool)isAnimating;
- (bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)didReceiveMemoryWarning;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)show;

@end
