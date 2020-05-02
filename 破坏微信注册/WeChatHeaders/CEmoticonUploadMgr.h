//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/MMObject.h>

#import "PBMessageObserverDelegate-Protocol.h"

@class CEmoticonUploadInfo, NSMutableArray;

@interface CEmoticonUploadMgr : MMObject <PBMessageObserverDelegate>
{
    unsigned int m_uiCurEventID;
    NSMutableArray *m_uploadInfoQueue;
    CEmoticonUploadInfo *m_oCurUploadInfo;
}

- (void).cxx_destruct;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)UploadOK:(_Bool)arg1;
- (void)UploadFail;
- (_Bool)CreateUploadEvent:(id)arg1;
- (void)CheckUpload;
- (void)StopUploadByChatName:(id)arg1;
- (void)StopUpload:(id)arg1;
- (void)StartUpload:(id)arg1;
- (_Bool)InsertMessageToUploadQueue:(id)arg1;
- (void)DeleteUploadInfosWithUserName:(id)arg1;
- (void)DeleteUploadInfoWithMsg:(id)arg1;
- (_Bool)IsMsgInUploadQueue:(id)arg1;
- (void)ClearCurUpload;
- (void)ClearEventID;
- (void)dealloc;
- (id)init;

@end

