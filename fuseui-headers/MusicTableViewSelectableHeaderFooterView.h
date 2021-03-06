/*
* This header is generated by classdump-dyld 0.7
* on Saturday, November 28, 2015 at 4:14:11 PM Argentina Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FuseUI/FuseUI-Structs.h>
#import <UIKit/UITableViewHeaderFooterView.h>

@class UIView, UIColor, MusicTableView;

@interface MusicTableViewSelectableHeaderFooterView : UITableViewHeaderFooterView {

	UIView* _bottomHairlineView;
	int _highlightOrSelectionChangeTransactionsCount;
	UIView* _highlightOverlayView;
	char _lastHighlightOrSelectionChangeWasAnimated;
	UIView* _topHairlineView;
	char _highlighted;
	char _selected;
	char _showsBottomSeparator;
	char _showsTopSeparator;
	UIColor* _selectionTintColor;
	UIColor* _separatorColor;

}

@property (assign,getter=isHighlighted,nonatomic) char highlighted;              //@synthesize highlighted=_highlighted - In the implementation block
@property (assign,getter=isSelected,nonatomic) char selected;                    //@synthesize selected=_selected - In the implementation block
@property (nonatomic,retain) UIColor * selectionTintColor;                       //@synthesize selectionTintColor=_selectionTintColor - In the implementation block
@property (nonatomic,retain) UIColor * separatorColor;                           //@synthesize separatorColor=_separatorColor - In the implementation block
@property (assign,nonatomic) char showsBottomSeparator;                          //@synthesize showsBottomSeparator=_showsBottomSeparator - In the implementation block
@property (assign,nonatomic) char showsTopSeparator;                             //@synthesize showsTopSeparator=_showsTopSeparator - In the implementation block
@property (nonatomic,readonly) MusicTableView * parentTableView; 
-(void)_updateBackgroundColorAnimated:(char)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setHighlighted:(char)arg1 ;
-(char)isHighlighted;
-(UIColor *)separatorColor;
-(void)setFloating:(char)arg1 ;
-(void)setSeparatorColor:(UIColor *)arg1 ;
-(void)setHighlighted:(char)arg1 animated:(char)arg2 ;
-(void)setSelected:(char)arg1 animated:(char)arg2 ;
-(char)isSelected;
-(void)prepareForReuse;
-(void)setSelected:(char)arg1 ;
-(void)setSelectionTintColor:(UIColor *)arg1 ;
-(UIColor *)selectionTintColor;
-(MusicTableView *)parentTableView;
-(id)_effectiveHighlightOverlayBackgroundColor;
-(void)setShowsBottomSeparator:(char)arg1 ;
-(void)setShowsTopSeparator:(char)arg1 ;
-(void)beginHighlightOrSelectionChangeTransaction;
-(void)endHighlightOrSelectionChangeTransaction;
-(char)showsBottomSeparator;
-(char)showsTopSeparator;
@end

