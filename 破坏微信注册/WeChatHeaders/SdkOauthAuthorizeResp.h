//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/WXPBGeneratedMessage.h>

@class BaseResponse, NSMutableArray, NSString;

@interface SdkOauthAuthorizeResp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *appiconUrl; // @dynamic appiconUrl;
@property(retain, nonatomic) NSString *appname; // @dynamic appname;
@property(nonatomic) unsigned int avatarLimit; // @dynamic avatarLimit;
@property(retain, nonatomic) NSMutableArray *avatarList; // @dynamic avatarList;
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(nonatomic) unsigned int defaultAvatarId; // @dynamic defaultAvatarId;
@property(nonatomic) _Bool isBanModifyAvatar; // @dynamic isBanModifyAvatar;
@property(nonatomic) _Bool isCallServerWhenConfirm; // @dynamic isCallServerWhenConfirm;
@property(nonatomic) _Bool isRecentHasAuth; // @dynamic isRecentHasAuth;
@property(nonatomic) _Bool isSlienctAuth; // @dynamic isSlienctAuth;
@property(nonatomic) _Bool isUseNewpage; // @dynamic isUseNewpage;
@property(retain, nonatomic) NSString *redirectUrl; // @dynamic redirectUrl;
@property(retain, nonatomic) NSMutableArray *scopeList; // @dynamic scopeList;

@end

