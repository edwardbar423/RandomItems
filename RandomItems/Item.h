//
//  Item.h
//  RandomItems
//
//  Created by Andrew Barber on 10/6/16.
//  Copyright © 2016 Invictus. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Item : NSObject

{
    NSString *_name;
    NSString *_serialNumber;
    int _valueInDollars;
    NSDate *_dateCreated;
}

+(instancetype)randomItem;

-(void)setName:(NSString *)str;
-(NSString *)name;

-(void)setSerialNumber:(NSString *)str;
-(NSString *)serialNumber;

-(void)setValueInDollars:(int)v;
-(int)valueInDollars;

-(NSDate *)dateCreated;



-(instancetype)initWithName:(NSString *)name
             valueInDollars:(int)value
               serialNumber:(NSString *)sNumber NS_DESIGNATED_INITIALIZER;

-(instancetype)initWithName:(NSString *)name;

@end
