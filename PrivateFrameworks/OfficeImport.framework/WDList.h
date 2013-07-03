/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class WDListDefinition, NSMutableArray, WDDocument;

@interface WDList : NSObject  {
    NSMutableArray *mLevelOverrides;
    WDDocument *mDocument;
    unsigned int mIndex;
    WDListDefinition *mListDefinition;
}


- (id)initWithDocument:(id)arg1 listDefinition:(id)arg2;
- (id)levelOverrides;
- (id)levelOverrideAt:(unsigned int)arg1;
- (unsigned int)levelOverrideCount;
- (id)addLevelOverride;
- (long)listId;
- (id)listDefinition;
- (unsigned int)index;
- (id)document;
- (void)setIndex:(unsigned int)arg1;
- (void)dealloc;

@end