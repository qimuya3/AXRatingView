//
//  AXRatingView.h
//

#import <UIKit/UIKit.h>

/**
 *  注意：必须先设置numberOfStar，再设置value，minimumValue等。
            其次，numberOfStar 必须等于最大分值，绘制才能正确
 */
@interface AXRatingView : UIControl {
  CALayer *_starMaskLayer;
  CALayer *_highlightLayer;
  UIImage *_markImage;
}
@property (nonatomic) NSUInteger numberOfStar;
@property (copy, nonatomic) NSString *markCharacter;
@property (strong, nonatomic) UIFont *markFont;
@property (strong, nonatomic) UIImage *markImage;
@property (strong, nonatomic) UIColor *baseColor;
@property (strong, nonatomic) UIColor *highlightColor;
@property (nonatomic) float value;
@property (nonatomic) float stepInterval;
@property (nonatomic) float minimumValue;

@end
