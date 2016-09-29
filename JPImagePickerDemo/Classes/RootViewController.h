//
//  RootViewController.h
//  JPImagePickerDemo
//
//  Created by Jeena on 11.11.09.
//  Copyright Jeena Paradies 2009.
//  Licence: MIT-Licence
//

#import "JPImagePickerController.h"

@interface RootViewController : UITableViewController <JPImagePickerControllerDelegate, JPImagePickerControllerDataSource> {
	NSInteger chosenImage;
	IBOutlet UIViewController *chosenImageController;
	IBOutlet UIImageView *chosenImageView;
}

@property (nonatomic, strong) IBOutlet UIViewController *chosenImageController;
@property (nonatomic, strong) IBOutlet UIImageView *chosenImageView;

@end
