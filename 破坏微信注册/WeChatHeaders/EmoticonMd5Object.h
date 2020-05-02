//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/MMObject.h>

#import "PBCoding-Protocol.h"

@class EmojiInfoObj, NSString;

@interface EmoticonMd5Object : MMObject <PBCoding>
{
    unsigned int m_status;
    NSString *m_md5;
    EmojiInfoObj *emojiInfoObj;
}

+ (unsigned int)StatusValueFailed;
+ (unsigned int)StatusValueComplete;
+ (unsigned int)StatusValueUnComplete;
+ (void)initialize;
@property(retain, nonatomic) EmojiInfoObj *emojiInfoObj; // @synthesize emojiInfoObj;
@property(nonatomic) unsigned int m_status; // @synthesize m_status;
@property(retain, nonatomic) NSString *m_md5; // @synthesize m_md5;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (id)init;
- (void)dealloc;
- (const map_f8690629 *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

