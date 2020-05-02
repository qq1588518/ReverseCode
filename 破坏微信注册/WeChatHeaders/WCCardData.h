//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/MMObject.h>

#import "WCCardDataSource-Protocol.h"
#import "WCTTableCoding-Protocol.h"

@class NSString, WCCardDataCardInfo, WCCardDataCardTPInfo, WCCardDataShareInfo;

@interface WCCardData : MMObject <WCTTableCoding, WCCardDataSource>
{
    _Bool isAutoIncrement;
    int uiLayoutType;
    unsigned int localCardId;
    unsigned int beginTime;
    unsigned int endTime;
    unsigned int stateFlag;
    unsigned int updateSeq;
    unsigned int localUpdateSeq;
    unsigned int updateTime;
    unsigned int localUpdateTime;
    unsigned int isDynamicCode;
    unsigned int IntRes1;
    unsigned int IntRes2;
    unsigned int IntRes3;
    WCCardDataCardTPInfo *cardTPInfo;
    WCCardDataCardInfo *cardInfo;
    WCCardDataShareInfo *shareInfo;
    NSString *jsonStrForTest;
    NSString *layoutAnnounce;
    NSString *layoutTitle;
    NSString *encryptCode;
    NSString *labelWording;
    NSString *cardId;
    NSString *cardTpId;
    NSString *cardTPInfoForDB;
    NSString *cardInfoForDB;
    NSString *shareInfoForDB;
    NSString *StrRes1;
    NSString *StrRes2;
    NSString *StrRes3;
    long long lastInsertedRowID;
}

+ (id)getShareInfoStr:(id)arg1;
+ (id)getCardInfoStr:(id)arg1;
+ (id)getCardTPInfoStr:(id)arg1;
+ (void)parseShareInfoDic:(id)arg1 ToShareInfo:(id)arg2;
+ (void)parseCardInfoDic:(id)arg1 ToCardInfo:(id)arg2;
+ (void)parseCardTPInfoDic:(id)arg1 ToCardTpInfo:(id)arg2;
+ (void)__wcdb_WCCardData_index_23:(struct WCTBinding *)arg1;
+ (void)__wcdb_WCCardData_index_22:(struct WCTBinding *)arg1;
+ (void)__wcdb_WCCardData_index_21:(struct WCTBinding *)arg1;
+ (void)__wcdb_WCCardData_primary_20:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)StrRes3;
+ (void)__wcdb_WCCardData_synthesize_19:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)StrRes2;
+ (void)__wcdb_WCCardData_synthesize_18:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)StrRes1;
+ (void)__wcdb_WCCardData_synthesize_17:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)IntRes3;
+ (void)__wcdb_WCCardData_synthesize_16:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)IntRes2;
+ (void)__wcdb_WCCardData_synthesize_15:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)IntRes1;
+ (void)__wcdb_WCCardData_synthesize_14:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)shareInfoForDB;
+ (void)__wcdb_WCCardData_synthesize_13:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)cardInfoForDB;
+ (void)__wcdb_WCCardData_synthesize_12:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)cardTPInfoForDB;
+ (void)__wcdb_WCCardData_synthesize_11:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)isDynamicCode;
+ (void)__wcdb_WCCardData_synthesize_10:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)localUpdateTime;
+ (void)__wcdb_WCCardData_synthesize_9:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)updateTime;
+ (void)__wcdb_WCCardData_synthesize_8:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)localUpdateSeq;
+ (void)__wcdb_WCCardData_synthesize_7:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)updateSeq;
+ (void)__wcdb_WCCardData_synthesize_6:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)stateFlag;
+ (void)__wcdb_WCCardData_synthesize_5:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)endTime;
+ (void)__wcdb_WCCardData_synthesize_4:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)beginTime;
+ (void)__wcdb_WCCardData_synthesize_3:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)cardTpId;
+ (void)__wcdb_WCCardData_synthesize_2:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)cardId;
+ (void)__wcdb_WCCardData_synthesize_1:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)localCardId;
+ (void)__wcdb_WCCardData_synthesize_0:(struct WCTBinding *)arg1;
+ (CDUnknownBlockType)columnNamed;
+ (const struct All *)allResults;
+ (const struct WCTPropertyList *)allProperties;
+ (const struct WCTBinding *)objectRelationalMapping;
@property(nonatomic) long long lastInsertedRowID; // @synthesize lastInsertedRowID;
@property(nonatomic) _Bool isAutoIncrement; // @synthesize isAutoIncrement;
@property(retain, nonatomic) NSString *StrRes3; // @synthesize StrRes3;
@property(retain, nonatomic) NSString *StrRes2; // @synthesize StrRes2;
@property(retain, nonatomic) NSString *StrRes1; // @synthesize StrRes1;
@property(nonatomic) unsigned int IntRes3; // @synthesize IntRes3;
@property(nonatomic) unsigned int IntRes2; // @synthesize IntRes2;
@property(nonatomic) unsigned int IntRes1; // @synthesize IntRes1;
@property(retain, nonatomic) NSString *shareInfoForDB; // @synthesize shareInfoForDB;
@property(retain, nonatomic) NSString *cardInfoForDB; // @synthesize cardInfoForDB;
@property(retain, nonatomic) NSString *cardTPInfoForDB; // @synthesize cardTPInfoForDB;
@property(nonatomic) unsigned int isDynamicCode; // @synthesize isDynamicCode;
@property(nonatomic) unsigned int localUpdateTime; // @synthesize localUpdateTime;
@property(nonatomic) unsigned int updateTime; // @synthesize updateTime;
@property(nonatomic) unsigned int localUpdateSeq; // @synthesize localUpdateSeq;
@property(nonatomic) unsigned int updateSeq; // @synthesize updateSeq;
@property(nonatomic) unsigned int stateFlag; // @synthesize stateFlag;
@property(nonatomic) unsigned int endTime; // @synthesize endTime;
@property(nonatomic) unsigned int beginTime; // @synthesize beginTime;
@property(retain, nonatomic) NSString *cardTpId; // @synthesize cardTpId;
@property(retain, nonatomic) NSString *cardId; // @synthesize cardId;
@property(nonatomic) unsigned int localCardId; // @synthesize localCardId;
@property(retain, nonatomic) NSString *labelWording; // @synthesize labelWording;
@property(retain, nonatomic) NSString *encryptCode; // @synthesize encryptCode;
@property(retain, nonatomic) NSString *layoutTitle; // @synthesize layoutTitle;
@property(retain, nonatomic) NSString *layoutAnnounce; // @synthesize layoutAnnounce;
@property(nonatomic) int uiLayoutType; // @synthesize uiLayoutType;
@property(retain, nonatomic) NSString *jsonStrForTest; // @synthesize jsonStrForTest;
@property(retain, nonatomic) WCCardDataShareInfo *shareInfo; // @synthesize shareInfo;
@property(retain, nonatomic) WCCardDataCardInfo *cardInfo; // @synthesize cardInfo;
@property(retain, nonatomic) WCCardDataCardTPInfo *cardTPInfo; // @synthesize cardTPInfo;
- (void).cxx_destruct;
- (id)getCardTpInfo;
- (id)getCardInfo;
- (id)getCardTpId;
- (id)getCardId;
- (void)loadDataForTest;
- (void)parseFromJSONDic:(id)arg1;
- (void)parseFromJSONStr:(id)arg1;
- (void)dealloc;
- (void)setupDataBeforeWriteDB;
- (void)setupDataFromDB;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

