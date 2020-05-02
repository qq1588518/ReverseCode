//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/MMService.h>

#import "IContactMgrExt-Protocol.h"
#import "IEnterpriseBrandContactMgrExt-Protocol.h"
#import "IMMNewSessionMgrExt-Protocol.h"
#import "IMMNewSessionMgrFilterExt-Protocol.h"
#import "IMsgExt-Protocol.h"
#import "ISessionInfoExt-Protocol.h"
#import "MMService-Protocol.h"

@class NSMutableDictionary, NSString;

@interface MMEnterpriseBrandSessionMgr : MMService <ISessionInfoExt, MMService, IMsgExt, IContactMgrExt, IMMNewSessionMgrExt, IMMNewSessionMgrFilterExt, IEnterpriseBrandContactMgrExt>
{
    NSMutableDictionary *_dictMainUsr2SubSessionCacher;
}

- (void).cxx_destruct;
- (void)resetBrandSessionNewFlag:(id)arg1 mainUserName:(id)arg2;
- (void)resetBrandSessionNewFlag:(id)arg1;
- (void)setBrandSessionNewFlag:(id)arg1;
- (_Bool)hasBrandSessionNewFlag:(id)arg1;
- (void)deleteMainSession:(id)arg1;
- (void)addMainSession:(id)arg1 notify:(_Bool)arg2;
- (void)updateMainSession:(id)arg1;
- (id)genMainFrameSessionInfo:(id)arg1;
- (id)getSubBrandSessionInfoOfLastMsg:(id)arg1;
- (_Bool)isShowRedDotWithMainUsrName:(id)arg1;
- (unsigned int)sessionNewArrivalUnreadCountWithMainUsrName:(id)arg1;
- (_Bool)isExistRedDot:(id)arg1;
- (id)getMainUsrName:(id)arg1;
- (id)sessionInfoWithSubUsrName:(id)arg1 mainUsrName:(id)arg2;
- (id)sessionInfoWithSubUsrName:(id)arg1;
- (id)subSessionCacherWithSubUsrName:(id)arg1;
- (id)subSessionCacher:(id)arg1;
- (void)OnModMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)OnAddMsgListForSession:(id)arg1 NotifyUsrName:(id)arg2;
- (void)OnAddMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)OnUnReadCountChange:(id)arg1;
- (void)OnDelMsg:(id)arg1;
- (id)isUserHasSpecalSessionInfo:(id)arg1;
- (_Bool)isMessageShouldHandled:(id)arg1;
- (_Bool)isUserShouldHandled:(id)arg1;
- (void)onDeleteSessionOfUser:(id)arg1;
- (void)onEnterpriseBrandContactDeleted:(id)arg1;
- (void)onEnterpriseBrandContactChanged:(id)arg1;
- (void)onModifyDraft:(id)arg1 draft:(id)arg2 draftTime:(unsigned int)arg3;
- (void)onGetDraft:(id)arg1 draft:(id)arg2;
- (void)openEnterpriseNormalSubBrand:(id)arg1 navigationController:(id)arg2;
- (void)openWebview:(id)arg1 inChatBrand:(id)arg2 inEnterpriseChat:(id)arg3 navigationController:(id)arg4;
- (void)openEnterpriseWebSubBrand:(id)arg1 navigationController:(id)arg2;
- (void)checkBrandOfMainUsrName:(id)arg1;
- (void)clearUnReadCountOfSubUsrName:(id)arg1;
- (void)updateSessionOfSubUsrName:(id)arg1;
- (void)topSessionOfSubUsrName:(id)arg1;
- (void)clearUnReadCountOfMainUsrName:(id)arg1;
- (void)deleteSessionOfSubUsrName:(id)arg1 mainUsrName:(id)arg2 clearMsg:(_Bool)arg3;
- (void)deleteSessionListOfMainUsrName:(id)arg1;
- (void)addSessionOfSubBrandContact:(id)arg1;
- (id)convertSessionInfoWithSubUsrName:(id)arg1;
- (id)sessionCellDataWithMainUsrName:(id)arg1 atIndex:(long long)arg2;
- (id)sessionInfoWithMainUsrName:(id)arg1 atIndex:(long long)arg2;
- (unsigned int)sessionUnreadCountWithMainUsrName:(id)arg1;
- (unsigned int)sessionCountWithMainUsrName:(id)arg1;
- (_Bool)onServiceMemoryWarning;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

