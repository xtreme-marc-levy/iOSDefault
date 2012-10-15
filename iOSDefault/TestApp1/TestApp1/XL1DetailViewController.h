//
//  XL1DetailViewController.h
//  TestApp1
//
//  Created by DX062 on 2012-10-15.
//  Copyright (c) 2012 DX062. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface XL1DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
