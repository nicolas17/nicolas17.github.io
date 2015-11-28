/*
* This header is generated by classdump-dyld 0.7
* on Saturday, November 28, 2015 at 4:14:22 PM Argentina Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaPlayer/MPQueueFeeder.h>
#import <FuseUI/MPShuffleControllerDataSource.h>
#import <FuseUI/MPStoreAVItemDownloadMetadataConsuming.h>

@class MusicEntityValueContext, MPPlaceholderAVItem, MPShuffleController, MusicStoreEntityProvider, NSArray, NSString;

@interface MusicStoreQueueFeeder : MPQueueFeeder <MPShuffleControllerDataSource, MPStoreAVItemDownloadMetadataConsuming> {

	MusicEntityValueContext* _containerEntityValueContext;
	char _hasValidContainerEntityValueContext;
	MPPlaceholderAVItem* _placeholderAVItem;
	unsigned _feederRevisionID;
	char _shouldIgnoreEntityProviderInvalidationForContentsChange;
	MPShuffleController* _shuffleController;
	MusicStoreEntityProvider* _storeEntityProvider;
	NSArray* _storeMetadataContexts;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_operationQueue;
-(int)playbackMode;
-(unsigned)indexOfItemWithIdentifier:(id)arg1 ;
-(id)copyRawItemAtIndex:(unsigned)arg1 ;
-(id)identifierAtIndex:(unsigned)arg1 ;
-(void)reloadWithPlaybackContext:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(char)hasValidItemAtIndex:(unsigned)arg1 ;
-(char)canSkipToPreviousItem;
-(void)shuffleItemsWithAnchor:(unsigned*)arg1 ;
-(id)errorResolverForItem:(id)arg1 ;
-(unsigned)itemTypeForIndex:(unsigned)arg1 ;
-(char)playerPreparesItemsForPlaybackAsynchronously;
-(unsigned)realRepeatType;
-(unsigned)realShuffleType;
-(id)audioSessionModeForItemAtIndex:(unsigned)arg1 ;
-(unsigned)initialPlaybackQueueDepthForStartingIndex:(unsigned)arg1 ;
-(unsigned)indexOfMediaItem:(id)arg1 ;
-(id)mediaItemAtIndex:(unsigned)arg1 ;
-(void)storeAVItem:(id)arg1 didReceiveResponseAssetDictionary:(id)arg2 ;
-(id)shuffleController:(id)arg1 identifierForItemAtIndex:(unsigned)arg2 ;
-(unsigned)shuffleController:(id)arg1 countOfItemIdentifier:(id)arg2 withMaximumCount:(unsigned)arg3 ;
-(unsigned)itemCountForShuffleController:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(Class)itemClass;
-(unsigned)itemCount;
-(void)_storeEntityProviderDidInvalidateNotification:(id)arg1 ;
-(char)_hasPlaceholderItemAtIndex:(unsigned)arg1 ;
-(unsigned)_songShuffledIndexForIndex:(unsigned)arg1 ;
-(id)_storeItemMetadataContextAtIndex:(unsigned)arg1 ;
-(char)_reloadStoreMetadataContexts;
-(void)_configurePlaceholderItem;
-(void)_resolveItemMetadataContexts:(id)arg1 clientContext:(id)arg2 responseHandler:(/*^block*/id)arg3 ;
-(id)valueForEntityProperty:(id)arg1 ;
-(id)valuesForEntityProperties:(id)arg1 ;
-(id)MPU_contentItemIdentifierCollection;
@end

