/*
* This header is generated by classdump-dyld 0.7
* on Saturday, November 28, 2015 at 4:14:16 PM Argentina Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FuseUI/MusicEntityProviding.h>

@protocol OS_dispatch_queue;
@class NSArray, NSOperationQueue, MusicLibrarySearchResultsEntityProviderConfiguration, NSObject, NSString;

@interface MusicLibrarySearchResultsEntityProvider : NSObject <MusicEntityProviding> {

	NSArray* _searchDataSources;
	NSOperationQueue* _searchOperationQueue;
	MusicLibrarySearchResultsEntityProviderConfiguration* _searchEntityProviderConfiguration;
	NSObject*<OS_dispatch_queue> _invalidationQueue;
	NSArray* _invalidationBlocks;
	unsigned _maximumNumberOfSectionResults;
	NSString* _searchTerm;

}

@property (nonatomic,readonly) char hasResults; 
@property (assign,nonatomic) unsigned maximumNumberOfSectionResults;              //@synthesize maximumNumberOfSectionResults=_maximumNumberOfSectionResults - In the implementation block
@property (nonatomic,copy) NSString * searchTerm;                                 //@synthesize searchTerm=_searchTerm - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)searchTerm;
-(void)setSearchTerm:(NSString *)arg1 ;
-(void)dealloc;
-(unsigned)numberOfSections;
-(void)configureEntityValueContextOutputForAnyIndexPath:(id)arg1 ;
-(id)indexBarEntryAtIndex:(unsigned)arg1 ;
-(void)configureEntityValueContextOutput:(id)arg1 forIndexPath:(id)arg2 ;
-(void)configureSectionEntityValueContextOutput:(id)arg1 forIndex:(unsigned)arg2 ;
-(id)indexPathForEntityValueContext:(id)arg1 ;
-(char)hasEntitiesNotInLibrary;
-(void)setMaximumNumberOfSectionResults:(unsigned)arg1 ;
-(unsigned)maximumNumberOfSectionResults;
-(char)hasMoreResultsForSection:(int)arg1 ;
-(id)moreSearchResultsEntityProviderConfigurationForSectionIndex:(int)arg1 ;
-(char)hasResults;
-(id)browseTableViewConfigurationForSection:(int)arg1 ;
-(void)_filterResults;
-(void)_sendInvalidationNotification;
-(id)initWithSearchEntityProviderConfiguration:(id)arg1 ;
-(char)hasEntities;
-(id)entityValueProviderAtIndexPath:(id)arg1 ;
-(unsigned)numberOfEntitiesInSection:(unsigned)arg1 ;
-(unsigned)numberOfIndexBarEntries;
-(unsigned)sectionForSectionIndexBarEntryAtIndex:(unsigned)arg1 ;
@end
