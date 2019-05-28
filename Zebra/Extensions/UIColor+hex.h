//
//  UIColor+hex.h
//  Zebra
//
//  Created by midnightchips on 5/27/19.
//  Copyright © 2019 Wilson Styres. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIColor (Hex)
+ (UIColor *) colorFromHexCode:(NSString *)hexString;
@end
