//
//  AppDelegate.h
//  XCodeServerObjective-C
//
//  Created by Asep Abdaz on 28/12/19.
//  Copyright © 2019 Asep Abdaz. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

