//
//  DNImageFlowViewController.h
//  ImagePicker
//
//  Created by DingXiao on 15/2/11.
//  Copyright (c) 2015年 Dennis. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <AssetsLibrary/AssetsLibrary.h>
@interface DNImageFlowViewController : UIViewController
@property (nonatomic, strong) ALAssetsLibrary *assetsLibrary;
- (instancetype)initWithGroupURL:(NSURL *)assetsGroupURL;
- (void)addPreSelectedAssetsObject:(ALAsset *)asset;
@end
