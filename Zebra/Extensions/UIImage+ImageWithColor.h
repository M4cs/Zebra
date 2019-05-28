#import <UIKit/UIKit.h>

#define min(a, b) (a > b ? b : a)
#define max(a, b) (a > b ? a : b)

@interface UIImage (ImageWithColor)
- (UIImage *)initWithColor:(UIColor *)color;
+ (UIImage *)imageWithColor:(UIColor *)color;
@end
