/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, July 26, 2016 at 1:11:33 AM Pacific Daylight Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBWorkspaceTransitionContext.h>

@class SBWorkspaceAlert;

@interface SBWorkspaceAlertTransitionContext : SBWorkspaceTransitionContext {

	SBWorkspaceAlert* _alertToActivate;
	SBWorkspaceAlert* _alertToDeactivate;
	BOOL _transitionIsAlertActivation;

}

@property (nonatomic,retain) SBWorkspaceAlert * alertToActivate;                //@synthesize alertToActivate=_alertToActivate - In the implementation block
@property (nonatomic,retain) SBWorkspaceAlert * alertToDeactivate;              //@synthesize alertToDeactivate=_alertToDeactivate - In the implementation block
@property (assign,nonatomic) BOOL transitionIsAlertActivation;                  //@synthesize transitionIsAlertActivation=_transitionIsAlertActivation - In the implementation block
-(void)setAlertToActivate:(SBWorkspaceAlert *)arg1 ;
-(void)setTransitionIsAlertActivation:(BOOL)arg1 ;
-(void)setAlertToDeactivate:(SBWorkspaceAlert *)arg1 ;
-(SBWorkspaceAlert *)alertToActivate;
-(SBWorkspaceAlert *)alertToDeactivate;
-(BOOL)transitionIsAlertActivation;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
@end

