/*
* This header is generated by classdump-dyld 0.7
* on Saturday, November 28, 2015 at 4:14:13 PM Argentina Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <FuseUI/MusicContextualActionsHeaderViewDelegate.h>

@class MusicContextualActionsHeaderView, MusicEntityValueContext, NSString;

@interface MusicContextualActionsHeaderViewController : UIViewController <MusicContextualActionsHeaderViewDelegate> {

	MusicContextualActionsHeaderView* _headerView;
	char _allowsSelection;
	MusicEntityValueContext* _entityValueContext;
	/*^block*/id _selectionHandler;

}

@property (assign,nonatomic) char allowsSelection;                                        //@synthesize allowsSelection=_allowsSelection - In the implementation block
@property (nonatomic,readonly) MusicEntityValueContext * entityValueContext;              //@synthesize entityValueContext=_entityValueContext - In the implementation block
@property (nonatomic,copy) id selectionHandler;                                           //@synthesize selectionHandler=_selectionHandler - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewDidLayoutSubviews;
-(void)setAllowsSelection:(char)arg1 ;
-(char)allowsSelection;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLoad;
-(MusicEntityValueContext *)entityValueContext;
-(id)initWithEntityValueContext:(id)arg1 ;
-(void)contextualActionsHeaderViewWasSelected:(id)arg1 ;
-(id)selectionHandler;
-(void)setSelectionHandler:(id)arg1 ;
@end
