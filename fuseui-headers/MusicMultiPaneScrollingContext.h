/*
* This header is generated by classdump-dyld 0.7
* on Saturday, November 28, 2015 at 4:14:16 PM Argentina Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <FuseUI/FuseUI-Structs.h>
@interface MusicMultiPaneScrollingContext : NSObject {

	float _previousMaximumHeaderHeight;
	float _previousStabilizingBottomAdditions;
	int _snapDecelerationVeloctiyOverrideState;
	float _snapDownContentOffset;
	int _snapState;
	float _snapUpContentOffset;
	CGPoint _previousContentOffset;
	UIEdgeInsets _previousContentInsetAdditions;
	UIEdgeInsets _previousContentScrollInsetAdditions;
	UIEdgeInsets _previousExternalContentInset;

}

@property (assign,nonatomic) CGPoint previousContentOffset;                                 //@synthesize previousContentOffset=_previousContentOffset - In the implementation block
@property (assign,nonatomic) UIEdgeInsets previousContentInsetAdditions;                    //@synthesize previousContentInsetAdditions=_previousContentInsetAdditions - In the implementation block
@property (assign,nonatomic) UIEdgeInsets previousContentScrollInsetAdditions;              //@synthesize previousContentScrollInsetAdditions=_previousContentScrollInsetAdditions - In the implementation block
@property (assign,nonatomic) UIEdgeInsets previousExternalContentInset;                     //@synthesize previousExternalContentInset=_previousExternalContentInset - In the implementation block
@property (assign,nonatomic) float previousMaximumHeaderHeight;                             //@synthesize previousMaximumHeaderHeight=_previousMaximumHeaderHeight - In the implementation block
@property (assign,nonatomic) float previousStabilizingBottomAdditions;                      //@synthesize previousStabilizingBottomAdditions=_previousStabilizingBottomAdditions - In the implementation block
@property (assign,nonatomic) int snapDecelerationVeloctiyOverrideState;                     //@synthesize snapDecelerationVeloctiyOverrideState=_snapDecelerationVeloctiyOverrideState - In the implementation block
@property (assign,nonatomic) float snapDownContentOffset;                                   //@synthesize snapDownContentOffset=_snapDownContentOffset - In the implementation block
@property (assign,nonatomic) int snapState;                                                 //@synthesize snapState=_snapState - In the implementation block
@property (assign,nonatomic) float snapUpContentOffset;                                     //@synthesize snapUpContentOffset=_snapUpContentOffset - In the implementation block
-(CGPoint)previousContentOffset;
-(void)setPreviousContentOffset:(CGPoint)arg1 ;
-(UIEdgeInsets)previousContentInsetAdditions;
-(void)setPreviousContentInsetAdditions:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)previousContentScrollInsetAdditions;
-(void)setPreviousContentScrollInsetAdditions:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)previousExternalContentInset;
-(void)setPreviousExternalContentInset:(UIEdgeInsets)arg1 ;
-(float)previousMaximumHeaderHeight;
-(void)setPreviousMaximumHeaderHeight:(float)arg1 ;
-(float)previousStabilizingBottomAdditions;
-(void)setPreviousStabilizingBottomAdditions:(float)arg1 ;
-(int)snapDecelerationVeloctiyOverrideState;
-(void)setSnapDecelerationVeloctiyOverrideState:(int)arg1 ;
-(float)snapDownContentOffset;
-(void)setSnapDownContentOffset:(float)arg1 ;
-(int)snapState;
-(void)setSnapState:(int)arg1 ;
-(float)snapUpContentOffset;
-(void)setSnapUpContentOffset:(float)arg1 ;
@end

