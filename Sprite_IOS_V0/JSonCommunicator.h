//
//  MeetupCommunicator.h
//  BrowseMeetup
//
//  Created by Simon on 31/8/13.
//  Copyright (c) 2013 TAMIM Ziad. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreLocation/CoreLocation.h>

@protocol JSonCommunicatorDelegate;

@interface JSonCommunicator : NSObject
@property (weak, nonatomic) id<JSonCommunicatorDelegate> delegate;

- (void) searchUserID:(NSString *) userID;
- (void) searchDeviceID:(NSString *) deviceID;
- (void) searchScheduleID:(NSString *) scheduleID;

@end