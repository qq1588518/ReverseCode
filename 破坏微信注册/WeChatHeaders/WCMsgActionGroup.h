//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBCoding-Protocol.h"

@class NSString, SnsAction;

@interface WCMsgActionGroup : NSObject <PBCoding>
{
    unsigned int objectCreateTime;
    unsigned int delStatus;
    unsigned long long id;
    unsigned long long parentId;
    SnsAction *currentAction;
    SnsAction *referAction;
    NSString *clientId;
}

+ (void)initialize;
@property(nonatomic) unsigned int delStatus; // @synthesize delStatus;
@property(nonatomic) unsigned int objectCreateTime; // @synthesize objectCreateTime;
@property(retain, nonatomic) NSString *clientId; // @synthesize clientId;
@property(retain, nonatomic) SnsAction *referAction; // @synthesize referAction;
@property(retain, nonatomic) SnsAction *currentAction; // @synthesize currentAction;
@property(nonatomic) unsigned long long parentId; // @synthesize parentId;
@property(nonatomic) unsigned long long id; // @synthesize id;
- (void).cxx_destruct;
- (const map_f8690629 *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

