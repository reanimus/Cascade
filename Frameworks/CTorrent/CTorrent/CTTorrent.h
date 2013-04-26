//
//  CTTorrent.h
//  CTorrent
//
//  Created by Daniel Guzman on 2/27/13.
//  Copyright (c) 2013 Daniel Guzman. All rights reserved.
//
//  Description:
//  Just a dummy class to store some information about a torrent. At the moment, just
//  contains a reference to the backend that created it and its GUID. These are immutable.
//

#import <Cocoa/Cocoa.h>

enum CTTorrentState {
    Stopped,
    Paused,
    Downloading,
    Seeding,
    Error,
    ErrorDownloading,
    ErrorSeeding
};
typedef enum CTTorrentState CTTorrentState;

@interface CTTorrent : NSObject
{
    NSObject *owner;
    NSString *guid;
    uint64_t up;
    uint64_t size;
    uint64_t down;
    uint64_t downloaded;
    uint64_t uploaded;
    uint64_t ratio;
    NSInteger peers;
    NSInteger seedingPeers;
    NSInteger leechingPeers;
    NSInteger inactivePeers;
    NSString *path;
    NSString *error;
    BOOL isDirectory;
    NSArray *trackers;
    NSArray *files;
    CTTorrentState state;
}
@property (readwrite,retain) NSObject *owner;
@property (readwrite,retain) NSString *guid;
@property uint64_t up;
@property uint64_t size;
@property uint64_t down;
@property uint64_t downloaded;
@property uint64_t uploaded;
@property uint64_t ratio;
@property NSInteger peers;
@property NSInteger leechingPeers;
@property NSInteger seedingPeers;
@property NSInteger inactivePeers;
@property (retain) NSString *path;
@property (retain) NSString *error;
@property BOOL isDirectory;
@property (retain) NSArray *trackers;
@property (retain) NSArray *files;
@property CTTorrentState state;


@end
