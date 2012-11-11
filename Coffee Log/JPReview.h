//
//  JPReview.h
//  Coffee Log
//
//  Created by Joel Parsons on 11/11/2012.
//  Copyright (c) 2012 Joel Parsons. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>


@interface JPReview : NSManagedObject

@property (nonatomic, retain) UNKNOWN_TYPE rating;
@property (nonatomic, retain) UNKNOWN_TYPE reviewNotes;
@property (nonatomic, retain) NSManagedObject *coffee;
@property (nonatomic, retain) NSManagedObject *shop;

@end
