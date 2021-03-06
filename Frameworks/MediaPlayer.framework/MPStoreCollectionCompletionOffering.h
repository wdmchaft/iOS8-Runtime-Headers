/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class NSArray, MPMediaQuery, MPStoreOfferMediaItemCollection;

@interface MPStoreCollectionCompletionOffering : NSObject  {
    MPMediaQuery *_localItemsQuery;
    long long _preferredStoreOfferVariant;
    MPStoreOfferMediaItemCollection *_offeredCollection;
    MPStoreOfferMediaItemCollection *_mergedCollection;
}

@property(readonly) MPStoreOfferMediaItemCollection * itemsWithCompletionsCollection;
@property(readonly) NSArray * localItems;
@property(readonly) long long preferredStoreOfferVariant;
@property(readonly) MPStoreOfferMediaItemCollection * offeredCollection;
@property(readonly) MPStoreOfferMediaItemCollection * mergedCollection;


- (id)offeredCollection;
- (id)localItems;
- (long long)preferredStoreOfferVariant;
- (id)itemsWithCompletionsCollection;
- (id)mergedCollection;
- (id)initWithOfferedCollection:(id)arg1 localItemsQuery:(id)arg2 preferredStoreOfferVariant:(long long)arg3;
- (void).cxx_destruct;

@end
