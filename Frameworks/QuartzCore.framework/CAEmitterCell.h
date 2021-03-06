/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSString, NSArray, NSDictionary;

@interface CAEmitterCell : NSObject <NSCopying, CAPropertyInfo, NSCoding, CAMediaTiming> {
    void *_attr[2];
    void *_state;
    unsigned int _flags;
}

@property(copy) NSString * particleType;
@property double orientationLatitude;
@property double orientationLongitude;
@property double orientationRange;
@property double rotation;
@property double rotationRange;
@property float mass;
@property float massRange;
@property double contentsScale;
@property(copy) NSString * contentsFrameMode;
@property unsigned int contentsFrameCount;
@property unsigned int contentsFramesPerRow;
@property float contentsFramesPerSecond;
@property(copy) NSArray * emitterBehaviors;
@property(copy) NSString * name;
@property(getter=isEnabled) bool enabled;
@property float birthRate;
@property float lifetime;
@property float lifetimeRange;
@property double emissionLatitude;
@property double emissionLongitude;
@property double emissionRange;
@property double velocity;
@property double velocityRange;
@property double xAcceleration;
@property double yAcceleration;
@property double zAcceleration;
@property double scale;
@property double scaleRange;
@property double scaleSpeed;
@property double spin;
@property double spinRange;
@property struct CGColor { }* color;
@property float redRange;
@property float greenRange;
@property float blueRange;
@property float alphaRange;
@property float redSpeed;
@property float greenSpeed;
@property float blueSpeed;
@property float alphaSpeed;
@property(retain) id contents;
@property struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } contentsRect;
@property(copy) NSString * minificationFilter;
@property(copy) NSString * magnificationFilter;
@property float minificationFilterBias;
@property(copy) NSArray * emitterCells;
@property(copy) NSDictionary * style;
@property double beginTime;
@property double duration;
@property float speed;
@property double timeOffset;
@property float repeatCount;
@property double repeatDuration;
@property bool autoreverses;
@property(copy) NSString * fillMode;

+ (id)emitterCell;
+ (void)CAMLParserStartElement:(id)arg1;
+ (bool)CA_automaticallyNotifiesObservers:(Class)arg1;
+ (id)defaultValueForKey:(id)arg1;
+ (id)properties;
+ (bool)automaticallyNotifiesObserversForKey:(id)arg1;

- (void)setContentsRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setTimeOffset:(double)arg1;
- (void)setName:(id)arg1;
- (id)valueForKeyPath:(id)arg1;
- (id)valueForKey:(id)arg1;
- (void)setSpeed:(float)arg1;
- (float)speed;
- (void)setEnabled:(bool)arg1;
- (bool)isEnabled;
- (float)mass;
- (void)setVelocity:(double)arg1;
- (double)velocity;
- (void)setMagnificationFilter:(id)arg1;
- (void)setMinificationFilter:(id)arg1;
- (void)setAutoreverses:(bool)arg1;
- (void)setRepeatCount:(float)arg1;
- (void)setStyle:(id)arg1;
- (void)setContentsFramesPerSecond:(float)arg1;
- (void)setContentsFramesPerRow:(unsigned int)arg1;
- (void)setContentsFrameCount:(unsigned int)arg1;
- (void)setContentsFrameMode:(id)arg1;
- (void)setEmitterBehaviors:(id)arg1;
- (void)setMassRange:(float)arg1;
- (void)setParticleType:(id)arg1;
- (void)setEmitterCells:(id)arg1;
- (void)setMinificationFilterBias:(float)arg1;
- (void)setContents:(id)arg1;
- (void)setAlphaSpeed:(float)arg1;
- (void)setAlphaRange:(float)arg1;
- (void)setBlueSpeed:(float)arg1;
- (void)setBlueRange:(float)arg1;
- (void)setGreenSpeed:(float)arg1;
- (void)setGreenRange:(float)arg1;
- (void)setRedSpeed:(float)arg1;
- (void)setRedRange:(float)arg1;
- (void)setSpinRange:(double)arg1;
- (void)setSpin:(double)arg1;
- (void)setRotationRange:(double)arg1;
- (void)setOrientationRange:(double)arg1;
- (void)setOrientationLongitude:(double)arg1;
- (void)setOrientationLatitude:(double)arg1;
- (void)setScaleSpeed:(double)arg1;
- (void)setScaleRange:(double)arg1;
- (void)setScale:(double)arg1;
- (void)setZAcceleration:(double)arg1;
- (void)setYAcceleration:(double)arg1;
- (void)setXAcceleration:(double)arg1;
- (void)setVelocityRange:(double)arg1;
- (void)setEmissionRange:(double)arg1;
- (void)setEmissionLongitude:(double)arg1;
- (void)setEmissionLatitude:(double)arg1;
- (void)setLifetimeRange:(float)arg1;
- (void)setLifetime:(float)arg1;
- (void)setBirthRate:(float)arg1;
- (id)emitterBehaviors;
- (id)emitterCells;
- (id)minificationFilter;
- (id)magnificationFilter;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })contentsRect;
- (id)contentsFrameMode;
- (float)contentsFramesPerSecond;
- (unsigned int)contentsFramesPerRow;
- (unsigned int)contentsFrameCount;
- (double)contentsScale;
- (float)minificationFilterBias;
- (float)alphaSpeed;
- (float)blueSpeed;
- (float)greenSpeed;
- (float)redSpeed;
- (float)alphaRange;
- (float)blueRange;
- (float)greenRange;
- (float)redRange;
- (struct CGColor { }*)color;
- (double)spinRange;
- (double)spin;
- (double)rotationRange;
- (double)rotation;
- (double)orientationRange;
- (double)orientationLongitude;
- (double)orientationLatitude;
- (double)scaleSpeed;
- (double)scaleRange;
- (float)massRange;
- (double)zAcceleration;
- (double)yAcceleration;
- (double)xAcceleration;
- (double)velocityRange;
- (double)emissionRange;
- (double)emissionLongitude;
- (double)emissionLatitude;
- (float)lifetimeRange;
- (float)lifetime;
- (float)birthRate;
- (id)particleType;
- (id)contents;
- (bool)shouldArchiveValueForKey:(id)arg1;
- (void)setFillMode:(id)arg1;
- (id)fillMode;
- (bool)autoreverses;
- (void)setRepeatDuration:(double)arg1;
- (double)repeatDuration;
- (float)repeatCount;
- (double)timeOffset;
- (void)CA_prepareRenderValue;
- (struct Object { int (**x1)(); struct Atomic { struct { int x_1_2_1; } x_2_1_1; } x2; }*)CA_copyRenderValue;
- (double)beginTime;
- (void)setDuration:(double)arg1;
- (void)setBeginTime:(double)arg1;
- (id)CAMLTypeForKey:(id)arg1;
- (void)encodeWithCAMLWriter:(id)arg1;
- (void)CAMLParser:(id)arg1 setValue:(id)arg2 forKey:(id)arg3;
- (void)setColor:(struct CGColor { }*)arg1;
- (void)setMass:(float)arg1;
- (id)style;
- (void)setContentsScale:(double)arg1;
- (id)debugDescription;
- (void)didChangeValueForKey:(id)arg1;
- (id)name;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)duration;
- (double)scale;
- (void)setValue:(id)arg1 forKeyPath:(id)arg2;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)valueForUndefinedKey:(id)arg1;
- (void)setRotation:(double)arg1;

@end
