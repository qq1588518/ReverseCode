//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface MailAttachmentFileInfo : NSObject
{
    unsigned int startPos;
    unsigned int totalSize;
    NSString *clientID;
    NSString *localPath;
    NSString *fileName;
    NSString *attachID;
}

@property(nonatomic) unsigned int totalSize; // @synthesize totalSize;
@property(nonatomic) unsigned int startPos; // @synthesize startPos;
@property(retain, nonatomic) NSString *attachID; // @synthesize attachID;
@property(retain, nonatomic) NSString *fileName; // @synthesize fileName;
@property(retain, nonatomic) NSString *localPath; // @synthesize localPath;
@property(retain, nonatomic) NSString *clientID; // @synthesize clientID;
- (void).cxx_destruct;

@end

