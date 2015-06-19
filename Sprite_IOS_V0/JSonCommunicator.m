//
//  MeetupCommunicator.m
//  BrowseMeetup
//
//  Created by Simon on 31/8/13.
//  Copyright (c) 2013 TAMIM Ziad. All rights reserved.
//

#import "JSonCommunicator.h"
#import "JSonCommunicatorDelegate.h"

#define schedules
#define devices
#define users "www.netrol.us/“

#define SIG @"b9f030f028fbde9ae985a23cae469f14bc23ce33"
#define SIG_ID @"188233276"
#define ZIP @"97006"

#define PAGE_COUNT 20

@implementation JSonCommunicator

- (void) searchUserID:(NSString *)userID
{
    NSString *urlAsString = [NSString stringWithFormat:@"http://netrol.us/users/%@/.json", userID];
                             
//                                                 https://api.meetup.com/2/groups?zip=%@&offset=0&format=json&lon=-122.86000061&photo-host=public&page=%d&radius=25.0&fields=&lat=45.5200004578&order=id&desc=false&sig_id=%@&sig=%@", ZIP, PAGE_COUNT, SIG_ID, SIG];
    NSURL *url = [[NSURL alloc] initWithString:urlAsString];
    NSLog(@"%@", urlAsString);
    
    [NSURLConnection sendAsynchronousRequest:[[NSURLRequest alloc] initWithURL:url] queue:[[NSOperationQueue alloc] init] completionHandler:^(NSURLResponse *response, NSData *data, NSError *error) {
        
        if (error) {
            [self.delegate fetchingGroupsFailedWithError:error];
        } else {
            [self.delegate receivedGroupsJSON:data];
        }
    }];
}

@end
