/*
* This header is generated by classdump-dyld 0.7
* on Saturday, November 28, 2015 at 4:14:19 PM Argentina Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FuseUI/FuseUI-Structs.h>
#import <FuseUI/MusicEntityValueProviding.h>

@protocol MusicEntityProviding;
@class MusicStoreItemMetadataContext, MPUContentItemIdentifierCollection, NSString;

@interface MusicStoreEntityValueProvider : NSObject <MusicEntityValueProviding> {

	id<MusicEntityProviding> _childrenEntityProvider;
	MusicStoreItemMetadataContext* _storeItemMetadataContext;

}

@property (nonatomic,retain) id<MusicEntityProviding> childrenEntityProvider;                                          //@synthesize childrenEntityProvider=_childrenEntityProvider - In the implementation block
@property (nonatomic,copy,readonly) MPUContentItemIdentifierCollection * contentItemIdentifierCollection; 
@property (nonatomic,readonly) MusicStoreItemMetadataContext * storeItemMetadataContext;                               //@synthesize storeItemMetadataContext=_storeItemMetadataContext - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(int)entityType;
+(void)initialize;
+(void)_registerEntityValueHandler:(/*^block*/id)arg1 forProperty:(id)arg2 ;
+(/*^block*/id)_entityValueHandlerForProperty:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(MusicStoreItemMetadataContext *)storeItemMetadataContext;
-(id)initWithStoreItemMetadataContext:(id)arg1 ;
-(MPUContentItemIdentifierCollection *)contentItemIdentifierCollection;
-(Class)_requiredClassForEquality;
-(id<MusicEntityProviding>)childrenEntityProvider;
-(void)setChildrenEntityProvider:(id<MusicEntityProviding>)arg1 ;
-(id)valueForEntityProperty:(id)arg1 ;
-(id)imageURLForEntityArtworkProperty:(id)arg1 fittingSize:(CGSize)arg2 destinationScale:(float)arg3 ;
-(id)entityUniqueIdentifier;
-(id)valuesForEntityProperties:(id)arg1 ;
@end

