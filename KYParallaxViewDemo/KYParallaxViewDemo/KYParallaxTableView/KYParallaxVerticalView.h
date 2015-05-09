//
//  KYParallaxVerticalView .h
//  KYParallaxViewDemo
//
//  Created by Kitten Yang on 5/9/15.
//  Copyright (c) 2015 Kitten Yang. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CustomViews.h"


@interface KYParallaxVerticalView : UIView

@property (nonatomic,strong)UIScrollView *scroller;
@property (nonatomic,strong)UIImageView *bkgImageView;
@property (nonatomic,strong)CustomViews *customView;
-(void)bkgImageViewSetImage:(UIImage *)image;



@end
