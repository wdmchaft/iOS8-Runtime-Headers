/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class MPMediaPredicate;

@interface MPMediaConditionalPredicate : MPMediaPredicate  {
    MPMediaPredicate *_conditionPredicate;
    MPMediaPredicate *_thenPredicate;
    MPMediaPredicate *_elsePredicate;
}

@property(readonly) MPMediaPredicate * conditionPredicate;
@property(readonly) MPMediaPredicate * thenPredicate;
@property(readonly) MPMediaPredicate * elsePredicate;

+ (id)predicateWithConditionPredicate:(id)arg1 thenPredicate:(id)arg2 elsePredicate:(id)arg3;

- (id)elsePredicate;
- (id)thenPredicate;
- (id)conditionPredicate;
- (id)initWithConditionPredicate:(id)arg1 thenPredicate:(id)arg2 elsePredicate:(id)arg3;
- (id)_ML3PredicateForEntityTypeSelector:(SEL)arg1;
- (id)ML3PredicateForContainer;
- (id)ML3PredicateForTrack;
- (void).cxx_destruct;

@end