//
//  AppDelegate.h
//  MDW-Guia-iOS15
//
//  Created by Javier Cala Uribe on 24/10/11.
//  Copyright * 2011. All rights reserved.
//

#import <UIKit/UIKit.h>

@class RootViewController;

@interface AppDelegate : NSObject <UIApplicationDelegate> {
	UIWindow			*window;
	RootViewController	*viewController;
}

@property (nonatomic, retain) UIWindow *window;

@end
