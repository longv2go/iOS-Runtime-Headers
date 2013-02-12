/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@class CIImage, NSNumber;

@interface CIHighlightShadowAdjust : CIFilter {
    NSNumber *inputHighlightAmount;
    CIImage *inputImage;
    NSNumber *inputShadowAmount;
}

@property(copy) NSNumber * inputHighlightAmount;
@property(retain) CIImage * inputImage;
@property(copy) NSNumber * inputShadowAmount;

+ (id)customAttributes;

- (id)_initFromProperties:(id)arg1;
- (BOOL)_isIdentity;
- (id)_kernelS;
- (id)_kernelSH;
- (id)_kernelS_noblur;
- (id)_outputProperties;
- (id)inputHighlightAmount;
- (id)inputImage;
- (id)inputShadowAmount;
- (id)outputImage;
- (void)setDefaults;
- (void)setInputHighlightAmount:(id)arg1;
- (void)setInputImage:(id)arg1;
- (void)setInputShadowAmount:(id)arg1;

@end