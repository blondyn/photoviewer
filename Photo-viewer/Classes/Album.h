//
//  Album.h
//  Photo-viewer
//
//  Created by Mirosław Kucharzyk on 02/09/14.
//  Copyright (c) 2014 STP. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>


@interface Album : NSManagedObject

@property (nonatomic, retain) NSString * name;
@property (nonatomic, retain) NSDate * date;

@end
