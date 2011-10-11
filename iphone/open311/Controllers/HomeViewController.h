//
//  HomeViewController.h
//  open311
//
//  Created by Cliff Ingham on 9/6/11.
//  Copyright 2011 City of Bloomington. All rights reserved.
//

#import <UIKit/UIKit.h>


@interface HomeViewController : UIViewController {
    
    UINavigationItem *navigationBar;
    UIImageView *splashImage;
}
@property (nonatomic, retain) IBOutlet UINavigationItem *navigationBar;
@property (nonatomic, retain) IBOutlet UIImageView *splashImage;

@end
