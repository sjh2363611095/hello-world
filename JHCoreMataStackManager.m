//
//  JHCoreMataStackManager.m
//  demo
//
//  Created by 舒金辉 on 2018/3/21.
//  Copyright © 2018年 舒金辉. All rights reserved.
//

#import "JHCoreMataStackManager.h"

@implementation JHCoreMataStackManager

// 单例的实现
+(JHCoreMataStackManager *)shareInstance
{
    static JHCoreMataStackManager *instance = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        instance = [[JHCoreMataStackManager alloc]init];
        
    });
    
    return instance;
}










@end
