/*
* This header is generated by classdump-dyld 0.7
* on Saturday, November 28, 2015 at 4:14:10 PM Argentina Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FuseUI/MusicEntityAbstractLockupView.h>
#import <FuseUI/MusicEntityContentDescriptorViewConfiguring.h>

@protocol MusicEntityVerticalLockupViewDelegate;
@class MusicEntityViewContentDescriptor, NSString;

@interface MusicEntityVerticalLockupView : MusicEntityAbstractLockupView <MusicEntityContentDescriptorViewConfiguring> {

	id<MusicEntityVerticalLockupViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MusicEntityVerticalLockupViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) MusicEntityViewContentDescriptor * contentDescriptor; 
@property (nonatomic,retain) id<MusicEntityValueProviding> entityValueProvider; 
+(float)maximumHeightForContentDescriptor:(id)arg1 width:(float)arg2 traitCollection:(id)arg3 ;
-(void)setDelegate:(id<MusicEntityVerticalLockupViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<MusicEntityVerticalLockupViewDelegate>)delegate;
-(void)_contentDescriptorDidChange:(id)arg1 ;
-(void)_handlePlayButtonTappedWithAction:(unsigned)arg1 ;
-(MusicEntityViewContentDescriptor *)contentDescriptor;
-(void)setContentDescriptor:(MusicEntityViewContentDescriptor *)arg1 ;
-(char)_shouldEnableArtworkViewUserInteraction;
-(char)_shouldArtworkViewRespectHighlightProperty;
@end
