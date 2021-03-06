/*
* This header is generated by classdump-dyld 0.7
* on Saturday, November 28, 2015 at 4:14:22 PM Argentina Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FuseUI/FuseUI-Structs.h>
#import <UIKit/UIPresentationController.h>
#import <FuseUI/MusicNowPlayingAtmosphericStatusBarDelegate.h>

@class UIView, MusicNowPlayingAtmosphericStatusBar, NSString;

@interface MusicNowPlayingPresentationController : UIPresentationController <MusicNowPlayingAtmosphericStatusBarDelegate> {

	char _isPresented;
	char _wantsAtmosphericStatusBar;
	UIView* _nowPlayingClippingView;
	MusicNowPlayingAtmosphericStatusBar* _nowPlayingStatusBar;

}

@property (nonatomic,retain) UIView * nowPlayingClippingView;                                        //@synthesize nowPlayingClippingView=_nowPlayingClippingView - In the implementation block
@property (nonatomic,retain) MusicNowPlayingAtmosphericStatusBar * nowPlayingStatusBar;              //@synthesize nowPlayingStatusBar=_nowPlayingStatusBar - In the implementation block
@property (assign,nonatomic) char wantsAtmosphericStatusBar;                                         //@synthesize wantsAtmosphericStatusBar=_wantsAtmosphericStatusBar - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)shouldRemovePresentersView;
-(void)presentationTransitionDidEnd:(char)arg1 ;
-(void)dismissalTransitionDidEnd:(char)arg1 ;
-(void)presentationTransitionWillBegin;
-(void)dismissalTransitionWillBegin;
-(char)_shouldChangeStatusBarViewController;
-(void)statusBar:(id)arg1 styleDidChange:(int)arg2 ;
-(UIView *)nowPlayingClippingView;
-(MusicNowPlayingAtmosphericStatusBar *)nowPlayingStatusBar;
-(void)setWantsAtmosphericStatusBar:(char)arg1 ;
-(CGRect)_currentStatusBarFrame;
-(void)setNowPlayingClippingView:(UIView *)arg1 ;
-(void)_updateStatusBar;
-(char)wantsAtmosphericStatusBar;
-(void)_restoreStatusBar;
-(void)_attachStatusBar;
-(void)setNowPlayingStatusBar:(MusicNowPlayingAtmosphericStatusBar *)arg1 ;
@end

