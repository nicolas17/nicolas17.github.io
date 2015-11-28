/*
* This header is generated by classdump-dyld 0.7
* on Saturday, November 28, 2015 at 4:14:19 PM Argentina Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FuseUI/FuseUI-Structs.h>
#import <UIKit/UIView.h>

@class NSMutableArray, NSArray;

@interface MusicNowPlayingTitlesView : UIView {

	NSMutableArray* _labels;
	NSMutableArray* _marqueeViews;
	char _needsViewUpdate;
	char _marqueeEnabled;
	char _clampLabels;
	NSArray* _attributedTexts;
	UIEdgeInsets _contentInset;
	UIEdgeInsets _marqueeFadeEdgeInsets;

}

@property (nonatomic,copy) NSArray * attributedTexts;                                    //@synthesize attributedTexts=_attributedTexts - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentInset;                                  //@synthesize contentInset=_contentInset - In the implementation block
@property (nonatomic,readonly) float firstBaselineOffsetFromTop; 
@property (getter=isMarqueeEnabled,nonatomic,readonly) char marqueeEnabled;              //@synthesize marqueeEnabled=_marqueeEnabled - In the implementation block
@property (assign,nonatomic) UIEdgeInsets marqueeFadeEdgeInsets;                         //@synthesize marqueeFadeEdgeInsets=_marqueeFadeEdgeInsets - In the implementation block
@property (assign,nonatomic) char clampLabels;                                           //@synthesize clampLabels=_clampLabels - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UIEdgeInsets)contentInset;
-(void)setContentInset:(UIEdgeInsets)arg1 ;
-(void)_updateViewsIfNeeded;
-(void)_layoutLabel:(id)arg1 withMarqueeView:(id)arg2 previousLabelBaselineOffsetFromBottom:(float)arg3 previousMarqueeViewFrame:(CGRect)arg4 ;
-(void)_applyMarqueeFade;
-(float)_baselineOffsetForAttributedText:(id)arg1 returningFont:(out id*)arg2 ;
-(void)setMarqueeEnabled:(char)arg1 withOptions:(long long)arg2 ;
-(void)resetMarqueePosition;
-(void)_setupLabel:(inout id*)arg1 marqueeView:(inout id*)arg2 withAttributedText:(id)arg3 ;
-(float)firstBaselineOffsetFromTop;
-(void)setAttributedTexts:(NSArray *)arg1 ;
-(void)setMarqueeFadeEdgeInsets:(UIEdgeInsets)arg1 ;
-(void)setClampLabels:(char)arg1 ;
-(NSArray *)attributedTexts;
-(char)isMarqueeEnabled;
-(UIEdgeInsets)marqueeFadeEdgeInsets;
-(char)clampLabels;
@end

