//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/WXPBGeneratedMessage.h>

@class FavPhotoInfo, NSMutableArray, NSString;

@interface FavSecurityRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) FavPhotoInfo *bigPhotoMd5; // @dynamic bigPhotoMd5;
@property(nonatomic) int opType; // @dynamic opType;
@property(retain, nonatomic) NSMutableArray *photoMd5List; // @dynamic photoMd5List;
@property(retain, nonatomic) NSString *text; // @dynamic text;

@end

