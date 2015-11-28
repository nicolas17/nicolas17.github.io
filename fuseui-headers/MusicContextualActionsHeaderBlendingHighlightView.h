/*
* This header is generated by classdump-dyld 0.7
* on Saturday, November 28, 2015 at 4:14:17 PM Argentina Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FuseUI/FuseUI-Structs.h>
#import <UIKit/UIView.h>

@class UIView;

@interface MusicContextualActionsHeaderBlendingHighlightView : UIView {

	UIView* _colorBurnView;
	UIView* _plusDView;

}

@property (assign) float cornerRadius; 
+(id)_blendingSeparatorView;
+(id)_blendingPressedView;
-(void)dealloc;
-(void)layoutSubviews;
-(float)cornerRadius;
-(void)setCornerRadius:(float)arg1 ;
-(void)setHighlighted:(char)arg1 animated:(char)arg2 ;
-(void)setPressed:(char)arg1 animated:(char)arg2 ;
-(id)initWithFrame:(CGRect)arg1 colorBurnColor:(id)arg2 plusDColor:(id)arg3 ;
@end
