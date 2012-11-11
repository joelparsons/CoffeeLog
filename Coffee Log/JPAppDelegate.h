//
//  JPAppDelegate.h
//  Coffee Log
//
//  Created by Joel Parsons on 11/11/2012.
//  Copyright (c) 2012 Joel Parsons. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface JPAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;

@end
