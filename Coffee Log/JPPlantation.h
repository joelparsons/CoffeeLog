//
//  JPPlantation.h
//  Coffee Log
//
//  Created by Joel Parsons on 11/11/2012.
//  Copyright (c) 2012 Joel Parsons. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class JPCoffee, JPCountry, JPImage;

@interface JPPlantation : NSManagedObject

@property (nonatomic, retain) NSString * name;
@property (nonatomic, retain) NSString * town;
@property (nonatomic, retain) NSString * city;
@property (nonatomic, retain) NSString * nameOfOwner;
@property (nonatomic, retain) JPCountry *country;
@property (nonatomic, retain) NSSet *coffees;
@property (nonatomic, retain) NSSet *images;
@end

@interface JPPlantation (CoreDataGeneratedAccessors)

- (void)addCoffeesObject:(JPCoffee *)value;
- (void)removeCoffeesObject:(JPCoffee *)value;
- (void)addCoffees:(NSSet *)values;
- (void)removeCoffees:(NSSet *)values;

- (void)addImagesObject:(JPImage *)value;
- (void)removeImagesObject:(JPImage *)value;
- (void)addImages:(NSSet *)values;
- (void)removeImages:(NSSet *)values;

@end
