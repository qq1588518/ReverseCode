//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/MMObject.h>

#import "MMImageLoaderObserver-Protocol.h"

@class NSArray, NSMutableSet, NSString, NSURL;
@protocol ImageDownloadLoaderDelegate;

@interface ImageDownloadLoader : MMObject <MMImageLoaderObserver>
{
    NSMutableSet *m_filePathSet;
    _Bool m_isDownloading;
    id <ImageDownloadLoaderDelegate> _delegate;
    NSURL *_imgUrl;
}

@property(retain, nonatomic) NSURL *imgUrl; // @synthesize imgUrl=_imgUrl;
@property(retain, nonatomic) id <ImageDownloadLoaderDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)ImageDidFail:(id)arg1;
- (void)ImageDidLoadWithData:(id)arg1 Url:(id)arg2;
- (void)finishDownloadWithData:(id)arg1;
- (void)addDownloadTaskWithFilePath:(id)arg1;
@property(readonly, nonatomic) NSArray *filePathToSaveList;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

