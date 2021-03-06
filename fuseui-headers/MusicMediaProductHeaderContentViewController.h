/*
* This header is generated by classdump-dyld 0.7
* on Saturday, November 28, 2015 at 4:14:16 PM Argentina Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FuseUI/FuseUI-Structs.h>
#import <UIKit/UIViewController.h>
#import <FuseUI/MusicEntityPlaybackStatusControllerObserving.h>
#import <FuseUI/MusicEntityProductHeaderLockupViewDelegate.h>
#import <FuseUI/MusicMediaDetailHeaderContentViewController.h>
#import <FuseUI/MusicClientContextConsuming.h>

@protocol MusicEntityProviding, MusicMediaProductHeaderContentViewControllerDelegate;
@class MusicContextualLibraryUpdateAlertAction, NSArray, MusicHairlineView, MusicEntityPlaybackStatusController, MPAVController, MusicEntityProductHeaderLockupView, MusicEntityViewProductHeaderLockupContentDescriptor, MusicEntityValueContext, MusicClientContext, UIImage, NSString, MusicMediaDetailTintInformation, UIButton, SKUIClientContext;

@interface MusicMediaProductHeaderContentViewController : UIViewController <MusicEntityPlaybackStatusControllerObserving, MusicEntityProductHeaderLockupViewDelegate, MusicMediaDetailHeaderContentViewController, MusicClientContextConsuming> {

	MusicContextualLibraryUpdateAlertAction* _addRemoveLibraryAlertAction;
	NSArray* _addRemoveNotificationObservers;
	MusicHairlineView* _hairlineView;
	char _needToMakeTitleFirstResponder;
	MusicEntityPlaybackStatusController* _playbackStatusController;
	MPAVController* _player;
	MusicEntityProductHeaderLockupView* _productHeaderLockupView;
	MusicEntityViewProductHeaderLockupContentDescriptor* _productHeaderLockupContentDecriptor;
	float _transitionProgress;
	char _wantsRefreshActivityIndicator;
	char _allowsEditing;
	char _hairlineVisible;
	char _shouldDelayTransitionProgress;
	MusicEntityValueContext* _containerEntityValueContext;
	MusicClientContext* _clientContext;
	id<MusicEntityProviding> _containerEntityProvider;
	id<MusicEntityProviding> _contextualActionsOverrideTracklistEntityProvider;
	id<MusicMediaProductHeaderContentViewControllerDelegate> _delegate;
	UIImage* _editedContentArtworkImage;
	NSString* _lockupArtworkProperty;
	MusicMediaDetailTintInformation* _mediaDetailTintInformation;
	int _presentationSource;

}

@property (assign,nonatomic) char allowsEditing;                                                                     //@synthesize allowsEditing=_allowsEditing - In the implementation block
@property (nonatomic,readonly) id<MusicEntityProviding> containerEntityProvider;                                     //@synthesize containerEntityProvider=_containerEntityProvider - In the implementation block
@property (nonatomic,retain) id<MusicEntityProviding> contextualActionsOverrideTracklistEntityProvider;              //@synthesize contextualActionsOverrideTracklistEntityProvider=_contextualActionsOverrideTracklistEntityProvider - In the implementation block
@property (assign,nonatomic,__weak) id<MusicMediaProductHeaderContentViewControllerDelegate> delegate;               //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIImage * editedContentArtworkImage;                                                    //@synthesize editedContentArtworkImage=_editedContentArtworkImage - In the implementation block
@property (nonatomic,copy,readonly) NSString * editableText; 
@property (assign,getter=isHairlineVisible,nonatomic) char hairlineVisible;                                          //@synthesize hairlineVisible=_hairlineVisible - In the implementation block
@property (nonatomic,copy) NSString * lockupArtworkProperty;                                                         //@synthesize lockupArtworkProperty=_lockupArtworkProperty - In the implementation block
@property (nonatomic,copy) MusicMediaDetailTintInformation * mediaDetailTintInformation;                             //@synthesize mediaDetailTintInformation=_mediaDetailTintInformation - In the implementation block
@property (nonatomic,readonly) UIButton * shareButton; 
@property (assign,nonatomic) char shouldDelayTransitionProgress;                                                     //@synthesize shouldDelayTransitionProgress=_shouldDelayTransitionProgress - In the implementation block
@property (nonatomic,readonly) int presentationSource;                                                               //@synthesize presentationSource=_presentationSource - In the implementation block
@property (nonatomic,readonly) MusicEntityValueContext * _containerEntityValueContext;                               //@synthesize containerEntityValueContext=_containerEntityValueContext - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) SKUIClientContext * clientContext; 
-(void)_contentTasteControllerDidChangeNotification:(id)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<MusicMediaProductHeaderContentViewControllerDelegate>)arg1 ;
-(id<MusicMediaProductHeaderContentViewControllerDelegate>)delegate;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)setEditing:(char)arg1 animated:(char)arg2 ;
-(void)_setContentOverlayInsets:(UIEdgeInsets)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(char)arg1 ;
-(char)allowsEditing;
-(void)setAllowsEditing:(char)arg1 ;
-(void)_updatePreferredContentSize;
-(int)presentationSource;
-(id<MusicEntityProviding>)contextualActionsOverrideTracklistEntityProvider;
-(id<MusicEntityProviding>)containerEntityProvider;
-(void)_reloadContainerEntityValueContextProperties;
-(void)_containerEntityProviderDidInvalidateNotification:(id)arg1 ;
-(void)_contentSizeCategoryDidChangeNotification:(id)arg1 ;
-(void)_updatePlaybackStatusForLockupView;
-(void)playbackStatusControllerPlaybackStatusDidChange:(id)arg1 ;
-(void)setMediaDetailTintInformation:(MusicMediaDetailTintInformation *)arg1 ;
-(void)setEditedContentArtworkImage:(UIImage *)arg1 ;
-(void)setLockupArtworkProperty:(NSString *)arg1 ;
-(UIImage *)editedContentArtworkImage;
-(NSString *)lockupArtworkProperty;
-(MusicMediaDetailTintInformation *)mediaDetailTintInformation;
-(MusicEntityValueContext *)_containerEntityValueContext;
-(NSString *)editableText;
-(void)productHeaderLockupView:(id)arg1 didSelectCameraButton:(id)arg2 ;
-(void)productHeaderLockupViewDidSelectShareButton:(id)arg1 ;
-(void)productHeaderLockupViewDidUpdateEditableText:(id)arg1 ;
-(void)_applyTransitionProgress;
-(void)setMediaDetailHeaderHeight:(float)arg1 withMaximumHeaderHeight:(float)arg2 transitionProgress:(float)arg3 ;
-(void)setShouldDelayTransitionProgress:(char)arg1 ;
-(char)shouldDelayTransitionProgress;
-(void)makeEditableTitleBecomeFirstResponder;
-(void)setHairlineVisible:(char)arg1 ;
-(id)_loadProductHeaderLockupContentDescriptor;
-(char)_calculateWantsRefreshButton;
-(void)_applyLockupArtworkProperty;
-(void)_configureProductHeaderLockupContentDescriptor:(id)arg1 withTintInformation:(id)arg2 ;
-(void)_updateProductHeaderLockupProperties;
-(void)_updateHairline;
-(id)_productHeaderLockupContentDescriptor;
-(void)_reloadWantsAddToLibraryButton;
-(void)_updateContentTaste;
-(void)_applyProductHeaderLayoutMargins;
-(void)_updateNavigationTitle;
-(void)_configureWithTintInformation;
-(void)_presentContextualActionsFromButton:(id)arg1 includeSharing:(char)arg2 includeStandardActions:(char)arg3 ;
-(CGRect)_hairlineViewFrame;
-(void)productHeaderLockupViewDidSelectAddToLibraryButton:(id)arg1 ;
-(void)productHeaderLockupViewDidSelectContextualActionsButton:(id)arg1 ;
-(void)productHeaderLockupViewDidSelectEditButton:(id)arg1 ;
-(void)productHeaderLockupViewDidSelectRefreshButton:(id)arg1 ;
-(void)productHeaderLockupViewDidSelectLikeDislikeButton:(id)arg1 ;
-(void)productHeaderLockupView:(id)arg1 didSelectPlayButtonAction:(unsigned)arg2 ;
-(void)productHeaderLockupViewTintColorDidChange:(id)arg1 ;
-(id)initWithContainerEntityProvider:(id)arg1 presentationSource:(int)arg2 ;
-(void)setContextualActionsOverrideTracklistEntityProvider:(id<MusicEntityProviding>)arg1 ;
-(char)isHairlineVisible;
-(void)setClientContext:(SKUIClientContext *)arg1 ;
-(SKUIClientContext *)clientContext;
-(UIButton *)shareButton;
@end

