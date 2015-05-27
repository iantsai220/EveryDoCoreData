//
//  ToDo.h
//  EveryDoCoreData
//
//  Created by Ian Tsai on 2015-05-26.
//  Copyright (c) 2015 Ian Tsai. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>


@interface ToDo : NSManagedObject

@property (nonatomic, retain) NSString * title;
@property (nonatomic, retain) NSString * detail;
@property (nonatomic) int16_t priorityNumber;
@property (nonatomic) BOOL isCompleted;

@end
