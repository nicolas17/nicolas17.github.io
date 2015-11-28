/*
* This header is generated by classdump-dyld 0.7
* on Saturday, November 28, 2015 at 4:14:11 PM Argentina Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FuseUI/FuseUI-Structs.h>
#import <UIKit/UICollectionView.h>

@interface MusicVerticalScrollingContainerCollectionView : UICollectionView {

	SCD_Struct_Mu3 _delegateRespondsToSelector;
	char _performingLayout;

}

@property (assign,nonatomic) id<MusicVerticalScrollingContainerCollectionViewDelegate> delegate; 
@property (getter=isPerformingLayout,nonatomic,readonly) char performingLayout;                               //@synthesize performingLayout=_performingLayout - In the implementation block
-(void)setDelegate:(id<MusicVerticalScrollingContainerCollectionViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(void)setContentSize:(CGSize)arg1 ;
-(char)_shouldFadeCellsForBoundChangeWhileRotating;
-(char)isPerformingLayout;
@end

