//
//  JPImage.h
//  Coffee Log
//
//  Created by Joel Parsons on 11/11/2012.
//  Copyright (c) 2012 Joel Parsons. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class JPCoffee, JPPlantation, JPShop;

@interface JPImage : NSManagedObject

@property (nonatomic, retain) NSString * sizeKey;
@property (nonatomic, retain) NSData * image;
@property (nonatomic, retain) JPShop *shop;
@property (nonatomic, retain) JPCoffee *coffee;
@property (nonatomic, retain) JPPlantation *plantation;

@end
