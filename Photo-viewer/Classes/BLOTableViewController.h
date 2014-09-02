//
//  BLOTableViewController.h
//  Photo-viewer
//
//  Created by Mirosław Kucharzyk on 02/09/14.
//  Copyright (c) 2014 STP. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface BLOTableViewController : UITableViewController
@property (nonatomic, strong) NSMutableArray *albums;
- (IBAction)addAlbumBarButtonItemPressed:(id)sender;
@end
