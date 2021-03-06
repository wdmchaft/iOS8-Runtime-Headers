/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class NSNumber, SSMutableAuthenticationContext;

@interface SUScriptAuthenticationOperation : ISOperation  {
    NSNumber *_authenticatedDSID;
    SSMutableAuthenticationContext *_authenticationContext;
}

@property(retain) NSNumber * authenticatedDSID;


- (void)sendCompletionCallback:(id)arg1;
- (void)setScriptOptions:(id)arg1;
- (id)initWithAccountIdentifier:(id)arg1;
- (void)setAuthenticatedDSID:(id)arg1;
- (id)authenticatedDSID;
- (id)authenticatedAccountDSID;
- (void)run;
- (id)init;
- (void)dealloc;

@end
