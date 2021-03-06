/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, July 26, 2016 at 1:11:33 AM Pacific Daylight Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/_UIRemoteViewController.h>
#import <libobjc.A.dylib/SBUIRemoteAlertHostInterface.h>

@protocol _SBRemoteAlertHostViewControllerDelegate;
@class NSString;

@interface _SBRemoteAlertHostViewController : _UIRemoteViewController <SBUIRemoteAlertHostInterface> {

	id<_SBRemoteAlertHostViewControllerDelegate> _delegate;
	NSString* _serviceClassName;

}

@property (assign,nonatomic,__weak) id<_SBRemoteAlertHostViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSString * serviceClassName;                                                 //@synthesize serviceClassName=_serviceClassName - In the implementation block
+(id)serviceViewControllerInterface;
+(id)exportedInterface;
-(NSString *)serviceClassName;
-(void)setServiceClassName:(NSString *)arg1 ;
-(void)setDelegate:(id<_SBRemoteAlertHostViewControllerDelegate>)arg1 ;
-(id)description;
-(id<_SBRemoteAlertHostViewControllerDelegate>)delegate;
-(void)setWhitePointAdaptivityStyle:(long long)arg1 ;
-(void)viewServiceDidTerminateWithError:(id)arg1 ;
-(void)dismiss;
-(void)dismissAndLockUIIfNecessary;
-(void)setAllowsMenuButtonDismissal:(BOOL)arg1 ;
-(void)setWallpaperTunnelActive:(BOOL)arg1 ;
-(void)setBackgroundStyle:(long long)arg1 withDuration:(double)arg2 ;
-(void)setAllowsAlertStacking:(BOOL)arg1 ;
-(void)setDesiredStatusBarStyleOverrides:(int)arg1 ;
-(void)setShouldDisableFadeInAnimation:(BOOL)arg1 ;
-(void)setIdleTimerDisabled:(BOOL)arg1 forReason:(id)arg2 ;
-(void)setShouldDismissOnUILock:(BOOL)arg1 ;
-(void)setDesiredHardwareButtonEvents:(long long)arg1 ;
-(void)setDismissalAnimationStyle:(long long)arg1 ;
-(void)setSupportedInterfaceOrientationOverride:(unsigned long long)arg1 ;
-(void)setDesiredAutoLockDuration:(double)arg1 ;
-(void)setAllowsBanners:(BOOL)arg1 ;
-(void)setStatusBarHidden:(BOOL)arg1 withDuration:(double)arg2 ;
@end

