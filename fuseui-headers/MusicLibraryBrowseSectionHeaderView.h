/*
* This header is generated by classdump-dyld 0.7
* on Saturday, November 28, 2015 at 4:14:11 PM Argentina Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FuseUI/FuseUI-Structs.h>
#import <UIKit/UITableViewHeaderFooterView.h>
#import <FuseUI/MusicActionableHeaderViewDelegate.h>

@protocol MusicLibraryBrowseSectionHeaderViewDelegate;
@class MusicActionableHeaderView, _UIBackdropView, UIView, NSString, UIColor;

@interface MusicLibraryBrowseSectionHeaderView : UITableViewHeaderFooterView <MusicActionableHeaderViewDelegate> {

	MusicActionableHeaderView* _actionableHeaderView;
	_UIBackdropView* _floatingBackdropView;
	UIView* _hairlineView;
	NSString* _backdropGroupName;
	UIColor* _backgroundColorForNonFloatingState;
	int _hairlineStyleForNonFloatingState;
	UIColor* _headerTextColorForNonFloatingState;
	float _topContentInset;
	id<MusicLibraryBrowseSectionHeaderViewDelegate> _delegate;

}

@property (assign,getter=isActionable,nonatomic) char actionable; 
@property (nonatomic,copy) NSString * backdropGroupName;                                                   //@synthesize backdropGroupName=_backdropGroupName - In the implementation block
@property (nonatomic,retain) UIColor * backgroundColorForNonFloatingState;                                 //@synthesize backgroundColorForNonFloatingState=_backgroundColorForNonFloatingState - In the implementation block
@property (assign,nonatomic) int hairlineStyleForNonFloatingState;                                         //@synthesize hairlineStyleForNonFloatingState=_hairlineStyleForNonFloatingState - In the implementation block
@property (nonatomic,copy) NSString * headerText; 
@property (nonatomic,retain) UIColor * headerTextColorForNonFloatingState;                                 //@synthesize headerTextColorForNonFloatingState=_headerTextColorForNonFloatingState - In the implementation block
@property (assign,nonatomic) float topContentInset;                                                        //@synthesize topContentInset=_topContentInset - In the implementation block
@property (assign,nonatomic,__weak) id<MusicLibraryBrowseSectionHeaderViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(UIOffset)_actionableHeaderMetrics;
+(float)heightForTraitCollection:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<MusicLibraryBrowseSectionHeaderViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<MusicLibraryBrowseSectionHeaderViewDelegate>)delegate;
-(void)setLayoutMargins:(UIEdgeInsets)arg1 ;
-(void)setFloating:(char)arg1 ;
-(void)_setupForCurrentFloatingState;
-(void)setActionable:(char)arg1 ;
-(void)actionableHeaderViewDidSelectButton:(id)arg1 ;
-(NSString *)headerText;
-(void)setBackgroundColorForNonFloatingState:(UIColor *)arg1 ;
-(void)setHairlineStyleForNonFloatingState:(int)arg1 ;
-(void)setHeaderText:(NSString *)arg1 ;
-(void)setTopContentInset:(float)arg1 ;
-(UIColor *)backgroundColorForNonFloatingState;
-(int)hairlineStyleForNonFloatingState;
-(UIColor *)headerTextColorForNonFloatingState;
-(void)setHeaderTextColorForNonFloatingState:(UIColor *)arg1 ;
-(float)topContentInset;
-(char)isActionable;
-(void)setBackdropGroupName:(NSString *)arg1 ;
-(NSString *)backdropGroupName;
@end

