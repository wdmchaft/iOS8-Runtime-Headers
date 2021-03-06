/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@interface CHBErrorBar : NSObject  {
}

+ (int)xlErrorBarSourceFrom:(int)arg1;
+ (int)xlErrorBarTypeFrom:(int)arg1 direction:(int)arg2;
+ (id)readErrorBarGraphicProperties:(const struct XlChartSeriesFormat { int (**x1)(); struct XlChartLineStyle {} *x2; struct XlChartFillStyle {} *x3; struct XlChartMarkerStyle {} *x4; struct XlChartPicF {} *x5; int x6; unsigned short x7; unsigned short x8; unsigned short x9; int x10; boolx11; boolx12; boolx13; boolx14; boolx15; boolx16; boolx17; boolx18; boolx19; boolx20; }*)arg1 forStyleIndex:(unsigned long long)arg2 state:(id)arg3;
+ (int)edErrorBarTypeFrom:(int)arg1;
+ (int)edErrorBarDirectionFrom:(int)arg1;
+ (void)readFrom:(struct XlChartErrorBar { int (**x1)(); struct XlChartSeries {} *x2; unsigned short x3; unsigned short x4; unsigned short x5; struct ChVector<XlChartSeriesFormat *> { struct XlChartSeriesFormat {} **x_6_1_1; struct XlChartSeriesFormat {} **x_6_1_2; unsigned int x_6_1_3; unsigned int x_6_1_4; unsigned int x_6_1_5; } x6; struct ChVector<XlChartSeriesFormat *> { struct XlChartSeriesFormat {} **x_7_1_1; struct XlChartSeriesFormat {} **x_7_1_2; unsigned int x_7_1_3; unsigned int x_7_1_4; unsigned int x_7_1_5; } x7; struct ChVector<XlChartCustomLabelText *> { struct XlChartCustomLabelText {} **x_8_1_1; struct XlChartCustomLabelText {} **x_8_1_2; unsigned int x_8_1_3; unsigned int x_8_1_4; unsigned int x_8_1_5; } x8; struct ChVector<unsigned int> { unsigned int *x_9_1_1; unsigned int *x_9_1_2; unsigned int x_9_1_3; unsigned int x_9_1_4; unsigned int x_9_1_5; } x9; struct ChVector<int> { int *x_10_1_1; int *x_10_1_2; unsigned int x_10_1_3; unsigned int x_10_1_4; unsigned int x_10_1_5; } x10; struct XlChartLinkedData {} *x11; struct XlChartLinkedData {} *x12; struct XlChartLinkedData {} *x13; struct XlChartLinkedData {} *x14; struct ChVector<XlChartCustomLegend *> { struct XlChartCustomLegend {} **x_15_1_1; struct XlChartCustomLegend {} **x_15_1_2; unsigned int x_15_1_3; unsigned int x_15_1_4; unsigned int x_15_1_5; } x15; struct XlChartSerAuxErrBar { int (**x_16_1_1)(); struct XlHeader { unsigned int x_2_2_1; short x_2_2_2; unsigned char x_2_2_3; } x_16_1_2; double x_16_1_3; unsigned short x_16_1_4; int x_16_1_5; int x_16_1_6; unsigned char x_16_1_7; } x16; int x17; }*)arg1 toSeries:(id)arg2 state:(id)arg3;


@end
