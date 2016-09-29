//
//  JPImagePickerDemoAppDelegate.h
//  JPImagePickerDemo
//
//  Created by Jeena on 11.11.09.
//  Copyright Jeena Paradies 2009.
//  Licence: MIT-Licence
//

@interface JPImagePickerDemoAppDelegate : NSObject <UIApplicationDelegate> {
    
    UIWindow *window;
    UINavigationController *navigationController;
}

@property (nonatomic, strong) IBOutlet UIWindow *window;
@property (nonatomic, strong) IBOutlet UINavigationController *navigationController;

@end

