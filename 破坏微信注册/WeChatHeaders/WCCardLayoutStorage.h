//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/MMObject.h>

#import "PBCoding-Protocol.h"

@class CardsHomePageList, NSMutableArray, NSString, SecEntranceCardList;

@interface WCCardLayoutStorage : MMObject <PBCoding>
{
    NSMutableArray *expiringList;
    NSMutableArray *memberCardList;
    NSMutableArray *nearbyList;
    NSMutableArray *recentList;
    NSMutableArray *labelList;
    NSMutableArray *firstList;
    NSString *layoutBuff;
    _Bool bShowLayoutRed;
    unsigned int layoutRedEndTime;
    NSString *layoutTip;
    unsigned int layoutUpdateTime;
    NSString *entrySubTitle;
    unsigned int topScene;
    unsigned int homePageCardNum;
    CardsHomePageList *cardsHomePageList;
    SecEntranceCardList *secEntranceCardList;
    NSMutableArray *_labelList;
    NSMutableArray *_firstList;
}

+ (void)initialize;
@property(retain, nonatomic) NSMutableArray *firstList; // @synthesize firstList=_firstList;
@property(retain, nonatomic) NSMutableArray *labelList; // @synthesize labelList=_labelList;
@property(retain, nonatomic) SecEntranceCardList *secEntranceCardList; // @synthesize secEntranceCardList;
@property(nonatomic) unsigned int homePageCardNum; // @synthesize homePageCardNum;
@property(retain, nonatomic) CardsHomePageList *cardsHomePageList; // @synthesize cardsHomePageList;
@property(retain, nonatomic) NSMutableArray *recentList; // @synthesize recentList;
@property(nonatomic) unsigned int topScene; // @synthesize topScene;
@property(retain, nonatomic) NSString *entrySubTitle; // @synthesize entrySubTitle;
@property(nonatomic) unsigned int layoutUpdateTime; // @synthesize layoutUpdateTime;
@property(retain, nonatomic) NSString *layoutTip; // @synthesize layoutTip;
@property(nonatomic) unsigned int layoutRedEndTime; // @synthesize layoutRedEndTime;
@property(nonatomic) _Bool bShowLayoutRed; // @synthesize bShowLayoutRed;
@property(retain, nonatomic) NSString *layoutBuff; // @synthesize layoutBuff;
@property(retain, nonatomic) NSMutableArray *nearbyList; // @synthesize nearbyList;
@property(retain, nonatomic) NSMutableArray *memberCardList; // @synthesize memberCardList;
@property(retain, nonatomic) NSMutableArray *expiringList; // @synthesize expiringList;
- (void).cxx_destruct;
- (const map_f8690629 *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

