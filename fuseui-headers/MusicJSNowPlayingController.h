/*
* This header is generated by classdump-dyld 0.7
* on Saturday, November 28, 2015 at 4:14:12 PM Argentina Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ITMLKit/IKJSObject.h>
#import <FuseUI/MusicJSNowPlayingController.h>

@protocol MusicJSNowPlayingController <JSExport>
@required
-(void)presentNowPlayingView;

@end


@class MPAVController, MusicTabBarController;

@interface MusicJSNowPlayingController : IKJSObject <MusicJSNowPlayingController> {

	MPAVController* _player;
	MusicTabBarController* _tabBarController;

}

@property (nonatomic,retain) MPAVController * player;                               //@synthesize player=_player - In the implementation block
@property (nonatomic,retain) MusicTabBarController * tabBarController;              //@synthesize tabBarController=_tabBarController - In the implementation block
-(MusicTabBarController *)tabBarController;
-(void)presentNowPlayingView;
-(void)setTabBarController:(MusicTabBarController *)arg1 ;
-(void)setPlayer:(MPAVController *)arg1 ;
-(MPAVController *)player;
@end

