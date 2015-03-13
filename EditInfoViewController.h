//
//  EditInfoViewController.h
//  SQLite3Sample
//
//  Created by MACBOOK-MUM on 04/03/15.
//  Copyright (c) 2015 MACBOOK-MUM. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol EditInfoViewControllerDelegate // delegate declaration

-(void)editingInfoWasFinished;

@end

@interface EditInfoViewController : UIViewController <UITextFieldDelegate>

@property (weak, nonatomic) IBOutlet UITextField *txtFirstname;
@property (weak, nonatomic) IBOutlet UITextField *txtLastname;
@property (weak, nonatomic) IBOutlet UITextField *txtAge;

@property (nonatomic, strong) id <EditInfoViewControllerDelegate> delegate;

@property (nonatomic) int recordIDToEdit;

- (IBAction)saveInfo:(id)sender;

@end
