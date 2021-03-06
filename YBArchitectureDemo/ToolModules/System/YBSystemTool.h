//
//  YBSystemTool.h
//  YBArchitectureDemo
//
//  Created by 杨波 on 2018/11/19.
//  Copyright © 2018 杨波. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface YBSystemTool : NSObject

/** 判断是否是 iphoneX 系列 */
+ (BOOL)isIphoneX;

/** app 版本号 */
+ (NSString *)appVersion;

/** app 名称 */
+ (NSString *)appName;

@end

@interface YBSystemTool (UI)

/** 获取顶层的 UIViewController 实例 */
+ (UIViewController *)topViewController;

/** 获取 windowLevel 为 UIWindowLevelNormal 的 UIWindow 实例 */
+ (UIWindow *)normalWindow;

@end

NS_ASSUME_NONNULL_END
