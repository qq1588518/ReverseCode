//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/MMObject.h>

#import "PBCoding-Protocol.h"

@class NSString;

@interface WAPreFetchInfo : MMObject <PBCoding>
{
    unsigned int scene;
    unsigned int lastModifyTime;
    NSString *userName;
    NSString *path;
    NSString *query;
    NSString *fetchData;
}

+ (void)initialize;
@property(nonatomic) unsigned int lastModifyTime; // @synthesize lastModifyTime;
@property(retain, nonatomic) NSString *fetchData; // @synthesize fetchData;
@property(nonatomic) unsigned int scene; // @synthesize scene;
@property(retain, nonatomic) NSString *query; // @synthesize query;
@property(retain, nonatomic) NSString *path; // @synthesize path;
@property(retain, nonatomic) NSString *userName; // @synthesize userName;
- (void).cxx_destruct;
- (const map_f8690629 *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

