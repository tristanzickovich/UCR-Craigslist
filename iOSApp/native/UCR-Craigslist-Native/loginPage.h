//
//  loginPage.h
//  UCR-Craigslist-Native
//
//  Created by Michael Chen on 5/14/16.
//  Copyright © 2016 UCR. All rights reserved.
//

#import <UIKit/UIKit.h>

//@protocol LoginViewProtocol <NSObject>


//@end

@interface loginPage : UIViewController<UITextFieldDelegate> {
    IBOutlet UITextField *userTF;
    IBOutlet UITextField *passwdTF;
}

@property (strong, nonatomic) IBOutlet UIButton *loginUIButton;

- (IBAction)loginButton:(id)sender;

//@property (nonatomic, weak) id <LoginViewProtocl> delegate;
//@property (nonatomic, retain) LoginViewController * loginView;

@property (nonatomic, retain) IBOutlet UILabel *titleLabel;


#pragma mark - 
#pragma mark Class Methods

- (void) retrieveUsers;
- (void) retrievePosts;
- (void) retrieveReviews;
- (void) retrieveImages;
- (void) retrieveChat;

@end
