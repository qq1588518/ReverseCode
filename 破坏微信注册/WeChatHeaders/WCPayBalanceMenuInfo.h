//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBCoding-Protocol.h"

@class NSArray, NSString;

@interface WCPayBalanceMenuInfo : NSObject <PBCoding>
{
    _Bool is_show_menu;
    NSArray *balance_menu_item;
}

+ (id)GenFromDictionary:(id)arg1;
+ (void)initialize;
@property(retain, nonatomic) NSArray *balance_menu_item; // @synthesize balance_menu_item;
@property(nonatomic) _Bool is_show_menu; // @synthesize is_show_menu;
- (void).cxx_destruct;
- (void)genFromDic:(id)arg1;
- (const map_f8690629 *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

