//
//  ZDBaseViewController.h
//  两个页面间的解耦
//
//  Created by zhudong on 2017/2/23.
//  Copyright © 2017年 zhudong. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ZDBaseViewController : UIViewController
- (instancetype)initWithDict: (NSDictionary *)params;
@end
