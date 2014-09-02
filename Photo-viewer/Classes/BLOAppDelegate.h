//
//  BLOAppDelegate.h
//  Photo-viewer
//
//  Created by Mirosław Kucharzyk on 02/09/14.
//  Copyright (c) 2014 STP. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface BLOAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;

@end
