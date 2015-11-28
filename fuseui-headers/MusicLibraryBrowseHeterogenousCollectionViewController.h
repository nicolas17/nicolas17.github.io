/*
* This header is generated by classdump-dyld 0.7
* on Saturday, November 28, 2015 at 4:14:19 PM Argentina Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FuseUI/FuseUI-Structs.h>
#import <FuseUI/MusicLibraryBrowseCollectionViewController.h>

@class MusicEntityValueContext, NSMutableDictionary, MusicSectionEntityValueContext, MusicLibraryBrowseHeterogenousCollectionViewConfiguration;

@interface MusicLibraryBrowseHeterogenousCollectionViewController : MusicLibraryBrowseCollectionViewController {

	MusicEntityValueContext* _itemEntityValueContext;
	NSMutableDictionary* _layoutMetricsPerSection;
	MusicSectionEntityValueContext* _sectionEntityValueContext;

}

@property (nonatomic,readonly) MusicLibraryBrowseHeterogenousCollectionViewConfiguration * libraryViewConfiguration; 
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3 ;
-(char)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 willDisplaySupplementaryView:(id)arg2 forElementKind:(id)arg3 atIndexPath:(id)arg4 ;
-(float)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(int)arg3 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(int)arg3 ;
-(void)collectionView:(id)arg1 didSelectAddButtonForCell:(id)arg2 ;
-(id)initWithLibraryViewConfiguration:(id)arg1 ;
-(id)layoutMetricsForSection:(unsigned)arg1 ;
-(void)collectionViewTintColorDidChange:(id)arg1 ;
-(id)_entityValueContextAtIndexPath:(id)arg1 ;
-(void)_configureEntityValueContextOutput:(id)arg1 forIndexPath:(id)arg2 ;
-(id)_sectionEntityValueContextForIndex:(unsigned)arg1 ;
-(void)_invalidateLayoutMetrics;
-(id)_layoutMetrics;
-(id)_layoutMetricsForCollectionViewContentDescriptor:(id)arg1 ;
@end

