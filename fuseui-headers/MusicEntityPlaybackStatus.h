/*
* This header is generated by classdump-dyld 0.7
* on Saturday, November 28, 2015 at 4:14:12 PM Argentina Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FuseUI/FuseUI-Structs.h>
#import <FuseUI/NSCopying.h>
#import <FuseUI/NSMutableCopying.h>

@interface MusicEntityPlaybackStatus : NSObject <NSCopying, NSMutableCopying> {

	double _playbackCurrentTime;
	double _playbackCurrentTimeOriginatingTime;
	int _playbackDisplayState;
	double _playbackDuration;
	float _playbackRate;

}

@property (nonatomic,readonly) double playbackCurrentTime; 
@property (nonatomic,readonly) int playbackDisplayState;                //@synthesize playbackDisplayState=_playbackDisplayState - In the implementation block
@property (nonatomic,readonly) double playbackDuration;                 //@synthesize playbackDuration=_playbackDuration - In the implementation block
@property (nonatomic,readonly) float playbackRate;                      //@synthesize playbackRate=_playbackRate - In the implementation block
@property (nonatomic,readonly) char shouldDisplayPlaying; 
-(float)playbackRate;
-(double)playbackDuration;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(double)playbackCurrentTime;
-(char)shouldDisplayPlaying;
-(id)_copyWithClass:(Class)arg1 zone:(NSZone*)arg2 ;
-(int)playbackDisplayState;
@end

