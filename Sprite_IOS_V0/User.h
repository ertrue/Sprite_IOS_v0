//
//  User.h
//  Sprite_IOS_V0
//
//  Created by Hongbo Zhang on 6/18/15.
//  Copyright (c) 2015 Hongbo Zhang. All rights reserved.
//

#import <Foundation/Foundation.h>



#import "Device.h"
@interface User : NSObject
@property (strong, nonatomic) NSString *name;
@property (strong, nonatomic) NSArray  *devices;
@end
