//
//  ViewController.h
//  hefeng
//
//  Created by zrx on 16/1/6.
//  Copyright © 2016年 zrx. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <MessageUI/MessageUI.h>  
#import <Foundation/Foundation.h>
#import <MessageUI/MFMailComposeViewController.h>
#import <CommonCrypto/CommonCryptor.h>
//@interface ViewController : UIViewController
@interface ViewController : UIViewController
@property (copy, nonatomic) NSString *serialNumberStr;
@property (copy, nonatomic) NSString *expirationDate;
@property (copy, nonatomic) NSString *registrationCode;
//+ (NSData *)dataWithBase64EncodedString:(NSString *)string;




@end

