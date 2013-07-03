/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterUI.framework/GameCenterUI
 */

@class UILabel;

@interface GKPlayerGameCell : GKBaseGameCell  {
    UILabel *_statsLabel;
    UILabel *_dateLabel;
}

@property(retain) UILabel * statsLabel;
@property(retain) UILabel * dateLabel;

+ (id)_gkStandardConstraintMetrics;

- (void)setDateLabel:(id)arg1;
- (void)setStatsLabel:(id)arg1;
- (id)leaderboardStringWithGameRecord:(id)arg1;
- (id)achievementsStringWithGameRecord:(id)arg1;
- (id)statsLabel;
- (BOOL)canRemoveItem;
- (void)didUpdateModel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (id)dateLabel;
- (void)prepareForReuse;

@end