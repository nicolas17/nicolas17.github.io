/*
* This header is generated by classdump-dyld 0.7
* on Saturday, November 28, 2015 at 4:14:21 PM Argentina Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FuseUI/MusicMediaProductDetailViewController.h>
#import <UIKit/UIImagePickerControllerDelegate.h>
#import <UIKit/UINavigationControllerDelegate.h>

@class NSString;

@interface MusicMediaPlaylistDetailViewController : MusicMediaProductDetailViewController <UIImagePickerControllerDelegate, UINavigationControllerDelegate> {

	NSString* _curatorStoreID;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewDidLoad;
-(void)imagePickerControllerDidCancel:(id)arg1 ;
-(void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2 ;
-(void)_handleCameraActionFromButton:(id)arg1 ;
-(void)mediaProductSplitDetailViewController:(id)arg1 didSelectCameraButton:(id)arg2 ;
-(id)initWithContainerEntityProvider:(id)arg1 tracklistEntityProvider:(id)arg2 clientContext:(id)arg3 existingJSProductNativeViewController:(id)arg4 forContentCreation:(char)arg5 curatorStoreID:(id)arg6 ;
-(id)initWithContainerEntityProvider:(id)arg1 tracklistEntityProvider:(id)arg2 clientContext:(id)arg3 existingJSProductNativeViewController:(id)arg4 forContentCreation:(char)arg5 ;
-(id)_loadProductSplitMainViewController;
-(id)_loadProductSplitDetailViewController;
-(void)_cancelEditing;
-(id)_loadProductHeaderContentViewController;
-(id)_loadDetailHeaderConfiguration;
-(void)mediaProductHeaderContentViewController:(id)arg1 didSelectCameraButton:(id)arg2 ;
@end

