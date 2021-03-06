//
//  JPImagePickerDetailController.h
//  JPImagePickerController
//
//  Created by Jeena on 11.11.09.
//  Copyright 2009 Jeena Paradies.
//  Licence: MIT-Licence
//

#import <UIKit/UIKit.h>
#import "JPImagePickerController.h"
#import "JPImagePickerOverviewController.h"
#import "UIImage+JPImagePickerController.h"

@protocol JPImagePickerControllerDelegate;
@protocol JPImagePickerControllerDataSource;
@class JPImagePickerOverviewController;

@interface JPImagePickerDetailController : UIViewController <UIScrollViewDelegate> {
	JPImagePickerOverviewController *overviewController;
	IBOutlet UIImageView *previewImageView;
	NSInteger imageNumber;
	UIStatusBarStyle originalStatusBarStyle;
	UIImage * largeImage;
    IBOutlet UIScrollView *scrollView;
}

@property (nonatomic, strong) IBOutlet UIImageView *previewImageView;
@property (nonatomic, strong, readonly) JPImagePickerOverviewController *overviewController;
@property (nonatomic) NSInteger imageNumber;
@property (nonatomic, strong) UIImage * largeImage;
@property (nonatomic, strong) UIScrollView *scrollView;

- (id)initWithOverviewController:(JPImagePickerOverviewController *)newOverviewController;
- (void)prepareForImageNumber:(NSInteger)newImageNumber;
- (IBAction)cancelPreview:(id)sender;
- (IBAction)finishedPicking:(id)sender;

@end
