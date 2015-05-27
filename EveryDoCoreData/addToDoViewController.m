//
//  addToDoViewController.m
//  EveryDoCoreData
//
//  Created by Ian Tsai on 2015-05-26.
//  Copyright (c) 2015 Ian Tsai. All rights reserved.
//

#import "addToDoViewController.h"
#import "ToDo.h"

@interface addToDoViewController ()

@end

@implementation addToDoViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view.
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

/*
#pragma mark - Navigation

// In a storyboard-based application, you will often want to do a little preparation before navigation
- (void)prepareForSegue:(UIStoryboardSegue *)segue sender:(id)sender {
    // Get the new view controller using [segue destinationViewController].
    // Pass the selected object to the new view controller.
}
*/

- (IBAction)submitWasPressed:(UIButton *)sender {
    
    ToDo *todo = [self.delegate addToDo];
    
    todo.title = self.titleTextField.text;
    todo.detail = self.detailTextField.text;
    todo.priorityNumber = [self.priorityTextField.text intValue];
    
    [self.delegate didCreateTodo:todo];
    
    [self dismissViewControllerAnimated:YES completion:nil];
    
}
@end
