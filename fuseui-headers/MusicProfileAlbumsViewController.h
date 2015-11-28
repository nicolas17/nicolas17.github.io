/*
* This header is generated by classdump-dyld 0.7
* on Saturday, November 28, 2015 at 4:14:19 PM Argentina Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FuseUI/MusicProductTracklistTableViewController.h>

@class MusicLibraryAlbumsViewConfiguration, UIView, MPAVController;

@interface MusicProfileAlbumsViewController : MusicProductTracklistTableViewController {

	MusicLibraryAlbumsViewConfiguration* _libraryAlbumsViewConfiguration;
	UIView* _pinnedHeaderViewTopPaddingMaskingView;
	MPAVController* _player;

}
-(void)dealloc;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)initWithLibraryViewConfiguration:(id)arg1 ;
-(void)tableViewDidLayoutSubviews:(id)arg1 ;
-(int)handleSelectionOfSectionHeaderForSectionEntityValueContext:(id)arg1 ;
-(void)handleContentDescriptorDidInvalidate;
-(void)_layoutPinnedHeaderViewTopPaddingMaskingView;
@end
