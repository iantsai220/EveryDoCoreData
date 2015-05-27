//
//  addToDoViewController.h
//  EveryDoCoreData
//
//  Created by Ian Tsai on 2015-05-26.
//  Copyright (c) 2015 Ian Tsai. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ToDo.h"

@protocol AddToDoProtocol <NSObject>

-(ToDo *) addToDo;

-(void) didCreateTodo: (ToDo *) todo;


@end

@interface addToDoViewController : UIViewController

@property (nonatomic, weak) id<AddToDoProtocol> delegate;


@property (weak, nonatomic) IBOutlet UITextField *titleTextField;

@property (weak, nonatomic) IBOutlet UITextField *detailTextField;

@property (weak, nonatomic) IBOutlet UITextField *priorityTextField;

- (IBAction)submitWasPressed:(UIButton *)sender;



@end
