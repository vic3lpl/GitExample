//
//  AppDelegate.h
//  GitExample
//
//  Created by IRS on 15/08/2017.
//  Copyright © 2017 IrsSoftware. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

