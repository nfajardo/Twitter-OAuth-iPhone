//
//  OAuthTwitterDemoViewController.h
//  OAuthTwitterDemo
//
//  Created by Ben Gottlieb on 7/24/09.
//  Copyright Stand Alone, Inc. 2009. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SA_OAuthTwitterController.h"

#define kCellHeight         44

@class SA_OAuthTwitterEngine;


@interface OAuthTwitterDemoViewController : UIViewController <SA_OAuthTwitterControllerDelegate> {
	SA_OAuthTwitterEngine				*_engine;
    IBOutlet UITableView *table;
    NSMutableArray *users;

}

@end

