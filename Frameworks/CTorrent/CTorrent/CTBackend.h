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
-(void) pauseTorrent:(CTTorrent *) torrent;
-(void) resumeTorrent:(CTTorrent *) torrent;
-(void) stopTorrent:(CTTorrent *) torrent;
-(void) startTorrent:(CTTorrent *) torrent;
-(void) setPriority:(NSInteger) prio forTorrent: (CTTorrent *)torrent;
-(void) setLabel:(NSString *) label forTorrent: (CTTorrent *)torrent;
-(void) addTorrentFromURL: (NSString *) URL withLabel:(NSString *)label withPriority:(NSInteger)prio;
-(void) addTorrentFromFile: (NSString *) path withLabel:(NSString *)label withPriority:(NSInteger)prio;
-(void) terminate;


@end
