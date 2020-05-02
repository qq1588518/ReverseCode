//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCondition, NSData, NSLock, NSMutableArray, WXGBackupMsgMgr;
@protocol OS_dispatch_queue;

@interface WXGBackupDataMgr : NSObject
{
    NSMutableArray *m_backupInfoDataArray;
    NSLock *m_backupInfoLock;
    WXGBackupMsgMgr *m_msgMgr;
    _Bool m_bProducing;
    NSCondition *m_conditionBuffer;
    NSMutableArray *m_producerArray;
    NSMutableArray *m_consumeArray;
    NSMutableArray *m_bufferArray;
    NSObject<OS_dispatch_queue> *m_getDataQueue;
    unsigned long long m_consumerWait;
    unsigned long long m_producerWait;
    long long m_producerSize;
    long long m_bufferSize;
    long long m_consumerSize;
    long long max_producerSize;
    long long max_bufferSize;
    long long max_consumerSize;
    long long max_singleSize;
    NSData *m_encryptKey;
    unsigned long long _produceSessionCount;
    unsigned long long _produceMsgCount;
}

@property(nonatomic) unsigned long long produceMsgCount; // @synthesize produceMsgCount=_produceMsgCount;
@property(nonatomic) unsigned long long produceSessionCount; // @synthesize produceSessionCount=_produceSessionCount;
- (void).cxx_destruct;
- (int)p_getSizeOfBakcupOutput:(id)arg1;
- (id)p_getDataFromConsumer;
- (void)p_bufferAddDataToConsumer;
- (void)p_producerAddDataToBuffer;
- (void)p_producerAddOutput:(id)arg1;
- (id)getBackupDataPushFromBakChatMsgList:(id)arg1 withDataID:(id)arg2;
- (id)purgeMediaArray:(id)arg1;
- (void)stopProduce;
- (void)startProduce;
- (id)getNextOutput;
- (void)inputWithBackupDataInfo:(id)arg1;
- (id)initWithEncrytKey:(id)arg1;
- (id)init;

@end

