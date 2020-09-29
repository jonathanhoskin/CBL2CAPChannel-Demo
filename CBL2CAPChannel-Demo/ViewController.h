//
//  ViewController.h
//  CBL2CAPChannel-Demo
//
//  Created by Matthias Ringwald on 15.01.18.
//  Copyright © 2018 BlueKitchen GmbH. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "BKL2CAPClient.h"

@interface ViewController : UIViewController<BKL2CAPClientDelegate, NSStreamDelegate>{
    NSOutputStream* outputStream;
    NSInputStream* inputStream;
}

@property (strong, nonatomic)BKL2CAPClient * l2capClient;
@property (weak, nonatomic) IBOutlet UILabel *statusLabel;
@property (weak, nonatomic) IBOutlet UILabel *throughputLabel;

@property (weak, nonatomic) IBOutlet UILabel *textInputSizeLabel;
@property (weak, nonatomic) IBOutlet UITextField *textInput;
@property (weak, nonatomic) IBOutlet UITextView *logTextView;

- (IBAction)sendText:(id)sender;
- (IBAction)textChanged:(id)sender;

@end

