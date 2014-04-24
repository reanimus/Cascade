//
//  CTBackend.h
//  CTorrent
//
//  Created by Daniel Guzman on 2/27/13.
//  Copyright (c) 2013 Daniel Guzman. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <Cocoa/Cocoa.h>
#import "CTTorrent.h"

@protocol CTBackend <NSObject>
@property (readonly) NSDictionary *prefs;
@property (readonly) NSString *backendid;
@property (readonly) NSString *backendTypeUUID;

-(id) initWithOptions: (NSDictionary *) options;
-(CTTorrentState) getState:(CTTorrent *) torrent;
-(NSArray *) listTorrents;
-(bool) pauseTorrent:(CTTorrent *) torrent;
-(bool) resumeTorrent:(CTTorrent *) torrent;
-(bool) stopTorrent:(CTTorrent *) torrent;
-(bool) startTorrent:(CTTorrent *) torrent;
-(bool) setPriority:(NSInteger) prio forTorrent: (CTTorrent *)torrent;
-(bool) setLabel:(NSString *) label forTorrent: (CTTorrent *)torrent;
-(bool) addTorrentFromURL: (NSString *) URL withLabel:(NSString *)label withPriority:(NSInteger)prio;
-(bool) addTorrentFromFile: (NSString *) path withLabel:(NSString *)label withPriority:(NSInteger)prio;
-(bool) terminate;


@end
