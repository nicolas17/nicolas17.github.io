/*
* This header is generated by classdump-dyld 0.7
* on Saturday, November 28, 2015 at 4:14:18 PM Argentina Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FuseUI/MusicLibraryViewConfiguration.h>

@class MusicEntityCollectionViewDescriptor;

@interface MusicLibraryBrowseCollectionViewConfiguration : MusicLibraryViewConfiguration {

	MusicEntityCollectionViewDescriptor* _entityCollectionViewDescriptor;
	char _wantsEdgeToEdgeLayout;

}

@property (nonatomic,readonly) MusicEntityCollectionViewDescriptor * entityViewDescriptor; 
@property (assign,nonatomic) char wantsEdgeToEdgeLayout;                                                //@synthesize wantsEdgeToEdgeLayout=_wantsEdgeToEdgeLayout - In the implementation block
-(id)init;
-(id)loadEntityViewDescriptor;
-(MusicEntityCollectionViewDescriptor *)entityViewDescriptor;
-(void)setWantsEdgeToEdgeLayout:(char)arg1 ;
-(char)wantsEdgeToEdgeLayout;
@end

