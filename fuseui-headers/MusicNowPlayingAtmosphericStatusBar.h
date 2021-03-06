/*
* This header is generated by classdump-dyld 0.7
* on Saturday, November 28, 2015 at 4:14:13 PM Argentina Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FuseUI/FuseUI-Structs.h>
#import <UIKit/UIView.h>

@class UIView, MusicStatusBar, MPUPinningView, MusicNowPlayingAtmosphericEffectView, NSString;

@interface MusicNowPlayingAtmosphericStatusBar : UIView {

	UIView* _containerView;
	MusicStatusBar* _statusBar;
	MPUPinningView* _atmosphericContentView;
	MusicNowPlayingAtmosphericEffectView* _effectView;

}

@property (assign,nonatomic) int effect; 
@property (nonatomic,copy) NSString * backdropGroupName; 
@property (nonatomic,readonly) MPUPinningView * atmosphericContentView;                                    //@synthesize atmosphericContentView=_atmosphericContentView - In the implementation block
@property (assign,nonatomic,__weak) id<MusicNowPlayingAtmosphericStatusBarDelegate> delegate; 
@property (nonatomic,retain) MusicNowPlayingAtmosphericEffectView * effectView;                            //@synthesize effectView=_effectView - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<MusicNowPlayingAtmosphericStatusBarDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<MusicNowPlayingAtmosphericStatusBarDelegate>)delegate;
-(MusicNowPlayingAtmosphericEffectView *)effectView;
-(void)setEffectView:(MusicNowPlayingAtmosphericEffectView *)arg1 ;
-(int)effect;
-(void)setEffect:(int)arg1 ;
-(MPUPinningView *)atmosphericContentView;
-(void)setBackdropGroupName:(NSString *)arg1 ;
-(NSString *)backdropGroupName;
@end

