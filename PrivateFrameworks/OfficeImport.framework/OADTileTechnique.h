/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */



@interface OADTileTechnique : OADImageFillTechnique 
{
    float mOffsetX;
    BOOL mIsOffsetXOverridden;
    float mOffsetY;
    BOOL mIsOffsetYOverridden;
    float mScaleX;
    BOOL mIsScaleXOverridden;
    float mScaleY;
    BOOL mIsScaleYOverridden;
    NSInteger mFlipMode;
    BOOL mIsFlipModeOverridden;
    NSInteger mAlignment;
    BOOL mIsAlignmentOverridden;
}

+ (id)defaultProperties;

- (void)setAlignment:(NSInteger)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (NSInteger)alignment;
- (void)setOffsetX:(float)arg1;
- (void)setOffsetY:(float)arg1;
- (void)setScaleY:(float)arg1;
- (float)offsetX;
- (BOOL)isOffsetXOverridden;
- (float)offsetY;
- (BOOL)isOffsetYOverridden;
- (float)scaleX;
- (void)setScaleX:(float)arg1;
- (BOOL)isScaleXOverridden;
- (float)scaleY;
- (BOOL)isScaleYOverridden;
- (NSInteger)flipMode;
- (void)setFlipMode:(NSInteger)arg1;
- (BOOL)isFlipModeOverridden;
- (BOOL)isAlignmentOverridden;
- (id)initWithDefaults;

@end