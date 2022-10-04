#import <UIKit/UIKit.h>

/**
 * Custom controls have similar format as Android.
 *
 * Android       - iOS:
 * ControlButton - same
 * ControlData   - NSDictionary
 */

@interface ControlButton : UIButton {
}

@property BOOL canBeHidden, isToggleOn;
@property(nonatomic, strong) NSMutableDictionary* properties;
@property UIColor* savedBackgroundColor;

+ (id)buttonWithProperties:(NSMutableDictionary *)propArray;

- (BOOL)canSnap:(ControlButton *)button;
- (NSString *)generateDynamicX:(CGFloat)x;
- (NSString *)generateDynamicY:(CGFloat)y;
- (void)snapAndAlignX:(CGFloat)x Y:(CGFloat)y;
- (void)preProcessProperties;
- (void)update;

@end
