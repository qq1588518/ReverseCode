//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "RTEHTMLParserDataSource-Protocol.h"
#import "RTEHTMLParserDelegate-Protocol.h"

@class NSData, NSDictionary, NSMutableAttributedString, NSMutableDictionary, NSString, RTECSSStyleSheet, RTEHTMLElement, RTEMutableParagraphStyle, UIFont;
@protocol RTEFrameworkDataProcessDelegate;

@interface RTEAttributedStringBuilder : NSObject <RTEHTMLParserDelegate, RTEHTMLParserDataSource>
{
    NSData *m_data;
    NSDictionary *m_options;
    RTECSSStyleSheet *m_cssStyleSheet;
    NSMutableAttributedString *m_tmpAttrStr;
    NSMutableDictionary *m_tagStartHandlers;
    NSMutableDictionary *m_tagEndHandlers;
    _Bool m_ignoreParseEvents;
    RTEHTMLElement *m_rootElement;
    RTEHTMLElement *m_bodyElement;
    RTEHTMLElement *m_currentElement;
    RTEMutableParagraphStyle *m_defaultParagraphStyle;
    UIFont *m_defaultFont;
    RTEHTMLElement *m_defaultElement;
    id <RTEFrameworkDataProcessDelegate> _dataProcessDelegate;
}

@property(nonatomic) __weak id <RTEFrameworkDataProcessDelegate> dataProcessDelegate; // @synthesize dataProcessDelegate=_dataProcessDelegate;
- (void).cxx_destruct;
- (void)delegateHandleOnFoundCharacters:(id)arg1 currentElement:(id)arg2;
- (void)delegateHandleOnStartElement:(id)arg1 options:(id)arg2;
- (id)parserCustomElementLoopupTable:(id)arg1;
- (void)parser:(id)arg1 parseErrorOccurred:(id)arg2;
- (void)parser:(id)arg1 foundCharacters:(id)arg2;
- (void)parser:(id)arg1 didEndElement:(id)arg2;
- (void)parser:(id)arg1 didStartElement:(id)arg2 attributes:(id)arg3;
- (void)parserDidEndDocument:(id)arg1;
- (void)parserDidStartDocument:(id)arg1;
- (void)_registerTagEndHandlers;
- (void)_registerTagStartHandlers;
- (_Bool)_buildAttributedString;
- (id)generatedAttributedString;
- (id)initWithHTMLData:(id)arg1 options:(id)arg2 delegate:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

