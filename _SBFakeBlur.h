/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, July 26, 2016 at 1:11:30 AM Pacific Daylight Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _SBFakeBlur <NSObject>
@property (assign,nonatomic) id<_SBFakeBlurObserver> observer; 
@property (assign,nonatomic) BOOL fullscreen; 
@required
-(long long)effectiveStyle;
-(BOOL)fullscreen;
-(id<_SBFakeBlurObserver>)observer;
-(void)setObserver:(id)arg1;
-(void)requestStyle:(long long)arg1;
-(void)setFullscreen:(BOOL)arg1;

@end
