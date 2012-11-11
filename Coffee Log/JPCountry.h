//
//  JPCountry.h
//  Coffee Log
//
//  Created by Joel Parsons on 11/11/2012.
//  Copyright (c) 2012 Joel Parsons. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>


@interface JPCountry : NSManagedObject

@property (nonatomic, retain) NSString * name;
@property (nonatomic, retain) NSString * continent;
@property (nonatomic, retain) NSSet *shops;
@property (nonatomic, retain) NSSet *plantations;
@end

@interface JPCountry (CoreDataGeneratedAccessors)

- (void)addShopsObject:(NSManagedObject *)value;
- (void)removeShopsObject:(NSManagedObject *)value;
- (void)addShops:(NSSet *)values;
- (void)removeShops:(NSSet *)values;

- (void)addPlantationsObject:(NSManagedObject *)value;
- (void)removePlantationsObject:(NSManagedObject *)value;
- (void)addPlantations:(NSSet *)values;
- (void)removePlantations:(NSSet *)values;

@end
