//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MatrixIssue, MatrixManager;

@protocol MatrixManagerDelegate <NSObject>

@optional
- (void)onMatrixManager:(MatrixManager *)arg1 handleCustomIssue:(MatrixIssue *)arg2 success:(_Bool)arg3;
- (void)onMatrixManager:(MatrixManager *)arg1 handleCrashIssue:(MatrixIssue *)arg2 success:(_Bool)arg3;
- (void)onMatrixManager:(MatrixManager *)arg1 handleLagIssue:(MatrixIssue *)arg2 success:(_Bool)arg3;
@end

