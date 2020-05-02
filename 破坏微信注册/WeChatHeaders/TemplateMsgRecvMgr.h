//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/MMService.h>

#import "MMConfigMgrExt-Protocol.h"
#import "MMService-Protocol.h"
#import "PBMessageObserverDelegate-Protocol.h"

@class NSMutableDictionary, NSString;

@interface TemplateMsgRecvMgr : MMService <MMService, PBMessageObserverDelegate, MMConfigMgrExt>
{
    NSMutableDictionary *_dictTemplateMsgRecvState;
    NSMutableDictionary *_dictIdListOfUser;
}

- (void).cxx_destruct;
- (id)getRecvStateArrayByUsername:(id)arg1;
- (void)onSetRecvState:(id)arg1;
- (void)onGetRecvState:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)getRecvState:(id)arg1;
- (_Bool)shouldShowEntryForUser:(id)arg1;
- (_Bool)shouldShowBlockButtonForMsg:(id)arg1;
- (void)setRecvState:(unsigned int)arg1 toUser:(id)arg2 withTemplateId:(id)arg3;
- (void)setRecvState:(id)arg1 toUser:(id)arg2;
- (void)getRecvStateByUsername:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

