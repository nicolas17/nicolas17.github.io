/*
* This header is generated by classdump-dyld 0.7
* on Saturday, November 28, 2015 at 4:14:20 PM Argentina Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FuseUI/MusicNavigationController.h>
#import <FuseUI/MusicJSWelcomeNativeViewControllerDelegate.h>
#import <FuseUI/MusicJSNativeViewControllerFactory.h>
#import <FuseUI/MusicClientContextConsuming.h>

@protocol MusicWelcomeNavigationControllerDisappearanceObserver;
@class NSMutableArray, MusicWelcomePlaceholderView, MusicClientContext, NSString, SKUIClientContext;

@interface MusicWelcomeNavigationController : MusicNavigationController <MusicJSWelcomeNativeViewControllerDelegate, MusicJSNativeViewControllerFactory, MusicClientContextConsuming> {

	NSMutableArray* _queuedNativeViewEventTypes;
	char _registeredWithModalNavigationStackRegistry;
	MusicWelcomePlaceholderView* _welcomePlaceholderView;
	MusicClientContext* _clientContext;
	id<MusicWelcomeNavigationControllerDisappearanceObserver> _disappearanceObserver;

}

@property (assign,nonatomic,__weak) id<MusicWelcomeNavigationControllerDisappearanceObserver> disappearanceObserver;              //@synthesize disappearanceObserver=_disappearanceObserver - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) SKUIClientContext * clientContext; 
+(char)automaticallyInstallAccountBarButtonItem;
+(char)automaticallyInstallSearchBarButtonItem;
-(void)dealloc;
-(char)shouldAutorotate;
-(unsigned)supportedInterfaceOrientations;
-(void)viewDidLayoutSubviews;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)viewDidDisappear:(char)arg1 ;
-(void)jsDidCloseWelcomeNativeViewController:(id)arg1 withOptions:(id)arg2 ;
-(void)jsWelcomeNativeViewController:(id)arg1 setWelcomeDocument:(id)arg2 options:(id)arg3 ;
-(id)loadJSNativeViewControllerWithAppContext:(id)arg1 ;
-(void)_setRegisteredWithModalNavigationStackRegistry:(char)arg1 ;
-(void)_handleClientDidLoadNotification:(id)arg1 ;
-(void)_dispatchNativeViewEventOfType:(int)arg1 ;
-(id<MusicWelcomeNavigationControllerDisappearanceObserver>)disappearanceObserver;
-(void)setDisappearanceObserver:(id<MusicWelcomeNavigationControllerDisappearanceObserver>)arg1 ;
-(void)setClientContext:(SKUIClientContext *)arg1 ;
-(SKUIClientContext *)clientContext;
@end

