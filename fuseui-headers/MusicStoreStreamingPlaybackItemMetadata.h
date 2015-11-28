/*
* This header is generated by classdump-dyld 0.7
* on Saturday, November 28, 2015 at 4:14:11 PM Argentina Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaPlayer/MPMediaLibraryPlaybackItemMetadata.h>

@protocol OS_dispatch_queue;
@class NSObject, NSMutableArray, MusicStoreItemMetadataContext, MPStoreItemMetadata;

@interface MusicStoreStreamingPlaybackItemMetadata : MPMediaLibraryPlaybackItemMetadata {

	NSObject*<OS_dispatch_queue> _accessQueue;
	char _hasLoadedMediaItem;
	char _isLoadingMediaItem;
	NSMutableArray* _mediaItemLoadCompletionHandlers;
	MusicStoreItemMetadataContext* _storeItemMetadataContext;
	MPStoreItemMetadata* _storeItemMetadata;

}

@property (nonatomic,retain) MusicStoreItemMetadataContext * storeItemMetadataContext; 
-(id)copyrightText;
-(long long)storeSubscriptionAdamID;
-(id)artworkCatalogForPlaybackTime:(double)arg1 ;
-(int)endpointType;
-(long long)storeAdamID;
-(void)loadMediaItemWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)albumArtistName;
-(long long)albumStoreAdamID;
-(id)contentTitle;
-(double)expectedDuration;
-(char)shouldReportPlayEventsToStore;
-(char)allowsAssetCaching;
-(id)albumTitle;
-(void)dealloc;
-(id)init;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(void)_registerForNotificationsForStoreItemMetadataContext:(id)arg1 ;
-(void)_unregisterForNotificationsForStoreItemMetadataContext:(id)arg1 ;
-(MusicStoreItemMetadataContext *)storeItemMetadataContext;
-(id)_storeItemMetadata;
-(void)_storeItemMetadataContextRepresentativeMediaEntityDidChangeNotification:(id)arg1 ;
-(id)initWithStoreItemMetadataContext:(id)arg1 ;
-(void)setStoreItemMetadataContext:(MusicStoreItemMetadataContext *)arg1 ;
-(id)artistName;
-(unsigned)contentType;
@end

