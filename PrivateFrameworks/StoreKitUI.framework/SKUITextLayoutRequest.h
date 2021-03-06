/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class NSString, NSAttributedString;

@interface SKUITextLayoutRequest : NSObject <SKUILayoutRequest> {
    NSAttributedString *_attributedText;
    double _fontSize;
    long long _fontWeight;
    long long _numberOfLines;
    NSString *_text;
    unsigned char _textAlignment;
    double _width;
}

@property double fontSize;
@property long long fontWeight;
@property unsigned char textAlignment;
@property long long numberOfLines;
@property(copy) NSAttributedString * attributedText;
@property(copy) NSString * text;
@property double width;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;
@property(readonly) Class layoutClass;


- (Class)layoutClass;
- (void)setWidth:(double)arg1;
- (double)width;
- (void)setFontWeight:(long long)arg1;
- (long long)fontWeight;
- (id)text;
- (double)fontSize;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setFontSize:(double)arg1;
- (long long)numberOfLines;
- (void)setNumberOfLines:(long long)arg1;
- (unsigned char)textAlignment;
- (id)attributedText;
- (void)setAttributedText:(id)arg1;
- (void)setText:(id)arg1;
- (void)setTextAlignment:(unsigned char)arg1;

@end
