/*
* This header is generated by classdump-dyld 0.7
* on Saturday, November 28, 2015 at 4:14:10 PM Argentina Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FuseUI/FuseUI-Structs.h>
#import <UIKit/UIImageView.h>

@class UIView, UIColor;

@interface MusicHairlineView : UIImageView {

	UIView* _lineView;
	char _rightInsetIgnoresLayoutMargin;
	UIColor* _lineColor;
	UIOffset _lineOffset;

}

@property (nonatomic,retain) UIColor * lineColor;                             //@synthesize lineColor=_lineColor - In the implementation block
@property (assign,nonatomic) UIOffset lineOffset;                             //@synthesize lineOffset=_lineOffset - In the implementation block
@property (assign,nonatomic) char rightInsetIgnoresLayoutMargin;              //@synthesize rightInsetIgnoresLayoutMargin=_rightInsetIgnoresLayoutMargin - In the implementation block
-(void)layoutSubviews;
-(void)layoutMarginsDidChange;
-(UIEdgeInsets)layoutMargins;
-(void)setLineOffset:(UIOffset)arg1 ;
-(void)setRightInsetIgnoresLayoutMargin:(char)arg1 ;
-(UIOffset)lineOffset;
-(char)rightInsetIgnoresLayoutMargin;
-(UIColor *)lineColor;
-(void)setLineColor:(UIColor *)arg1 ;
@end

