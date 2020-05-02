//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class UIView;

@protocol WCSelectorViewDataSource <NSObject>
- (_Bool)shouldShowDeleteView;
- (struct CGSize)sizeForViews;
- (UIView *)viewAtIndex:(unsigned long long)arg1;
- (unsigned long long)numbersOfViews;

@optional
- (void)moveItemAtIndexPath:(unsigned long long)arg1 withObjectAtIndex:(unsigned long long)arg2;
- (void)didSelectViewAtIndex:(unsigned long long)arg1;
@end

