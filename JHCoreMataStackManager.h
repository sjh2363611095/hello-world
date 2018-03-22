//
//  JHCoreMataStackManager.h
//  demo
//
//  Created by 舒金辉 on 2018/3/21.
//  Copyright © 2018年 舒金辉. All rights reserved.
//

/*
 #import  oc导入头文件的关键字，自动只导入一次，不会重复导入
 #import <> 用来包含系统的头文件
 #import “” 用来包含用户的头文件
 
 @Class 声明某个类，当执行时，才去查看类的实现文件，可以解决头文件的相互包含。
 
 #include c/c++导入头文件的关键字
 
 
 
 */

#import <Foundation/Foundation.h>

#import <CoreData/CoreData.h>

#define JHCoreManagerInstance [JHCoreMataStackManager shareInstance]


@interface JHCoreMataStackManager : NSObject

/*
 
 @property = ivar + getter + setter；
 
 property 属性。（封装对象中的数据）   有两大概念：ivar （实例变量），getter（读取变量）+setting（写入变量） 存取方法
 
 @property四大特质
 nonatomic。原子性，非原子操作，决定编译器生成的setter和getter方法是否是原子操作
 atomic 表示多线程安全，一般使用nonatomic，效率高
 readwrite。读写，生成getter方法和setter
 readonly 只读，只会生成getter方法，不会生成setter
 
 内存管理语义
 assign。赋值特性，setter 方法将传入参数赋值给实例变量，用于基本数据类型
 retain（MRC）／strong （ARC）。表示持有特性，setter方法传入参数先保留，再赋值，传入参数的retaincount会+1
 copy 拷贝特性，setter方法将传入对象复制一份，需要完全一份新的变量时。
 
 
 
 
 */

/// 单例
+(JHCoreMataStackManager *)shareInstance;

// 管理对象上下文
@property (strong,nonatomic) NSManagedObjectContext *managerContenxt;

// 模型对象
@property (strong,nonatomic) NSManagedObjectModel *managerModel;

// 存储调度器
@property (strong,nonatomic) NSPersistentStoreCoordinator *managerDinator;

// 保存数据的方法
- (void)save;














@end
