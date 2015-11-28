/*
* This header is generated by classdump-dyld 0.7
* on Saturday, November 28, 2015 at 4:14:16 PM Argentina Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FuseUI/FuseUI-Structs.h>
#import <FuseUI/MusicEntityValueProviding.h>

@protocol MusicEntityValueProviding;
@class NSString;

@interface MusicMediaSectionEntityValueProvider : NSObject <MusicEntityValueProviding> {

	id<MusicEntityValueProviding> _mediaEntityValueProvider;
	NSString* _sectionTitle;

}

@property (nonatomic,retain) id<MusicEntityValueProviding> mediaEntityValueProvider;              //@synthesize mediaEntityValueProvider=_mediaEntityValueProvider - In the implementation block
@property (nonatomic,copy) NSString * sectionTitle;                                               //@synthesize sectionTitle=_sectionTitle - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setSectionTitle:(NSString *)arg1 ;
-(NSString *)sectionTitle;
-(id<MusicEntityValueProviding>)mediaEntityValueProvider;
-(void)setMediaEntityValueProvider:(id<MusicEntityValueProviding>)arg1 ;
-(id)valueForEntityProperty:(id)arg1 ;
-(id)imageURLForEntityArtworkProperty:(id)arg1 fittingSize:(CGSize)arg2 destinationScale:(float)arg3 ;
-(id)entityUniqueIdentifier;
-(id)valuesForEntityProperties:(id)arg1 ;
@end

