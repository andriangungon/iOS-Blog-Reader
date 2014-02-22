//
//  DetailViewController.h
//  BlogReader
//
//  Created by Andrian Gungon on 2/22/14.
//  Copyright (c) 2014 Andrian Gungon. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
