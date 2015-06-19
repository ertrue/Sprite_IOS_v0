//
//  Schedule.h
//  Sprite_IOS_V0
//
//  Created by Hongbo Zhang on 6/18/15.
//  Copyright (c) 2015 Hongbo Zhang. All rights reserved.
//

#import <Foundation/Foundation.h>

// JSon Structure:
//      {"box": 1, "zone": {"1": {"start_time": "2015-06-14T03:00:00Z", "end_time": "2015-06-14T03:05:00Z"}, "3": {"start_time": "2015-06-13T07:44:46Z", "end_time": "2015-06-13T07:49:46Z"}}, "format": "json"}

@interface Schedule : NSObject
@property (strong, nonatomic) NSString *scheduleID;
@property (strong, nonatomic) NSString *startTime;
@property (strong, nonatomic) NSString *endTime;

@end
