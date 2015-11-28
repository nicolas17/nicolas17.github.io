/*
* This header is generated by classdump-dyld 0.7
* on Saturday, November 28, 2015 at 4:14:12 PM Argentina Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ITMLKit/IKJSObject.h>
#import <FuseUI/MusicJSRecentStationsManager.h>

@protocol MusicJSRecentStationsManager <JSExport>
@required
-(void)getRecentStations:(id)arg1 :(id)arg2;
-(void)getRecentStationGroups:(id)arg1 :(id)arg2;
-(void)refreshRecentStations:(id)arg1 :(id)arg2;

@end


@protocol OS_dispatch_queue;
@class NSObject, RadioRecentStationsController;

@interface MusicJSRecentStationsManager : IKJSObject <MusicJSRecentStationsManager> {

	NSObject*<OS_dispatch_queue> _accessQueue;
	char _hasRefreshedStations;
	RadioRecentStationsController* _recentStationsController;

}

@property (nonatomic,readonly) RadioRecentStationsController * recentStationsController;              //@synthesize recentStationsController=_recentStationsController - In the implementation block
-(RadioRecentStationsController *)recentStationsController;
-(void)dealloc;
-(void)_recentStationsControllerStationsDidChangeNotification:(id)arg1 ;
-(id)_dictionaryFromStationGroup:(id)arg1 ;
-(void)_refreshIfNeededWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)_dictionaryFromStation:(id)arg1 ;
-(void)getRecentStations:(id)arg1 :(id)arg2 ;
-(void)getRecentStationGroups:(id)arg1 :(id)arg2 ;
-(void)refreshRecentStations:(id)arg1 :(id)arg2 ;
-(id)initWithAppContext:(id)arg1 recentStationsController:(id)arg2 ;
-(id)initWithAppContext:(id)arg1 ;
@end

