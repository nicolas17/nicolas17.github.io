/*
* This header is generated by classdump-dyld 0.7
* on Saturday, November 28, 2015 at 4:14:22 PM Argentina Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FuseUI/FuseUI-Structs.h>
#import <UIKit/UIViewController.h>
#import <FuseUI/MusicEntityPlaybackStatusControllerObserving.h>
#import <FuseUI/MusicEntityVerticalLockupViewDelegate.h>
#import <FuseUI/MusicClientContextConsuming.h>

@protocol MusicEntityProviding;
@class MusicEntityValueContext, MusicClientContext, MusicEntityPlaybackStatusController, MPAVController, SKUIDocumentContainerViewController, MusicEntityVerticalLockupView, MusicVerticalScrollingContainerViewController, NSString, SKUIClientContext;

@interface MusicProductDetailViewController : UIViewController <MusicEntityPlaybackStatusControllerObserving, MusicEntityVerticalLockupViewDelegate, MusicClientContextConsuming> {

	id<MusicEntityProviding> _containerEntityProvider;
	MusicEntityValueContext* _containerEntityValueContext;
	MusicClientContext* _clientContext;
	MusicEntityPlaybackStatusController* _playbackStatusController;
	MPAVController* _player;
	SKUIDocumentContainerViewController* _relatedContentDocumentContainerViewController;
	MusicEntityVerticalLockupView* _verticalLockupView;
	UIEdgeInsets _verticalScrollingContainerContentInsetAdditions;
	MusicVerticalScrollingContainerViewController* _verticalScrollingContainerViewController;
	float _contentTopLayoutGuide;
	float _contentBottomLayoutGuide;

}

@property (assign,nonatomic) float contentTopLayoutGuide;                                                                      //@synthesize contentTopLayoutGuide=_contentTopLayoutGuide - In the implementation block
@property (assign,nonatomic) float contentBottomLayoutGuide;                                                                   //@synthesize contentBottomLayoutGuide=_contentBottomLayoutGuide - In the implementation block
@property (nonatomic,retain) SKUIDocumentContainerViewController * relatedContentDocumentContainerViewController;              //@synthesize relatedContentDocumentContainerViewController=_relatedContentDocumentContainerViewController - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) SKUIClientContext * clientContext; 
-(void)commitEditing;
-(void)_updateLayout;
-(void)dealloc;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)verticalLockupView:(id)arg1 didSelectPlayButtonAction:(unsigned)arg2 ;
-(void)_reloadContainerEntityValueContextProperties;
-(void)_containerEntityProviderDidInvalidateNotification:(id)arg1 ;
-(void)_reloadVerticalScrollingContainerItems;
-(void)_updatePlaybackStatusForLockupView;
-(void)playbackStatusControllerPlaybackStatusDidChange:(id)arg1 ;
-(id)initWithContainerEntityProvider:(id)arg1 clientContext:(id)arg2 ;
-(void)cancelEditing;
-(id)loadVerticalLockupContentDescriptor;
-(id)loadVerticalLockupView;
-(void)_configureContainerEntityValueContext;
-(float)contentTopLayoutGuide;
-(float)contentBottomLayoutGuide;
-(void)setContentBottomLayoutGuide:(float)arg1 ;
-(void)setContentTopLayoutGuide:(float)arg1 ;
-(void)setRelatedContentDocumentContainerViewController:(SKUIDocumentContainerViewController *)arg1 ;
-(SKUIDocumentContainerViewController *)relatedContentDocumentContainerViewController;
-(void)setClientContext:(SKUIClientContext *)arg1 ;
-(SKUIClientContext *)clientContext;
@end

