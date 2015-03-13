//
//  ViewController.h
//  SQLite3Sample
//
//  Created by MACBOOK-MUM on 04/03/15.
//  Copyright (c) 2015 MACBOOK-MUM. All rights reserved.
//

#import "EditInfoViewController.h"
#import <UIKit/UIKit.h>

@interface ViewController : UIViewController <UITableViewDataSource,UITableViewDelegate,EditInfoViewControllerDelegate>

@property (weak, nonatomic) IBOutlet UITableView *tblPeople;

- (IBAction)addNewRecord:(id)sender;

@end

