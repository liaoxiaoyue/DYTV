//
//  AppDelegate.h
//  DYZB
//
//  Created by 红喇叭 on 2018/4/28.
//  Copyright © 2018年 红喇叭. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

