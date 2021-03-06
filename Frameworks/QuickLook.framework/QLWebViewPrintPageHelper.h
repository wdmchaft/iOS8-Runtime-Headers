/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@class UIWebBrowserView, NSString, NSURLRequest, QLPreviewConverter;

@interface QLWebViewPrintPageHelper : NSObject <QLRemotePrintPageHelper> {
    UIWebBrowserView *_browserView;
    NSURLRequest *_request;
    NSString *_documentType;
    QLPreviewConverter *_previewConverter;
    struct CGSize { 
        double width; 
        double height; 
    } _printableSize;
}

@property(retain) QLPreviewConverter * previewConverter;
@property struct CGSize { double x1; double x2; } printableSize;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;

+ (bool)_isXPathType:(id)arg1;
+ (id)printPageRendererWithBrowserView:(id)arg1 request:(id)arg2 documentType:(id)arg3;

- (void)_waitForPreview;
- (void)setPrintableSize:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })printableSize;
- (id)pdfDataForPageAtIndex:(long long)arg1 printingDone:(bool*)arg2;
- (id)initWithWebBrowserView:(id)arg1 request:(id)arg2 documentType:(id)arg3;
- (void)setPreviewConverter:(id)arg1;
- (id)previewConverter;
- (void)dealloc;
- (void)prepareForDrawingPages:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (long long)numberOfPages;

@end
