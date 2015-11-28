/*
* This header is generated by classdump-dyld 0.7
* on Saturday, November 28, 2015 at 4:14:16 PM Argentina Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class MPArtworkCatalog, NSString;

@interface MusicMediaProductDetailHeaderConfiguration : NSObject {

	char _shouldIncludeHeader;
	char _shouldUseSplitMainForContentView;
	MPArtworkCatalog* _headerArtworkCatalog;
	unsigned _headerStyle;
	NSString* _lockupArtworkProperty;

}

@property (nonatomic,retain) MPArtworkCatalog * headerArtworkCatalog;              //@synthesize headerArtworkCatalog=_headerArtworkCatalog - In the implementation block
@property (assign,nonatomic) unsigned headerStyle;                                 //@synthesize headerStyle=_headerStyle - In the implementation block
@property (nonatomic,copy) NSString * lockupArtworkProperty;                       //@synthesize lockupArtworkProperty=_lockupArtworkProperty - In the implementation block
@property (assign,nonatomic) char shouldIncludeHeader;                             //@synthesize shouldIncludeHeader=_shouldIncludeHeader - In the implementation block
@property (assign,nonatomic) char shouldUseSplitMainForContentView;                //@synthesize shouldUseSplitMainForContentView=_shouldUseSplitMainForContentView - In the implementation block
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(void)setLockupArtworkProperty:(NSString *)arg1 ;
-(NSString *)lockupArtworkProperty;
-(unsigned)headerStyle;
-(void)setHeaderArtworkCatalog:(MPArtworkCatalog *)arg1 ;
-(char)shouldIncludeHeader;
-(void)setHeaderStyle:(unsigned)arg1 ;
-(char)shouldUseSplitMainForContentView;
-(MPArtworkCatalog *)headerArtworkCatalog;
-(void)setShouldIncludeHeader:(char)arg1 ;
-(void)setShouldUseSplitMainForContentView:(char)arg1 ;
@end

