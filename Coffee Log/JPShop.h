//
//  JPShop.h
//  Coffee Log
//
//  Created by Joel Parsons on 11/11/2012.
//  Copyright (c) 2012 Joel Parsons. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class JPCoffee, JPCountry, JPImage, JPReview;

@interface JPShop : NSManagedObject

@property (nonatomic, retain) NSString * name;
@property (nonatomic, retain) NSString * address1;
@property (nonatomic, retain) NSString * address2;
@property (nonatomic, retain) NSString * city;
@property (nonatomic, retain) NSString * postCode;
@property (nonatomic, retain) id openingHours;
@property (nonatomic, retain) id coordinates;
@property (nonatomic, retain) JPCountry *country;
@property (nonatomic, retain) JPImage *images;
@property (nonatomic, retain) NSSet *coffees;
@property (nonatomic, retain) NSSet *reviews;
@end

@interface JPShop (CoreDataGeneratedAccessors)

- (void)addCoffeesObject:(JPCoffee *)value;
- (void)removeCoffeesObject:(JPCoffee *)value;
- (void)addCoffees:(NSSet *)values;
- (void)removeCoffees:(NSSet *)values;

- (void)addReviewsObject:(JPReview *)value;
- (void)removeReviewsObject:(JPReview *)value;
- (void)addReviews:(NSSet *)values;
- (void)removeReviews:(NSSet *)values;

@end
