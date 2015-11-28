/*
* This header is generated by classdump-dyld 0.7
* on Saturday, November 28, 2015 at 4:14:17 PM Argentina Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FuseUI/FuseUI-Structs.h>
#import <FuseUI/NSCopying.h>

@class NSSet, NSCountedSet, MusicEntityViewContentArtworkDescriptor, NSArray, NSString, UIColor;

@interface MusicEntityViewContentDescriptor : NSObject <NSCopying> {

	NSSet* _allPropertiesToPrefetch;
	NSCountedSet* _textDescriptorsBeingObserved;
	char _shouldForceBottomSeparatorVisible;
	char _shouldDisableWhenUnplayable;
	char _allowsDeletionWithoutEditingMode;
	char _leftSeparatorInsetFollowsText;
	MusicEntityViewContentArtworkDescriptor* _artworkDescriptor;
	NSArray* _textDescriptors;
	float _minimumHeight;
	NSString* _wantsPlayButtonProperty;
	UIColor* _backgroundColor;
	int _selectionStyle;
	NSString* _wantsDisclosureIndicatorProperty;
	NSString* _explicitBadgeProperty;
	NSString* _wantsAddButtonProperty;
	NSString* _wantsContextualActionsButtonProperty;
	NSString* _wantsBuyButtonProperty;
	NSString* _storeDownloadIDProperty;
	NSString* _storeOffersProperty;
	UIColor* _customSelectionTintColor;
	UIColor* _customSeparatorColor;
	Class _lockupViewClass;
	NSString* _keepLocalPreferenceProperty;
	UIColor* _keepLocalDeviceColor;
	UIColor* _keepLocalSashColor;
	int _textDescriptorVerticalAlignment;

}

@property (nonatomic,retain) MusicEntityViewContentArtworkDescriptor * artworkDescriptor;              //@synthesize artworkDescriptor=_artworkDescriptor - In the implementation block
@property (nonatomic,copy) NSArray * textDescriptors;                                                  //@synthesize textDescriptors=_textDescriptors - In the implementation block
@property (assign,nonatomic) float minimumHeight;                                                      //@synthesize minimumHeight=_minimumHeight - In the implementation block
@property (nonatomic,copy) NSString * wantsPlayButtonProperty;                                         //@synthesize wantsPlayButtonProperty=_wantsPlayButtonProperty - In the implementation block
@property (nonatomic,copy) UIColor * backgroundColor;                                                  //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (assign,nonatomic) int selectionStyle;                                                       //@synthesize selectionStyle=_selectionStyle - In the implementation block
@property (assign,nonatomic) char shouldForceBottomSeparatorVisible;                                   //@synthesize shouldForceBottomSeparatorVisible=_shouldForceBottomSeparatorVisible - In the implementation block
@property (nonatomic,copy) NSString * wantsDisclosureIndicatorProperty;                                //@synthesize wantsDisclosureIndicatorProperty=_wantsDisclosureIndicatorProperty - In the implementation block
@property (nonatomic,copy) NSString * explicitBadgeProperty;                                           //@synthesize explicitBadgeProperty=_explicitBadgeProperty - In the implementation block
@property (nonatomic,copy) NSString * wantsAddButtonProperty;                                          //@synthesize wantsAddButtonProperty=_wantsAddButtonProperty - In the implementation block
@property (nonatomic,copy) NSString * wantsContextualActionsButtonProperty;                            //@synthesize wantsContextualActionsButtonProperty=_wantsContextualActionsButtonProperty - In the implementation block
@property (nonatomic,copy) NSString * wantsBuyButtonProperty;                                          //@synthesize wantsBuyButtonProperty=_wantsBuyButtonProperty - In the implementation block
@property (assign,nonatomic) char shouldDisableWhenUnplayable;                                         //@synthesize shouldDisableWhenUnplayable=_shouldDisableWhenUnplayable - In the implementation block
@property (nonatomic,copy) NSString * storeDownloadIDProperty;                                         //@synthesize storeDownloadIDProperty=_storeDownloadIDProperty - In the implementation block
@property (nonatomic,copy) NSString * storeOffersProperty;                                             //@synthesize storeOffersProperty=_storeOffersProperty - In the implementation block
@property (assign,nonatomic) char allowsDeletionWithoutEditingMode;                                    //@synthesize allowsDeletionWithoutEditingMode=_allowsDeletionWithoutEditingMode - In the implementation block
@property (nonatomic,retain) UIColor * customSelectionTintColor;                                       //@synthesize customSelectionTintColor=_customSelectionTintColor - In the implementation block
@property (nonatomic,retain) UIColor * customSeparatorColor;                                           //@synthesize customSeparatorColor=_customSeparatorColor - In the implementation block
@property (assign,nonatomic) char leftSeparatorInsetFollowsText;                                       //@synthesize leftSeparatorInsetFollowsText=_leftSeparatorInsetFollowsText - In the implementation block
@property (nonatomic,retain) Class lockupViewClass;                                                    //@synthesize lockupViewClass=_lockupViewClass - In the implementation block
@property (nonatomic,copy) NSString * keepLocalPreferenceProperty;                                     //@synthesize keepLocalPreferenceProperty=_keepLocalPreferenceProperty - In the implementation block
@property (nonatomic,retain) UIColor * keepLocalDeviceColor;                                           //@synthesize keepLocalDeviceColor=_keepLocalDeviceColor - In the implementation block
@property (nonatomic,retain) UIColor * keepLocalSashColor;                                             //@synthesize keepLocalSashColor=_keepLocalSashColor - In the implementation block
@property (assign,nonatomic) int textDescriptorVerticalAlignment;                                      //@synthesize textDescriptorVerticalAlignment=_textDescriptorVerticalAlignment - In the implementation block
@property (nonatomic,readonly) NSSet * allPropertiesToPrefetch; 
+(Class)tableViewCellClass;
+(id)tableViewCellReuseIdentifier;
+(Class)tableViewSectionHeaderClass;
+(id)tableViewSectionHeaderReuseIdentifier;
-(void)dealloc;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(UIColor *)backgroundColor;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setSelectionStyle:(int)arg1 ;
-(int)selectionStyle;
-(MusicEntityViewContentArtworkDescriptor *)artworkDescriptor;
-(NSArray *)textDescriptors;
-(void)setArtworkDescriptor:(MusicEntityViewContentArtworkDescriptor *)arg1 ;
-(void)setTextDescriptors:(NSArray *)arg1 ;
-(void)setKeepLocalPreferenceProperty:(NSString *)arg1 ;
-(Class)lockupViewClass;
-(NSString *)wantsPlayButtonProperty;
-(void)setWantsPlayButtonProperty:(NSString *)arg1 ;
-(void)setCustomSeparatorColor:(UIColor *)arg1 ;
-(void)setCustomSelectionTintColor:(UIColor *)arg1 ;
-(void)setKeepLocalDeviceColor:(UIColor *)arg1 ;
-(void)setKeepLocalSashColor:(UIColor *)arg1 ;
-(void)setShouldForceBottomSeparatorVisible:(char)arg1 ;
-(void)setWantsContextualActionsButtonProperty:(NSString *)arg1 ;
-(void)setShouldDisableWhenUnplayable:(char)arg1 ;
-(void)setExplicitBadgeProperty:(NSString *)arg1 ;
-(float)minimumHeight;
-(NSString *)wantsAddButtonProperty;
-(NSString *)wantsContextualActionsButtonProperty;
-(NSString *)wantsBuyButtonProperty;
-(NSString *)storeOffersProperty;
-(NSString *)storeDownloadIDProperty;
-(NSString *)explicitBadgeProperty;
-(int)textDescriptorVerticalAlignment;
-(NSSet *)allPropertiesToPrefetch;
-(void)setLockupViewClass:(Class)arg1 ;
-(void)setWantsDisclosureIndicatorProperty:(NSString *)arg1 ;
-(void)setMinimumHeight:(float)arg1 ;
-(void)setTextDescriptorVerticalAlignment:(int)arg1 ;
-(void)updateTextDescriptorsWithDisplayScale:(float)arg1 ;
-(void)updateTextDescriptorsWithTintColor:(id)arg1 ;
-(void)updateTextDescriptorsForPreferredContentSizeChange;
-(id)textDescriptorForTag:(int)arg1 ;
-(char)shouldDisableWhenUnplayable;
-(void)_handleTextDescriptorDidInvalidateNotification:(id)arg1 ;
-(void)_handleArtworkDescriptorDidInvalidateNotification:(id)arg1 ;
-(void)_invalidateAllPropertiesToPrefetch;
-(void)setStoreDownloadIDProperty:(NSString *)arg1 ;
-(void)setStoreOffersProperty:(NSString *)arg1 ;
-(void)setWantsAddButtonProperty:(NSString *)arg1 ;
-(void)setWantsBuyButtonProperty:(NSString *)arg1 ;
-(void)willAddTextDescriptor:(id)arg1 ;
-(void)willRemoveTextDescriptor:(id)arg1 ;
-(char)shouldForceBottomSeparatorVisible;
-(NSString *)wantsDisclosureIndicatorProperty;
-(char)allowsDeletionWithoutEditingMode;
-(void)setAllowsDeletionWithoutEditingMode:(char)arg1 ;
-(UIColor *)customSelectionTintColor;
-(UIColor *)customSeparatorColor;
-(char)leftSeparatorInsetFollowsText;
-(void)setLeftSeparatorInsetFollowsText:(char)arg1 ;
-(NSString *)keepLocalPreferenceProperty;
-(UIColor *)keepLocalDeviceColor;
-(UIColor *)keepLocalSashColor;
@end

