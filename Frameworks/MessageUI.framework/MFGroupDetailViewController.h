/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@class MFRecentComposeRecipientGroup, <MFGroupDetailViewControllerDelegate>;

@interface MFGroupDetailViewController : UITableViewController  {
    <MFGroupDetailViewControllerDelegate> *_delegate;
    MFRecentComposeRecipientGroup *_group;
}

@property <MFGroupDetailViewControllerDelegate> * delegate;
@property(retain) MFRecentComposeRecipientGroup * group;


- (void)_removeButtonTapped:(id)arg1;
- (id)group;
- (void)setGroup:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)dealloc;
- (void)viewWillDisappear:(bool)arg1;
- (id)initWithStyle:(long long)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;

@end
