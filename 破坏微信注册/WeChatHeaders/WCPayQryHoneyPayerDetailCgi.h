//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCPayBaseCgi.h"

@class QryHoneyPayerDetailReq;
@protocol WCPayQryHoneyPayerDetailCgiDelegate;

@interface WCPayQryHoneyPayerDetailCgi : WCPayBaseCgi
{
}

- (void)didFailWithError:(id)arg1;
- (void)didGetResponse:(id)arg1;
- (void)startRequest;
- (id)init;

// Remaining properties
@property(nonatomic) __weak id <WCPayQryHoneyPayerDetailCgiDelegate> delegate; // @dynamic delegate;
@property(retain, nonatomic) QryHoneyPayerDetailReq *request; // @dynamic request;

@end

