//
//  User.h
//  EveryDoCoreData
//
//  Created by Ian Tsai on 2015-05-26.
//  Copyright (c) 2015 Ian Tsai. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class ToDo;

@interface User : NSManagedObject

@property (nonatomic, retain) NSString * userName;
@property (nonatomic, retain) NSString * title;
@property (nonatomic, retain) NSSet *todos;
@end

@interface User (CoreDataGeneratedAccessors)

- (void)addTodosObject:(ToDo *)value;
- (void)removeTodosObject:(ToDo *)value;
- (void)addTodos:(NSSet *)values;
- (void)removeTodos:(NSSet *)values;

@end
