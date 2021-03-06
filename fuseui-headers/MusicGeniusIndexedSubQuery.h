/*
* This header is generated by classdump-dyld 0.7
* on Saturday, November 28, 2015 at 4:14:21 PM Argentina Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class MPMediaQuery;

@interface MusicGeniusIndexedSubQuery : NSObject {

	unsigned _index;
	MPMediaQuery* _itemsQuery;

}

@property (nonatomic,readonly) unsigned index;                         //@synthesize index=_index - In the implementation block
@property (nonatomic,readonly) MPMediaQuery * itemsQuery;              //@synthesize itemsQuery=_itemsQuery - In the implementation block
-(MPMediaQuery *)itemsQuery;
-(unsigned)index;
-(id)initWithIndex:(unsigned)arg1 itemsQuery:(id)arg2 ;
@end

