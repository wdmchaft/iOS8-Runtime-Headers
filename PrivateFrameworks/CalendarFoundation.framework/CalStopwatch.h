/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
 */

@class NSMutableDictionary;

@interface CalStopwatch : NSObject  {
    bool_isRunning;
    unsigned long long _lastStartTime;
    unsigned long long _elapsedTime;
    bool_hasValidElapsedTime;
    NSMutableDictionary *_events;
}


- (double)markEventEnd:(id)arg1;
- (double)markEventSplit:(id)arg1;
- (void)markEventStart:(id)arg1;
- (id)elapsedTimeAsString:(int)arg1;
- (unsigned long long)elapsedTimeAsNumber:(int)arg1;
- (unsigned long long)elapsedTimeInNanoseconds;
- (void)stop;
- (id)init;
- (void)start;
- (void).cxx_destruct;
- (id)description;
- (void)reset;

@end
