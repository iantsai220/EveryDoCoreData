//
//  DetailViewController.h
//  EveryDoCoreData
//
//  Created by Ian Tsai on 2015-05-26.
//  Copyright (c) 2015 Ian Tsai. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

