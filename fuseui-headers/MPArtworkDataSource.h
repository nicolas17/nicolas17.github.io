/*
* This header is generated by classdump-dyld 0.7
* on Saturday, November 28, 2015 at 4:14:19 PM Argentina Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol MPArtworkDataSource <NSObject>
@optional
-(id)existingArtworkEffectResultForEffectType:(unsigned)arg1 catalog:(id)arg2 options:(id)arg3;
-(void)loadArtworkEffectResultForEffectType:(unsigned)arg1 catalog:(id)arg2 options:(id)arg3 systemEffectHandler:(/*^block*/id)arg4 completionHandler:(/*^block*/id)arg5;

@required
-(char)areRepresentationsAvailableForCatalog:(id)arg1;
-(char)isRepresentation:(id)arg1 bestRepresentationForArtworkCatalog:(id)arg2;
-(id)existingRepresentationForArtworkCatalog:(id)arg1;
-(void)loadRepresentationForArtworkCatalog:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)cancelLoadingRepresentationForArtworkCatalog:(id)arg1;
-(id)visualIdenticalityIdentifierForCatalog:(id)arg1;

@end
