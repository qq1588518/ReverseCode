//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCCanvasComponent.h"

#import "WCCanvasImageLoaderObserver-Protocol.h"

@class NSString, UIImageView;

@interface WCCanvasRadarChartComponent : WCCanvasComponent <WCCanvasImageLoaderObserver>
{
    UIImageView *_bgImageView;
    UIImageView *_maskImageView;
}

+ (struct CGSize)calcSizeForCanvasItem:(id)arg1 dataItem:(id)arg2 orientation:(long long)arg3;
@property(retain, nonatomic) UIImageView *maskImageView; // @synthesize maskImageView=_maskImageView;
@property(retain, nonatomic) UIImageView *bgImageView; // @synthesize bgImageView=_bgImageView;
- (void).cxx_destruct;
- (long long)dimensions;
- (id)coverColor;
- (void)resizeBorderImageView;
- (void)ImageDidLoad:(id)arg1 Url:(id)arg2;
- (void)configureWithCanvasItem:(id)arg1 dataItem:(id)arg2 orientation:(long long)arg3;
- (id)vertexesForCenterPoint:(struct CGPoint)arg1 radius:(double)arg2;
- (void)drawAtCenter:(struct CGPoint)arg1 vertexes:(id)arg2 values:(id)arg3 fillColor:(id)arg4 withCenterLine:(_Bool)arg5 isTargetPoints:(_Bool)arg6;
- (void)drawBackgroundAtCenterPoint:(struct CGPoint)arg1 radius:(double)arg2;
- (void)drawItemsAtCenterPoint:(struct CGPoint)arg1 radius:(double)arg2;
- (double)calcRadiusInsideRect:(struct CGRect)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

