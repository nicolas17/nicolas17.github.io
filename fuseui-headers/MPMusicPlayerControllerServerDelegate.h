/*
* This header is generated by classdump-dyld 0.7
* on Saturday, November 28, 2015 at 4:14:13 PM Argentina Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol MPMusicPlayerControllerServerDelegate <NSObject>
@required
-(void)musicPlayerServer:(id)arg1 setNowPlayingItem:(id)arg2;
-(id)nowPlayingItemForMusicPlayerServer:(id)arg1;
-(id)currentMediaQueryForMusicPlayerServer:(id)arg1;
-(id)currentRadioStationForMusicPlayerServer:(id)arg1;
-(void)musicPlayerServer:(id)arg1 setPlaybackSpeed:(int)arg2;
-(int)playbackSpeedForMusicPlayerServer:(id)arg1;
-(unsigned)indexOfNowPlayingItemForMusicPlayerServer:(id)arg1;
-(unsigned)unshuffledIndexOfNowPlayingItemForMusicPlayerServer:(id)arg1;
-(char)isNowPlayingItemFromGeniusMixForMusicPlayerServer:(id)arg1;
-(char)userQueueModificationsDisabledForMusicPlayerServer:(id)arg1;
-(void)musicPlayerServer:(id)arg1 setUserQueueModificationsDisabled:(char)arg2;
-(void)musicPlayerServer:(id)arg1 registerForShuffleModeChangesWithChangeHandler:(/*^block*/id)arg2;
-(void)musicPlayerServer:(id)arg1 registerForRepeatModeChangesWithChangeHandler:(/*^block*/id)arg2;
-(id)playerForMusicPlayerServer:(id)arg1 usingApplicationSpecificQueue:(char)arg2;
-(void)musicPlayerServer:(id)arg1 setFirstItem:(id)arg2;
-(void)musicPlayerServer:(id)arg1 setShuffleMode:(int)arg2;
-(void)musicPlayerServer:(id)arg1 prepareQueueWithQuery:(id)arg2;
-(void)musicPlayerServer:(id)arg1 prepareQueueWithGeniusMixPlaylist:(id)arg2;
-(void)musicPlayerServer:(id)arg1 prepareQueueWithRadioStation:(id)arg2;

@end

