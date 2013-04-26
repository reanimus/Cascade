//
//  CTTorrent.m
//  CTorrent
//
//  Created by Daniel Guzman on 2/27/13.
//  Copyright (c) 2013 Daniel Guzman. All rights reserved.
//

#import "CTTorrent.h"

@implementation CTTorrent



@synthesize guid, owner, up, size, down, downloaded, uploaded, ratio, peers, seedingPeers, leechingPeers, inactivePeers, path, error, isDirectory, trackers, files, state;

-(id)init
{
    // This is an information storage class; we can't create anything from a
    // null input.
    return nil;
}
-(id)initWithBackendInfo: (NSObject *)b :(NSString *) g
{
    self = [super init];
    if(self)
    {
        owner = b;
        guid = g;
    }
    return self;
}

@end
