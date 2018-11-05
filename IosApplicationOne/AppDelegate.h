//
//  AppDelegate.h
//  IosApplicationOne
//
//  Created by HIBOY on 2018/11/6.
//  Copyright © 2018 HIBOY. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

