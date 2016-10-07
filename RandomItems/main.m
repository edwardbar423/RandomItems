//
//  main.m
//  RandomItems
//
//  Created by Andrew Barber on 10/6/16.
//  Copyright © 2016 Invictus. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Item.h"


int main(int argc, const char * argv[]) {
    @autoreleasepool {
        
        NSMutableArray *items = [[NSMutableArray alloc] init];

        for (int i = 0; i < 10; i++) {
            Item *item = [Item randomItem];
            [items addObject:item];
        }
        
        for (Item *item in items) {
            NSLog(@"%@", item);
        }
        
        items = nil;
    }
    return 0;
}
