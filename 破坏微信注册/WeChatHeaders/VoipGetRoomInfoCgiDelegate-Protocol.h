//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class VoipMonoMsg;

@protocol VoipGetRoomInfoCgiDelegate <NSObject>
- (void)onVoipGetRoomInfoCgiOk:(VoipMonoMsg *)arg1;
- (void)onVoipGetRoomInfoCgiRespFailed:(VoipMonoMsg *)arg1;
- (void)onVoipGetRoomInfoCgiRespNull:(VoipMonoMsg *)arg1;
- (void)onVoipGetRoomInfoCgiConnectFailed:(VoipMonoMsg *)arg1;
- (void)onVoipGetRoomInfoCgiCreateFailed:(VoipMonoMsg *)arg1;
- (void)onVoipGetRoomInfoCgiParaError:(VoipMonoMsg *)arg1;
@end

