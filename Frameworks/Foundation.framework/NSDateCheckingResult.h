/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSTimeZone, NSDate;

@interface NSDateCheckingResult : NSTextCheckingResult  {
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    } _range;
    NSDate *_date;
    NSTimeZone *_timeZone;
    double _duration;
    NSDate *_referenceDate;
    id _underlyingResult;
    bool_timeIsSignificant;
    bool_timeIsApproximate;
    bool_timeIsPast;
}

@property(readonly) NSTimeZone * timeZone;
@property(readonly) double duration;
@property(readonly) NSDate * referenceDate;
@property(readonly) void* underlyingResult;
@property(readonly) bool timeIsSignificant;
@property(readonly) bool timeIsApproximate;
@property(readonly) bool timeIsPast;


- (unsigned long long)resultType;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })range;
- (id)timeZone;
- (id)date;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)description;
- (bool)timeIsPast;
- (bool)timeIsApproximate;
- (bool)timeIsSignificant;
- (id)initWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 date:(id)arg2 timeZone:(id)arg3 duration:(double)arg4 referenceDate:(id)arg5 underlyingResult:(void*)arg6 timeIsSignificant:(bool)arg7 timeIsApproximate:(bool)arg8;
- (id)initWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 date:(id)arg2 timeZone:(id)arg3 duration:(double)arg4 referenceDate:(id)arg5 underlyingResult:(void*)arg6;
- (id)initWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 date:(id)arg2 timeZone:(id)arg3 duration:(double)arg4 referenceDate:(id)arg5;
- (id)referenceDate;
- (id)initWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 date:(id)arg2 timeZone:(id)arg3 duration:(double)arg4 referenceDate:(id)arg5 underlyingResult:(void*)arg6 timeIsSignificant:(bool)arg7 timeIsApproximate:(bool)arg8 timeIsPast:(bool)arg9;
- (id)initWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 date:(id)arg2 timeZone:(id)arg3 duration:(double)arg4;
- (id)initWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 date:(id)arg2;
- (void*)underlyingResult;
- (double)duration;
- (bool)_adjustRangesWithOffset:(long long)arg1;
- (id)resultByAdjustingRangesWithOffset:(long long)arg1;

@end
