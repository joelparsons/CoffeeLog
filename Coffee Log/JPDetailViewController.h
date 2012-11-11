//
//  JPDetailViewController.h
//  Coffee Log
//
//  Created by Joel Parsons on 11/11/2012.
//  Copyright (c) 2012 Joel Parsons. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface JPDetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
