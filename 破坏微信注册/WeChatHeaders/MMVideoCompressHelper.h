//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/MMObject.h>

@interface MMVideoCompressHelper : MMObject
{
}

+ (void)applyVideoEffectsToComposition:(id)arg1 size:(struct CGSize)arg2 overlay:(id)arg3;
+ (void)compressVideoFromUrl:(id)arg1 toOutputUrl:(id)arg2 setting:(id)arg3 withBlock:(CDUnknownBlockType)arg4;
+ (void)compressVideoFromUrl:(id)arg1 toOutputUrl:(id)arg2 shouldScaleDuration:(_Bool)arg3 withBlock:(CDUnknownBlockType)arg4;
+ (id)getOutputFilePathFrom:(id)arg1;
+ (id)getCacheFilePathFrom:(id)arg1;

@end

