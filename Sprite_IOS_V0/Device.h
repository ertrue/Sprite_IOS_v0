//
//  Device.h
//  Sprite_IOS_V0
//
//  Created by Hongbo Zhang on 6/18/15.
//  Copyright (c) 2015 Hongbo Zhang. All rights reserved.
//

#import <Foundation/Foundation.h>

// JSon structure:
//      {"port": "3", "addr": "97229", "updated_time": "2015-04-20T04:39:20Z", "status": 0, "user": 1, "created_time": "2015-04-20T04:39:19Z", "serial": 1, "zone_num": 8, "zipcode": "97229", "name": "box1"}

@interface Device : NSObject

@property (strong, nonatomic) NSNumber *port;
@property (strong, nonatomic) NSNumber *zip;
@property (strong, nonatomic) NSString *address;
@property (strong, nonatomic) NSString *updatedTime;
@property (strong, nonatomic) NSNumber *status;
@property (strong, nonatomic) NSString *userID;
@property (strong, nonatomic) NSString *createdTime;
@property (strong, nonatomic) NSNumber *serial;
@property (strong, nonatomic) NSNumber *zoneCnt;
@property (strong, nonatomic) NSString *deviceID;

@end
