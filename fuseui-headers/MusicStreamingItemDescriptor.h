/*
* This header is generated by classdump-dyld 0.7
* on Saturday, November 28, 2015 at 4:14:20 PM Argentina Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSArray;

@interface MusicStreamingItemDescriptor : NSObject {

	NSArray* _assetDescriptors;
	long long _storeID;

}

@property (nonatomic,readonly) long long storeID;                            //@synthesize storeID=_storeID - In the implementation block
@property (nonatomic,copy,readonly) NSArray * assetDescriptors;              //@synthesize assetDescriptors=_assetDescriptors - In the implementation block
-(long long)storeID;
-(id)_initWithResponseDictionary:(id)arg1 ;
-(id)description;
-(NSArray *)assetDescriptors;
@end

