/*
* This header is generated by classdump-dyld 0.7
* on Saturday, November 28, 2015 at 4:14:20 PM Argentina Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSOperationQueue;

@interface MusicLibraryActionsCoordinator : NSObject {

	NSObject*<OS_dispatch_queue> _accessQueue;
	unsigned _backgroundTaskIdentifier;
	NSOperationQueue* _operationQueue;

}
+(id)sharedCoordinator;
-(void)dealloc;
-(id)init;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)_postInvalidationNotification;
-(void)addOperations:(id)arg1 ;
-(id)libraryActionPendingValuesForIdentifierCollection:(id)arg1 ;
@end

