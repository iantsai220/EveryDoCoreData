//
//  MasterViewController.h
//  EveryDoCoreData
//
//  Created by Ian Tsai on 2015-05-26.
//  Copyright (c) 2015 Ian Tsai. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>
#import "addToDoViewController.h"
#import "CoreDataStack.h"



@interface MasterViewController : UITableViewController <NSFetchedResultsControllerDelegate, AddToDoProtocol>

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;

@property (nonatomic) CoreDataStack *coreData;



@end

