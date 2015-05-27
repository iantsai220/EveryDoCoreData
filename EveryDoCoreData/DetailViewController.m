//
//  DetailViewController.m
//  EveryDoCoreData
//
//  Created by Ian Tsai on 2015-05-26.
//  Copyright (c) 2015 Ian Tsai. All rights reserved.
//

#import "DetailViewController.h"
#import "ToDo.h"

@interface DetailViewController ()

@end

@implementation DetailViewController

#pragma mark - Managing the detail item

- (void)setToDoItem:(ToDo *)todo {
    if (_toDoItem != todo) {
        _toDoItem = todo;
            
        // Update the view.
        [self configureView];
    }
}

- (void)configureView {
    // Update the user interface for the detail item.
    if (self.toDoItem) {
        self.titleTextField.text = self.toDoItem.title;
        self.detailTextField.text = self.toDoItem.detail;
        self.priorityTextField.text = [NSString stringWithFormat:@"%d", self.toDoItem.priorityNumber];
        
    }
}

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
    [self configureView];
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

-(void)prepareForSegue:(UIStoryboardSegue *)segue sender:(id)sender {
    
    if (<#condition#>) {
        <#statements#>
    }
    
    
    
    
}

@end
