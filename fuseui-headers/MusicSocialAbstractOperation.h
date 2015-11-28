/*
* This header is generated by classdump-dyld 0.7
* on Saturday, November 28, 2015 at 4:14:22 PM Argentina Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@protocol OS_dispatch_queue;
@class NSObject, ISLoadURLBagOperation, MusicSocialOperationResponse;

@interface MusicSocialAbstractOperation : NSOperation {

	NSObject*<OS_dispatch_queue> _accessQueue;
	long long _artistID;
	char _follow;
	char _isExecuting;
	char _isFinished;
	NSObject*<OS_dispatch_queue> _calloutSerialQueue;
	ISLoadURLBagOperation* _loadURLBagOperation;
	MusicSocialOperationResponse* _socialResponse;

}

@property (nonatomic,readonly) MusicSocialOperationResponse * socialResponse;              //@synthesize socialResponse=_socialResponse - In the implementation block
-(void)cancel;
-(id)init;
-(void)start;
-(char)isFinished;
-(char)isExecuting;
-(char)parseServerSuccess:(id)arg1 ;
-(id)bagValueForKey:(id)arg1 withBag:(id)arg2 ;
-(void)processResponse:(id)arg1 response:(id)arg2 ;
-(id)serviceURL:(id)arg1 ;
-(MusicSocialOperationResponse *)socialResponse;
-(id)requestProperties:(id)arg1 ;
-(void)_continueLoadingWithURLBag:(id)arg1 ;
-(id)_responseWithError:(id)arg1 ;
-(void)_finishOperationWithResponse:(id)arg1 ;
-(id)createRequest:(id)arg1 ;
-(id)resolutionResponse;
@end

