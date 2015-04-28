//
//  ViewController.h
//  Tableview demo
//
//  Created by annutech on 4/21/15.
//  Copyright (c) 2015 annutech. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController<UITableViewDelegate, UITableViewDataSource>
{
    IBOutlet UITableView *mytableview;
    
    NSMutableArray *mydata;
}
@property (strong, nonatomic) IBOutlet UITableView *mytableview;

@end

