/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@class NSString, NSArray;

@interface PSMagnifyMode : NSObject <NSCopying> {
    bool_zoomed;
    NSString *_localizedName;
    NSString *_name;
    NSArray *_previewHTMLStrings;
    NSArray *_previewStyleSheets;
    struct CGSize { 
        double width; 
        double height; 
    } _size;
}

@property struct CGSize { double x1; double x2; } size;
@property(retain) NSString * localizedName;
@property(getter=isZoomed) bool zoomed;
@property(retain) NSString * name;
@property(retain) NSArray * previewHTMLStrings;
@property(retain) NSArray * previewStyleSheets;

+ (id)magnifyModeWithSize:(struct CGSize { double x1; double x2; })arg1 name:(id)arg2 localizedName:(id)arg3 isZoomed:(bool)arg4;

- (void)setPreviewStyleSheets:(id)arg1;
- (id)previewStyleSheets;
- (void)setPreviewHTMLStrings:(id)arg1;
- (id)previewHTMLStrings;
- (void)setName:(id)arg1;
- (void)setLocalizedName:(id)arg1;
- (id)localizedName;
- (void)setSize:(struct CGSize { double x1; double x2; })arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)name;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (struct CGSize { double x1; double x2; })size;
- (void)setZoomed:(bool)arg1;
- (bool)isZoomed;

@end
