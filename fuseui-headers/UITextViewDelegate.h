/*
* This header is generated by classdump-dyld 0.7
* on Saturday, November 28, 2015 at 4:14:13 PM Argentina Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol UITextViewDelegate <NSObject,UIScrollViewDelegate>
@optional
-(void)textViewDidBeginEditing:(id)arg1;
-(void)textViewDidEndEditing:(id)arg1;
-(char)textViewShouldBeginEditing:(id)arg1;
-(char)textViewShouldEndEditing:(id)arg1;
-(char)textView:(id)arg1 shouldChangeTextInRange:(NSRange)arg2 replacementText:(id)arg3;
-(void)textViewDidChange:(id)arg1;
-(void)textViewDidChangeSelection:(id)arg1;
-(char)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(NSRange)arg3;
-(char)textView:(id)arg1 shouldInteractWithTextAttachment:(id)arg2 inRange:(NSRange)arg3;

@end
