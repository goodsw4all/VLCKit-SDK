//
//  YGYAppDelegate.h
//  月光影音
//
//  Created by 吴琼 on 13-10-17.
//  Copyright (c) 2013年 长沙戴维营教育(http://www.diveinedu.cn). All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface YGYAppDelegate : NSObject <NSApplicationDelegate>

@property (assign) IBOutlet NSWindow *window;

@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;

- (IBAction)saveAction:(id)sender;

@end
