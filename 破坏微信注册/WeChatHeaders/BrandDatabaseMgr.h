//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/MMService.h>

#import "MMService-Protocol.h"

@class NSString, WCTDatabase, WCTTable;

@interface BrandDatabaseMgr : MMService <MMService>
{
    WCTDatabase *_db;
    WCTTable *_tableMPPageCacheItem;
    WCTTable *_tableMPPageReportItem;
}

@property(retain) WCTTable *tableMPPageReportItem; // @synthesize tableMPPageReportItem=_tableMPPageReportItem;
@property(retain) WCTTable *tableMPPageCacheItem; // @synthesize tableMPPageCacheItem=_tableMPPageCacheItem;
@property(retain) WCTDatabase *db; // @synthesize db=_db;
- (void).cxx_destruct;
- (id)setupTableWithName:(id)arg1 tableClass:(Class)arg2;
- (void)createTables;
- (id)dbPath;
- (void)closeDB;
- (void)openDB;
- (_Bool)deleteMPPageReportItemBeforeTime:(long long)arg1;
- (_Bool)deleteMPPageReportItemInWithItemStartId:(unsigned int)arg1 andEndId:(unsigned int)arg2;
- (id)getMPPageReportItemListWithLimit:(unsigned int)arg1;
- (_Bool)addMPPageReportItemWithItem:(id)arg1;
- (_Bool)deleteMPPageCacheItemWithUpdateTimeEarlierThanTime:(unsigned int)arg1;
- (_Bool)addMPPageCacheItemList:(id)arg1;
- (id)mpPageCacheItemWithUrl:(id)arg1;
- (void)onServiceClearData;
- (void)onServiceReloadData;
- (void)onServiceInit;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

