//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/MMService.h>

#import "IMsgExt-Protocol.h"
#import "MMService-Protocol.h"

@class NSString, NewYearCtrlData;

@interface NewYearCtrlMgr : MMService <IMsgExt, MMService>
{
    NewYearCtrlData *_ctrlData;
}

- (void).cxx_destruct;
- (_Bool)hasCtrlDataFile;
- (void)saveCtrlData;
- (void)reloadCtrlData;
- (void)loadCtrlData;
- (id)parseNewYearCtrlInfoFromXML:(id)arg1;
- (void)handleNewYearCtrlInfoXml:(id)arg1;
- (id)parseTemplateMsgFromXML:(id)arg1;
- (void)handleMiniAppNoticeXML:(id)arg1 msgSvrId:(long long)arg2;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (void)onServiceClearData;
- (void)onServiceReloadData;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

