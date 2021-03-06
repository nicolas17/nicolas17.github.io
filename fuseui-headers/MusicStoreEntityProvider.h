/*
* This header is generated by classdump-dyld 0.7
* on Saturday, November 28, 2015 at 4:14:13 PM Argentina Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FuseUI/FuseUI-Structs.h>
#import <FuseUI/MusicEntityProviding.h>
#import <FuseUI/NSCopying.h>

@class NSArray, MPSparseArray, NSString;

@interface MusicStoreEntityProvider : NSObject <MusicEntityProviding, NSCopying> {

	int _entityType;
	NSArray* _filteredPlayableItemMetadataContexts;
	MPSparseArray* _storeEntityValueProviders;
	char _shouldReloadEntityValueProvidersForInvalidation;
	char _shouldIncludeUnplayableContent;
	char _shouldRespectSystemContentRestrictions;
	NSArray* _storeItemMetadataContexts;

}

@property (nonatomic,readonly) int entityType;                                                  //@synthesize entityType=_entityType - In the implementation block
@property (assign,nonatomic) char shouldReloadEntityValueProvidersForInvalidation;              //@synthesize shouldReloadEntityValueProvidersForInvalidation=_shouldReloadEntityValueProvidersForInvalidation - In the implementation block
@property (assign,nonatomic) char shouldIncludeUnplayableContent;                               //@synthesize shouldIncludeUnplayableContent=_shouldIncludeUnplayableContent - In the implementation block
@property (assign,nonatomic) char shouldRespectSystemContentRestrictions;                       //@synthesize shouldRespectSystemContentRestrictions=_shouldRespectSystemContentRestrictions - In the implementation block
@property (nonatomic,copy,readonly) NSArray * storeItemMetadataContexts;                        //@synthesize storeItemMetadataContexts=_storeItemMetadataContexts - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_mediaLibraryDynamicPropertiesDidChangeNotification:(id)arg1 ;
-(void)_mediaLibraryDidChangeNotification:(id)arg1 ;
-(int)entityType;
-(void)dealloc;
-(id)init;
-(unsigned)numberOfSections;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setShouldRespectSystemContentRestrictions:(char)arg1 ;
-(void)setShouldIncludeUnplayableContent:(char)arg1 ;
-(void)setStoreItemMetadataContexts:(id)arg1 entityType:(int)arg2 ;
-(void)configureEntityValueContextOutputForAnyIndexPath:(id)arg1 ;
-(id)indexBarEntryAtIndex:(unsigned)arg1 ;
-(void)configureEntityValueContextOutput:(id)arg1 forIndexPath:(id)arg2 ;
-(void)configureSectionEntityValueContextOutput:(id)arg1 forIndex:(unsigned)arg2 ;
-(id)indexPathForEntityValueContext:(id)arg1 ;
-(char)hasEntitiesNotInLibrary;
-(unsigned)_entityCount;
-(void)_configureEntityValueContextOutput:(id)arg1 forGlobalIndex:(unsigned)arg2 ;
-(int)_entityType;
-(id)_storeEntityValueProviderAtIndex:(unsigned)arg1 ;
-(void)_reloadFilteredPlayableItemMetadataContexts;
-(void)_restrictionMonitorAllowsExplicitContentDidChangeNotification:(id)arg1 ;
-(void)_postInvalidationNotification;
-(id)_filteredPlayableItemMetadataContextsWithItems:(id)arg1 ;
-(id)indexPathForStoreItemMetadataContext:(id)arg1 ;
-(id)storeItemMetadataContextAtIndexPath:(id)arg1 ;
-(char)shouldReloadEntityValueProvidersForInvalidation;
-(void)setShouldReloadEntityValueProvidersForInvalidation:(char)arg1 ;
-(char)shouldIncludeUnplayableContent;
-(char)shouldRespectSystemContentRestrictions;
-(NSArray *)storeItemMetadataContexts;
-(char)hasEntities;
-(id)entityValueProviderAtIndexPath:(id)arg1 ;
-(unsigned)numberOfEntitiesInSection:(unsigned)arg1 ;
-(unsigned)numberOfIndexBarEntries;
-(unsigned)sectionForSectionIndexBarEntryAtIndex:(unsigned)arg1 ;
@end

