/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>
#import "MPMusicPlayerControllerServer.h"

@class MPMusicPlayerControllerServerInternal;

@interface MPMusicPlayerControllerServer : NSObject {
@private
	MPMusicPlayerControllerServerInternal* _internal;
}
+(void)startMusicPlayerControllerServer;
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(void)forwardInvocation:(id)invocation;
-(id)methodSignatureForSelector:(SEL)selector;
@end

@interface MPMusicPlayerControllerServer (MPMusicPlayerMigServer)
-(void)_runMigServer;
@end

