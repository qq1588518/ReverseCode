//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MMRuleSetList, NSData, NSString;

@interface ChatBackgroundItem : NSObject
{
    long long cid;
    NSString *basePath;
    MMRuleSetList *m_ruleSetList;
    long long version;
    NSData *thumbData;
    long long status;
}

+ (id)loadChatBackgroundItemFromPath:(id)arg1;
@property(nonatomic) long long status; // @synthesize status;
@property(nonatomic) long long version; // @synthesize version;
@property(retain, nonatomic) NSData *thumbData; // @synthesize thumbData;
@property(retain, nonatomic) MMRuleSetList *m_ruleSetList; // @synthesize m_ruleSetList;
@property(retain, nonatomic) NSString *basePath; // @synthesize basePath;
@property(nonatomic) long long cid; // @synthesize cid;
- (void).cxx_destruct;
- (_Bool)getBOOLNamed:(id)arg1;
- (id)getColorNamed:(id)arg1;
- (long long)getVersion;
- (id)getThumbPath;
- (id)getBackgroundImagePath;
- (id)fileOfImageNamed:(id)arg1;
- (id)description;
- (id)keyPaths;

@end

