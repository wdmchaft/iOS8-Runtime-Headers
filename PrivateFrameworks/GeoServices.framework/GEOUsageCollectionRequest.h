/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSMutableArray;

@interface GEOUsageCollectionRequest : PBRequest <NSCopying> {
    NSMutableArray *_directionsFeedbackCollections;
    NSMutableArray *_leaveNowFeedbackCollections;
    NSMutableArray *_mapsLaunchFeedbackCollections;
    NSMutableArray *_mapsUsageFeedbackCollections;
    NSMutableArray *_placeDataCacheFeedbackCollections;
    NSMutableArray *_stateTimingFeedbackCollections;
    NSMutableArray *_suggestionsFeedbackCollections;
    NSMutableArray *_trafficRerouteFeedbackCollections;
    NSMutableArray *_transitAppLaunchFeedbackCollections;
    NSMutableArray *_usageCollections;
}

@property(retain) NSMutableArray * usageCollections;
@property(retain) NSMutableArray * directionsFeedbackCollections;
@property(retain) NSMutableArray * transitAppLaunchFeedbackCollections;
@property(retain) NSMutableArray * mapsUsageFeedbackCollections;
@property(retain) NSMutableArray * suggestionsFeedbackCollections;
@property(retain) NSMutableArray * stateTimingFeedbackCollections;
@property(retain) NSMutableArray * trafficRerouteFeedbackCollections;
@property(retain) NSMutableArray * leaveNowFeedbackCollections;
@property(retain) NSMutableArray * mapsLaunchFeedbackCollections;
@property(retain) NSMutableArray * placeDataCacheFeedbackCollections;


- (id)placeDataCacheFeedbackCollections;
- (id)mapsLaunchFeedbackCollections;
- (id)leaveNowFeedbackCollections;
- (id)trafficRerouteFeedbackCollections;
- (id)stateTimingFeedbackCollections;
- (id)suggestionsFeedbackCollections;
- (id)mapsUsageFeedbackCollections;
- (id)transitAppLaunchFeedbackCollections;
- (id)directionsFeedbackCollections;
- (id)usageCollections;
- (id)placeDataCacheFeedbackCollectionAtIndex:(unsigned long long)arg1;
- (void)clearPlaceDataCacheFeedbackCollections;
- (unsigned long long)placeDataCacheFeedbackCollectionsCount;
- (id)mapsLaunchFeedbackCollectionAtIndex:(unsigned long long)arg1;
- (void)clearMapsLaunchFeedbackCollections;
- (unsigned long long)mapsLaunchFeedbackCollectionsCount;
- (id)leaveNowFeedbackCollectionAtIndex:(unsigned long long)arg1;
- (void)clearLeaveNowFeedbackCollections;
- (unsigned long long)leaveNowFeedbackCollectionsCount;
- (id)trafficRerouteFeedbackCollectionAtIndex:(unsigned long long)arg1;
- (void)clearTrafficRerouteFeedbackCollections;
- (unsigned long long)trafficRerouteFeedbackCollectionsCount;
- (id)stateTimingFeedbackCollectionAtIndex:(unsigned long long)arg1;
- (void)clearStateTimingFeedbackCollections;
- (unsigned long long)stateTimingFeedbackCollectionsCount;
- (id)suggestionsFeedbackCollectionAtIndex:(unsigned long long)arg1;
- (void)clearSuggestionsFeedbackCollections;
- (unsigned long long)suggestionsFeedbackCollectionsCount;
- (id)mapsUsageFeedbackCollectionAtIndex:(unsigned long long)arg1;
- (void)clearMapsUsageFeedbackCollections;
- (unsigned long long)mapsUsageFeedbackCollectionsCount;
- (id)transitAppLaunchFeedbackCollectionAtIndex:(unsigned long long)arg1;
- (void)clearTransitAppLaunchFeedbackCollections;
- (unsigned long long)transitAppLaunchFeedbackCollectionsCount;
- (id)directionsFeedbackCollectionAtIndex:(unsigned long long)arg1;
- (void)clearDirectionsFeedbackCollections;
- (unsigned long long)directionsFeedbackCollectionsCount;
- (id)usageCollectionAtIndex:(unsigned long long)arg1;
- (void)clearUsageCollections;
- (unsigned long long)usageCollectionsCount;
- (void)setPlaceDataCacheFeedbackCollections:(id)arg1;
- (void)setMapsLaunchFeedbackCollections:(id)arg1;
- (void)setLeaveNowFeedbackCollections:(id)arg1;
- (void)setTrafficRerouteFeedbackCollections:(id)arg1;
- (void)setStateTimingFeedbackCollections:(id)arg1;
- (void)setSuggestionsFeedbackCollections:(id)arg1;
- (void)setMapsUsageFeedbackCollections:(id)arg1;
- (void)setTransitAppLaunchFeedbackCollections:(id)arg1;
- (void)setDirectionsFeedbackCollections:(id)arg1;
- (void)setUsageCollections:(id)arg1;
- (void)addLeaveNowFeedbackCollection:(id)arg1;
- (void)addTrafficRerouteFeedbackCollection:(id)arg1;
- (void)addStateTimingFeedbackCollection:(id)arg1;
- (void)addMapsUsageFeedbackCollection:(id)arg1;
- (void)addTransitAppLaunchFeedbackCollection:(id)arg1;
- (void)addMapsLaunchFeedbackCollection:(id)arg1;
- (void)addSuggestionsFeedbackCollection:(id)arg1;
- (void)addDirectionsFeedbackCollection:(id)arg1;
- (void)addPlaceDataCacheFeedbackCollection:(id)arg1;
- (void)addUsageCollection:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (Class)responseClass;
- (unsigned int)requestTypeCode;
- (void)writeTo:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;

@end
