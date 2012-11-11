//
//  JPCoffee.h
//  Coffee Log
//
//  Created by Joel Parsons on 11/11/2012.
//  Copyright (c) 2012 Joel Parsons. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class JPReview;

@interface JPCoffee : NSManagedObject

@property (nonatomic, retain) NSString * name;
@property (nonatomic, retain) NSDate * dateBought;
@property (nonatomic, retain) NSDate * dateAdded;
@property (nonatomic, retain) NSString * roast;
@property (nonatomic, retain) NSString * grind;
@property (nonatomic, retain) NSString * flavourNotes;
@property (nonatomic, retain) NSNumber * fairTrade;
@property (nonatomic, retain) NSNumber * decaf;
@property (nonatomic, retain) NSString * process;
@property (nonatomic, retain) NSString * bean;
@property (nonatomic, retain) NSString * organicCertification;
@property (nonatomic, retain) NSNumber * acidity;
@property (nonatomic, retain) id displayColor;
@property (nonatomic, retain) NSNumber * organic;
@property (nonatomic, retain) NSString * otherNotes;
@property (nonatomic, retain) NSSet *images;
@property (nonatomic, retain) NSManagedObject *plantation;
@property (nonatomic, retain) NSManagedObject *shop;
@property (nonatomic, retain) NSSet *reviews;
@end

@interface JPCoffee (CoreDataGeneratedAccessors)

- (void)addImagesObject:(NSManagedObject *)value;
- (void)removeImagesObject:(NSManagedObject *)value;
- (void)addImages:(NSSet *)values;
- (void)removeImages:(NSSet *)values;

- (void)addReviewsObject:(JPReview *)value;
- (void)removeReviewsObject:(JPReview *)value;
- (void)addReviews:(NSSet *)values;
- (void)removeReviews:(NSSet *)values;

@end
