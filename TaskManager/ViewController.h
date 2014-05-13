//
//  ViewController.h
//  TaskManager
//
//  Created by Jeffrey Chen on 5/12/14.
//  Copyright (c) 2014 Jeffrey Chen. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "GoogleOAuth.h"

@interface ViewController : UIViewController <UITableViewDelegate, UITableViewDataSource>
@property (weak, nonatomic) IBOutlet UIBarButtonItem *revokeAccess;
@property (weak, nonatomic) IBOutlet UIBarButtonItem *showProfile;
@property (weak, nonatomic) IBOutlet UITableView *table;
@property (nonatomic, strong) GoogleOAuth *googleOAuth;

@end
