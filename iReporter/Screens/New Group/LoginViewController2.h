//
//  LoginViewController2.h
//  Superapps
//
//  Created by Aaron Navies on 7/23/20.
//  Copyright © 2020 Superapps. All rights reserved.
//

#import "Superapps-Swift.h"

#import <UIKit/UIKit.h>

@interface LoginViewController2 : UIViewController
{
    //the login form fields
    IBOutlet UITextField* fldUsername;
    IBOutlet UITextField* fldPassword;
    
    //added for slide
    IBOutlet UILabel *hello; //slide
}

//action for when either button is pressed
-(IBAction)btnLoginRegisterTapped:(id)sender;

@end
