//
//  JPReview.h
//  Coffee Log
//
//  Created by Joel Parsons on 11/11/2012.
//  Copyright (c) 2012 Joel Parsons. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class JPCoffee, JPShop;

@interface JPReview : NSManagedObject

@property (nonatomic, retain) NSNumber * rating;
@property (nonatomic, retain) NSString * reviewNotes;
@property (nonatomic, retain) JPCoffee *coffee;
@property (nonatomic, retain) JPShop *shop;

@end
