//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAReportBaseItem.h"

@class NSString;

@interface WAReportKFSessionPageEnterItem : WAReportBaseItem
{
    int _unreadcount;
    unsigned int _entryTime;
    unsigned long long _enterScene;
    NSString *_sceneID;
}

@property(nonatomic) unsigned int entryTime; // @synthesize entryTime=_entryTime;
@property(copy, nonatomic) NSString *sceneID; // @synthesize sceneID=_sceneID;
@property(nonatomic) int unreadcount; // @synthesize unreadcount=_unreadcount;
@property(nonatomic) unsigned long long enterScene; // @synthesize enterScene=_enterScene;
- (void).cxx_destruct;
- (id)reportString;

@end

