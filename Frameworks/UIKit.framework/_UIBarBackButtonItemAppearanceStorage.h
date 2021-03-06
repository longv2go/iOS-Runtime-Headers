/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSMutableDictionary, NSValue;

@interface _UIBarBackButtonItemAppearanceStorage : NSObject {
    NSMutableDictionary *backgroundImages;
    NSMutableDictionary *backgroundVerticalAdjustmentsForBarMetrics;
    NSMutableDictionary *miniBackgroundImages;
    NSValue *miniTitlePositionOffset;
    NSValue *titlePositionOffset;
}

@property(retain) NSValue * miniTitlePositionOffset;
@property(retain) NSValue * titlePositionOffset;

- (id)anyBackgroundImage;
- (id)backgroundImageForState:(unsigned int)arg1 isMini:(BOOL)arg2;
- (float)backgroundVerticalAdjustmentForBarMetrics:(int)arg1;
- (void)dealloc;
- (id)miniTitlePositionOffset;
- (void)setBackgroundImage:(id)arg1 forState:(unsigned int)arg2 isMini:(BOOL)arg3;
- (void)setBackgroundVerticalAdjustment:(float)arg1 forBarMetrics:(int)arg2;
- (void)setMiniTitlePositionOffset:(id)arg1;
- (void)setTitlePositionOffset:(id)arg1;
- (id)titlePositionOffset;

@end
