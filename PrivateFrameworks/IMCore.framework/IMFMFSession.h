/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

@class FMFSession, NSString, FMFDevice;

@interface IMFMFSession : NSObject <FMFSessionDelegate> {
    FMFSession *_session;
    NSString *_establishingAccountID;
    FMFDevice *_activeDevice;
}

@property(readonly) bool restrictLocationSharing;
@property(readonly) bool disableLocationSharing;
@property(retain) FMFSession * session;
@property(retain) NSString * establishingAccountID;
@property(retain) FMFDevice * activeDevice;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;

+ (id)sharedInstance;

- (void)didUpdateHidingStatus:(bool)arg1;
- (void)didStopAbilityToGetLocationForHandle:(id)arg1;
- (void)didStartAbilityToGetLocationForHandle:(id)arg1;
- (void)didStopSharingMyLocationWithHandle:(id)arg1;
- (void)didStartSharingMyLocationWithHandle:(id)arg1;
- (void)didReceiveLocation:(id)arg1;
- (void)sendMappingPacket:(id)arg1 toHandle:(id)arg2;
- (void)didChangeActiveLocationSharingDevice:(id)arg1;
- (id)activeDevice;
- (void)friendshipWasRemoved:(id)arg1;
- (void)friendshipRequestReceived:(id)arg1;
- (void)makeThisDeviceActiveDevice;
- (id)timedOfferExpirationForChat:(id)arg1;
- (void)refreshLocationForChat:(id)arg1;
- (void)refreshLocationForHandle:(id)arg1 inChat:(id)arg2;
- (id)locationForHandleOrSibling:(id)arg1;
- (void)stopTrackingLocationForHandle:(id)arg1;
- (void)startTrackingLocationForHandle:(id)arg1;
- (void)_postRelationshipStatusDidChangeNotificationWithHandle:(id)arg1;
- (void)setActiveDevice:(id)arg1;
- (bool)fmfHandleIsFollowingMyLocation:(id)arg1;
- (bool)fmfHandleIsSharingLocationWithMe:(id)arg1;
- (void)_postNotification:(id)arg1 object:(id)arg2 userInfo:(id)arg3;
- (id)locationForHandle:(id)arg1;
- (id)locationForFMFHandle:(id)arg1;
- (id)_callerIDForChat:(id)arg1;
- (id)fmfGroupIdOneToOne;
- (id)fmfGroupIdGroup;
- (void)setEstablishingAccountID:(id)arg1;
- (id)establishingAccountID;
- (void)_updateActiveDevice;
- (Class)__FMFSessionClass;
- (void)stopTrackingLocationForChat:(id)arg1;
- (void)startTrackingLocationForChat:(id)arg1;
- (void)stopSharingWithChat:(id)arg1;
- (void)startSharingWithChat:(id)arg1 untilDate:(id)arg2;
- (bool)allChatParticipantsSharingLocationWithMe:(id)arg1;
- (bool)chatHasSiblingParticipantsSharingLocationWithMe:(id)arg1;
- (bool)chatHasParticipantsSharingLocationWithMe:(id)arg1;
- (bool)allChatParticipantsFollowingMyLocation:(id)arg1;
- (bool)chatHasParticipantsFollowingMyLocation:(id)arg1;
- (id)allSiblingFMFHandlesForChat:(id)arg1;
- (id)fmfHandlesForChat:(id)arg1;
- (bool)handleIsFollowingMyLocation:(id)arg1;
- (bool)handleIsSharingLocationWithMe:(id)arg1;
- (bool)disableLocationSharing;
- (bool)restrictLocationSharing;
- (id)_bestAccountForAddresses:(id)arg1;
- (id)init;
- (void)setSession:(id)arg1;
- (id)session;
- (void)dealloc;

@end
