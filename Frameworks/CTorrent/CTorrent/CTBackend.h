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

-(CTTorrentState) getState:(CTTorrent *) torrent;


@end
