//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/WXPBGeneratedMessage.h>

@class NSData, NSMutableArray, NSString, WXCPbVoiceConf, WXCPbVoiceGroupInfo, WXCPbVoiceSingle2MultiInfo;

@interface WXCPbMsgYTVoiceGroupChg : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int audioencrypttype; // @dynamic audioencrypttype;
@property(nonatomic) int chgType; // @dynamic chgType;
@property(retain, nonatomic) WXCPbVoiceConf *conf; // @dynamic conf;
@property(retain, nonatomic) NSString *groupId; // @dynamic groupId;
@property(retain, nonatomic) WXCPbVoiceGroupInfo *groupInfo; // @dynamic groupInfo;
@property(retain, nonatomic) NSMutableArray *grpMemList; // @dynamic grpMemList;
@property(retain, nonatomic) NSData *mailUuidSession; // @dynamic mailUuidSession;
@property(nonatomic) unsigned long long msgId; // @dynamic msgId;
@property(nonatomic) int roomid; // @dynamic roomid;
@property(nonatomic) long long roomkey; // @dynamic roomkey;
@property(nonatomic) unsigned int routeId; // @dynamic routeId;
@property(retain, nonatomic) WXCPbVoiceSingle2MultiInfo *single2Multi; // @dynamic single2Multi;
@property(nonatomic) unsigned int svrTime; // @dynamic svrTime;
@property(retain, nonatomic) NSMutableArray *usrProfileList; // @dynamic usrProfileList;
@property(nonatomic) unsigned int videoencrypttype; // @dynamic videoencrypttype;
@property(retain, nonatomic) NSData *whisperBuf; // @dynamic whisperBuf;

@end

