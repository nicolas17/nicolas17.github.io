/*
* This header is generated by classdump-dyld 0.7
* on Saturday, November 28, 2015 at 4:14:17 PM Argentina Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FuseUI/MusicLibraryBrowseCollectionViewConfiguration.h>

@class NSMutableSet;

@interface MusicLibraryAlbumsCollectionViewConfiguration : MusicLibraryBrowseCollectionViewConfiguration {

	NSMutableSet* _additionalQueryFilterPredicates;
	char _forMainAlbumsList;
	char _includeCompilations;

}
-(void)dealloc;
-(id)init;
-(id)loadEntityViewDescriptor;
-(int)handleSelectionOfEntityValueContext:(id)arg1 fromViewController:(id)arg2 ;
-(void)addQueryFilterPredicate:(id)arg1 ;
-(int)handleSelectionFromUserActivityContext:(id)arg1 containerItem:(id)arg2 entityValueContext:(id)arg3 viewController:(id)arg4 ;
-(id)initForMainAlbumsList:(char)arg1 includeCompilations:(char)arg2 ;
-(char)pushAlbumViewWithAlbumPersistentID:(unsigned long long)arg1 fromViewController:(id)arg2 ;
-(id)_detailViewControllerForAlbumPersistentID:(unsigned long long)arg1 sourceViewController:(id)arg2 ;
-(id)queryForAlbumsCollectionView;
@end

